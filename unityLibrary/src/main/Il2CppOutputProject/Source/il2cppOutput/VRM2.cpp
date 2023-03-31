#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>
struct Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF;
// System.Action`1<VRM.glTF_VRM_SecondaryAnimationGroup>
struct Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Quaternion>
struct Dictionary_2_tE1BE4D423E39C184B9041A359230EF9E41435F9E;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>>
struct Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE;
// System.Func`2<UnityEngine.Transform,System.Int32>
struct Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA;
// System.Func`2<UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup>
struct Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D;
// System.Func`2<VRM.VRMSpringBone,System.Boolean>
struct Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D;
// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Boolean>
struct Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6;
// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Int32>
struct Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899;
// System.Func`2<VRM.glTF_VRM_SecondaryAnimationCollider,VRM.VRMSpringBoneColliderGroup/SphereCollider>
struct Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2;
// System.Func`2<VRM.VRMSpringBoneColliderGroup/SphereCollider,VRM.glTF_VRM_SecondaryAnimationCollider>
struct Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>
struct IEnumerable_1_t97B7322162B526FD60D567B2618C5549C83972FD;
// System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBoneColliderGroup>
struct IEnumerable_1_t4D6CCC91C0B0AD967021E06032EDBA5CE8E769A7;
// System.Collections.Generic.IEnumerable`1<UniGLTF.Validation>
struct IEnumerable_1_t4A58432868CE6280C6BB17BD40B70E3A35A2462C;
// System.Collections.Generic.IEnumerable`1<VRM.glTF_VRM_SecondaryAnimationCollider>
struct IEnumerable_1_t9165075AEA5C4BF6494D61EAE4FCB374E2E54446;
// System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBoneColliderGroup/SphereCollider>
struct IEnumerable_1_t1F1AC46B59590A07EAE8E3FF5D5ACECF7F97C373;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092;
// System.Collections.Generic.IEnumerator`1<UniGLTF.Validation>
struct IEnumerator_1_tE31E2458695B0A52629BB0324A304F81494970F1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>
struct List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501;
// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationCollider>
struct List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85;
// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>
struct List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3;
// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationGroup>
struct List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE;
// System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>
struct List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A;
// System.Collections.Generic.List`1<VRM.VRMSpringBone/VRMSpringBoneLogic>
struct List_1_tF34E74D8A9C7C42487B582262335E46F77527987;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// VRM.VRMSpringBone[]
struct VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664;
// VRM.VRMSpringBoneColliderGroup[]
struct VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316;
// VRM.glTF_VRM_SecondaryAnimationCollider[]
struct glTF_VRM_SecondaryAnimationColliderU5BU5D_t615A62E2AB729DE8BE8D4B7EFE3C7EAA4BC0C1BE;
// VRM.glTF_VRM_SecondaryAnimationColliderGroup[]
struct glTF_VRM_SecondaryAnimationColliderGroupU5BU5D_t60A5F8A0917CBEAEA1B1DB71E0165FA8004ED495;
// VRM.glTF_VRM_SecondaryAnimationGroup[]
struct glTF_VRM_SecondaryAnimationGroupU5BU5D_t7A7612D5CB823557CC55726DF5B6F758A2CE1CE6;
// VRM.VRMSpringBone/SphereCollider[]
struct SphereColliderU5BU5D_tE410470E1749BAC9E8254A69659B4E51DA7763F6;
// VRM.VRMSpringBoneColliderGroup/SphereCollider[]
struct SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// VRM.VRMSpringBone
struct VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC;
// VRM.VRMSpringBoneColliderGroup
struct VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VRM.glTF_VRM_SecondaryAnimation
struct glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC;
// VRM.glTF_VRM_SecondaryAnimationCollider
struct glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549;
// VRM.glTF_VRM_SecondaryAnimationColliderGroup
struct glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1;
// VRM.glTF_VRM_SecondaryAnimationGroup
struct glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A;
// VRM.VRMSpringBone/<GetChildren>d__18
struct U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A;
// VRM.VRMSpringBone/VRMSpringBoneLogic
struct VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0;
// VRM.VRMSpringBoneColliderGroup/<Validate>d__4
struct U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945;
// VRM.VRMSpringBoneColliderGroup/SphereCollider
struct SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B;
// VRM.VRMSpringUtility/<>c
struct U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1;
// VRM.VRMSpringUtility/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359;

IL2CPP_EXTERN_C RuntimeClass* ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4D6CCC91C0B0AD967021E06032EDBA5CE8E769A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t97B7322162B526FD60D567B2618C5549C83972FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t292A0A87731385EC6A02FD7408EBEE1EC3D5FED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDF1AC10D46AE318D2D295ABCBADD780F86420FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F01572F7851B19C0750EE421EBC8E6695CF82F6;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralC330DDDF10507C5216435E7AC857A62401751631;
IL2CPP_EXTERN_C String_t* _stringLiteralD1ECD956B7E4E74651008E98FEBFB3E2411DECE4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mF89632F9FE93404F6A0B905FCBCB04BFFD1EFE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD05687886F171BC9373C7EB5FDBE188B5A2588DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m91DE44E48D5E557B751010D2C4CA6F69932111B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mAF1DD6634E02B8FA453E2D83E5CA9D61C74CD59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m5194CC0A46D78591CFAB7479E2755E085740106F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mAB4D87BFF165FED0E0332767C10D91A97F332EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F866F74B066BE08C5275EF192E6ADA8790F7DCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD5E8D3D10C10F0313DCD3DC989CB22F8B41AB80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62F7EB1C8A11493C714F220B377DE1B31ACA8AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_mC71216F2B567E293C4487CED4F47165F141C61EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_m3401864239E9EBDB780D3A9DC1D78534B509B26E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mD576F7AC9AD25A66C196CD879116F56479ACF045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mE8F3A254410EC51EF694E1B8C96ACD88C1FAC857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m382FC72CA81B322EBB512BB3D167939D277335F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m09EAF4E954341025C635738CB8FB15C6ACE92640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1DE55CBD02A358A77A34D4BFDE2A841D3058058E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m15062B3E7144774045440A7F77940E37EFEEA011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEF45CFB3005C7FF94DC9E958DEE34D2F85B5F0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D16BCB0CD8B61C3D26000504D6726FDF0A3DF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEB4D326E5E3EC8C8B72D385A2974123096EC5B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mAD5DC2870272324854FAA491DE45269BF0BD866D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m07006EEB5D5FA507C2B70EEA1A0B5EFC8B1AFC74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD4EEFE7CA6371EAA8C1CB4DBBD42042FC582758D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m5AC518A09744A5F8DE9DE3D4AD3D1635BDC12C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF6CE70FA42A6BE59E7855F1D8C89A4DBE2C7258D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7C05A23C1670C42B3815018C32552CCC06C2F87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m4773E28BB3582E7133EDAC5B275B33DEEB6C6D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_0_m7C4CB06524630C1F73B748E4FF2F2A5FF151CB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_1_mBD60BD04261A68E049E2EB1D43FFD911495E8AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_2_mD9C520FF028762E1A21523C0F760C05F82BDC0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_3_mD84963AB56D8DD9001DC77F89CEF63F81FE5AFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_4_mB583880649EF22C33B5D5BCA30A0A5583E5D7CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportSecondaryU3Eb__0_6_m57DD5BF77C8A973D257F56D3F37AE194A4AFEDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadSecondaryU3Eb__1_0_m1DFD9A671C6276235A7EE2917346010729E31654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__5_m32728DBEEDEC988678DEC972FADE898165DE04A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__7_m4464F589CE8FE9B6201D36D29103AEF1BC41E300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CValidateU3Ed__4_System_Collections_IEnumerator_Reset_m16FE925D874CF43A1846239161873E6157CD70DC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664;
struct VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316;
struct SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>
struct List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationCollider>
struct List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTF_VRM_SecondaryAnimationColliderU5BU5D_t615A62E2AB729DE8BE8D4B7EFE3C7EAA4BC0C1BE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTF_VRM_SecondaryAnimationColliderU5BU5D_t615A62E2AB729DE8BE8D4B7EFE3C7EAA4BC0C1BE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>
struct List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTF_VRM_SecondaryAnimationColliderGroupU5BU5D_t60A5F8A0917CBEAEA1B1DB71E0165FA8004ED495* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTF_VRM_SecondaryAnimationColliderGroupU5BU5D_t60A5F8A0917CBEAEA1B1DB71E0165FA8004ED495* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationGroup>
struct List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	glTF_VRM_SecondaryAnimationGroupU5BU5D_t7A7612D5CB823557CC55726DF5B6F758A2CE1CE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	glTF_VRM_SecondaryAnimationGroupU5BU5D_t7A7612D5CB823557CC55726DF5B6F758A2CE1CE6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>
struct List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SphereColliderU5BU5D_tE410470E1749BAC9E8254A69659B4E51DA7763F6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SphereColliderU5BU5D_tE410470E1749BAC9E8254A69659B4E51DA7763F6* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// VRM.VRMSpringUtility
struct VRMSpringUtility_tE679069D7C7BC773B26B7AE01CB630B3D15154E2  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// VRM.glTF_VRM_SecondaryAnimation
struct glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationGroup> VRM.glTF_VRM_SecondaryAnimation::boneGroups
	List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* ___boneGroups_0;
	// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup> VRM.glTF_VRM_SecondaryAnimation::colliderGroups
	List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3* ___colliderGroups_1;
};

// VRM.glTF_VRM_SecondaryAnimationColliderGroup
struct glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1  : public RuntimeObject
{
	// System.Int32 VRM.glTF_VRM_SecondaryAnimationColliderGroup::node
	int32_t ___node_0;
	// System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationCollider> VRM.glTF_VRM_SecondaryAnimationColliderGroup::colliders
	List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* ___colliders_1;
};

// VRM.VRMSpringBone/<GetChildren>d__18
struct U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A  : public RuntimeObject
{
	// System.Int32 VRM.VRMSpringBone/<GetChildren>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform VRM.VRMSpringBone/<GetChildren>d__18::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 VRM.VRMSpringBone/<GetChildren>d__18::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform VRM.VRMSpringBone/<GetChildren>d__18::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_3;
	// UnityEngine.Transform VRM.VRMSpringBone/<GetChildren>d__18::<>3__parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__parent_4;
	// System.Int32 VRM.VRMSpringBone/<GetChildren>d__18::<i>5__2
	int32_t ___U3CiU3E5__2_5;
};

// VRM.VRMSpringUtility/<>c
struct U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1  : public RuntimeObject
{
};

struct U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields
{
	// VRM.VRMSpringUtility/<>c VRM.VRMSpringUtility/<>c::<>9
	U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup> VRM.VRMSpringUtility/<>c::<>9__0_0
	Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* ___U3CU3E9__0_0_1;
	// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Boolean> VRM.VRMSpringUtility/<>c::<>9__0_1
	Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* ___U3CU3E9__0_1_2;
	// System.Func`2<VRM.VRMSpringBoneColliderGroup/SphereCollider,VRM.glTF_VRM_SecondaryAnimationCollider> VRM.VRMSpringUtility/<>c::<>9__0_2
	Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* ___U3CU3E9__0_2_3;
	// System.Func`2<UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>> VRM.VRMSpringUtility/<>c::<>9__0_3
	Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* ___U3CU3E9__0_3_4;
	// System.Func`2<VRM.VRMSpringBone,System.Boolean> VRM.VRMSpringUtility/<>c::<>9__0_4
	Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* ___U3CU3E9__0_4_5;
	// System.Func`2<System.Int32,System.Boolean> VRM.VRMSpringUtility/<>c::<>9__0_6
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___U3CU3E9__0_6_6;
	// System.Func`2<VRM.glTF_VRM_SecondaryAnimationCollider,VRM.VRMSpringBoneColliderGroup/SphereCollider> VRM.VRMSpringUtility/<>c::<>9__1_0
	Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* ___U3CU3E9__1_0_7;
};

// VRM.VRMSpringUtility/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359  : public RuntimeObject
{
	// System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup> VRM.VRMSpringUtility/<>c__DisplayClass0_0::colliders
	List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* ___colliders_0;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VRM.VRMSpringUtility/<>c__DisplayClass0_0::nodes
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___nodes_1;
	// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Int32> VRM.VRMSpringUtility/<>c__DisplayClass0_0::<>9__5
	Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* ___U3CU3E9__5_2;
	// System.Func`2<UnityEngine.Transform,System.Int32> VRM.VRMSpringUtility/<>c__DisplayClass0_0::<>9__7
	Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* ___U3CU3E9__7_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationColliderGroup>
struct Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationGroup>
struct Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// VRM.glTF_VRM_SecondaryAnimationCollider
struct glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549  : public RuntimeObject
{
	// UnityEngine.Vector3 VRM.glTF_VRM_SecondaryAnimationCollider::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_0;
	// System.Single VRM.glTF_VRM_SecondaryAnimationCollider::radius
	float ___radius_1;
};

// VRM.glTF_VRM_SecondaryAnimationGroup
struct glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A  : public RuntimeObject
{
	// System.String VRM.glTF_VRM_SecondaryAnimationGroup::comment
	String_t* ___comment_0;
	// System.Single VRM.glTF_VRM_SecondaryAnimationGroup::stiffiness
	float ___stiffiness_1;
	// System.Single VRM.glTF_VRM_SecondaryAnimationGroup::gravityPower
	float ___gravityPower_2;
	// UnityEngine.Vector3 VRM.glTF_VRM_SecondaryAnimationGroup::gravityDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gravityDir_3;
	// System.Single VRM.glTF_VRM_SecondaryAnimationGroup::dragForce
	float ___dragForce_4;
	// System.Int32 VRM.glTF_VRM_SecondaryAnimationGroup::center
	int32_t ___center_5;
	// System.Single VRM.glTF_VRM_SecondaryAnimationGroup::hitRadius
	float ___hitRadius_6;
	// System.Int32[] VRM.glTF_VRM_SecondaryAnimationGroup::bones
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bones_7;
	// System.Int32[] VRM.glTF_VRM_SecondaryAnimationGroup::colliderGroups
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___colliderGroups_8;
};

// VRM.VRMSpringBone/SphereCollider
struct SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 
{
	// UnityEngine.Vector3 VRM.VRMSpringBone/SphereCollider::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// System.Single VRM.VRMSpringBone/SphereCollider::Radius
	float ___Radius_1;
};

// VRM.VRMSpringBone/VRMSpringBoneLogic
struct VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0  : public RuntimeObject
{
	// UnityEngine.Transform VRM.VRMSpringBone/VRMSpringBoneLogic::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_0;
	// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::m_boneAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_boneAxis_1;
	// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::m_currentTail
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentTail_2;
	// System.Single VRM.VRMSpringBone/VRMSpringBoneLogic::m_length
	float ___m_length_3;
	// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::m_localDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_localDir_4;
	// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::m_prevTail
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_prevTail_5;
	// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::<LocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLocalRotationU3Ek__BackingField_6;
	// System.Single VRM.VRMSpringBone/VRMSpringBoneLogic::m_radius
	float ___m_radius_7;
};

// VRM.VRMSpringBoneColliderGroup/SphereCollider
struct SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B  : public RuntimeObject
{
	// UnityEngine.Vector3 VRM.VRMSpringBoneColliderGroup/SphereCollider::Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Offset_0;
	// System.Single VRM.VRMSpringBoneColliderGroup/SphereCollider::Radius
	float ___Radius_1;
};

// System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>
struct Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 
{
	// System.Type UniGLTF.ValidationContext::Type
	Type_t* ___Type_0;
	// UnityEngine.Object UniGLTF.ValidationContext::Context
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Context_1;
	// System.Action UniGLTF.ValidationContext::Extended
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Extended_2;
};
// Native definition for P/Invoke marshalling of UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_pinvoke
{
	Type_t* ___Type_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Context_1;
	Il2CppMethodPointer ___Extended_2;
};
// Native definition for COM marshalling of UniGLTF.ValidationContext
struct ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_com
{
	Type_t* ___Type_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Context_1;
	Il2CppMethodPointer ___Extended_2;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>
struct Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF  : public MulticastDelegate_t
{
};

// System.Action`1<VRM.glTF_VRM_SecondaryAnimationGroup>
struct Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>>
struct Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Transform,System.Int32>
struct Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup>
struct Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D  : public MulticastDelegate_t
{
};

// System.Func`2<VRM.VRMSpringBone,System.Boolean>
struct Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D  : public MulticastDelegate_t
{
};

// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Boolean>
struct Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6  : public MulticastDelegate_t
{
};

// System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Int32>
struct Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899  : public MulticastDelegate_t
{
};

// System.Func`2<VRM.glTF_VRM_SecondaryAnimationCollider,VRM.VRMSpringBoneColliderGroup/SphereCollider>
struct Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2  : public MulticastDelegate_t
{
};

// System.Func`2<VRM.VRMSpringBoneColliderGroup/SphereCollider,VRM.glTF_VRM_SecondaryAnimationCollider>
struct Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UniGLTF.Validation
struct Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 
{
	// UniGLTF.ErrorLevels UniGLTF.Validation::ErrorLevel
	int32_t ___ErrorLevel_0;
	// System.String UniGLTF.Validation::Message
	String_t* ___Message_1;
	// UniGLTF.ValidationContext UniGLTF.Validation::Context
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 ___Context_2;
};
// Native definition for P/Invoke marshalling of UniGLTF.Validation
struct Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851_marshaled_pinvoke
{
	int32_t ___ErrorLevel_0;
	char* ___Message_1;
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_pinvoke ___Context_2;
};
// Native definition for COM marshalling of UniGLTF.Validation
struct Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851_marshaled_com
{
	int32_t ___ErrorLevel_0;
	Il2CppChar* ___Message_1;
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7_marshaled_com ___Context_2;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VRM.VRMSpringBoneColliderGroup/<Validate>d__4
struct U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945  : public RuntimeObject
{
	// System.Int32 VRM.VRMSpringBoneColliderGroup/<Validate>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniGLTF.Validation VRM.VRMSpringBoneColliderGroup/<Validate>d__4::<>2__current
	Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 ___U3CU3E2__current_1;
	// System.Int32 VRM.VRMSpringBoneColliderGroup/<Validate>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// VRM.VRMSpringBoneColliderGroup VRM.VRMSpringBoneColliderGroup/<Validate>d__4::<>4__this
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* ___U3CU3E4__this_3;
};

// VRM.VRMSpringBone
struct VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String VRM.VRMSpringBone::m_comment
	String_t* ___m_comment_4;
	// UnityEngine.Color VRM.VRMSpringBone::m_gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_gizmoColor_5;
	// System.Single VRM.VRMSpringBone::m_stiffnessForce
	float ___m_stiffnessForce_6;
	// System.Single VRM.VRMSpringBone::m_gravityPower
	float ___m_gravityPower_7;
	// UnityEngine.Vector3 VRM.VRMSpringBone::m_gravityDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_gravityDir_8;
	// System.Single VRM.VRMSpringBone::m_dragForce
	float ___m_dragForce_9;
	// UnityEngine.Transform VRM.VRMSpringBone::m_center
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_center_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VRM.VRMSpringBone::RootBones
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___RootBones_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Quaternion> VRM.VRMSpringBone::m_initialLocalRotationMap
	Dictionary_2_tE1BE4D423E39C184B9041A359230EF9E41435F9E* ___m_initialLocalRotationMap_12;
	// System.Single VRM.VRMSpringBone::m_hitRadius
	float ___m_hitRadius_13;
	// VRM.VRMSpringBoneColliderGroup[] VRM.VRMSpringBone::ColliderGroups
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* ___ColliderGroups_14;
	// VRM.VRMSpringBone/SpringBoneUpdateType VRM.VRMSpringBone::m_updateType
	int32_t ___m_updateType_15;
	// System.Collections.Generic.List`1<VRM.VRMSpringBone/VRMSpringBoneLogic> VRM.VRMSpringBone::m_verlet
	List_1_tF34E74D8A9C7C42487B582262335E46F77527987* ___m_verlet_16;
	// System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider> VRM.VRMSpringBone::m_colliders
	List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* ___m_colliders_17;
};

// VRM.VRMSpringBoneColliderGroup
struct VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VRM.VRMSpringBoneColliderGroup/SphereCollider[] VRM.VRMSpringBoneColliderGroup::Colliders
	SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* ___Colliders_4;
	// UnityEngine.Color VRM.VRMSpringBoneColliderGroup::m_gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_gizmoColor_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// VRM.VRMSpringBoneColliderGroup/SphereCollider[]
struct SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84  : public RuntimeArray
{
	ALIGN_FIELD (8) SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* m_Items[1];

	inline SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VRM.VRMSpringBoneColliderGroup[]
struct VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316  : public RuntimeArray
{
	ALIGN_FIELD (8) VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* m_Items[1];

	inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// VRM.VRMSpringBone[]
struct VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664  : public RuntimeArray
{
	ALIGN_FIELD (8) VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* m_Items[1];

	inline VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E  : public RuntimeArray
{
	ALIGN_FIELD (8) Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* m_Items[1];

	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613_gshared (List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B_gshared (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_gshared_inline (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130_gshared (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF0ABAE563501FB4B795991365F3011147BE07E2E_gshared (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E_gshared (RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single VRM.TransformExtensions::UniformedLossyScale(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformExtensions_UniformedLossyScale_mACD4D6F011F0B9B0DF029E18CF7E0D691C79ADCB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::get_ParentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_get_ParentRotation_m25A764AF18C35D00AA6083C597120FC5873A58D9 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::get_LocalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_get_LocalRotation_mB384F10CAA695408DD1DACF6E54C4BEFD76FF846_inline (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>::GetEnumerator()
inline Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613 (List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 (*) (List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A*, const RuntimeMethod*))List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::Dispose()
inline void Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79*, const RuntimeMethod*))Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::get_Current()
inline SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_inline (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 (*) (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79*, const RuntimeMethod*))Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRM.VRMSpringBone/SphereCollider>::MoveNext()
inline bool Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130 (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79*, const RuntimeMethod*))Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void VRM.VRMSpringBone/SphereCollider::.ctor(UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup/SphereCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider__ctor_m184E1FC0A830E700976DE630C2C19F16F55EDC92 (SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* ___collider1, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void VRM.VRMSpringBone/<GetChildren>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetChildrenU3Ed__18__ctor_m775487E1E311EED46E6508CA58D51487F3A49640 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mE7C5B04AFB9381650E31B8006627B8AFB5E71956 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void VRM.VRMSpringBoneColliderGroup/<Validate>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateU3Ed__4__ctor_m8BD1A44E1B47C1337C3C0E406FD569CCEEE4AA53 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void VRM.VRMSpringBoneColliderGroup/SphereCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider__ctor_m2BD72A7D87F951340AF71D4DCDA971F94C69578D (SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UniGLTF.Validation UniGLTF.Validation::Warning(System.String,UniGLTF.ValidationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 Validation_Warning_m19A5F60B1301F167D7F6F6CB7EF72861B905ECC7 (String_t* ___msg0, ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 ___context1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UniGLTF.Validation> VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.Generic.IEnumerable<UniGLTF.Validation>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValidateU3Ed__4_System_Collections_Generic_IEnumerableU3CUniGLTF_ValidationU3E_GetEnumerator_m9F63711D1F72A1ACD292C5E63ACFF86B32E6C579 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) ;
// System.Void VRM.VRMSpringUtility/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m65EEF87A79440B8E7EB65FFEF0E39C448E4626A0 (U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>::.ctor()
inline void List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> UniGLTF.UnityExtensions::Traverse(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityExtensions_Traverse_m17E8CA122F9C0F5FC51E94DC1B790B84B6228C14 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9796F34DA92FDDA0A01CA7D278F20C4145653693 (Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD5E8D3D10C10F0313DCD3DC989CB22F8B41AB80A (RuntimeObject* ___source0, Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5B5E3F9F64A3599CCCA9AD1B90B18741C83633B3 (Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<VRM.VRMSpringBoneColliderGroup>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mE8F3A254410EC51EF694E1B8C96ACD88C1FAC857 (RuntimeObject* ___source0, Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>::Add(T)
inline void List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_inline (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* __this, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void VRM.glTF_VRM_SecondaryAnimationColliderGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTF_VRM_SecondaryAnimationColliderGroup__ctor_mFCF1AD82CCFE5E2BD09CDCC25AF79DC37DCA52BE (glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
inline int32_t List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<VRM.VRMSpringBoneColliderGroup/SphereCollider,VRM.glTF_VRM_SecondaryAnimationCollider>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m81DC61B6D496B1ACAEAF9558D7FE27A527675A17 (Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<VRM.VRMSpringBoneColliderGroup/SphereCollider,VRM.glTF_VRM_SecondaryAnimationCollider>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mAB4D87BFF165FED0E0332767C10D91A97F332EA1 (RuntimeObject* ___source0, Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<VRM.glTF_VRM_SecondaryAnimationCollider>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* Enumerable_ToList_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mD576F7AC9AD25A66C196CD879116F56479ACF045 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Action`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>::Invoke(T)
inline void Action_1_Invoke_m3B82E774F3FC47EE5C27D544F353DE4720FBE7B2_inline (Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF* __this, glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF*, glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Func`2<UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFB08707CBB44B03F3C527B381C93404BE7FBD3FF (Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<UnityEngine.Transform,VRM.VRMSpringBone>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m5194CC0A46D78591CFAB7479E2755E085740106F (RuntimeObject* ___source0, Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<VRM.VRMSpringBone,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCDEE99273DCFF7ABC2DF26AED203724F0E26BDED (Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<VRM.VRMSpringBone>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m382FC72CA81B322EBB512BB3D167939D277335F6 (RuntimeObject* ___source0, Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void VRM.glTF_VRM_SecondaryAnimationGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTF_VRM_SecondaryAnimationGroup__ctor_mD2687188428E88AD6BE833D92F3B14BEFA8DF541 (glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<VRM.VRMSpringBoneColliderGroup,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m89C7CFE7663B251180D3FCA0F8BC6A05E9672F24 (Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<VRM.VRMSpringBoneColliderGroup,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62F7EB1C8A11493C714F220B377DE1B31ACA8AE6 (RuntimeObject* ___source0, Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF0ABAE563501FB4B795991365F3011147BE07E2E (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mF0ABAE563501FB4B795991365F3011147BE07E2E_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E (RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared)(___source0, method);
}
// System.Void System.Func`2<UnityEngine.Transform,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m89100D93499CE0365FE89060D1DC0F66AC0389DD (Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Transform,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F866F74B066BE08C5275EF192E6ADA8790F7DCE (RuntimeObject* ___source0, Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared)(___source0, ___selector1, method);
}
// System.Void System.Action`1<VRM.glTF_VRM_SecondaryAnimationGroup>::Invoke(T)
inline void Action_1_Invoke_m1E667E821294B47605FC8AB62094EF1C6A788DC0_inline (Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* __this, glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890*, glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<VRM.VRMSpringBone>()
inline VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* Component_GetComponentsInChildren_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m91DE44E48D5E557B751010D2C4CA6F69932111B7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<VRM.VRMSpringBoneColliderGroup>()
inline VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* Component_GetComponentsInChildren_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD05687886F171BC9373C7EB5FDBE188B5A2588DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>::GetEnumerator()
inline Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3 List_1_GetEnumerator_m07006EEB5D5FA507C2B70EEA1A0B5EFC8B1AFC74 (List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3 (*) (List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationColliderGroup>::Dispose()
inline void Enumerator_Dispose_m1DE55CBD02A358A77A34D4BFDE2A841D3058058E (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationColliderGroup>::get_Current()
inline glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* Enumerator_get_Current_mEB4D326E5E3EC8C8B72D385A2974123096EC5B9A_inline (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3* __this, const RuntimeMethod* method)
{
	return ((  glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* (*) (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VRM.VRMSpringBoneColliderGroup>()
inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* GameObject_AddComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mAD5DC2870272324854FAA491DE45269BF0BD866D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Func`2<VRM.glTF_VRM_SecondaryAnimationCollider,VRM.VRMSpringBoneColliderGroup/SphereCollider>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC15E1DB80824E09433758F30CFC01C7A683AA1F7 (Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<VRM.glTF_VRM_SecondaryAnimationCollider,VRM.VRMSpringBoneColliderGroup/SphereCollider>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_mC71216F2B567E293C4487CED4F47165F141C61EB (RuntimeObject* ___source0, Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<VRM.VRMSpringBoneColliderGroup/SphereCollider>(System.Collections.Generic.IEnumerable`1<TSource>)
inline SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* Enumerable_ToArray_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_m3401864239E9EBDB780D3A9DC1D78534B509B26E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationColliderGroup>::MoveNext()
inline bool Enumerator_MoveNext_mEF45CFB3005C7FF94DC9E958DEE34D2F85B5F0B4 (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationGroup>::get_Count()
inline int32_t List_1_get_Count_mF6CE70FA42A6BE59E7855F1D8C89A4DBE2C7258D_inline (List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRM.glTF_VRM_SecondaryAnimationGroup>::GetEnumerator()
inline Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7 List_1_GetEnumerator_mD4EEFE7CA6371EAA8C1CB4DBBD42042FC582758D (List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7 (*) (List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationGroup>::Dispose()
inline void Enumerator_Dispose_m09EAF4E954341025C635738CB8FB15C6ACE92640 (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationGroup>::get_Current()
inline glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* Enumerator_get_Current_m5D16BCB0CD8B61C3D26000504D6726FDF0A3DF29_inline (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7* __this, const RuntimeMethod* method)
{
	return ((  glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* (*) (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<VRM.VRMSpringBone>()
inline VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C_gshared)(___source0, method);
}
// T System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>::get_Item(System.Int32)
inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* List_1_get_Item_m7C05A23C1670C42B3815018C32552CCC06C2F87D (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* (*) (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRM.glTF_VRM_SecondaryAnimationGroup>::MoveNext()
inline bool Enumerator_MoveNext_m15062B3E7144774045440A7F77940E37EFEEA011 (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<VRM.VRMSpringBoneColliderGroup>::IndexOf(T)
inline int32_t List_1_IndexOf_m5AC518A09744A5F8DE9DE3D4AD3D1635BDC12C94 (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* __this, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void VRM.VRMSpringUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90D4A33AFE50E7D78EE117F930FDB2490175DE6F (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<VRM.VRMSpringBoneColliderGroup>()
inline VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* Component_GetComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mF89632F9FE93404F6A0B905FCBCB04BFFD1EFE36 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void VRM.glTF_VRM_SecondaryAnimationCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void glTF_VRM_SecondaryAnimationCollider__ctor_mA27FDB33217CCDC05845B712D82A2B6DA51DF301 (glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<VRM.VRMSpringBone>()
inline VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* Component_GetComponents_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mAF1DD6634E02B8FA453E2D83E5CA9D61C74CD59C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform VRM.VRMSpringBone/VRMSpringBoneLogic::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* VRMSpringBoneLogic_get_Head_m4344ECD38B3248375756E5377681DC23A8F94878 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Head => m_transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_transform_0;
		return L_0;
	}
}
// System.Void VRM.VRMSpringBone/VRMSpringBoneLogic::.ctor(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneLogic__ctor_m6AA12577947059D7CD6C40300F228AB0526F5119 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___center0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localChildPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B2_0 = NULL;
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B3_1 = NULL;
	{
		// public VRMSpringBoneLogic(Transform center, Transform transform, Vector3 localChildPosition)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform1;
		__this->___m_transform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_0), (void*)L_0);
		// var worldChildPosition = m_transform.TransformPoint(localChildPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___localChildPosition2;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		V_0 = L_3;
		// m_currentTail = center != null
		//         ? center.InverseTransformPoint(worldChildPosition)
		//         : worldChildPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_0027:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_7, L_8, NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_currentTail_2 = G_B3_0;
		// m_prevTail = m_currentTail;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_currentTail_2;
		__this->___m_prevTail_5 = L_10;
		// LocalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___transform1;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_11, NULL);
		__this->___U3CLocalRotationU3Ek__BackingField_6 = L_12;
		// m_boneAxis = localChildPosition.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___localChildPosition2), NULL);
		__this->___m_boneAxis_1 = L_13;
		// m_length = localChildPosition.magnitude;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___localChildPosition2), NULL);
		__this->___m_length_3 = L_14;
		// }
		return;
	}
}
// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VRMSpringBoneLogic_get_Tail_m11F493E30D9FA55986E993AC96DCD7919084AB67 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 Tail => m_transform.localToWorldMatrix.MultiplyPoint(m_boneAxis * m_length);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_transform_0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_boneAxis_1;
		float L_3 = __this->___m_length_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_0), L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_get_LocalRotation_mB384F10CAA695408DD1DACF6E54C4BEFD76FF846 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion LocalRotation { get; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void VRM.VRMSpringBone/VRMSpringBoneLogic::SetRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneLogic_SetRadius_mC2DB8D9CFF20B33A5FC349F5F0EB8F04B57E477A (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, float ___radius0, const RuntimeMethod* method) 
{
	{
		// m_radius = radius * m_transform.UniformedLossyScale();
		float L_0 = ___radius0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_transform_0;
		float L_2;
		L_2 = TransformExtensions_UniformedLossyScale_mACD4D6F011F0B9B0DF029E18CF7E0D691C79ADCB(L_1, NULL);
		__this->___m_radius_7 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		// }
		return;
	}
}
// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::get_ParentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_get_ParentRotation_m25A764AF18C35D00AA6083C597120FC5873A58D9 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_transform.parent != null
		//     ? m_transform.parent.rotation
		//     : Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_transform_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		return L_3;
	}

IL_0019:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_transform_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		return L_6;
	}
}
// System.Void VRM.VRMSpringBone/VRMSpringBoneLogic::Update(UnityEngine.Transform,System.Single,System.Single,UnityEngine.Vector3,System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneLogic_Update_m905C7850F4B88925A38255032C7E482429DFDBA3 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___center0, float ___stiffnessForce1, float ___dragForce2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___external3, List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* ___colliders4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B8_0 = NULL;
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B7_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B9_1 = NULL;
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B11_0 = NULL;
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B10_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* G_B12_1 = NULL;
	{
		// var currentTail = center != null
		//         ? center.TransformPoint(m_currentTail)
		//         : m_currentTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_currentTail_2;
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0011:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_currentTail_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// var prevTail = center != null
		//         ? center.TransformPoint(m_prevTail)
		//         : m_prevTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_prevTail_5;
		G_B6_0 = L_8;
		goto IL_003b;
	}

IL_002f:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_prevTail_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_9, L_10, NULL);
		G_B6_0 = L_11;
	}

IL_003b:
	{
		V_1 = G_B6_0;
		// var nextTail = currentTail
		//                + (currentTail - prevTail) * (1.0f - dragForce) // ?????????????(??????)
		//                + ParentRotation * LocalRotation * m_boneAxis * stiffnessForce // ????????????????
		//                + external; // ????????
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		float L_16 = ___dragForce2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, ((float)il2cpp_codegen_subtract((1.0f), L_16)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = VRMSpringBoneLogic_get_ParentRotation_m25A764AF18C35D00AA6083C597120FC5873A58D9(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = VRMSpringBoneLogic_get_LocalRotation_mB384F10CAA695408DD1DACF6E54C4BEFD76FF846_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___m_boneAxis_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_21, L_22, NULL);
		float L_24 = ___stiffnessForce1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___external3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_27, NULL);
		V_2 = L_28;
		// var position = m_transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___m_transform_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		V_3 = L_30;
		// nextTail = position + (nextTail - position).normalized * m_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_33, NULL);
		V_4 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_36 = __this->___m_length_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_37, NULL);
		V_2 = L_38;
		// nextTail = Collision(colliders, nextTail);
		List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* L_39 = ___colliders4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::Collision(System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>,UnityEngine.Vector3) */, __this, L_39, L_40);
		V_2 = L_41;
		// m_prevTail = center != null
		//         ? center.InverseTransformPoint(currentTail)
		//         : currentTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B7_0 = __this;
		if (L_43)
		{
			G_B8_0 = __this;
			goto IL_00c9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		G_B9_0 = L_44;
		G_B9_1 = G_B7_0;
		goto IL_00d0;
	}

IL_00c9:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_45, L_46, NULL);
		G_B9_0 = L_47;
		G_B9_1 = G_B8_0;
	}

IL_00d0:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_prevTail_5 = G_B9_0;
		// m_currentTail = center != null
		//         ? center.InverseTransformPoint(nextTail)
		//         : nextTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B10_0 = __this;
		if (L_49)
		{
			G_B11_0 = __this;
			goto IL_00e2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_2;
		G_B12_0 = L_50;
		G_B12_1 = G_B10_0;
		goto IL_00e9;
	}

IL_00e2:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_2;
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_51, L_52, NULL);
		G_B12_0 = L_53;
		G_B12_1 = G_B11_0;
	}

IL_00e9:
	{
		NullCheck(G_B12_1);
		G_B12_1->___m_currentTail_2 = G_B12_0;
		// m_transform.rotation = ApplyRotation(nextTail);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = __this->___m_transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4 /* UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::ApplyRotation(UnityEngine.Vector3) */, __this, L_55);
		NullCheck(L_54);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_54, L_56, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion VRM.VRMSpringBone/VRMSpringBoneLogic::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_ApplyRotation_m56A47C20B59270392461E0E0E65F958D38B1AEDD (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextTail0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var rotation = ParentRotation * LocalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = VRMSpringBoneLogic_get_ParentRotation_m25A764AF18C35D00AA6083C597120FC5873A58D9(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VRMSpringBoneLogic_get_LocalRotation_mB384F10CAA695408DD1DACF6E54C4BEFD76FF846_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return Quaternion.FromToRotation(rotation * m_boneAxis,
		//            nextTail - m_transform.position) * rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_boneAxis_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___nextTail0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___m_transform_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_5, L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 VRM.VRMSpringBone/VRMSpringBoneLogic::Collision(System.Collections.Generic.List`1<VRM.VRMSpringBone/SphereCollider>,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VRMSpringBoneLogic_Collision_m5E836492E3D029D2302B37A930FCAA3FD81118D0 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* ___colliders0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextTail1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// foreach (var collider in colliders)
		List_1_t8440F129E5E22BB576B1A603274CFD5BCF97299A* L_0 = ___colliders0;
		NullCheck(L_0);
		Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79 L_1;
		L_1 = List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613(L_0, List_1_GetEnumerator_m6540F1492BB64BB93CA118B83B9D570860EBD613_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B((&V_0), Enumerator_Dispose_m4D07991BF7F3A886254602F1F8D2612B36C21E9B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a6_1;
			}

IL_000c_1:
			{
				// foreach (var collider in colliders)
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_2;
				L_2 = Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_inline((&V_0), Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_RuntimeMethod_var);
				V_1 = L_2;
				// var r = m_radius + collider.Radius;
				float L_3 = __this->___m_radius_7;
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_4 = V_1;
				float L_5 = L_4.___Radius_1;
				V_2 = ((float)il2cpp_codegen_add(L_3, L_5));
				// if (Vector3.SqrMagnitude(nextTail - collider.Position) <= (r * r))
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___nextTail1;
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_7 = V_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___Position_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
				float L_10;
				L_10 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_9, NULL);
				float L_11 = V_2;
				float L_12 = V_2;
				if ((!(((float)L_10) <= ((float)((float)il2cpp_codegen_multiply(L_11, L_12))))))
				{
					goto IL_00a6_1;
				}
			}
			{
				// var normal = (nextTail - collider.Position).normalized;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___nextTail1;
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_14 = V_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___Position_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_15, NULL);
				V_5 = L_16;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
				V_3 = L_17;
				// var posFromCollider = collider.Position + normal * (m_radius + collider.Radius);
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_18 = V_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___Position_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
				float L_21 = __this->___m_radius_7;
				SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_22 = V_1;
				float L_23 = L_22.___Radius_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, ((float)il2cpp_codegen_add(L_21, L_23)), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_24, NULL);
				V_4 = L_25;
				// nextTail = m_transform.position + (posFromCollider - m_transform.position).normalized * m_length;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___m_transform_0;
				NullCheck(L_26);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
				L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___m_transform_0;
				NullCheck(L_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_30, NULL);
				V_5 = L_31;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
				L_32 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
				float L_33 = __this->___m_length_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_34, NULL);
				___nextTail1 = L_35;
			}

IL_00a6_1:
			{
				// foreach (var collider in colliders)
				bool L_36;
				L_36 = Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130((&V_0), Enumerator_MoveNext_m4F723BDA8D424EB2A7208530B12D431FC27A4130_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		// return nextTail;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___nextTail1;
		return L_37;
	}
}
// System.Void VRM.VRMSpringBone/VRMSpringBoneLogic::DrawGizmo(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneLogic_DrawGizmo_mFCFD389FADD1F02C32A33D2ABF8435BE7A2912E5 (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___center0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	{
		// var currentTail = center != null
		//         ? center.TransformPoint(m_currentTail)
		//         : m_currentTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_currentTail_2;
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0011:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_currentTail_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		// var prevTail = center != null
		//         ? center.TransformPoint(m_prevTail)
		//         : m_prevTail;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___center0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_prevTail_5;
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_003a;
	}

IL_002e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_prevTail_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_9, L_10, NULL);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_003a:
	{
		V_0 = G_B6_0;
		// Gizmos.color = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_12, NULL);
		// Gizmos.DrawLine(currentTail, prevTail);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = G_B6_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_14, NULL);
		// Gizmos.DrawWireSphere(prevTail, m_radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = __this->___m_radius_7;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_15, L_16, NULL);
		// Gizmos.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___color1;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_17, NULL);
		// Gizmos.DrawLine(currentTail, m_transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___m_transform_0;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_18, L_20, NULL);
		// Gizmos.DrawWireSphere(currentTail, m_radius);
		float L_21 = __this->___m_radius_7;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_18, L_21, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringBone/SphereCollider::.ctor(UnityEngine.Transform,VRM.VRMSpringBoneColliderGroup/SphereCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider__ctor_m184E1FC0A830E700976DE630C2C19F16F55EDC92 (SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* ___collider1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Position = transform.TransformPoint(collider.Offset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_1 = ___collider1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___Offset_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		__this->___Position_0 = L_3;
		// var ls = transform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___transform0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_4, NULL);
		V_0 = L_5;
		// var scale = Mathf.Max(Mathf.Max(ls.x, ls.y), ls.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___z_4;
		float L_13;
		L_13 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_10, L_12, NULL);
		V_1 = L_13;
		// Radius = scale * collider.Radius;
		float L_14 = V_1;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_15 = ___collider1;
		NullCheck(L_15);
		float L_16 = L_15->___Radius_1;
		__this->___Radius_1 = ((float)il2cpp_codegen_multiply(L_14, L_16));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCollider__ctor_m184E1FC0A830E700976DE630C2C19F16F55EDC92_AdjustorThunk (RuntimeObject* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* ___collider1, const RuntimeMethod* method)
{
	SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1*>(__this + _offset);
	SphereCollider__ctor_m184E1FC0A830E700976DE630C2C19F16F55EDC92(_thisAdjusted, ___transform0, ___collider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringBone/<GetChildren>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetChildrenU3Ed__18__ctor_m775487E1E311EED46E6508CA58D51487F3A49640 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void VRM.VRMSpringBone/<GetChildren>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetChildrenU3Ed__18_System_IDisposable_Dispose_mC8AF437A3913DACCC86CCA0BB11947544C97B2DD (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VRM.VRMSpringBone/<GetChildren>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetChildrenU3Ed__18_MoveNext_mA5BE464551AD00AD422F968077C82776A4E29696 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (var i = 0; i < parent.childCount; ++i) yield return parent.GetChild(i);
		__this->___U3CiU3E5__2_5 = 0;
		goto IL_0057;
	}

IL_0020:
	{
		// for (var i = 0; i < parent.childCount; ++i) yield return parent.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___parent_3;
		int32_t L_4 = __this->___U3CiU3E5__2_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (var i = 0; i < parent.childCount; ++i) yield return parent.GetChild(i);
		int32_t L_6 = __this->___U3CiU3E5__2_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__this->___U3CiU3E5__2_5 = L_7;
	}

IL_0057:
	{
		// for (var i = 0; i < parent.childCount; ++i) yield return parent.GetChild(i);
		int32_t L_8 = __this->___U3CiU3E5__2_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___parent_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* U3CGetChildrenU3Ed__18_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m0FEC9D12B3E7797D257759A41C28891BE3657C6C (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m4773E28BB3582E7133EDAC5B275B33DEEB6C6D29 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m4773E28BB3582E7133EDAC5B275B33DEEB6C6D29_RuntimeMethod_var)));
	}
}
// System.Object VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetChildrenU3Ed__18_System_Collections_IEnumerator_get_Current_m3907DF1A55708F92909169B9B4244561B7F5843A (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mE7C5B04AFB9381650E31B8006627B8AFB5E71956 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* L_3 = (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A*)il2cpp_codegen_object_new(U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetChildrenU3Ed__18__ctor_m775487E1E311EED46E6508CA58D51487F3A49640(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___U3CU3E3__parent_4;
		NullCheck(L_4);
		L_4->___parent_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___parent_3), (void*)L_5);
		U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator VRM.VRMSpringBone/<GetChildren>d__18::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetChildrenU3Ed__18_System_Collections_IEnumerable_GetEnumerator_m04AFF7C70AA66D3035F02B6189BA1EEFCF91F632 (U3CGetChildrenU3Ed__18_t3986F310D057BBC56F6E487D9264747DB402181A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mE7C5B04AFB9381650E31B8006627B8AFB5E71956(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringBoneColliderGroup::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneColliderGroup_OnDrawGizmosSelected_m8DA1DA0334F6EA346A02D950AA7A6BD87EB56711 (VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* V_1 = NULL;
	int32_t V_2 = 0;
	SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* V_3 = NULL;
	{
		// Gizmos.color = m_gizmoColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_gizmoColor_5;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Matrix4x4 mat = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_1, NULL);
		// var ls = transform.UniformedLossyScale();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_4;
		L_4 = TransformExtensions_UniformedLossyScale_mACD4D6F011F0B9B0DF029E18CF7E0D691C79ADCB(L_3, NULL);
		V_0 = L_4;
		// Gizmos.matrix = mat * Matrix4x4.Scale(new Vector3(
		//     1.0f / transform.lossyScale.x * ls,
		//     1.0f / transform.lossyScale.y * ls,
		//     1.0f / transform.lossyScale.z * ls
		//     ));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_multiply(((float)((1.0f)/L_7)), L_8)), ((float)il2cpp_codegen_multiply(((float)((1.0f)/L_11)), L_12)), ((float)il2cpp_codegen_multiply(((float)((1.0f)/L_15)), L_16)), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_17, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_2, L_18, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_19, NULL);
		// foreach (var y in Colliders)
		SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_20 = __this->___Colliders_4;
		V_1 = L_20;
		V_2 = 0;
		goto IL_00a2;
	}

IL_0089:
	{
		// foreach (var y in Colliders)
		SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		// Gizmos.DrawWireSphere(y.Offset, y.Radius);
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_25 = V_3;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___Offset_0;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_27 = V_3;
		NullCheck(L_27);
		float L_28 = L_27->___Radius_1;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_26, L_28, NULL);
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a2:
	{
		// foreach (var y in Colliders)
		int32_t L_30 = V_2;
		SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UniGLTF.Validation> VRM.VRMSpringBoneColliderGroup::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VRMSpringBoneColliderGroup_Validate_m829C4B866225C8966FDCBAFC6A8D0AFC8991A75E (VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* L_0 = (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945*)il2cpp_codegen_object_new(U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CValidateU3Ed__4__ctor_m8BD1A44E1B47C1337C3C0E406FD569CCEEE4AA53(L_0, ((int32_t)-2), NULL);
		U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void VRM.VRMSpringBoneColliderGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringBoneColliderGroup__ctor_m1FD879354F991FF5C6FFC52DFDB60D3D73C62E32 (VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SphereCollider[] Colliders = new SphereCollider[]{
		//     new SphereCollider
		//     {
		//         Radius=0.1f
		//     }
		// };
		SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_0 = (SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84*)(SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84*)SZArrayNew(SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84_il2cpp_TypeInfo_var, (uint32_t)1);
		SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_1 = L_0;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_2 = (SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B*)il2cpp_codegen_object_new(SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SphereCollider__ctor_m2BD72A7D87F951340AF71D4DCDA971F94C69578D(L_2, NULL);
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_3 = L_2;
		NullCheck(L_3);
		L_3->___Radius_1 = (0.100000001f);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B*)L_3);
		__this->___Colliders_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Colliders_4), (void*)L_1);
		// Color m_gizmoColor = Color.magenta;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		__this->___m_gizmoColor_5 = L_4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringBoneColliderGroup/SphereCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider__ctor_m2BD72A7D87F951340AF71D4DCDA971F94C69578D (SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringBoneColliderGroup/<Validate>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateU3Ed__4__ctor_m8BD1A44E1B47C1337C3C0E406FD569CCEEE4AA53 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateU3Ed__4_System_IDisposable_Dispose_m0B2A11257A6A406CC00D9D6E6C310A803FCC8832 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VRM.VRMSpringBoneColliderGroup/<Validate>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CValidateU3Ed__4_MoveNext_m6C73906B4057E9FF479DDA9DC4EC25CE08E0E5F8 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F01572F7851B19C0750EE421EBC8E6695CF82F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC330DDDF10507C5216435E7AC857A62401751631);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* V_1 = NULL;
	ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00c4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (transform.localScale != Vector3.one)
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_3 = V_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		bool L_7;
		L_7 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_007b;
		}
	}
	{
		// yield return Validation.Warning($"'{name}' GameObject has none 1 scaling");
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_9, _stringLiteralC330DDDF10507C5216435E7AC857A62401751631, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7));
		ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 L_11 = V_2;
		Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 L_12;
		L_12 = Validation_Warning_m19A5F60B1301F167D7F6F6CB7EF72861B905ECC7(L_10, L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Type_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Context_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Extended_2), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00cb;
	}

IL_007b:
	{
		// else if (transform.lossyScale != Vector3.one)
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		bool L_17;
		L_17 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		// yield return Validation.Warning($"'{name}' parent GameObject has none 1 scaling");
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_19, _stringLiteral2F01572F7851B19C0750EE421EBC8E6695CF82F6, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7));
		ValidationContext_t0225E009DD42E60C97E6E9C7027584A5AEFF52D7 L_21 = V_2;
		Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 L_22;
		L_22 = Validation_Warning_m19A5F60B1301F167D7F6F6CB7EF72861B905ECC7(L_20, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Type_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Context_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E2__current_1))->___Context_2))->___Extended_2), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cb:
	{
		// }
		return (bool)0;
	}
}
// UniGLTF.Validation VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.Generic.IEnumerator<UniGLTF.Validation>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 U3CValidateU3Ed__4_System_Collections_Generic_IEnumeratorU3CUniGLTF_ValidationU3E_get_Current_m4C6C639DA3A4800FBFBE006370DF964740EBEB9D (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	{
		Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateU3Ed__4_System_Collections_IEnumerator_Reset_m16FE925D874CF43A1846239161873E6157CD70DC (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CValidateU3Ed__4_System_Collections_IEnumerator_Reset_m16FE925D874CF43A1846239161873E6157CD70DC_RuntimeMethod_var)));
	}
}
// System.Object VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValidateU3Ed__4_System_Collections_IEnumerator_get_Current_m7DFCE839032718824186BF0FAD541146A3BA0FDA (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 L_0 = __this->___U3CU3E2__current_1;
		Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851 L_1 = L_0;
		RuntimeObject* L_2 = Box(Validation_tCD3180A500DE59D3CD3D02697F33FC2E12AA7851_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UniGLTF.Validation> VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.Generic.IEnumerable<UniGLTF.Validation>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValidateU3Ed__4_System_Collections_Generic_IEnumerableU3CUniGLTF_ValidationU3E_GetEnumerator_m9F63711D1F72A1ACD292C5E63ACFF86B32E6C579 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* L_3 = (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945*)il2cpp_codegen_object_new(U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CValidateU3Ed__4__ctor_m8BD1A44E1B47C1337C3C0E406FD569CCEEE4AA53(L_3, 0, NULL);
		V_0 = L_3;
		U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* L_4 = V_0;
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator VRM.VRMSpringBoneColliderGroup/<Validate>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValidateU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mC9F55C13EC59B774FE36C1E934620B79423C79A8 (U3CValidateU3Ed__4_tB02BE7161A7665F5E8C4F7D20A22D36CBA1D5945* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CValidateU3Ed__4_System_Collections_Generic_IEnumerableU3CUniGLTF_ValidationU3E_GetEnumerator_m9F63711D1F72A1ACD292C5E63ACFF86B32E6C579(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringUtility::ExportSecondary(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>,System.Action`1<VRM.glTF_VRM_SecondaryAnimationColliderGroup>,System.Action`1<VRM.glTF_VRM_SecondaryAnimationGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringUtility_ExportSecondary_m98BF1D6E859E54DFCC40D4ED404CA0AA9137B605 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___nodes1, Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF* ___addSecondaryColliderGroup2, Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* ___addSecondaryGroup3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m5194CC0A46D78591CFAB7479E2755E085740106F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mAB4D87BFF165FED0E0332767C10D91A97F332EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F866F74B066BE08C5275EF192E6ADA8790F7DCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD5E8D3D10C10F0313DCD3DC989CB22F8B41AB80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62F7EB1C8A11493C714F220B377DE1B31ACA8AE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mD576F7AC9AD25A66C196CD879116F56479ACF045_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mE8F3A254410EC51EF694E1B8C96ACD88C1FAC857_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m382FC72CA81B322EBB512BB3D167939D277335F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4D6CCC91C0B0AD967021E06032EDBA5CE8E769A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t97B7322162B526FD60D567B2618C5549C83972FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t292A0A87731385EC6A02FD7408EBEE1EC3D5FED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDF1AC10D46AE318D2D295ABCBADD780F86420FF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_0_m7C4CB06524630C1F73B748E4FF2F2A5FF151CB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_1_mBD60BD04261A68E049E2EB1D43FFD911495E8AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_2_mD9C520FF028762E1A21523C0F760C05F82BDC0B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_3_mD84963AB56D8DD9001DC77F89CEF63F81FE5AFB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_4_mB583880649EF22C33B5D5BCA30A0A5583E5D7CD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportSecondaryU3Eb__0_6_m57DD5BF77C8A973D257F56D3F37AE194A4AFEDAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__5_m32728DBEEDEC988678DEC972FADE898165DE04A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__7_m4464F589CE8FE9B6201D36D29103AEF1BC41E300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* V_2 = NULL;
	glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* V_5 = NULL;
	Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* V_6 = NULL;
	Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* V_7 = NULL;
	Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* G_B8_0 = NULL;
	SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* G_B8_1 = NULL;
	glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* G_B8_2 = NULL;
	Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* G_B7_0 = NULL;
	SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* G_B7_1 = NULL;
	glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* G_B7_2 = NULL;
	Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* G_B22_0 = NULL;
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* G_B22_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B22_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B22_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B22_4 = NULL;
	Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* G_B21_0 = NULL;
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* G_B21_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B21_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B21_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B21_4 = NULL;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* G_B24_0 = NULL;
	RuntimeObject* G_B24_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B24_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B24_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B24_4 = NULL;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* G_B23_0 = NULL;
	RuntimeObject* G_B23_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B23_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B23_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B23_4 = NULL;
	Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* G_B26_0 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* G_B26_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B26_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B26_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B26_4 = NULL;
	Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* G_B25_0 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* G_B25_1 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B25_2 = NULL;
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* G_B25_3 = NULL;
	Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* G_B25_4 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_0 = (U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m65EEF87A79440B8E7EB65FFEF0E39C448E4626A0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_1 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = ___nodes1;
		NullCheck(L_1);
		L_1->___nodes_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___nodes_1), (void*)L_2);
		// var colliders = new List<VRMSpringBoneColliderGroup>();
		U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_3 = V_0;
		List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_4 = (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*)il2cpp_codegen_object_new(List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D(L_4, List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___colliders_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___colliders_0), (void*)L_4);
		// foreach (var vrmColliderGroup in root.Traverse()
		//     .Select(x => x.GetComponent<VRMSpringBoneColliderGroup>())
		//     .Where(x => x != null))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___root0;
		RuntimeObject* L_6;
		L_6 = UnityExtensions_Traverse_m17E8CA122F9C0F5FC51E94DC1B790B84B6228C14(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* L_7 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_9 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* L_10 = (Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D*)il2cpp_codegen_object_new(Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m9796F34DA92FDDA0A01CA7D278F20C4145653693(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_0_m7C4CB06524630C1F73B748E4FF2F2A5FF151CB6A_RuntimeMethod_var), NULL);
		Func_2_t8C04AA855A2E3DA5EAB3A8F1824B64E65303550D* L_11 = L_10;
		((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_003d:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD5E8D3D10C10F0313DCD3DC989CB22F8B41AB80A(G_B2_1, G_B2_0, Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD5E8D3D10C10F0313DCD3DC989CB22F8B41AB80A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* L_13 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
		Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_15 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* L_16 = (Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6*)il2cpp_codegen_object_new(Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_2__ctor_m5B5E3F9F64A3599CCCA9AD1B90B18741C83633B3(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_1_mBD60BD04261A68E049E2EB1D43FFD911495E8AC6_RuntimeMethod_var), NULL);
		Func_2_tFEAB315FADB0A4BCBEF37AF854E0C06569917FB6* L_17 = L_16;
		((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
	}

IL_0061:
	{
		RuntimeObject* L_18;
		L_18 = Enumerable_Where_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mE8F3A254410EC51EF694E1B8C96ACD88C1FAC857(G_B4_1, G_B4_0, Enumerable_Where_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mE8F3A254410EC51EF694E1B8C96ACD88C1FAC857_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBoneColliderGroup>::GetEnumerator() */, IEnumerable_1_t4D6CCC91C0B0AD967021E06032EDBA5CE8E769A7_il2cpp_TypeInfo_var, L_18);
		V_1 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_20 = V_1;
					if (!L_20)
					{
						goto IL_00ed;
					}
				}
				{
					RuntimeObject* L_21 = V_1;
					NullCheck(L_21);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
				}

IL_00ed:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_006e_1:
			{
				// foreach (var vrmColliderGroup in root.Traverse()
				RuntimeObject* L_22 = V_1;
				NullCheck(L_22);
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_23;
				L_23 = InterfaceFuncInvoker0< VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VRM.VRMSpringBoneColliderGroup>::get_Current() */, IEnumerator_1_tDF1AC10D46AE318D2D295ABCBADD780F86420FF1_il2cpp_TypeInfo_var, L_22);
				V_2 = L_23;
				// colliders.Add(vrmColliderGroup);
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_24 = V_0;
				NullCheck(L_24);
				List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_25 = L_24->___colliders_0;
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_26 = V_2;
				NullCheck(L_25);
				List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_inline(L_25, L_26, List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_RuntimeMethod_var);
				// var colliderGroup = new glTF_VRM_SecondaryAnimationColliderGroup
				// {
				//     node = nodes.IndexOf(vrmColliderGroup.transform)
				// };
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_27 = (glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1*)il2cpp_codegen_object_new(glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				glTF_VRM_SecondaryAnimationColliderGroup__ctor_mFCF1AD82CCFE5E2BD09CDCC25AF79DC37DCA52BE(L_27, NULL);
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_28 = L_27;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_29 = V_0;
				NullCheck(L_29);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = L_29->___nodes_1;
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_31 = V_2;
				NullCheck(L_31);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
				NullCheck(L_30);
				int32_t L_33;
				L_33 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_30, L_32, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
				NullCheck(L_28);
				L_28->___node_0 = L_33;
				V_3 = L_28;
				// colliderGroup.colliders = vrmColliderGroup.Colliders.Select(x =>
				// {
				//     return new glTF_VRM_SecondaryAnimationCollider
				//     {
				//         offset = x.Offset,
				//         radius = x.Radius,
				//     };
				// }).ToList();
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_34 = V_3;
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_35 = V_2;
				NullCheck(L_35);
				SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_36 = L_35->___Colliders_4;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* L_37 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3;
				Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* L_38 = L_37;
				G_B7_0 = L_38;
				G_B7_1 = L_36;
				G_B7_2 = L_34;
				if (L_38)
				{
					G_B8_0 = L_38;
					G_B8_1 = L_36;
					G_B8_2 = L_34;
					goto IL_00c4_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_39 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* L_40 = (Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC*)il2cpp_codegen_object_new(Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC_il2cpp_TypeInfo_var);
				NullCheck(L_40);
				Func_2__ctor_m81DC61B6D496B1ACAEAF9558D7FE27A527675A17(L_40, L_39, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_2_mD9C520FF028762E1A21523C0F760C05F82BDC0B0_RuntimeMethod_var), NULL);
				Func_2_t377F853797016BC0EF09F567BFEAD7AD54F530DC* L_41 = L_40;
				((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3), (void*)L_41);
				G_B8_0 = L_41;
				G_B8_1 = G_B7_1;
				G_B8_2 = G_B7_2;
			}

IL_00c4_1:
			{
				RuntimeObject* L_42;
				L_42 = Enumerable_Select_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mAB4D87BFF165FED0E0332767C10D91A97F332EA1((RuntimeObject*)G_B8_1, G_B8_0, Enumerable_Select_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mAB4D87BFF165FED0E0332767C10D91A97F332EA1_RuntimeMethod_var);
				List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* L_43;
				L_43 = Enumerable_ToList_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mD576F7AC9AD25A66C196CD879116F56479ACF045(L_42, Enumerable_ToList_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_mD576F7AC9AD25A66C196CD879116F56479ACF045_RuntimeMethod_var);
				NullCheck(G_B8_2);
				G_B8_2->___colliders_1 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___colliders_1), (void*)L_43);
				// addSecondaryColliderGroup(colliderGroup);
				Action_1_t9003D0468E8AA5631A7E485FF1FF071A69E72EDF* L_44 = ___addSecondaryColliderGroup2;
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_45 = V_3;
				NullCheck(L_44);
				Action_1_Invoke_m3B82E774F3FC47EE5C27D544F353DE4720FBE7B2_inline(L_44, L_45, NULL);
			}

IL_00da_1:
			{
				// foreach (var vrmColliderGroup in root.Traverse()
				RuntimeObject* L_46 = V_1;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// foreach (var spring in root.Traverse()
		//     .SelectMany(x => x.GetComponents<VRMSpringBone>())
		//     .Where(x => x != null))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = ___root0;
		RuntimeObject* L_49;
		L_49 = UnityExtensions_Traverse_m17E8CA122F9C0F5FC51E94DC1B790B84B6228C14(L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* L_50 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4;
		Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* L_51 = L_50;
		G_B15_0 = L_51;
		G_B15_1 = L_49;
		if (L_51)
		{
			G_B16_0 = L_51;
			G_B16_1 = L_49;
			goto IL_0113;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_52 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* L_53 = (Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE*)il2cpp_codegen_object_new(Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Func_2__ctor_mFB08707CBB44B03F3C527B381C93404BE7FBD3FF(L_53, L_52, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_3_mD84963AB56D8DD9001DC77F89CEF63F81FE5AFB8_RuntimeMethod_var), NULL);
		Func_2_tAF126786B39DC5F905ED81223E90CCD346EA87DE* L_54 = L_53;
		((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_4), (void*)L_54);
		G_B16_0 = L_54;
		G_B16_1 = G_B15_1;
	}

IL_0113:
	{
		RuntimeObject* L_55;
		L_55 = Enumerable_SelectMany_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m5194CC0A46D78591CFAB7479E2755E085740106F(G_B16_1, G_B16_0, Enumerable_SelectMany_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m5194CC0A46D78591CFAB7479E2755E085740106F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* L_56 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5;
		Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* L_57 = L_56;
		G_B17_0 = L_57;
		G_B17_1 = L_55;
		if (L_57)
		{
			G_B18_0 = L_57;
			G_B18_1 = L_55;
			goto IL_0137;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_58 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* L_59 = (Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D*)il2cpp_codegen_object_new(Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Func_2__ctor_mCDEE99273DCFF7ABC2DF26AED203724F0E26BDED(L_59, L_58, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_4_mB583880649EF22C33B5D5BCA30A0A5583E5D7CD3_RuntimeMethod_var), NULL);
		Func_2_t662BE3911F8F8CE90C78B3626EDDA4224882F49D* L_60 = L_59;
		((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_5), (void*)L_60);
		G_B18_0 = L_60;
		G_B18_1 = G_B17_1;
	}

IL_0137:
	{
		RuntimeObject* L_61;
		L_61 = Enumerable_Where_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m382FC72CA81B322EBB512BB3D167939D277335F6(G_B18_1, G_B18_0, Enumerable_Where_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m382FC72CA81B322EBB512BB3D167939D277335F6_RuntimeMethod_var);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone>::GetEnumerator() */, IEnumerable_1_t97B7322162B526FD60D567B2618C5549C83972FD_il2cpp_TypeInfo_var, L_61);
		V_4 = L_62;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0264:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_63 = V_4;
					if (!L_63)
					{
						goto IL_026f;
					}
				}
				{
					RuntimeObject* L_64 = V_4;
					NullCheck(L_64);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_64);
				}

IL_026f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0256_1;
			}

IL_0148_1:
			{
				// foreach (var spring in root.Traverse()
				RuntimeObject* L_65 = V_4;
				NullCheck(L_65);
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_66;
				L_66 = InterfaceFuncInvoker0< VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VRM.VRMSpringBone>::get_Current() */, IEnumerator_1_t292A0A87731385EC6A02FD7408EBEE1EC3D5FED0_il2cpp_TypeInfo_var, L_65);
				V_5 = L_66;
				// addSecondaryGroup(new glTF_VRM_SecondaryAnimationGroup
				// {
				//     comment = spring.m_comment,
				//     center = nodes.IndexOf(spring.m_center),
				//     dragForce = spring.m_dragForce,
				//     gravityDir = spring.m_gravityDir,
				//     gravityPower = spring.m_gravityPower,
				//     stiffiness = spring.m_stiffnessForce,
				//     hitRadius = spring.m_hitRadius,
				//     colliderGroups = spring.ColliderGroups
				//         .Select(x => colliders.IndexOf(x))
				//         .Where(x => x != -1)
				//         .ToArray(),
				//     bones = spring.RootBones.Select(x => nodes.IndexOf(x)).ToArray(),
				// });
				Action_1_tF16183FF3DA48AA3CE02AC8EF85F555D6FE52890* L_67 = ___addSecondaryGroup3;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_68 = (glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A*)il2cpp_codegen_object_new(glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A_il2cpp_TypeInfo_var);
				NullCheck(L_68);
				glTF_VRM_SecondaryAnimationGroup__ctor_mD2687188428E88AD6BE833D92F3B14BEFA8DF541(L_68, NULL);
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_69 = L_68;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_70 = V_5;
				NullCheck(L_70);
				String_t* L_71 = L_70->___m_comment_4;
				NullCheck(L_69);
				L_69->___comment_0 = L_71;
				Il2CppCodeGenWriteBarrier((void**)(&L_69->___comment_0), (void*)L_71);
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_72 = L_69;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_73 = V_0;
				NullCheck(L_73);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_74 = L_73->___nodes_1;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_75 = V_5;
				NullCheck(L_75);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = L_75->___m_center_10;
				NullCheck(L_74);
				int32_t L_77;
				L_77 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_74, L_76, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
				NullCheck(L_72);
				L_72->___center_5 = L_77;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_78 = L_72;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_79 = V_5;
				NullCheck(L_79);
				float L_80 = L_79->___m_dragForce_9;
				NullCheck(L_78);
				L_78->___dragForce_4 = L_80;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_81 = L_78;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_82 = V_5;
				NullCheck(L_82);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = L_82->___m_gravityDir_8;
				NullCheck(L_81);
				L_81->___gravityDir_3 = L_83;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_84 = L_81;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_85 = V_5;
				NullCheck(L_85);
				float L_86 = L_85->___m_gravityPower_7;
				NullCheck(L_84);
				L_84->___gravityPower_2 = L_86;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_87 = L_84;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_88 = V_5;
				NullCheck(L_88);
				float L_89 = L_88->___m_stiffnessForce_6;
				NullCheck(L_87);
				L_87->___stiffiness_1 = L_89;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_90 = L_87;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_91 = V_5;
				NullCheck(L_91);
				float L_92 = L_91->___m_hitRadius_13;
				NullCheck(L_90);
				L_90->___hitRadius_6 = L_92;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_93 = L_90;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_94 = V_5;
				NullCheck(L_94);
				VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_95 = L_94->___ColliderGroups_14;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_96 = V_0;
				NullCheck(L_96);
				Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* L_97 = L_96->___U3CU3E9__5_2;
				Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* L_98 = L_97;
				G_B21_0 = L_98;
				G_B21_1 = L_95;
				G_B21_2 = L_93;
				G_B21_3 = L_93;
				G_B21_4 = L_67;
				if (L_98)
				{
					G_B22_0 = L_98;
					G_B22_1 = L_95;
					G_B22_2 = L_93;
					G_B22_3 = L_93;
					G_B22_4 = L_67;
					goto IL_01e6_1;
				}
			}
			{
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_99 = V_0;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_100 = V_0;
				Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* L_101 = (Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899*)il2cpp_codegen_object_new(Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899_il2cpp_TypeInfo_var);
				NullCheck(L_101);
				Func_2__ctor_m89C7CFE7663B251180D3FCA0F8BC6A05E9672F24(L_101, L_100, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__5_m32728DBEEDEC988678DEC972FADE898165DE04A1_RuntimeMethod_var), NULL);
				Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* L_102 = L_101;
				V_6 = L_102;
				NullCheck(L_99);
				L_99->___U3CU3E9__5_2 = L_102;
				Il2CppCodeGenWriteBarrier((void**)(&L_99->___U3CU3E9__5_2), (void*)L_102);
				Func_2_tB88B199A68FE754D28B59BA8369A74FA959BF899* L_103 = V_6;
				G_B22_0 = L_103;
				G_B22_1 = G_B21_1;
				G_B22_2 = G_B21_2;
				G_B22_3 = G_B21_3;
				G_B22_4 = G_B21_4;
			}

IL_01e6_1:
			{
				RuntimeObject* L_104;
				L_104 = Enumerable_Select_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62F7EB1C8A11493C714F220B377DE1B31ACA8AE6((RuntimeObject*)G_B22_1, G_B22_0, Enumerable_Select_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62F7EB1C8A11493C714F220B377DE1B31ACA8AE6_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_105 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_6;
				Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_106 = L_105;
				G_B23_0 = L_106;
				G_B23_1 = L_104;
				G_B23_2 = G_B22_2;
				G_B23_3 = G_B22_3;
				G_B23_4 = G_B22_4;
				if (L_106)
				{
					G_B24_0 = L_106;
					G_B24_1 = L_104;
					G_B24_2 = G_B22_2;
					G_B24_3 = G_B22_3;
					G_B24_4 = G_B22_4;
					goto IL_020a_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_107 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_108 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)il2cpp_codegen_object_new(Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA_il2cpp_TypeInfo_var);
				NullCheck(L_108);
				Func_2__ctor_mF0ABAE563501FB4B795991365F3011147BE07E2E(L_108, L_107, (intptr_t)((void*)U3CU3Ec_U3CExportSecondaryU3Eb__0_6_m57DD5BF77C8A973D257F56D3F37AE194A4AFEDAF_RuntimeMethod_var), NULL);
				Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_109 = L_108;
				((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_6 = L_109;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__0_6_6), (void*)L_109);
				G_B24_0 = L_109;
				G_B24_1 = G_B23_1;
				G_B24_2 = G_B23_2;
				G_B24_3 = G_B23_3;
				G_B24_4 = G_B23_4;
			}

IL_020a_1:
			{
				RuntimeObject* L_110;
				L_110 = Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E(G_B24_1, G_B24_0, Enumerable_Where_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6ED7DDC420D3C584B082D9D90C6655E11E9E514E_RuntimeMethod_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111;
				L_111 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_110, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
				NullCheck(G_B24_2);
				G_B24_2->___colliderGroups_8 = L_111;
				Il2CppCodeGenWriteBarrier((void**)(&G_B24_2->___colliderGroups_8), (void*)L_111);
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_112 = G_B24_3;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_113 = V_5;
				NullCheck(L_113);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_114 = L_113->___RootBones_11;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_115 = V_0;
				NullCheck(L_115);
				Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* L_116 = L_115->___U3CU3E9__7_3;
				Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* L_117 = L_116;
				G_B25_0 = L_117;
				G_B25_1 = L_114;
				G_B25_2 = L_112;
				G_B25_3 = L_112;
				G_B25_4 = G_B24_4;
				if (L_117)
				{
					G_B26_0 = L_117;
					G_B26_1 = L_114;
					G_B26_2 = L_112;
					G_B26_3 = L_112;
					G_B26_4 = G_B24_4;
					goto IL_0242_1;
				}
			}
			{
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_118 = V_0;
				U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* L_119 = V_0;
				Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* L_120 = (Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA*)il2cpp_codegen_object_new(Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA_il2cpp_TypeInfo_var);
				NullCheck(L_120);
				Func_2__ctor_m89100D93499CE0365FE89060D1DC0F66AC0389DD(L_120, L_119, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__7_m4464F589CE8FE9B6201D36D29103AEF1BC41E300_RuntimeMethod_var), NULL);
				Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* L_121 = L_120;
				V_7 = L_121;
				NullCheck(L_118);
				L_118->___U3CU3E9__7_3 = L_121;
				Il2CppCodeGenWriteBarrier((void**)(&L_118->___U3CU3E9__7_3), (void*)L_121);
				Func_2_t5AAE199652FA6E547AF1582EB0DB2EACA4B700CA* L_122 = V_7;
				G_B26_0 = L_122;
				G_B26_1 = G_B25_1;
				G_B26_2 = G_B25_2;
				G_B26_3 = G_B25_3;
				G_B26_4 = G_B25_4;
			}

IL_0242_1:
			{
				RuntimeObject* L_123;
				L_123 = Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F866F74B066BE08C5275EF192E6ADA8790F7DCE(G_B26_1, G_B26_0, Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5F866F74B066BE08C5275EF192E6ADA8790F7DCE_RuntimeMethod_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124;
				L_124 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_123, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
				NullCheck(G_B26_2);
				G_B26_2->___bones_7 = L_124;
				Il2CppCodeGenWriteBarrier((void**)(&G_B26_2->___bones_7), (void*)L_124);
				NullCheck(G_B26_4);
				Action_1_Invoke_m1E667E821294B47605FC8AB62094EF1C6A788DC0_inline(G_B26_4, G_B26_3, NULL);
			}

IL_0256_1:
			{
				// foreach (var spring in root.Traverse()
				RuntimeObject* L_125 = V_4;
				NullCheck(L_125);
				bool L_126;
				L_126 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_125);
				if (L_126)
				{
					goto IL_0148_1;
				}
			}
			{
				goto IL_0270;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0270:
	{
		// }
		return;
	}
}
// System.Void VRM.VRMSpringUtility::LoadSecondary(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>,VRM.glTF_VRM_SecondaryAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRMSpringUtility_LoadSecondary_m663233E5547C65B5E74B95D29D2D6A0A6799757E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___nodes1, glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC* ___secondaryAnimation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD05687886F171BC9373C7EB5FDBE188B5A2588DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m91DE44E48D5E557B751010D2C4CA6F69932111B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_mC71216F2B567E293C4487CED4F47165F141C61EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_m3401864239E9EBDB780D3A9DC1D78534B509B26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m09EAF4E954341025C635738CB8FB15C6ACE92640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1DE55CBD02A358A77A34D4BFDE2A841D3058058E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m15062B3E7144774045440A7F77940E37EFEEA011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEF45CFB3005C7FF94DC9E958DEE34D2F85B5F0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D16BCB0CD8B61C3D26000504D6726FDF0A3DF29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEB4D326E5E3EC8C8B72D385A2974123096EC5B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mAD5DC2870272324854FAA491DE45269BF0BD866D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m07006EEB5D5FA507C2B70EEA1A0B5EFC8B1AFC74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD4EEFE7CA6371EAA8C1CB4DBBD42042FC582758D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF6CE70FA42A6BE59E7855F1D8C89A4DBE2C7258D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7C05A23C1670C42B3815018C32552CCC06C2F87D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadSecondaryU3Eb__1_0_m1DFD9A671C6276235A7EE2917346010729E31654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1ECD956B7E4E74651008E98FEBFB3E2411DECE4);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* V_1 = NULL;
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* V_2 = NULL;
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* V_3 = NULL;
	int32_t V_4 = 0;
	List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* V_5 = NULL;
	VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* V_6 = NULL;
	int32_t V_7 = 0;
	VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* V_8 = NULL;
	VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* V_9 = NULL;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* V_10 = NULL;
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* V_11 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_12 = NULL;
	Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3 V_13;
	memset((&V_13), 0, sizeof(V_13));
	glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* V_14 = NULL;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* V_15 = NULL;
	Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* V_17 = NULL;
	VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* V_18 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_19 = NULL;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* G_B26_0 = NULL;
	List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* G_B26_1 = NULL;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* G_B26_2 = NULL;
	Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* G_B25_0 = NULL;
	List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* G_B25_1 = NULL;
	VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* G_B25_2 = NULL;
	{
		// var secondary = root.Find("secondary");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___root0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralD1ECD956B7E4E74651008E98FEBFB3E2411DECE4, NULL);
		V_0 = L_1;
		// if (secondary == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// secondary = new GameObject("secondary").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteralD1ECD956B7E4E74651008E98FEBFB3E2411DECE4, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		V_0 = L_5;
		// secondary.SetParent(root, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___root0;
		NullCheck(L_6);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_6, L_7, (bool)0, NULL);
	}

IL_002d:
	{
		// var vrmSpringBones = root.GetComponentsInChildren<VRMSpringBone>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___root0;
		NullCheck(L_8);
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_9;
		L_9 = Component_GetComponentsInChildren_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m91DE44E48D5E557B751010D2C4CA6F69932111B7(L_8, Component_GetComponentsInChildren_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_m91DE44E48D5E557B751010D2C4CA6F69932111B7_RuntimeMethod_var);
		V_1 = L_9;
		// var vrmSpringBoneColliderGroup = root.GetComponentsInChildren<VRMSpringBoneColliderGroup>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___root0;
		NullCheck(L_10);
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_11;
		L_11 = Component_GetComponentsInChildren_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD05687886F171BC9373C7EB5FDBE188B5A2588DC(L_10, Component_GetComponentsInChildren_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mD05687886F171BC9373C7EB5FDBE188B5A2588DC_RuntimeMethod_var);
		V_2 = L_11;
		// var length = (vrmSpringBones?.Length ?? 0) + (vrmSpringBoneColliderGroup?.Length ?? 0);
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_12 = V_1;
		if (L_12)
		{
			goto IL_0041;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0044;
	}

IL_0041:
	{
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_13 = V_1;
		NullCheck(L_13);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
	}

IL_0044:
	{
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_14 = V_2;
		G_B6_0 = G_B5_0;
		if (L_14)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_004d;
	}

IL_004a:
	{
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_15 = V_2;
		NullCheck(L_15);
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_15)->max_length));
		G_B8_1 = G_B7_0;
	}

IL_004d:
	{
		// var remove = new Component[length];
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_16 = (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)(ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)SZArrayNew(ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(G_B8_1, G_B8_0)));
		V_3 = L_16;
		// var index = 0;
		V_4 = 0;
		// if (vrmSpringBones != null)
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_17 = V_1;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// foreach (var vrmSpringBone in vrmSpringBones)
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_18 = V_1;
		V_6 = L_18;
		V_7 = 0;
		goto IL_007a;
	}

IL_0062:
	{
		// foreach (var vrmSpringBone in vrmSpringBones)
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// remove[index++] = vrmSpringBone;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_23 = V_3;
		int32_t L_24 = V_4;
		int32_t L_25 = L_24;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_26 = V_8;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_26);
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007a:
	{
		// foreach (var vrmSpringBone in vrmSpringBones)
		int32_t L_28 = V_7;
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0062;
		}
	}

IL_0082:
	{
		// if (vrmSpringBoneColliderGroup != null)
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_30 = V_2;
		if (!L_30)
		{
			goto IL_00ad;
		}
	}
	{
		// foreach (var vrmSpringBoneCollider in vrmSpringBoneColliderGroup)
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_31 = V_2;
		V_9 = L_31;
		V_7 = 0;
		goto IL_00a5;
	}

IL_008d:
	{
		// foreach (var vrmSpringBoneCollider in vrmSpringBoneColliderGroup)
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_32 = V_9;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_10 = L_35;
		// remove[index++] = vrmSpringBoneCollider;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_36 = V_3;
		int32_t L_37 = V_4;
		int32_t L_38 = L_37;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_39 = V_10;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_39);
		int32_t L_40 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00a5:
	{
		// foreach (var vrmSpringBoneCollider in vrmSpringBoneColliderGroup)
		int32_t L_41 = V_7;
		VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_42 = V_9;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00ad:
	{
		// foreach (var x in remove)
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_43 = V_3;
		V_11 = L_43;
		V_7 = 0;
		goto IL_00d9;
	}

IL_00b5:
	{
		// foreach (var x in remove)
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_44 = V_11;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_12 = L_47;
		// if (Application.isPlaying)
		bool L_48;
		L_48 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_48)
		{
			goto IL_00cc;
		}
	}
	{
		// GameObject.Destroy(x);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_49 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_49, NULL);
		goto IL_00d3;
	}

IL_00cc:
	{
		// GameObject.DestroyImmediate(x);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_50 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_50, NULL);
	}

IL_00d3:
	{
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00d9:
	{
		// foreach (var x in remove)
		int32_t L_52 = V_7;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_53 = V_11;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00b5;
		}
	}
	{
		// var colliders = new List<VRMSpringBoneColliderGroup>();
		List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_54 = (List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501*)il2cpp_codegen_object_new(List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D(L_54, List_1__ctor_m7F13CD1264681905C12D6B79209F8C181A135E0D_RuntimeMethod_var);
		V_5 = L_54;
		// foreach (var colliderGroup in secondaryAnimation.colliderGroups)
		glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC* L_55 = ___secondaryAnimation2;
		NullCheck(L_55);
		List_1_t96740310BCEB10677E98B4A6C97111A4F65992F3* L_56 = L_55->___colliderGroups_1;
		NullCheck(L_56);
		Enumerator_tF5D9E17D95C028862FEBB0CED2F28E2E838669F3 L_57;
		L_57 = List_1_GetEnumerator_m07006EEB5D5FA507C2B70EEA1A0B5EFC8B1AFC74(L_56, List_1_GetEnumerator_m07006EEB5D5FA507C2B70EEA1A0B5EFC8B1AFC74_RuntimeMethod_var);
		V_13 = L_57;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0164:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1DE55CBD02A358A77A34D4BFDE2A841D3058058E((&V_13), Enumerator_Dispose_m1DE55CBD02A358A77A34D4BFDE2A841D3058058E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0159_1;
			}

IL_00f7_1:
			{
				// foreach (var colliderGroup in secondaryAnimation.colliderGroups)
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_58;
				L_58 = Enumerator_get_Current_mEB4D326E5E3EC8C8B72D385A2974123096EC5B9A_inline((&V_13), Enumerator_get_Current_mEB4D326E5E3EC8C8B72D385A2974123096EC5B9A_RuntimeMethod_var);
				V_14 = L_58;
				// var vrmGroup = nodes[colliderGroup.node].gameObject.AddComponent<VRMSpringBoneColliderGroup>();
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_59 = ___nodes1;
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_60 = V_14;
				NullCheck(L_60);
				int32_t L_61 = L_60->___node_0;
				NullCheck(L_59);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
				L_62 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_59, L_61, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				NullCheck(L_62);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
				L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_62, NULL);
				NullCheck(L_63);
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_64;
				L_64 = GameObject_AddComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mAD5DC2870272324854FAA491DE45269BF0BD866D(L_63, GameObject_AddComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mAD5DC2870272324854FAA491DE45269BF0BD866D_RuntimeMethod_var);
				V_15 = L_64;
				// vrmGroup.Colliders = colliderGroup.colliders.Select(x =>
				// {
				//     return new VRMSpringBoneColliderGroup.SphereCollider
				//     {
				//         Offset = x.offset,
				//         Radius = x.radius
				//     };
				// }).ToArray();
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_65 = V_15;
				glTF_VRM_SecondaryAnimationColliderGroup_t49F0E23AA07EF3128200333A389E859030C9CEB1* L_66 = V_14;
				NullCheck(L_66);
				List_1_t489CE9D6242B26D9B9627F74045D16B51992BF85* L_67 = L_66->___colliders_1;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* L_68 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_7;
				Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* L_69 = L_68;
				G_B25_0 = L_69;
				G_B25_1 = L_67;
				G_B25_2 = L_65;
				if (L_69)
				{
					G_B26_0 = L_69;
					G_B26_1 = L_67;
					G_B26_2 = L_65;
					goto IL_0141_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
				U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_70 = ((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* L_71 = (Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2*)il2cpp_codegen_object_new(Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2_il2cpp_TypeInfo_var);
				NullCheck(L_71);
				Func_2__ctor_mC15E1DB80824E09433758F30CFC01C7A683AA1F7(L_71, L_70, (intptr_t)((void*)U3CU3Ec_U3CLoadSecondaryU3Eb__1_0_m1DFD9A671C6276235A7EE2917346010729E31654_RuntimeMethod_var), NULL);
				Func_2_t53F9929673A2EE91E9DC53AAB1B521EDB5022DE2* L_72 = L_71;
				((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_7 = L_72;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_7), (void*)L_72);
				G_B26_0 = L_72;
				G_B26_1 = G_B25_1;
				G_B26_2 = G_B25_2;
			}

IL_0141_1:
			{
				RuntimeObject* L_73;
				L_73 = Enumerable_Select_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_mC71216F2B567E293C4487CED4F47165F141C61EB(G_B26_1, G_B26_0, Enumerable_Select_TisglTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_mC71216F2B567E293C4487CED4F47165F141C61EB_RuntimeMethod_var);
				SphereColliderU5BU5D_tC0309B61D4C1F685165D860D370E129893102E84* L_74;
				L_74 = Enumerable_ToArray_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_m3401864239E9EBDB780D3A9DC1D78534B509B26E(L_73, Enumerable_ToArray_TisSphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_m3401864239E9EBDB780D3A9DC1D78534B509B26E_RuntimeMethod_var);
				NullCheck(G_B26_2);
				G_B26_2->___Colliders_4 = L_74;
				Il2CppCodeGenWriteBarrier((void**)(&G_B26_2->___Colliders_4), (void*)L_74);
				// colliders.Add(vrmGroup);
				List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_75 = V_5;
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_76 = V_15;
				NullCheck(L_75);
				List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_inline(L_75, L_76, List_1_Add_mC44B1109A51A3C74DAA306D16EC34AA3D1B863C0_RuntimeMethod_var);
			}

IL_0159_1:
			{
				// foreach (var colliderGroup in secondaryAnimation.colliderGroups)
				bool L_77;
				L_77 = Enumerator_MoveNext_mEF45CFB3005C7FF94DC9E958DEE34D2F85B5F0B4((&V_13), Enumerator_MoveNext_mEF45CFB3005C7FF94DC9E958DEE34D2F85B5F0B4_RuntimeMethod_var);
				if (L_77)
				{
					goto IL_00f7_1;
				}
			}
			{
				goto IL_0172;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0172:
	{
		// if (secondaryAnimation.boneGroups.Count > 0)
		glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC* L_78 = ___secondaryAnimation2;
		NullCheck(L_78);
		List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* L_79 = L_78->___boneGroups_0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_mF6CE70FA42A6BE59E7855F1D8C89A4DBE2C7258D_inline(L_79, List_1_get_Count_mF6CE70FA42A6BE59E7855F1D8C89A4DBE2C7258D_RuntimeMethod_var);
		if ((((int32_t)L_80) <= ((int32_t)0)))
		{
			goto IL_02de;
		}
	}
	{
		// foreach (var boneGroup in secondaryAnimation.boneGroups)
		glTF_VRM_SecondaryAnimation_t3E02A9DA1B411C3F722010596792F4CCC2E1F9CC* L_81 = ___secondaryAnimation2;
		NullCheck(L_81);
		List_1_t6FE73F92DAA06DC1621114DDCAD86C76C23D15EE* L_82 = L_81->___boneGroups_0;
		NullCheck(L_82);
		Enumerator_t843161CD90805CA0D01A06C5D3D094EF197DCFC7 L_83;
		L_83 = List_1_GetEnumerator_mD4EEFE7CA6371EAA8C1CB4DBBD42042FC582758D(L_82, List_1_GetEnumerator_mD4EEFE7CA6371EAA8C1CB4DBBD42042FC582758D_RuntimeMethod_var);
		V_16 = L_83;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02d0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m09EAF4E954341025C635738CB8FB15C6ACE92640((&V_16), Enumerator_Dispose_m09EAF4E954341025C635738CB8FB15C6ACE92640_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02c2_1;
			}

IL_0195_1:
			{
				// foreach (var boneGroup in secondaryAnimation.boneGroups)
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_84;
				L_84 = Enumerator_get_Current_m5D16BCB0CD8B61C3D26000504D6726FDF0A3DF29_inline((&V_16), Enumerator_get_Current_m5D16BCB0CD8B61C3D26000504D6726FDF0A3DF29_RuntimeMethod_var);
				V_17 = L_84;
				// var vrmBoneGroup = secondary.gameObject.AddComponent<VRMSpringBone>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = V_0;
				NullCheck(L_85);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
				L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
				NullCheck(L_86);
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_87;
				L_87 = GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7(L_86, GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7_RuntimeMethod_var);
				V_18 = L_87;
				// if (boneGroup.center != -1)
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_88 = V_17;
				NullCheck(L_88);
				int32_t L_89 = L_88->___center_5;
				if ((((int32_t)L_89) == ((int32_t)(-1))))
				{
					goto IL_01c9_1;
				}
			}
			{
				// vrmBoneGroup.m_center = nodes[boneGroup.center];
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_90 = V_18;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_91 = ___nodes1;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_92 = V_17;
				NullCheck(L_92);
				int32_t L_93 = L_92->___center_5;
				NullCheck(L_91);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
				L_94 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_91, L_93, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				NullCheck(L_90);
				L_90->___m_center_10 = L_94;
				Il2CppCodeGenWriteBarrier((void**)(&L_90->___m_center_10), (void*)L_94);
			}

IL_01c9_1:
			{
				// vrmBoneGroup.m_comment = boneGroup.comment;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_95 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_96 = V_17;
				NullCheck(L_96);
				String_t* L_97 = L_96->___comment_0;
				NullCheck(L_95);
				L_95->___m_comment_4 = L_97;
				Il2CppCodeGenWriteBarrier((void**)(&L_95->___m_comment_4), (void*)L_97);
				// vrmBoneGroup.m_dragForce = boneGroup.dragForce;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_98 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_99 = V_17;
				NullCheck(L_99);
				float L_100 = L_99->___dragForce_4;
				NullCheck(L_98);
				L_98->___m_dragForce_9 = L_100;
				// vrmBoneGroup.m_gravityDir = boneGroup.gravityDir;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_101 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_102 = V_17;
				NullCheck(L_102);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = L_102->___gravityDir_3;
				NullCheck(L_101);
				L_101->___m_gravityDir_8 = L_103;
				// vrmBoneGroup.m_gravityPower = boneGroup.gravityPower;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_104 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_105 = V_17;
				NullCheck(L_105);
				float L_106 = L_105->___gravityPower_2;
				NullCheck(L_104);
				L_104->___m_gravityPower_7 = L_106;
				// vrmBoneGroup.m_hitRadius = boneGroup.hitRadius;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_107 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_108 = V_17;
				NullCheck(L_108);
				float L_109 = L_108->___hitRadius_6;
				NullCheck(L_107);
				L_107->___m_hitRadius_13 = L_109;
				// vrmBoneGroup.m_stiffnessForce = boneGroup.stiffiness;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_110 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_111 = V_17;
				NullCheck(L_111);
				float L_112 = L_111->___stiffiness_1;
				NullCheck(L_110);
				L_110->___m_stiffnessForce_6 = L_112;
				// if (boneGroup.colliderGroups != null && boneGroup.colliderGroups.Any())
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_113 = V_17;
				NullCheck(L_113);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = L_113->___colliderGroups_8;
				if (!L_114)
				{
					goto IL_0280_1;
				}
			}
			{
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_115 = V_17;
				NullCheck(L_115);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = L_115->___colliderGroups_8;
				bool L_117;
				L_117 = Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C((RuntimeObject*)L_116, Enumerable_Any_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F745C2E29AD7260B441065DDB7957BC7090693C_RuntimeMethod_var);
				if (!L_117)
				{
					goto IL_0280_1;
				}
			}
			{
				// vrmBoneGroup.ColliderGroups = new VRMSpringBoneColliderGroup[boneGroup.colliderGroups.Length];
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_118 = V_18;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_119 = V_17;
				NullCheck(L_119);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = L_119->___colliderGroups_8;
				NullCheck(L_120);
				VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_121 = (VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316*)(VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316*)SZArrayNew(VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_120)->max_length)));
				NullCheck(L_118);
				L_118->___ColliderGroups_14 = L_121;
				Il2CppCodeGenWriteBarrier((void**)(&L_118->___ColliderGroups_14), (void*)L_121);
				// for (int i = 0; i < boneGroup.colliderGroups.Length; ++i)
				V_20 = 0;
				goto IL_0273_1;
			}

IL_024e_1:
			{
				// var colliderGroup = boneGroup.colliderGroups[i];
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_122 = V_17;
				NullCheck(L_122);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = L_122->___colliderGroups_8;
				int32_t L_124 = V_20;
				NullCheck(L_123);
				int32_t L_125 = L_124;
				int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
				V_21 = L_126;
				// vrmBoneGroup.ColliderGroups[i] = colliders[colliderGroup];
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_127 = V_18;
				NullCheck(L_127);
				VRMSpringBoneColliderGroupU5BU5D_t637B2AD67B25E25474A918569E03403E616A5316* L_128 = L_127->___ColliderGroups_14;
				int32_t L_129 = V_20;
				List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_130 = V_5;
				int32_t L_131 = V_21;
				NullCheck(L_130);
				VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_132;
				L_132 = List_1_get_Item_m7C05A23C1670C42B3815018C32552CCC06C2F87D(L_130, L_131, List_1_get_Item_m7C05A23C1670C42B3815018C32552CCC06C2F87D_RuntimeMethod_var);
				NullCheck(L_128);
				ArrayElementTypeCheck (L_128, L_132);
				(L_128)->SetAt(static_cast<il2cpp_array_size_t>(L_129), (VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8*)L_132);
				// for (int i = 0; i < boneGroup.colliderGroups.Length; ++i)
				int32_t L_133 = V_20;
				V_20 = ((int32_t)il2cpp_codegen_add(L_133, 1));
			}

IL_0273_1:
			{
				// for (int i = 0; i < boneGroup.colliderGroups.Length; ++i)
				int32_t L_134 = V_20;
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_135 = V_17;
				NullCheck(L_135);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = L_135->___colliderGroups_8;
				NullCheck(L_136);
				if ((((int32_t)L_134) < ((int32_t)((int32_t)(((RuntimeArray*)L_136)->max_length)))))
				{
					goto IL_024e_1;
				}
			}

IL_0280_1:
			{
				// var boneList = new List<Transform>();
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_137 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
				NullCheck(L_137);
				List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_137, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
				V_19 = L_137;
				// foreach (var x in boneGroup.bones)
				glTF_VRM_SecondaryAnimationGroup_tB05F9490031AC09EE089260665590FCA3A230E8A* L_138 = V_17;
				NullCheck(L_138);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = L_138->___bones_7;
				V_22 = L_139;
				V_7 = 0;
				goto IL_02b1_1;
			}

IL_0295_1:
			{
				// foreach (var x in boneGroup.bones)
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_22;
				int32_t L_141 = V_7;
				NullCheck(L_140);
				int32_t L_142 = L_141;
				int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
				V_23 = L_143;
				// boneList.Add(nodes[x]);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_144 = V_19;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_145 = ___nodes1;
				int32_t L_146 = V_23;
				NullCheck(L_145);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
				L_147 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_145, L_146, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
				NullCheck(L_144);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_144, L_147, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				int32_t L_148 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_148, 1));
			}

IL_02b1_1:
			{
				// foreach (var x in boneGroup.bones)
				int32_t L_149 = V_7;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = V_22;
				NullCheck(L_150);
				if ((((int32_t)L_149) < ((int32_t)((int32_t)(((RuntimeArray*)L_150)->max_length)))))
				{
					goto IL_0295_1;
				}
			}
			{
				// vrmBoneGroup.RootBones = boneList;
				VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_151 = V_18;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_152 = V_19;
				NullCheck(L_151);
				L_151->___RootBones_11 = L_152;
				Il2CppCodeGenWriteBarrier((void**)(&L_151->___RootBones_11), (void*)L_152);
			}

IL_02c2_1:
			{
				// foreach (var boneGroup in secondaryAnimation.boneGroups)
				bool L_153;
				L_153 = Enumerator_MoveNext_m15062B3E7144774045440A7F77940E37EFEEA011((&V_16), Enumerator_MoveNext_m15062B3E7144774045440A7F77940E37EFEEA011_RuntimeMethod_var);
				if (L_153)
				{
					goto IL_0195_1;
				}
			}
			{
				goto IL_02ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02de:
	{
		// secondary.gameObject.AddComponent<VRMSpringBone>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154 = V_0;
		NullCheck(L_154);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155;
		L_155 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_154, NULL);
		NullCheck(L_155);
		VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_156;
		L_156 = GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7(L_155, GameObject_AddComponent_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mA1499CC97B2C297B36B9E4BB7CFF98AD3D284ED7_RuntimeMethod_var);
	}

IL_02ea:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringUtility/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m65EEF87A79440B8E7EB65FFEF0E39C448E4626A0 (U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 VRM.VRMSpringUtility/<>c__DisplayClass0_0::<ExportSecondary>b__5(VRM.VRMSpringBoneColliderGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__5_m32728DBEEDEC988678DEC972FADE898165DE04A1 (U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* __this, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m5AC518A09744A5F8DE9DE3D4AD3D1635BDC12C94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => colliders.IndexOf(x))
		List_1_tF6B7B7201D5686A02B90EBE628F157B35B9F5501* L_0 = __this->___colliders_0;
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m5AC518A09744A5F8DE9DE3D4AD3D1635BDC12C94(L_0, L_1, List_1_IndexOf_m5AC518A09744A5F8DE9DE3D4AD3D1635BDC12C94_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 VRM.VRMSpringUtility/<>c__DisplayClass0_0::<ExportSecondary>b__7(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass0_0_U3CExportSecondaryU3Eb__7_m4464F589CE8FE9B6201D36D29103AEF1BC41E300 (U3CU3Ec__DisplayClass0_0_t1A917DA01B1A18E49BB5A702C0E6DED5A696F359* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bones = spring.RootBones.Select(x => nodes.IndexOf(x)).ToArray(),
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___nodes_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F(L_0, L_1, List_1_IndexOf_mEF651DF17A9FDD839E4B535FF9DA5361515F7A3F_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.VRMSpringUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEEF336F2331E205EA6BC0100A682958DF2BFD5FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* L_0 = (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1*)il2cpp_codegen_object_new(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m90D4A33AFE50E7D78EE117F930FDB2490175DE6F(L_0, NULL);
		((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void VRM.VRMSpringUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90D4A33AFE50E7D78EE117F930FDB2490175DE6F (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// VRM.VRMSpringBoneColliderGroup VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* U3CU3Ec_U3CExportSecondaryU3Eb__0_0_m7C4CB06524630C1F73B748E4FF2F2A5FF151CB6A (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mF89632F9FE93404F6A0B905FCBCB04BFFD1EFE36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => x.GetComponent<VRMSpringBoneColliderGroup>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___x0;
		NullCheck(L_0);
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_1;
		L_1 = Component_GetComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mF89632F9FE93404F6A0B905FCBCB04BFFD1EFE36(L_0, Component_GetComponent_TisVRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8_mF89632F9FE93404F6A0B905FCBCB04BFFD1EFE36_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_1(VRM.VRMSpringBoneColliderGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExportSecondaryU3Eb__0_1_mBD60BD04261A68E049E2EB1D43FFD911495E8AC6 (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x != null))
		VRMSpringBoneColliderGroup_t0A6F887DE74CBDF93999A042AE8509F76DA735C8* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// VRM.glTF_VRM_SecondaryAnimationCollider VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_2(VRM.VRMSpringBoneColliderGroup/SphereCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* U3CU3Ec_U3CExportSecondaryU3Eb__0_2_mD9C520FF028762E1A21523C0F760C05F82BDC0B0 (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new glTF_VRM_SecondaryAnimationCollider
		// {
		//     offset = x.Offset,
		//     radius = x.Radius,
		// };
		glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* L_0 = (glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549*)il2cpp_codegen_object_new(glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		glTF_VRM_SecondaryAnimationCollider__ctor_mA27FDB33217CCDC05845B712D82A2B6DA51DF301(L_0, NULL);
		glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* L_1 = L_0;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_2 = ___x0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___Offset_0;
		NullCheck(L_1);
		L_1->___offset_0 = L_3;
		glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* L_4 = L_1;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_5 = ___x0;
		NullCheck(L_5);
		float L_6 = L_5->___Radius_1;
		NullCheck(L_4);
		L_4->___radius_1 = L_6;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<VRM.VRMSpringBone> VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_3(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CExportSecondaryU3Eb__0_3_mD84963AB56D8DD9001DC77F89CEF63F81FE5AFB8 (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mAF1DD6634E02B8FA453E2D83E5CA9D61C74CD59C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .SelectMany(x => x.GetComponents<VRMSpringBone>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___x0;
		NullCheck(L_0);
		VRMSpringBoneU5BU5D_tF31904AED38742EA3696626FC115E66E8D866664* L_1;
		L_1 = Component_GetComponents_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mAF1DD6634E02B8FA453E2D83E5CA9D61C74CD59C(L_0, Component_GetComponents_TisVRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC_mAF1DD6634E02B8FA453E2D83E5CA9D61C74CD59C_RuntimeMethod_var);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_4(VRM.VRMSpringBone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExportSecondaryU3Eb__0_4_mB583880649EF22C33B5D5BCA30A0A5583E5D7CD3 (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x != null))
		VRMSpringBone_t9533E9495A13B43EC7B05A087E1FDD80BA3186EC* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Boolean VRM.VRMSpringUtility/<>c::<ExportSecondary>b__0_6(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExportSecondaryU3Eb__0_6_m57DD5BF77C8A973D257F56D3F37AE194A4AFEDAF (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		// .Where(x => x != -1)
		int32_t L_0 = ___x0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// VRM.VRMSpringBoneColliderGroup/SphereCollider VRM.VRMSpringUtility/<>c::<LoadSecondary>b__1_0(VRM.glTF_VRM_SecondaryAnimationCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* U3CU3Ec_U3CLoadSecondaryU3Eb__1_0_m1DFD9A671C6276235A7EE2917346010729E31654 (U3CU3Ec_t86EDDFC561AF6017439C481A71E3E602F87E79E1* __this, glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VRMSpringBoneColliderGroup.SphereCollider
		// {
		//     Offset = x.offset,
		//     Radius = x.radius
		// };
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_0 = (SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B*)il2cpp_codegen_object_new(SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SphereCollider__ctor_m2BD72A7D87F951340AF71D4DCDA971F94C69578D(L_0, NULL);
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_1 = L_0;
		glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* L_2 = ___x0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___offset_0;
		NullCheck(L_1);
		L_1->___Offset_0 = L_3;
		SphereCollider_t3D576F208187E4C518478A9DD489F14E2E231D4B* L_4 = L_1;
		glTF_VRM_SecondaryAnimationCollider_t6BBC6E71ACD08FDDBC61F5C3B934DE516F7CA549* L_5 = ___x0;
		NullCheck(L_5);
		float L_6 = L_5->___radius_1;
		NullCheck(L_4);
		L_4->___Radius_1 = L_6;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 VRMSpringBoneLogic_get_LocalRotation_mB384F10CAA695408DD1DACF6E54C4BEFD76FF846_inline (VRMSpringBoneLogic_t97AF699EBEAD8BCD89C8B7F826AC2DD111843FD0* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion LocalRotation { get; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 Enumerator_get_Current_m79CC192947A2D4AD35DAAC8002872BBAD162B04C_gshared_inline (Enumerator_tED11A91BFE86E2F2540BFC0196AC1ECCE9E58C79* __this, const RuntimeMethod* method) 
{
	{
		SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1 L_0 = (SphereCollider_tF2E8EEC85942EDE3847AD3A12A8BC73056C200F1)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
