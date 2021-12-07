using UnityEditor;
using System.IO;

public class CreateAssetBundles
{
    static void BuildAllAssetBundles(BuildTarget bt, string subdirectory)
    {
        string assetBundleDirectory = "Assets/AssetBundles/" + subdirectory;

        if (!Directory.Exists(assetBundleDirectory))
        {
            Directory.CreateDirectory(assetBundleDirectory);
        }

        BuildPipeline.BuildAssetBundles(
            assetBundleDirectory,
            BuildAssetBundleOptions.None,
            bt);
    }

    [MenuItem("Assets/Build AssetBundles Android")]
    static void BuildAndroid()
    {
        BuildAllAssetBundles(BuildTarget.Android, "Android");
    }

    [MenuItem("Assets/Build AssetBundles Windows")]
    static void BuildWindows()
    {
        BuildAllAssetBundles(BuildTarget.StandaloneWindows, "Windows");
    }

    [MenuItem("Assets/Build AssetBundles IOS")]
    static void BuildIOS()
    {
        BuildAllAssetBundles(BuildTarget.iOS, "IOS");
    }
}
