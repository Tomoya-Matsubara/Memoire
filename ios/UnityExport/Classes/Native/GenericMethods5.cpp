﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t65436DD2A0CD24BF17F9982FD4B13222784AC8CE;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tA4088FA2F05B4123A03EE48CDFE689D215A4F69D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_tFCC39A24F3BFD8D086D9F52069CE27CAB1BA2918;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t2CE05980F8B9CC1149914C41DDAB66D7ABFC902A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t6D705EF83FAD15122163275744EC868FD75312E2;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>>
struct Func_2_tFB89B3055D8384D5313A610D5CE710F430889708;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.Linq.Expressions.Expression
struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F;
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F;
// Vuforia.IlluminationManager
struct IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04;
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<System.Object>
struct IJEnumerable_1_t909B6DB96408BE6B24A37EDFD61882442BDF4E2B;
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IJEnumerable_1_tE9E52B5762CD11B4AA54548D2EEAD036915354AC;
// Vuforia.Newtonsoft.Json.Linq.JContainer
struct JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819;
// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491;
// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726;
// Vuforia.Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9;
// Vuforia.Newtonsoft.Json.Linq.JValue
struct JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F;
// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811;
// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory
struct ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A;
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232;
// Vuforia.ObjectTracker
struct ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D;
// Vuforia.TargetFinder
struct TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A;
// Vuforia.VuMarkManager
struct VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t0A3ECBBDC96B9B57BEE93670CBACA8C4A674EB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral3030E728F154BF51419109EFB93B6B8AEEC9A976;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D;
IL2CPP_EXTERN_C String_t* _stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m177FECAFCAD2E6D34C94860E39958C56FFF9B584_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct  Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___entries_1)); }
	inline EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCDE7A76DBAB7FE6FCA2E68247706833E3E29B7BD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___keys_7)); }
	inline KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t784A959E59A762E7D27B48E9588AD90ACCEFB56C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ___values_8)); }
	inline ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t55DCFC096135519F2B467035F246EDFFB1CC119C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t91DA7E2949102CFE16D0A151F7C355F72753F1FD  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Dynamic.Utils.CollectionExtensions
struct  CollectionExtensions_t04790A89E5724082B570A72C66DCBD3BA4458F41  : public RuntimeObject
{
public:

public:
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Linq.Expressions.Interpreter.LocalDefinition>
struct  EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields, ___Value_0)); }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* get_Value_0() const { return ___Value_0; }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Linq.Expressions.Expression
struct  Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F  : public RuntimeObject
{
public:

public:
};

struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression_ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_tF8A461B212165E766A927A935F261E445B76AADB * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_tD9E815C55FFD40FDBB492D33789DC1AE2CC23F16 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t535A4A4D56280720C9EBCEE7884741E0241A6B55 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.Extensions
struct  Extensions_t6C85C596E5A496CE7E4F0427A9980AA55EFFF88B  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__0`1<System.Object>
struct  U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__0`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__0`1::<>9
	U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__0`1::<>9__0_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__1`1<System.Object>
struct  U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__1`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__1`1::<>9
	U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__1`1::<>9__1_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__2`1<System.Object>
struct  U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__2`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__2`1::<>9
	U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__2`1::<>9__2_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__3`1<System.Object>
struct  U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__3`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__3`1::<>9
	U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * ___U3CU3E9_0;
	// System.Func`2<T,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>> Vuforia.Newtonsoft.Json.Linq.Extensions_<>c__3`1::<>9__3_0
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JToken
struct  JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JContainer Vuforia.Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * ____parent_1;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_previous
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * ____previous_2;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_next
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * ____next_3;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____parent_1)); }
	inline JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t6F0CEE700D590E253D2B46C6F18FE51FEE24B819 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____previous_2)); }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * get__previous_2() const { return ____previous_2; }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____next_3)); }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * get__next_3() const { return ____next_3; }
	inline JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer Vuforia.Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * ____equalityComparer_0;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___BooleanTypes_5;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___NumberTypes_6;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___StringTypes_7;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___GuidTypes_8;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___TimeSpanTypes_9;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___UriTypes_10;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___CharTypes_11;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___DateTimeTypes_12;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t6FBE473B441867B2BD5690A51C5E307783622726 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_tDA92B1137BB5EA531E1CA2CA65F233799EC394E9* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils
struct  FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636  : public RuntimeObject
{
public:

public:
};

struct FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::Lock
	RuntimeObject * ___Lock_0;
	// System.Boolean Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_initialized
	bool ____initialized_1;
	// System.Reflection.MethodInfo Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_ofSeq
	MethodInfo_t * ____ofSeq_2;
	// System.Type Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::_mapType
	Type_t * ____mapType_3;
	// System.Reflection.Assembly Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<FSharpCoreAssembly>k__BackingField
	Assembly_t * ___U3CFSharpCoreAssemblyU3Ek__BackingField_4;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<IsUnion>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CIsUnionU3Ek__BackingField_5;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCases>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CGetUnionCasesU3Ek__BackingField_6;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionTagReader>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionReader>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionReaderU3Ek__BackingField_8;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<PreComputeUnionConstructor>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CPreComputeUnionConstructorU3Ek__BackingField_9;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoDeclaringType>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoName>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11;
	// System.Func`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoTag>k__BackingField
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12;
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::<GetUnionCaseInfoFields>k__BackingField
	MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_Lock_0() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___Lock_0)); }
	inline RuntimeObject * get_Lock_0() const { return ___Lock_0; }
	inline RuntimeObject ** get_address_of_Lock_0() { return &___Lock_0; }
	inline void set_Lock_0(RuntimeObject * value)
	{
		___Lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_1() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____initialized_1)); }
	inline bool get__initialized_1() const { return ____initialized_1; }
	inline bool* get_address_of__initialized_1() { return &____initialized_1; }
	inline void set__initialized_1(bool value)
	{
		____initialized_1 = value;
	}

	inline static int32_t get_offset_of__ofSeq_2() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____ofSeq_2)); }
	inline MethodInfo_t * get__ofSeq_2() const { return ____ofSeq_2; }
	inline MethodInfo_t ** get_address_of__ofSeq_2() { return &____ofSeq_2; }
	inline void set__ofSeq_2(MethodInfo_t * value)
	{
		____ofSeq_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ofSeq_2), (void*)value);
	}

	inline static int32_t get_offset_of__mapType_3() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ____mapType_3)); }
	inline Type_t * get__mapType_3() const { return ____mapType_3; }
	inline Type_t ** get_address_of__mapType_3() { return &____mapType_3; }
	inline void set__mapType_3(Type_t * value)
	{
		____mapType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapType_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFSharpCoreAssemblyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CFSharpCoreAssemblyU3Ek__BackingField_4)); }
	inline Assembly_t * get_U3CFSharpCoreAssemblyU3Ek__BackingField_4() const { return ___U3CFSharpCoreAssemblyU3Ek__BackingField_4; }
	inline Assembly_t ** get_address_of_U3CFSharpCoreAssemblyU3Ek__BackingField_4() { return &___U3CFSharpCoreAssemblyU3Ek__BackingField_4; }
	inline void set_U3CFSharpCoreAssemblyU3Ek__BackingField_4(Assembly_t * value)
	{
		___U3CFSharpCoreAssemblyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFSharpCoreAssemblyU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUnionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CIsUnionU3Ek__BackingField_5)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CIsUnionU3Ek__BackingField_5() const { return ___U3CIsUnionU3Ek__BackingField_5; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CIsUnionU3Ek__BackingField_5() { return &___U3CIsUnionU3Ek__BackingField_5; }
	inline void set_U3CIsUnionU3Ek__BackingField_5(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CIsUnionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIsUnionU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCasesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCasesU3Ek__BackingField_6)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CGetUnionCasesU3Ek__BackingField_6() const { return ___U3CGetUnionCasesU3Ek__BackingField_6; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CGetUnionCasesU3Ek__BackingField_6() { return &___U3CGetUnionCasesU3Ek__BackingField_6; }
	inline void set_U3CGetUnionCasesU3Ek__BackingField_6(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CGetUnionCasesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCasesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() const { return ___U3CPreComputeUnionTagReaderU3Ek__BackingField_7; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionTagReaderU3Ek__BackingField_7() { return &___U3CPreComputeUnionTagReaderU3Ek__BackingField_7; }
	inline void set_U3CPreComputeUnionTagReaderU3Ek__BackingField_7(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionTagReaderU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionTagReaderU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionReaderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionReaderU3Ek__BackingField_8)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionReaderU3Ek__BackingField_8() const { return ___U3CPreComputeUnionReaderU3Ek__BackingField_8; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionReaderU3Ek__BackingField_8() { return &___U3CPreComputeUnionReaderU3Ek__BackingField_8; }
	inline void set_U3CPreComputeUnionReaderU3Ek__BackingField_8(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionReaderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionReaderU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreComputeUnionConstructorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CPreComputeUnionConstructorU3Ek__BackingField_9)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CPreComputeUnionConstructorU3Ek__BackingField_9() const { return ___U3CPreComputeUnionConstructorU3Ek__BackingField_9; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CPreComputeUnionConstructorU3Ek__BackingField_9() { return &___U3CPreComputeUnionConstructorU3Ek__BackingField_9; }
	inline void set_U3CPreComputeUnionConstructorU3Ek__BackingField_9(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CPreComputeUnionConstructorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreComputeUnionConstructorU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() const { return ___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10() { return &___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10; }
	inline void set_U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoDeclaringTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() const { return ___U3CGetUnionCaseInfoNameU3Ek__BackingField_11; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoNameU3Ek__BackingField_11() { return &___U3CGetUnionCaseInfoNameU3Ek__BackingField_11; }
	inline void set_U3CGetUnionCaseInfoNameU3Ek__BackingField_11(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoNameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoNameU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() const { return ___U3CGetUnionCaseInfoTagU3Ek__BackingField_12; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CGetUnionCaseInfoTagU3Ek__BackingField_12() { return &___U3CGetUnionCaseInfoTagU3Ek__BackingField_12; }
	inline void set_U3CGetUnionCaseInfoTagU3Ek__BackingField_12(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CGetUnionCaseInfoTagU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoTagU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields, ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13)); }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * get_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() const { return ___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13; }
	inline MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D ** get_address_of_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13() { return &___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13; }
	inline void set_U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13(MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * value)
	{
		___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetUnionCaseInfoFieldsU3Ek__BackingField_13), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2::ctorDelegate
	ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * ___ctorDelegate_0;

public:
	inline static int32_t get_offset_of_ctorDelegate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3, ___ctorDelegate_0)); }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * get_ctorDelegate_0() const { return ___ctorDelegate_0; }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 ** get_address_of_ctorDelegate_0() { return &___ctorDelegate_0; }
	inline void set_ctorDelegate_0(ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * value)
	{
		___ctorDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorDelegate_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>
struct  U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::c
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___c_0;
	// System.Reflection.MethodBase Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___c_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct  ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils
struct  ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_StaticFields
{
public:
	// System.Type[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_0;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_0), (void*)value);
	}
};


// Vuforia.StateManager
struct  StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * ___mIlluminationManager_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t0534402A66C5A4881BB22BAAEC3572AA02B224C9 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mActiveTrackableBehaviours_3)); }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_tE1A9F3636E6ABA2014A9AA99C685814C88E96CF9 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mVuMarkManager_4)); }
	inline VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tDF0BC4DB9260576C476810EA43FEE64F32527CEA * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t0EDC151CC833AD661CC22F210EA502A894B5EFDA * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_7() { return static_cast<int32_t>(offsetof(StateManager_tE41B2EEEA30DFDCF34198E1AF7BAB851DA33F81E, ___mIlluminationManager_7)); }
	inline IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * get_mIlluminationManager_7() const { return ___mIlluminationManager_7; }
	inline IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 ** get_address_of_mIlluminationManager_7() { return &___mIlluminationManager_7; }
	inline void set_mIlluminationManager_7(IlluminationManager_tB0C11B0606EC0CB96E5A4063EEFDD860B00B1898 * value)
	{
		___mIlluminationManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_7), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t051FC3F8337902825CACAD05D5EE45441C313004  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct  ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____array_0)); }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Expressions.Interpreter.LocalDefinition
struct  LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D 
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalDefinition::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Interpreter.LocalDefinition::<Parameter>k__BackingField
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CParameterU3Ek__BackingField_1)); }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * get_U3CParameterU3Ek__BackingField_1() const { return ___U3CParameterU3Ek__BackingField_1; }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** get_address_of_U3CParameterU3Ek__BackingField_1() { return &___U3CParameterU3Ek__BackingField_1; }
	inline void set_U3CParameterU3Ek__BackingField_1(ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		___U3CParameterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_pinvoke
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_com
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4  : public Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4, ____body_3)); }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * get__body_3() const { return ____body_3; }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217  : public Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Vuforia.DatasetTracker
struct  DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294  : public Tracker_tF4436941290E0947C6A345FBEC0ABD56E51AB244
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294, ___mActiveDataSets_1)); }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294, ___mDataSets_2)); }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t6D705EF83FAD15122163275744EC868FD75312E2 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t6D705EF83FAD15122163275744EC868FD75312E2 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>
struct  JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F 
{
public:
	// System.Collections.Generic.IEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::_enumerable
	RuntimeObject* ____enumerable_1;

public:
	inline static int32_t get_offset_of__enumerable_1() { return static_cast<int32_t>(offsetof(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F, ____enumerable_1)); }
	inline RuntimeObject* get__enumerable_1() const { return ____enumerable_1; }
	inline RuntimeObject** get_address_of__enumerable_1() { return &____enumerable_1; }
	inline void set__enumerable_1(RuntimeObject* value)
	{
		____enumerable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enumerable_1), (void*)value);
	}
};

struct JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::Empty
	JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F_StaticFields, ___Empty_0)); }
	inline JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  get_Empty_0() const { return ___Empty_0; }
	inline JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->____enumerable_1), (void*)NULL);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct  JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E 
{
public:
	// System.Collections.Generic.IEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::_enumerable
	RuntimeObject* ____enumerable_1;

public:
	inline static int32_t get_offset_of__enumerable_1() { return static_cast<int32_t>(offsetof(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E, ____enumerable_1)); }
	inline RuntimeObject* get__enumerable_1() const { return ____enumerable_1; }
	inline RuntimeObject** get_address_of__enumerable_1() { return &____enumerable_1; }
	inline void set__enumerable_1(RuntimeObject* value)
	{
		____enumerable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enumerable_1), (void*)value);
	}
};

struct JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JEnumerable`1::Empty
	JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_StaticFields, ___Empty_0)); }
	inline JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  get_Empty_0() const { return ___Empty_0; }
	inline JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_0))->____enumerable_1), (void*)NULL);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory
struct  ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE  : public ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232
{
public:

public:
};

struct ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::_instance
	ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE_StaticFields, ____instance_0)); }
	inline ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * get__instance_0() const { return ____instance_0; }
	inline ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct  LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A  : public ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232
{
public:

public:
};

struct LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::_instance
	LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A_StaticFields, ____instance_0)); }
	inline LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * get__instance_0() const { return ____instance_0; }
	inline LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct  LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____first_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__first_1() const { return ____first_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____first_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____buffers_2)); }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  value)
	{
		____buffers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____buffers_2))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____current_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__current_3() const { return ____current_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct  VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Newtonsoft.Json.Linq.JTokenType
struct  JTokenType_tF29495BE4F8BFE607656DE5CE03F5753AA56A7F3 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_tF29495BE4F8BFE607656DE5CE03F5753AA56A7F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ObjectTracker
struct  ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811  : public DatasetTracker_t6F92B0883D12436280B6CB0DB6B1F7E6AA16B294
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * ___mTargetFinders_3;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * ___mRuntimeImageSource_4;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811, ___mTargetFinders_3)); }
	inline Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811, ___mRuntimeImageSource_4)); }
	inline RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * get_mRuntimeImageSource_4() const { return ___mRuntimeImageSource_4; }
	inline RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D ** get_address_of_mRuntimeImageSource_4() { return &___mRuntimeImageSource_4; }
	inline void set_mRuntimeImageSource_4(RuntimeImageSource_t767FAE93A7CA6858AF2A59196E8D43F29417AF1D * value)
	{
		___mRuntimeImageSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_4), (void*)value);
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargets_1)); }
	inline Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t357DC0FC908BC6D9BAB6EB3C2B0169890F5E4EC9 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mTargetFinderState_3)); }
	inline TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325 * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tC3EE37D5301B57F524718F6024EE39F8A748B325  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A, ___mNewResults_4)); }
	inline List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t0E16DE33A8B003DC5925D64AFD7FF331854B1E4A * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t0FAE561347BC0DCE2E6F4217138ECD017254C5D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfo
struct  StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t0A4AC2AFE1F5149420F302A187EF008CDF17D7D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData_PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData_PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData_PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04  : public TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.JValue
struct  JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F  : public JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenType Vuforia.Newtonsoft.Json.Linq.JValue::_valueType
	int32_t ____valueType_14;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JValue::_value
	RuntimeObject * ____value_15;

public:
	inline static int32_t get_offset_of__valueType_14() { return static_cast<int32_t>(offsetof(JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F, ____valueType_14)); }
	inline int32_t get__valueType_14() const { return ____valueType_14; }
	inline int32_t* get_address_of__valueType_14() { return &____valueType_14; }
	inline void set__valueType_14(int32_t value)
	{
		____valueType_14 = value;
	}

	inline static int32_t get_offset_of__value_15() { return static_cast<int32_t>(offsetof(JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F, ____value_15)); }
	inline RuntimeObject * get__value_15() const { return ____value_15; }
	inline RuntimeObject ** get_address_of__value_15() { return &____value_15; }
	inline void set__value_15(RuntimeObject * value)
	{
		____value_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_15), (void*)value);
	}
};


// Vuforia.TrackerData_TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_TrackableResultData::pose
	PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  ___pose_0;
	// System.Double Vuforia.TrackerData_TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___pose_0)); }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  get_pose_0() const { return ___pose_0; }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_VuMarkTargetResultData::pose
	PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  ___pose_0;
	// System.Double Vuforia.TrackerData_VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___pose_0)); }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  get_pose_0() const { return ___pose_0; }
	inline PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t91985152CC5BB5DB434C19FF82F5F05762128689  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>>
struct  Func_2_tFB89B3055D8384D5313A610D5CE710F430889708  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_StatusInfo>
struct  Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackableBehaviour_Status>
struct  Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  m_Items[1];

public:
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CParameterU3Ek__BackingField_1), (void*)NULL);
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CParameterU3Ek__BackingField_1), (void*)NULL);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * m_Items[1];

public:
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * m_Items[1];

public:
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool ___initialize0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1_gshared (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_gshared (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
inline void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool ___initialize0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared)(__this, ___initialize0, method);
}
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared)(__this, ___items0, method);
}
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Attribute[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* ReflectionUtils_GetAttributes_m6067358A341C1927CC81D2A5D9C11AAEF573409B (RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Vuforia.Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object Vuforia.Newtonsoft.Json.Linq.JValue::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1 (Type_t * ___t0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926 (RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755 (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1 (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F * __this, RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	((  void (*) (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F *, RuntimeObject*, const RuntimeMethod*))JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1_gshared)(__this, ___enumerable0, method);
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::AsJEnumerable(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA (Type_t * __this, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___types0, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory Vuforia.Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 * JsonTypeReflector_get_ReflectionDelegateFactory_mDFB8BCA5867EB532325030FA3D2BCCA294792766 (const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8 (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::BuildMethodCall(System.Reflection.MethodBase,System.Type,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ExpressionReflectionDelegateFactory_BuildMethodCall_m9C9ACAFB4260854451730ED44E86BA6F4E7C3B23 (ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * __this, MethodBase_t * ___method0, Type_t * ___type1, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___targetParameterExpression2, ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___argsParameterExpression3, const RuntimeMethod* method);
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Type,System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * Expression_Lambda_m7F96089BE8674C877390AA3412C02BB5AEBB87D0 (Type_t * ___delegateType0, Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___body1, ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* ___parameters2, const RuntimeMethod* method);
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * LambdaExpression_Compile_m5F5C8361E0088640BE4D3A23E00B3FF6505EAEA3 (LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4 (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___left0, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * __this, Type_t * ___key0, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *, Type_t *, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mC5CE5D963BD80599045C7370AE0C384AB52857B9 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_m628F3FD8293B684B399E21D807806229FF69FB99 (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * __this, Type_t * ___key0, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *, Type_t *, TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)L_0;
	}
}
// T[] System.Array::Empty<System.Linq.Expressions.Interpreter.LocalDefinition>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* Array_Empty_TisLocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_m6518BAF23EACF07AC885D856B9EA60AFC802C351_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* L_0 = ((EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5*)L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_30;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* EnumerableHelpers_ToArray_TisRuntimeObject_m0C9E5CDDF9B4066E9FC751A904CF977FD78A14EB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_9, (int32_t)0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = V_3;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_12;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveFirst_TisRuntimeObject_m05278467A5F0AA59D6F8E6AC5FCC92EEFE2B5B70_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)1, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_5;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveLast<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveLast_TisRuntimeObject_mB0B7A94B3575C8674282F02A28E49DC416FC147A_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_5;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_11;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mDC1D023FE07F73E1E8433D1E896D5F1250180C10_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m0CC69E8EA623EF987CBC66C5F1BC7711712287CB_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m47600682044DD98895C5990A94AC982C05645DC3_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m4C178287A7D9F411324F0D20D7214B40AC502A26_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m01E28A4D3B917F1FA3F71B47CD03D20F47CA3584_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mBC5A8C8AB5B13B1356966D69CD0D194F1296F2BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m72CF8BBE548B570F27C87B6900191B9BC58FCA73_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_m4B3891162A682BB637507D7D7529AFA4F0C80CE3_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_10 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_11 = V_2;
		return (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_mA88E7613D69601BA856B9A2C4308B927F7486944_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_3 = ((  ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_4 = V_0;
		return (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* Mesh_GetAllocArrayFromChannel_TisColor_t119BCA590009762C7223FDD3AF9706653AC84ED2_m8ED35A012018D4438C73F6D29FBC13CDEC95833F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)((ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_10 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_11 = V_2;
		return (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m6D8AF77439E7F5AD3656075625D18D191068C09F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = V_2;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m083189084CF765FF8179220A926820E814D85F56_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_2;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mEADBC5B21EE5EA79F60D83CCD98B1BE0E5C03752_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_10 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = V_2;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_11;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_mAA15FFAA407E956DEE55FD647DE9C31A40DA8494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_15;
	}
}
// T[] Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_gshared (RuntimeObject * ___attributeProvider0, bool ___inherit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAttributes_TisRuntimeObject_mD07994B46CC3B773ECA0563F20E81E9BBD622077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___attributeProvider0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		bool L_3 = ___inherit1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_4 = ReflectionUtils_GetAttributes_m6067358A341C1927CC81D2A5D9C11AAEF573409B((RuntimeObject *)L_0, (Type_t *)L_2, (bool)L_3, /*hidden argument*/NULL);
		V_0 = (AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17*)L_4;
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_5 = V_0;
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_1;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_1;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
	}

IL_001e:
	{
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_8 = V_0;
		RuntimeObject* L_9 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_mA31DEE6DCB0F3100E289D32D99446E941445B991_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_0 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m177FECAFCAD2E6D34C94860E39958C56FFF9B584_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m177FECAFCAD2E6D34C94860E39958C56FFF9B584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_8, /*hidden argument*/NULL);
		Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * L_10 = ___obj0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		return (RuntimeObject *)L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		bool L_7 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_4, (Type_t *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		bool L_12 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_9, (Type_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_13 = ___token0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___token0;
		V_1 = (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)IsInst((RuntimeObject*)L_14, JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var));
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_15 = V_1;
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_16 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_17 = ___token0;
		NullCheck((RuntimeObject *)L_17);
		Type_t * L_18 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_19, /*hidden argument*/NULL);
		String_t* L_21 = StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_16, (RuntimeObject *)L_18, (RuntimeObject *)L_20, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_22 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_22, (String_t*)L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m39B647B07BA62AB57F564B2EA5F7892C8F543FB0_RuntimeMethod_var);
	}

IL_009a:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_23 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00b3;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_25 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25);
		RuntimeObject * L_26 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00b3:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_27, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_28;
		Type_t * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		bool L_30 = ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1((Type_t *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_31 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31);
		RuntimeObject * L_32 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_33 = V_0;
		return (RuntimeObject *)L_33;
	}

IL_00d8:
	{
		Type_t * L_34 = V_2;
		Type_t * L_35 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_34, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_35;
	}

IL_00df:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_36 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36);
		RuntimeObject * L_37 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36, /*hidden argument*/NULL);
		Type_t * L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_39 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_40 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_37, (Type_t *)L_38, (RuntimeObject*)L_39, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_40, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Single>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return (float)L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		bool L_7 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_4, (Type_t *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		bool L_12 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_9, (Type_t *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_13 = ___token0;
		return (float)((*(float*)((float*)UnBox(L_13, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___token0;
		V_1 = (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)IsInst((RuntimeObject*)L_14, JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F_il2cpp_TypeInfo_var));
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_15 = V_1;
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_16 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_17 = ___token0;
		NullCheck((RuntimeObject *)L_17);
		Type_t * L_18 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_19, /*hidden argument*/NULL);
		String_t* L_21 = StringUtils_FormatWith_m6EE5629FF992C29438179322CFFACA67191CB471((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_16, (RuntimeObject *)L_18, (RuntimeObject *)L_20, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_22 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_22, (String_t*)L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mEE34EB00EFCB2BD52798AF403280BB126EB251D5_RuntimeMethod_var);
	}

IL_009a:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_23 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_23, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00b3;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_25 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25);
		RuntimeObject * L_26 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_25, /*hidden argument*/NULL);
		return (float)((*(float*)((float*)UnBox(L_26, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_00b3:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_27, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_28;
		Type_t * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3AA880C50EA7A4BDE85623AC68CD418B682C8080_il2cpp_TypeInfo_var);
		bool L_30 = ReflectionUtils_IsNullableType_m863622B6BF93E0B40C47255B89A05AFEE3417FF1((Type_t *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_31 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31);
		RuntimeObject * L_32 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_33 = V_0;
		return (float)L_33;
	}

IL_00d8:
	{
		Type_t * L_34 = V_2;
		Type_t * L_35 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_34, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_35;
	}

IL_00df:
	{
		JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * L_36 = V_1;
		NullCheck((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36);
		RuntimeObject * L_37 = JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline((JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F *)L_36, /*hidden argument*/NULL);
		Type_t * L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_39 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_40 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_37, (Type_t *)L_38, (RuntimeObject*)L_39, /*hidden argument*/NULL);
		return (float)((*(float*)((float*)UnBox(L_40, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B2_0 = NULL;
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * L_2 = (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)IsInst((RuntimeObject*)L_1, JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Extensions_Value_TisRuntimeObject_TisRuntimeObject_m3F7ED1BD4BAE8A682DA5CB15BDD2286B5D2BDA5C_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_4;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B2_0 = NULL;
	JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * L_2 = (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)IsInst((RuntimeObject*)L_1, JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m804CB4D0B518F4D15E2910F729D93A41FD9ECFD3_RuntimeMethod_var);
	}

IL_001f:
	{
		float L_4 = ((  float (*) (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (float)L_4;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m7FF65E698C272097AD445C5259868F08F3BEFD85_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// U Vuforia.Newtonsoft.Json.Linq.Extensions::Value<System.Single>(System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m50EAC9F5F7119856C9ACE8C20E00C201CD59B1E2_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		float L_1 = ((  float (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (float)L_1;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_2 = Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m2298E0B7BA054458FA77DC2E8A741585CACB6DF1_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_3;
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		intptr_t L_4 = Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		int64_t L_6 = Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_8 = ((  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_5, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_6/(int64_t)(((int64_t)((int64_t)L_7)))))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_8;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_9 = V_1;
		V_3 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_10 = V_3;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14);
		int32_t L_15 = List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_14, /*hidden argument*/List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.Extensions::AsJEnumerable<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AsJEnumerable_TisRuntimeObject_mFB01DA48CC8CECE07CCB3C796A1D9E32C219395B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___source0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___source0;
		return (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___source0;
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1((&L_4), (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_5);
		return (RuntimeObject*)L_6;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Ancestors<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Ancestors_TisRuntimeObject_m547FC65D74C1BC5B65A3713B88D43C8B68532AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__0_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7 * L_4 = ((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__0_1_t840596051F17788FBBEE96AA467A3B95756B58C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::AncestorsAndSelf<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_AncestorsAndSelf_TisRuntimeObject_m94435B8469EB22B11B4E4ECE716E48FECE4FF581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__1_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6 * L_4 = ((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__1_1_t3CAD787AF3B5B51C4C5975106FA62EE40D135FD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__1_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Children<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Children_TisRuntimeObject_m6B9EE5EBA6CECB324519B8137180E1E6195A1861_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject* L_2 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_1, /*hidden argument*/NULL);
		return (RuntimeObject*)L_2;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::Descendants<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Descendants_TisRuntimeObject_m004CD7680ECAC11CE2AAAE0EC5F0B1BD9A25E455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__2_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F * L_4 = ((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__2_1_t74732476C3DCB4248677B4DA08CB8C3B4B7DCD4F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__2_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.IJEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.Extensions::DescendantsAndSelf<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_DescendantsAndSelf_TisRuntimeObject_mAF06374A391C8662B0656A7D9EDB6106EF0B7549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_2 = ((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9__3_0_1();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_3 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073 * L_4 = ((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_U3CU3E9_0();
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_5 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_5, (RuntimeObject *)L_4, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 * L_6 = (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)L_5;
		((U3CU3Ec__3_1_t395C9E89D3A11A9897DE3E5B983806FDF6D0E073_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->set_U3CU3E9__3_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		RuntimeObject* L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_tFB89B3055D8384D5313A610D5CE710F430889708 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		RuntimeObject* L_8 = Extensions_AsJEnumerable_m41B8CA749A40E1DEA70ADE6B0B0385A843FF9B8E((RuntimeObject*)L_7, /*hidden argument*/NULL);
		return (RuntimeObject*)L_8;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<T> Vuforia.Newtonsoft.Json.Linq.JToken::Children<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_gshared (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JToken_Children_TisRuntimeObject_m23BAB984B9274897CD72A545F92DC5EF2BABE348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)__this);
		JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  L_0 = VirtFuncInvoker0< JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  >::Invoke(19 /* Vuforia.Newtonsoft.Json.Linq.JEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JToken::Children() */, (JToken_tDFEF796202B27D27CA8ADCA7887643EB1D12D491 *)__this);
		JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E  L_1 = L_0;
		RuntimeObject * L_2 = Box(JEnumerable_1_tD90E54F2D70F41BD18C8825C2C9F1F6799B5BA2E_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		JEnumerable_1__ctor_mE40E1EC166E83857711C65885EE640E652B5F0B1((&L_4), (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (JEnumerable_1_t5BC5770FD756DB1DD036818609385EDDD2A62A7F )L_4;
	}
}
// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils::BuildMapCreator<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FSharpUtils_BuildMapCreator_TisRuntimeObject_TisRuntimeObject_mFDA8E816C8D99E8536554B1DE58B6FD027973044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * V_0 = NULL;
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_0 = (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 *)L_0;
		IL2CPP_RUNTIME_CLASS_INIT(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var);
		Type_t * L_1 = ((FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_StaticFields*)il2cpp_codegen_static_fields_for(FSharpUtils_tA8F16FB3AD26D6BB08BB0BED11D01F03271D2636_il2cpp_TypeInfo_var))->get__mapType_3();
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		NullCheck((Type_t *)L_1);
		Type_t * L_9 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(97 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_11 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_10;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 4)) };
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_13);
		NullCheck((Type_t *)L_9);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_14 = Type_GetConstructor_m4371D7AD6A8E15067C698696B0167323CBC7F3DA((Type_t *)L_9, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_11, /*hidden argument*/NULL);
		V_1 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_14;
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t0A3ECBBDC96B9B57BEE93670CBACA8C4A674EB4F_il2cpp_TypeInfo_var);
		ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 * L_16 = JsonTypeReflector_get_ReflectionDelegateFactory_mDFB8BCA5867EB532325030FA3D2BCCA294792766(/*hidden argument*/NULL);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_17 = V_1;
		NullCheck((ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 *)L_16);
		ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * L_18 = VirtFuncInvoker1< ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *, MethodBase_t * >::Invoke(5 /* Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, (ReflectionDelegateFactory_t402F42390918B7E962F2640CCCA0026ECED2E232 *)L_16, (MethodBase_t *)L_17);
		NullCheck(L_15);
		L_15->set_ctorDelegate_0(L_18);
		U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * L_19 = V_0;
		ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * L_20 = (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)il2cpp_codegen_object_new(ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8(L_20, (RuntimeObject *)L_19, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/ObjectConstructor_1__ctor_m08F105B3AAA8DFA31CAD59D5812A0B9BEF9F3DA8_RuntimeMethod_var);
		return (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)L_20;
	}
}
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory::CreateMethodCall<System.Object>(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_gshared (ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mE7FB1048BFC77AC8143C6EC28FBBEBA7CEE5ABC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * V_1 = NULL;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * V_2 = NULL;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * V_3 = NULL;
	{
		MethodBase_t * L_0 = ___method0;
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_0, (String_t*)_stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F_il2cpp_TypeInfo_var);
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_4 = Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C((Type_t *)L_3, (String_t*)_stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD, /*hidden argument*/NULL);
		V_1 = (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_7 = Expression_Parameter_m6760804AC590CD46A47282028B0D728E82745D3C((Type_t *)L_6, (String_t*)_stringLiteral3030E728F154BF51419109EFB93B6B8AEEC9A976, /*hidden argument*/NULL);
		V_2 = (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_7;
		MethodBase_t * L_8 = ___method0;
		Type_t * L_9 = V_0;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_10 = V_1;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_11 = V_2;
		NullCheck((ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE *)__this);
		Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * L_12 = ExpressionReflectionDelegateFactory_BuildMethodCall_m9C9ACAFB4260854451730ED44E86BA6F4E7C3B23((ExpressionReflectionDelegateFactory_tF635BB03802505AB2E9CA6B6B99F872662A1C0EE *)__this, (MethodBase_t *)L_8, (Type_t *)L_9, (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_10, (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_11, /*hidden argument*/NULL);
		V_3 = (Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F *)L_12;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * L_15 = V_3;
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_16 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)(ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)SZArrayNew(ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_17 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_16;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_18 = V_1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_18);
		ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279* L_19 = (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_17;
		ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 *)L_20);
		LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 * L_21 = Expression_Lambda_m7F96089BE8674C877390AA3412C02BB5AEBB87D0((Type_t *)L_14, (Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F *)L_15, (ParameterExpressionU5BU5D_t7436835209396131EFB1611132041311B1111279*)L_19, /*hidden argument*/NULL);
		NullCheck((LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 *)L_21);
		Delegate_t * L_22 = LambdaExpression_Compile_m5F5C8361E0088640BE4D3A23E00B3FF6505EAEA3((LambdaExpression_t75634233B2F65FAB049A8F4AEB44836CF14F87B4 *)L_21, /*hidden argument*/NULL);
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)((MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)Castclass((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::CreateMethodCall<System.Object>(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_gshared (LateBoundReflectionDelegateFactory_t58AEAF5E0DB27DA5817A19F1C257770AC2D2AE6A * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_mAA959F1FBE61DFF65D48AB9BD8593307E989AC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_0 = (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 *)L_0;
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_1 = V_0;
		MethodBase_t * L_2 = ___method0;
		NullCheck(L_1);
		L_1->set_method_1(L_2);
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_3 = V_0;
		NullCheck(L_3);
		MethodBase_t * L_4 = (MethodBase_t *)L_3->get_method_1();
		ValidationUtils_ArgumentNotNull_m64E7DA52651FF471E9655B63EC7B9AE89DFC5755((RuntimeObject *)L_4, (String_t*)_stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_5 = V_0;
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_6 = V_0;
		NullCheck(L_6);
		MethodBase_t * L_7 = (MethodBase_t *)L_6->get_method_1();
		NullCheck(L_5);
		L_5->set_c_0(((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)IsInst((RuntimeObject*)L_7, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_8 = V_0;
		NullCheck(L_8);
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_9 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_8->get_c_0();
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var);
		bool L_10 = ConstructorInfo_op_Inequality_m7BACC92FB27D1999A084F5346451CEE9FD0445E4((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_9, (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_11 = V_0;
		MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * L_12 = (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_12, (RuntimeObject *)L_11, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)L_12;
	}

IL_0049:
	{
		U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * L_13 = V_0;
		MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * L_14 = (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_14, (RuntimeObject *)L_13, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D *)L_14;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_gshared (ObjectTracker_tED3815B385A5F372613BCF3FBC45010B683C1811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m1AC68DC4D5C220184900120977D34C2D6585F85E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_002d;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
	}

IL_002d:
	{
		Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * L_5 = (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_5);
		bool L_8 = Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_5, (Type_t *)L_7, (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **)(TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mBDE6267A26106935E5ADE03AE562B9E95925F5CB_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_mC5CE5D963BD80599045C7370AE0C384AB52857B9(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck((RuntimeObject*)L_9);
		intptr_t L_11 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(122 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t42C0BE7206A4F6F4259238B41D40D5106A38E83F_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (int32_t)L_10);
		V_2 = (intptr_t)L_11;
		intptr_t L_12 = V_2;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)NULL;
	}

IL_006b:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_16, /*hidden argument*/NULL);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_15, (Type_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_19 = V_2;
		ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 * L_20 = (ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04 *)il2cpp_codegen_object_new(ImageTargetFinder_t9E2966F804EF201BC52D7922853A43CF0EDD3B04_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_m628F3FD8293B684B399E21D807806229FF69FB99(L_20, (intptr_t)L_19, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_20;
	}

IL_008d:
	{
		Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 * L_21 = (Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)__this->get_mTargetFinders_3();
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		Type_t * L_23 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_22, /*hidden argument*/NULL);
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_24 = V_0;
		NullCheck((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_21);
		Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D((Dictionary_2_tCA3FDBAD8D47309DC8E4E9D839600B645C797989 *)L_21, (Type_t *)L_23, (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_24, /*hidden argument*/Dictionary_2_set_Item_mE56802F8411F651D7BD00358BED3CE81B039643D_RuntimeMethod_var);
	}

IL_009f:
	{
		TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A * L_25 = V_0;
		return (TargetFinder_t4C80B702285F5FCE6B2B8B281B11B0DC72DEA63A *)L_25;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m1FFA578DBEA8A07EA20FD49F127BA82C471B3733_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t7A3E6952FD850DE0FDD198D3745B3EFD34F94EBB *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_tA964110473BFD006708B67E537F021944C1D923D_m36105DADA6731D566FD9BBD36016C3B864E9026B_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D  L_6 = InterfaceFuncInvoker1< TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *, TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t4A7DCD0F715A6B82446496E7EA171D610A1994B1 *)L_3, (TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData_VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA_mFAD1E285F8A9582343CA6B92D5E3F5F14F0246D3_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *, VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tF68B1A8CABD337450D1962EF2E33BC2D86DE6E56 *)L_3, (VuMarkTargetResultData_t541A47433FA53BEDB4182F6C545472E511F296CA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_m9793CD2D7C90F4549E2B85F245A77422B3C7EEE2_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t61B4D441CBB0B72BC466252C03309BA149C5D211 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData_TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour_StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_tA964110473BFD006708B67E537F021944C1D923D_m75040E3B3CB62E139B881CD5318F83D2F73264F0_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D  L_6 = InterfaceFuncInvoker1< TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *, TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tE2240E88A41DA3C72C86AA7CC3CFAC91DE8B862B *)L_3, (TrackableResultData_tA964110473BFD006708B67E537F021944C1D923D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_mBE8A3D5F5ED24B02D3FE950B20A66E828AB14EF8_inline (JValue_tF9C07CCC30FB98C1AF88E8AD0593BE4632BA6C1F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
