/*===============================================================================
Copyright (c) 2016-2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.UI;
using Vuforia;
using System;
using System.IO;
using System.Net;
using System.Text;
using UnityEngine.Networking;

/// <summary>
/// A custom handler which uses the VuMarkManager.
/// </summary>
public class VuMarkHandler : MonoBehaviour
{
    #region PRIVATE_MEMBER_VARIABLES
    // Define the number of persistent child objects of the VuMarkBehaviour. When
    // destroying the instance-specific augmentations, it will start after this value.
    // Persistent Children:
    // 1. Canvas -- displays info about the VuMark
    // 2. LineRenderer -- displays border outline around VuMark
    const int PersistentNumberOfChildren = 2;
    VuMarkManager vumarkManager;
    LineRenderer lineRenderer;
    Dictionary<string, Texture2D> vumarkInstanceTextures;
    Dictionary<string, GameObject> vumarkAugmentationObjects;
    string BaseUrl = "http://172.17.3.18:8000/assetbundles/";

    VuMarkTarget closestVuMark;
    VuMarkTarget currentVuMark;
    Camera vuforiaCamera;
    string url;
    GameObject gameobject;
    string OS;
    #endregion // PRIVATE_MEMBER_VARIABLES

    #region MONOBEHAVIOUR_METHODS
    void Awake()
    {
        VuforiaConfiguration.Instance.Vuforia.MaxSimultaneousImageTargets = 10; // Set to 10 for VuMarks
    }

    void Start()
    {
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);

        this.vumarkInstanceTextures = new Dictionary<string, Texture2D>();
        this.vumarkAugmentationObjects = new Dictionary<string, GameObject>();

        this.OS = SystemInfo.operatingSystem;
        if (this.OS.StartsWith("Windows"))
        {
            this.OS = "windows";
        }
        else if (this.OS.StartsWith("Android"))
        {
            this.OS = "android";
        } else if (this.OS.StartsWith("Mac")) 
        {
            this.OS = "mac";
        }

        // Hide the initial VuMark Template when the scene starts.
        VuMarkBehaviour vumarkBehaviour = FindObjectOfType<VuMarkBehaviour>();
        if (vumarkBehaviour)
        {
            ToggleRenderers(vumarkBehaviour.gameObject, false);
        }
    }

    void Update()
    {
        UpdateClosestTarget();
    }

    void OnDestroy()
    {
        VuforiaConfiguration.Instance.Vuforia.MaxSimultaneousImageTargets = 4; // Reset back to 4 when exiting
        // Unregister callbacks from VuMark Manager
        this.vumarkManager.UnregisterVuMarkBehaviourDetectedCallback(OnVuMarkBehaviourDetected);
        this.vumarkManager.UnregisterVuMarkDetectedCallback(OnVuMarkDetected);
        this.vumarkManager.UnregisterVuMarkLostCallback(OnVuMarkLost);
    }

    #endregion // MONOBEHAVIOUR_METHODS

    void OnVuforiaStarted()
    {
        // register callbacks to VuMark Manager
        this.vumarkManager = TrackerManager.Instance.GetStateManager().GetVuMarkManager();
        this.vumarkManager.RegisterVuMarkBehaviourDetectedCallback(OnVuMarkBehaviourDetected);
        this.vumarkManager.RegisterVuMarkDetectedCallback(OnVuMarkDetected);
        this.vumarkManager.RegisterVuMarkLostCallback(OnVuMarkLost);
        this.vuforiaCamera = VuforiaBehaviour.Instance.GetComponent<Camera>();
    }

    #region VUMARK_CALLBACK_METHODS

    /// <summary>
    ///  Register a callback which is invoked whenever a VuMark-result is newly detected which was not tracked in the frame before
    /// </summary>
    /// <param name="vumarkBehaviour"></param>
    public void OnVuMarkBehaviourDetected(VuMarkBehaviour vumarkBehaviour)
    {
        Debug.Log("<color=cyan>VuMarkHandler.OnVuMarkBehaviourDetected(): </color>" + vumarkBehaviour.TrackableName);

        ToggleRenderers(vumarkBehaviour.gameObject, true);

        // Check for existance of previous augmentations and delete before instantiating new ones.
        DestroyChildAugmentationsOfTransform(vumarkBehaviour.transform);

        StartCoroutine(OnVuMarkTargetAvailable(vumarkBehaviour));
    }

    IEnumerator OnVuMarkTargetAvailable(VuMarkBehaviour vumarkBehaviour)
    {
        // We need to wait until VuMarkTarget is available
        yield return new WaitUntil(() => vumarkBehaviour.VuMarkTarget != null);

        Debug.Log("<color=green>VuMarkHandler.OnVuMarkTargetAvailable() called: </color>" + GetVuMarkId(vumarkBehaviour.VuMarkTarget));

        SetVuMarkInfoForCanvas(vumarkBehaviour);
        yield return StartCoroutine(SetVuMarkAugmentation(vumarkBehaviour));
        SetVuMarkOpticalSeeThroughConfig(vumarkBehaviour);
    }

    /// <summary>
    /// This method will be called whenever a new VuMark is detected
    /// </summary>
    public void OnVuMarkDetected(VuMarkTarget vumarkTarget)
    {
        Debug.Log("<color=cyan>VuMarkHandler.OnVuMarkDetected(): </color>" + GetVuMarkId(vumarkTarget));

        // Check if this VuMark's ID already has a stored texture. Generate and store one if not.
        if (RetrieveStoredTextureForVuMarkTarget(vumarkTarget) == null)
        {
            this.vumarkInstanceTextures.Add(GetVuMarkId(vumarkTarget), GenerateTextureFromVuMarkInstanceImage(vumarkTarget));
        }
    }

    /// <summary>
    /// This method will be called whenever a tracked VuMark is lost
    /// </summary>
    public void OnVuMarkLost(VuMarkTarget vumarkTarget)
    {
        Debug.Log("<color=cyan>VuMarkHandler.OnVuMarkLost(): </color>" + GetVuMarkId(vumarkTarget));
    }

    #endregion // VUMARK_CALLBACK_METHODS


    #region PRIVATE_METHODS

    string GetVuMarkDataType(VuMarkTarget vumarkTarget)
    {
        switch (vumarkTarget.InstanceId.DataType)
        {
            case InstanceIdType.BYTES:
                return "Bytes";
            case InstanceIdType.STRING:
                return "String";
            case InstanceIdType.NUMERIC:
                return "Numeric";
        }
        return string.Empty;
    }

    string GetVuMarkId(VuMarkTarget vumarkTarget)
    {
        switch (vumarkTarget.InstanceId.DataType)
        {
            case InstanceIdType.BYTES:
                return vumarkTarget.InstanceId.HexStringValue;
            case InstanceIdType.STRING:
                return vumarkTarget.InstanceId.StringValue;
            case InstanceIdType.NUMERIC:
                return (vumarkTarget.InstanceId.NumericValue).ToString();
        }
        return string.Empty;
    }

    Sprite GetVuMarkImage(VuMarkTarget vumarkTarget)
    {
        var instanceImage = vumarkTarget.InstanceImage;
        if (instanceImage == null)
        {
            Debug.Log("VuMark Instance Image is null.");
            return null;
        }

        // First we create a texture
        Texture2D texture = new Texture2D(instanceImage.Width, instanceImage.Height, TextureFormat.RGBA32, false)
        {
            wrapMode = TextureWrapMode.Clamp
        };
        instanceImage.CopyToTexture(texture);

        // Then we turn the texture into a Sprite
        Debug.Log("<color=cyan>Image: </color>" + instanceImage.Width + "x" + instanceImage.Height);
        if (texture.width == 0 || texture.height == 0)
            return null;
        Rect rect = new Rect(0, 0, texture.width, texture.height);
        return Sprite.Create(texture, rect, new Vector2(0.5f, 0.5f));
    }

    string GetNumericVuMarkDescription(VuMarkTarget vumarkTarget)
    {
        int vumarkIdNumeric;

        if (int.TryParse(GetVuMarkId(vumarkTarget), NumberStyles.Integer, CultureInfo.InvariantCulture, out vumarkIdNumeric))
        {
            // Change the description based on the VuMark ID

            //Initial code
            switch (vumarkIdNumeric % 4)
            {
                case 1:
                    return "image1";
                case 2:
                    return "image2";
                case 3:
                    return "image3";
                case 0:
                    return "image0";
                default:
                    return "Unknown";
            }
        }

        return string.Empty; // if VuMark DataType is byte or string
    }

    void SetVuMarkInfoForCanvas(VuMarkBehaviour vumarkBehaviour)
    {
        Text canvasText = vumarkBehaviour.gameObject.GetComponentInChildren<Text>();
        UnityEngine.UI.Image canvasImage = vumarkBehaviour.gameObject.GetComponentsInChildren<UnityEngine.UI.Image>()[2];

        Texture2D vumarkInstanceTexture = RetrieveStoredTextureForVuMarkTarget(vumarkBehaviour.VuMarkTarget);
        Rect rect = new Rect(0, 0, vumarkInstanceTexture.width, vumarkInstanceTexture.height);

        string vuMarkId = GetVuMarkId(vumarkBehaviour.VuMarkTarget);
        string vuMarkDesc = GetVuMarkDataType(vumarkBehaviour.VuMarkTarget);
        string vuMarkDataType = GetNumericVuMarkDescription(vumarkBehaviour.VuMarkTarget);

        canvasText.text =
            "<color=yellow>VuMark Instance Id: </color>" +
            "\n" + vuMarkId + " - " + vuMarkDesc +
            "\n\n<color=yellow>VuMark Type: </color>" +
            "\n" + vuMarkDataType;

        if (vumarkInstanceTexture.width == 0 || vumarkInstanceTexture.height == 0)
            canvasImage.sprite = null;
        else
            canvasImage.sprite = Sprite.Create(vumarkInstanceTexture, rect, new Vector2(0.5f, 0.5f));
    }

    IEnumerator SetVuMarkAugmentation(VuMarkBehaviour vumarkBehaviour)
    {
        //GameObject sourceAugmentation = GetValueFromDictionary(this.vumarkAugmentationObjects, GetVuMarkId(vumarkBehaviour.VuMarkTarget));

        AssetBundle.UnloadAllAssetBundles(true);
        url = BaseUrl + OS + "/" + GetVuMarkId(vumarkBehaviour.VuMarkTarget);
        //Debug.Log(OS);
        yield return StartCoroutine(InstantiateObject(url));
        GameObject sourceAugmentation = this.gameobject;

        if (sourceAugmentation)
        {
            GameObject augmentation = Instantiate(sourceAugmentation);
            augmentation.transform.SetParent(vumarkBehaviour.transform);
            augmentation.transform.localPosition = Vector3.zero;
            augmentation.transform.localEulerAngles = Vector3.zero;
        }
    }

    void SetVuMarkOpticalSeeThroughConfig(VuMarkBehaviour vumarkBehaviour)
    {
        // Check to see if we're running on a HoloLens device.
        if (IsHolographicDevice())
        {
            MeshRenderer meshRenderer = vumarkBehaviour.GetComponent<MeshRenderer>();

            // If the VuMark has per instance background info, turn off virtual target so that it doesn't cover modified physical target
            if (vumarkBehaviour.VuMarkTemplate.TrackingFromRuntimeAppearance)
            {
                if (meshRenderer)
                {
                    meshRenderer.enabled = false;
                }
            }
            else
            {
                // If the VuMark background is part of VuMark Template and same per instance, render the virtual target
                if (meshRenderer)
                {
                    meshRenderer.material.mainTexture = RetrieveStoredTextureForVuMarkTarget(vumarkBehaviour.VuMarkTarget);
                }
            }
        }
        else
        {
            MeshRenderer meshRenderer = vumarkBehaviour.GetComponent<MeshRenderer>();

            if (meshRenderer)
            {
                meshRenderer.enabled = false;
            }
        }
    }

    bool IsHolographicDevice()
    {
#if UNITY_2019_3_OR_NEWER
        var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetInstances(xrDisplaySubsystems);
        foreach (var xrDisplay in xrDisplaySubsystems)
        {
            if (xrDisplay.running && xrDisplay.displayOpaque)
            {
                return true;
            }
        }
        return false;
#else
        return XRDevice.isPresent && !UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque;
#endif
    }

    Texture2D RetrieveStoredTextureForVuMarkTarget(VuMarkTarget vumarkTarget)
    {
        return GetValueFromDictionary(this.vumarkInstanceTextures, GetVuMarkId(vumarkTarget));
    }

    Texture2D GenerateTextureFromVuMarkInstanceImage(VuMarkTarget vumarkTarget)
    {
        Debug.Log("<color=cyan>SaveImageAsTexture() called.</color>");

        if (vumarkTarget.InstanceImage == null)
        {
            Debug.Log("VuMark Instance Image is null.");
            return null;
        }
        Debug.Log(vumarkTarget.InstanceImage.Width + "," + vumarkTarget.InstanceImage.Height);

        Texture2D texture = new Texture2D(vumarkTarget.InstanceImage.Width, vumarkTarget.InstanceImage.Height, TextureFormat.RGBA32, false)
        {
            wrapMode = TextureWrapMode.Clamp
        };

        vumarkTarget.InstanceImage.CopyToTexture(texture, false);

        return texture;
    }


    void DestroyChildAugmentationsOfTransform(Transform parent)
    {
        if (parent.childCount > PersistentNumberOfChildren)
        {
            for (int x = PersistentNumberOfChildren; x < parent.childCount; x++)
            {
                Destroy(parent.GetChild(x).gameObject);
            }
        }
    }

    T GetValueFromDictionary<T>(Dictionary<string, T> dictionary, string key)
    {
        Debug.Log("<color=cyan>GetValueFromDictionary() called.</color>");
        if (dictionary.ContainsKey(key))
        {
            T value;
            dictionary.TryGetValue(key, out value);
            return value;
        }
        return default(T);
    }

    void ToggleRenderers(GameObject obj, bool enable)
    {
        var rendererComponents = obj.GetComponentsInChildren<Renderer>(true);
        var canvasComponents = obj.GetComponentsInChildren<Canvas>(true);

        foreach (var component in rendererComponents)
        {
            // Skip the LineRenderer
            if (!(component is LineRenderer))
            {
                component.enabled = enable;
            }
        }

        foreach (var component in canvasComponents)
        {
            component.enabled = enable;
        }
    }

    void UpdateClosestTarget()
    {
        if (VuforiaRuntimeUtilities.IsVuforiaEnabled() && VuforiaARController.Instance.HasStarted)
        {
            float closestDistance = Mathf.Infinity;

            foreach (VuMarkBehaviour vumarkBehaviour in this.vumarkManager.GetActiveBehaviours())
            {
                Vector3 worldPosition = vumarkBehaviour.transform.position;
                Vector3 camPosition = this.vuforiaCamera.transform.InverseTransformPoint(worldPosition);

                float distance = Vector3.Distance(Vector2.zero, camPosition);
                if (distance < closestDistance)
                {
                    closestDistance = distance;
                    this.closestVuMark = vumarkBehaviour.VuMarkTarget;
                }
            }

            if (this.closestVuMark != null &&
                this.currentVuMark != this.closestVuMark)
            {
                this.currentVuMark = this.closestVuMark;
            }
        }
    }
    #endregion // PRIVATE_METHODS

    IEnumerator InstantiateObject(string url)
    {
        using (UnityWebRequest request = UnityEngine.Networking.UnityWebRequestAssetBundle.GetAssetBundle(url))
        {

            //catch error if no result to the request
            if (request.error != null)
            {
                Debug.Log(request.error);
            }
            else
            {
                yield return request.Send();
                AssetBundle bundle = UnityEngine.Networking.DownloadHandlerAssetBundle.GetContent(request);

                //catch error if no asset bundle for the vumark
                try
                {
                    string name = bundle.GetAllAssetNames()[0];
                    GameObject asset = bundle.LoadAsset<GameObject>(name);
                    this.gameobject = asset;
                }
                catch (NullReferenceException)
                {
                    Debug.Log("No asset bundle");
                }
            }
        }
    }

}
