﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerable_1_tABF27AED8E88C2557464B0E32EAD36CE8213B1B8;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>
struct List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// UnityEngine.Rendering.RendererUtils.RendererList[]
struct RendererListU5BU5D_tED46B37755BE0712107BE8F0C415BF8D63D5CFF8;
// UnityEngine.Rendering.ShaderTagId[]
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.Assertions.AssertionException
struct AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
// System.String
struct String_t;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShadowObjectsFilter_t33DCB0BA372F88094F5BDCDAD3ADD835453AE186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37;
IL2CPP_EXTERN_C String_t* _stringLiteral10045265A10E0CC3B6EAB29D0E2C0D982F7BF6B9;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1;
IL2CPP_EXTERN_C String_t* _stringLiteral15688BC513A63346074978C5D893B01207733A34;
IL2CPP_EXTERN_C String_t* _stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
IL2CPP_EXTERN_C String_t* _stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC;
IL2CPP_EXTERN_C String_t* _stringLiteral29FCA82A8845B80036C48DEEBAADCB1798D5103D;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral9349F69EBC794CACA792A953D209129589F86F2A;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1EF620F523327123017878A2862AB13B665F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF201D71A66B6B79AE967AB8C08533D6661BEBA;
IL2CPP_EXTERN_C String_t* _stringLiteralC77066553C7A3911927C3AA36BBB18DD9A65EE59;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralCF4020D8849146EB9CBF7C3D8FF7F43C1F58FDB0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237;
IL2CPP_EXTERN_C String_t* _stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>
struct List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererListU5BU5D_tED46B37755BE0712107BE8F0C415BF8D63D5CFF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Assertions.Assert
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863  : public RuntimeObject
{
};

// UnityEngine.Assertions.AssertionMessageUtil
struct AssertionMessageUtil_t6B8BAAD78CE5B0EE8ADB7F650827295343FB842D  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::<implementation>k__BackingField
	RuntimeObject* ___U3CimplementationU3Ek__BackingField_0;
};

// UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlightenLightmapper>k__BackingField
	bool ___U3CenlightenLightmapperU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbesBlendDistance>k__BackingField
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_23;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoAmbientProbeBaking>k__BackingField
	bool ___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoDefaultReflectionProbeBaking>k__BackingField
	bool ___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_26;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_27;
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

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.AttachmentDescriptor>
struct NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Rendering.CoreCameraValues
struct CoreCameraValues_t5BD0108A962D53208E8523BA29AFFA9F9A295F1F 
{
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::instanceID
	int32_t ___instanceID_2;
};

// UnityEngine.Rendering.DepthState
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	// System.Byte UnityEngine.Rendering.DepthState::m_WriteEnabled
	uint8_t ___m_WriteEnabled_0;
	// System.SByte UnityEngine.Rendering.DepthState::m_CompareFunction
	int8_t ___m_CompareFunction_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
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

// UnityEngine.Rendering.RasterState
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	// UnityEngine.Rendering.CullMode UnityEngine.Rendering.RasterState::m_CullingMode
	int32_t ___m_CullingMode_1;
	// System.Int32 UnityEngine.Rendering.RasterState::m_OffsetUnits
	int32_t ___m_OffsetUnits_2;
	// System.Single UnityEngine.Rendering.RasterState::m_OffsetFactor
	float ___m_OffsetFactor_3;
	// System.Byte UnityEngine.Rendering.RasterState::m_DepthClip
	uint8_t ___m_DepthClip_4;
	// System.Byte UnityEngine.Rendering.RasterState::m_Conservative
	uint8_t ___m_Conservative_5;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding1
	uint8_t ___m_Padding1_6;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding2
	uint8_t ___m_Padding2_7;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.Rendering.RenderQueueRange
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	// System.Int32 UnityEngine.Rendering.RenderQueueRange::m_LowerBound
	int32_t ___m_LowerBound_0;
	// System.Int32 UnityEngine.Rendering.RenderQueueRange::m_UpperBound
	int32_t ___m_UpperBound_1;
};

// UnityEngine.Rendering.RenderTargetBlendState
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_WriteMask
	uint8_t ___m_WriteMask_0;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceColorBlendMode
	uint8_t ___m_SourceColorBlendMode_1;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationColorBlendMode
	uint8_t ___m_DestinationColorBlendMode_2;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceAlphaBlendMode
	uint8_t ___m_SourceAlphaBlendMode_3;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationAlphaBlendMode
	uint8_t ___m_DestinationAlphaBlendMode_4;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_ColorBlendOperation
	uint8_t ___m_ColorBlendOperation_5;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_AlphaBlendOperation
	uint8_t ___m_AlphaBlendOperation_6;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_Padding
	uint8_t ___m_Padding_7;
};

// UnityEngine.Rendering.ShaderKeyword
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 
{
	// System.String UnityEngine.Rendering.ShaderKeyword::m_Name
	String_t* ___m_Name_0;
	// System.UInt32 UnityEngine.Rendering.ShaderKeyword::m_Index
	uint32_t ___m_Index_1;
	// System.Boolean UnityEngine.Rendering.ShaderKeyword::m_IsLocal
	bool ___m_IsLocal_2;
	// System.Boolean UnityEngine.Rendering.ShaderKeyword::m_IsCompute
	bool ___m_IsCompute_3;
	// System.Boolean UnityEngine.Rendering.ShaderKeyword::m_IsValid
	bool ___m_IsValid_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ShaderKeyword
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_Index_1;
	int32_t ___m_IsLocal_2;
	int32_t ___m_IsCompute_3;
	int32_t ___m_IsValid_4;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ShaderKeyword
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_Index_1;
	int32_t ___m_IsLocal_2;
	int32_t ___m_IsCompute_3;
	int32_t ___m_IsValid_4;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SortingLayerRange
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	// System.Int16 UnityEngine.Rendering.SortingLayerRange::m_LowerBound
	int16_t ___m_LowerBound_0;
	// System.Int16 UnityEngine.Rendering.SortingLayerRange::m_UpperBound
	int16_t ___m_UpperBound_1;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
struct U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F 
{
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F__padding[128];
	};
};

// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
struct U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9__padding[96];
	};
};

// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
struct U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F__padding[96];
	};
};

// UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			// System.Int32 UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};

// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955__padding[160];
	};
};

// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
struct U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D 
{
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D__padding[128];
	};
};

// UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};

// System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>
struct Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___value_1;
};

// UnityEngine.Rendering.BlendState
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState0
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0_0;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState1
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1_1;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState2
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2_2;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState3
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3_3;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState4
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4_4;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState5
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5_5;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState6
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6_6;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState7
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7_7;
	// System.Byte UnityEngine.Rendering.BlendState::m_SeparateMRTBlendStates
	uint8_t ___m_SeparateMRTBlendStates_8;
	// System.Byte UnityEngine.Rendering.BlendState::m_AlphaToMask
	uint8_t ___m_AlphaToMask_9;
	// System.Int16 UnityEngine.Rendering.BlendState::m_Padding
	int16_t ___m_Padding_10;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Rendering.CameraProperties
struct CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 
{
	// UnityEngine.Rect UnityEngine.Rendering.CameraProperties::screenRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::viewDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewDir_1;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::implicitProjection
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::worldToCamera
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_15;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::right
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right_16;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::transformDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::cameraEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_19;
	// System.Single UnityEngine.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_ShadowCullPlanes
	U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F ___m_ShadowCullPlanes_22;
	// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_CameraCullPlanes
	U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9 ___m_CameraCullPlanes_23;
	// System.Single UnityEngine.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::shadowCullCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shadowCullCenter_25;
	// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer UnityEngine.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F ___layerCullDistances_26;
	// System.Int32 UnityEngine.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Rendering.CoreCameraValues UnityEngine.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t5BD0108A962D53208E8523BA29AFFA9F9A295F1F ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;
	// System.Int32 UnityEngine.Rendering.CameraProperties::projectionIsOblique
	int32_t ___projectionIsOblique_30;
	// System.Int32 UnityEngine.Rendering.CameraProperties::isImplicitProjectionMatrix
	int32_t ___isImplicitProjectionMatrix_31;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
};

// UnityEngine.Rendering.CullingResults
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo_1;
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

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
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

// UnityEngine.Rendering.FilteringSettings
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	// UnityEngine.Rendering.RenderQueueRange UnityEngine.Rendering.FilteringSettings::m_RenderQueueRange
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange_0;
	// System.Int32 UnityEngine.Rendering.FilteringSettings::m_LayerMask
	int32_t ___m_LayerMask_1;
	// System.UInt32 UnityEngine.Rendering.FilteringSettings::m_RenderingLayerMask
	uint32_t ___m_RenderingLayerMask_2;
	// System.Int32 UnityEngine.Rendering.FilteringSettings::m_ExcludeMotionVectorObjects
	int32_t ___m_ExcludeMotionVectorObjects_3;
	// UnityEngine.Rendering.SortingLayerRange UnityEngine.Rendering.FilteringSettings::m_SortingLayerRange
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange_4;
};

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Rendering.RendererUtils.RendererList
struct RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E 
{
	// System.UIntPtr UnityEngine.Rendering.RendererUtils.RendererList::context
	uintptr_t ___context_0;
	// System.UInt32 UnityEngine.Rendering.RendererUtils.RendererList::index
	uint32_t ___index_1;
	// System.UInt32 UnityEngine.Rendering.RendererUtils.RendererList::frame
	uint32_t ___frame_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

// UnityEngine.Rendering.ShadowSplitData
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	// System.Int32 UnityEngine.Rendering.ShadowSplitData::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_2;
	// UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ShadowSplitData::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.ShadowSplitData::m_CullingSphere
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere_4;
	// System.Single UnityEngine.Rendering.ShadowSplitData::m_ShadowCascadeBlendCullingFactor
	float ___m_ShadowCascadeBlendCullingFactor_5;
	// System.Single UnityEngine.Rendering.ShadowSplitData::m_CullingNearPlane
	float ___m_CullingNearPlane_6;
};

// UnityEngine.Rendering.SortingSettings
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.SortingSettings::m_WorldToCameraMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.SortingSettings::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// UnityEngine.Vector3 UnityEngine.Rendering.SortingSettings::m_CustomAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis_2;
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.SortingSettings::m_Criteria
	int32_t ___m_Criteria_3;
	// UnityEngine.Rendering.DistanceMetric UnityEngine.Rendering.SortingSettings::m_DistanceMetric
	int32_t ___m_DistanceMetric_4;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.SortingSettings::m_PreviousVPMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_PreviousVPMatrix_5;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.SortingSettings::m_NonJitteredVPMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_NonJitteredVPMatrix_6;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Rendering.VisibleLight
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::m_LightType
	int32_t ___m_LightType_0;
	// UnityEngine.Color UnityEngine.Rendering.VisibleLight::m_FinalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor_1;
	// UnityEngine.Rect UnityEngine.Rendering.VisibleLight::m_ScreenRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect_2;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::m_LocalToWorldMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix_3;
	// System.Single UnityEngine.Rendering.VisibleLight::m_Range
	float ___m_Range_4;
	// System.Single UnityEngine.Rendering.VisibleLight::m_SpotAngle
	float ___m_SpotAngle_5;
	// System.Int32 UnityEngine.Rendering.VisibleLight::m_InstanceId
	int32_t ___m_InstanceId_6;
	// UnityEngine.Rendering.VisibleLightFlags UnityEngine.Rendering.VisibleLight::m_Flags
	int32_t ___m_Flags_7;
};

// UnityEngine.Assertions.AssertionException
struct AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372  : public Exception_t
{
	// System.String UnityEngine.Assertions.AssertionException::m_UserMessage
	String_t* ___m_UserMessage_18;
};

// UnityEngine.Experimental.Playables.CameraPlayable
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.DrawingSettings
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	// UnityEngine.Rendering.SortingSettings UnityEngine.Rendering.DrawingSettings::m_SortingSettings
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings_1;
	// UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer UnityEngine.Rendering.DrawingSettings::shaderPassNames
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames_2;
	// UnityEngine.Rendering.PerObjectData UnityEngine.Rendering.DrawingSettings::m_PerObjectData
	int32_t ___m_PerObjectData_3;
	// UnityEngine.Rendering.DrawRendererFlags UnityEngine.Rendering.DrawingSettings::m_Flags
	int32_t ___m_Flags_4;
	// System.Int32 UnityEngine.Rendering.DrawingSettings::m_OverrideMaterialInstanceId
	int32_t ___m_OverrideMaterialInstanceId_5;
	// System.Int32 UnityEngine.Rendering.DrawingSettings::m_OverrideMaterialPassIndex
	int32_t ___m_OverrideMaterialPassIndex_6;
	// System.Int32 UnityEngine.Rendering.DrawingSettings::m_fallbackMaterialInstanceId
	int32_t ___m_fallbackMaterialInstanceId_7;
	// System.Int32 UnityEngine.Rendering.DrawingSettings::m_MainLightIndex
	int32_t ___m_MainLightIndex_8;
	// System.Int32 UnityEngine.Rendering.DrawingSettings::m_UseSrpBatcher
	int32_t ___m_UseSrpBatcher_9;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Rendering.RenderStateBlock
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	// UnityEngine.Rendering.BlendState UnityEngine.Rendering.RenderStateBlock::m_BlendState
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState_0;
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RenderStateBlock::m_RasterState
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState_1;
	// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::m_DepthState
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState_2;
	// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::m_StencilState
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState_3;
	// System.Int32 UnityEngine.Rendering.RenderStateBlock::m_StencilReference
	int32_t ___m_StencilReference_4;
	// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::m_Mask
	int32_t ___m_Mask_5;
};

// UnityEngine.Playables.ScriptPlayableOutput
struct ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899 
{
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.ScriptableCullingParameters::m_LODParameters
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_4;
	// System.UInt32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMask
	uint32_t ___m_CullingMask_5;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_SceneMask
	uint64_t ___m_SceneMask_6;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_8;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_10;
	// UnityEngine.Vector3 UnityEngine.Rendering.ScriptableCullingParameters::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_11;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowDistance
	float ___m_ShadowDistance_12;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowNearPlaneOffset
	float ___m_ShadowNearPlaneOffset_13;
	// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::m_CullingOptions
	int32_t ___m_CullingOptions_14;
	// UnityEngine.Rendering.ReflectionProbeSortingCriteria UnityEngine.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortingCriteria
	int32_t ___m_ReflectionProbeSortingCriteria_15;
	// UnityEngine.Rendering.CameraProperties UnityEngine.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_16;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_AccurateOcclusionThreshold
	float ___m_AccurateOcclusionThreshold_17;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_MaximumPortalCullingJobs
	int32_t ___m_MaximumPortalCullingJobs_18;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoViewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_19;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_20;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_StereoSeparationDistance
	float ___m_StereoSeparationDistance_21;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_maximumVisibleLights
	int32_t ___m_maximumVisibleLights_22;
	// System.Boolean UnityEngine.Rendering.ScriptableCullingParameters::m_ConservativeEnclosingSphere
	bool ___m_ConservativeEnclosingSphere_23;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_NumIterationsEnclosingSphere
	int32_t ___m_NumIterationsEnclosingSphere_24;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshaled_pinvoke
{
	int32_t ___m_IsOrthographic_0;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	int32_t ___m_CullingPlaneCount_4;
	uint32_t ___m_CullingMask_5;
	uint64_t ___m_SceneMask_6;
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_8;
	int32_t ___m_LayerCull_9;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_11;
	float ___m_ShadowDistance_12;
	float ___m_ShadowNearPlaneOffset_13;
	int32_t ___m_CullingOptions_14;
	int32_t ___m_ReflectionProbeSortingCriteria_15;
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_16;
	float ___m_AccurateOcclusionThreshold_17;
	int32_t ___m_MaximumPortalCullingJobs_18;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_19;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_20;
	float ___m_StereoSeparationDistance_21;
	int32_t ___m_maximumVisibleLights_22;
	int32_t ___m_ConservativeEnclosingSphere_23;
	int32_t ___m_NumIterationsEnclosingSphere_24;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshaled_com
{
	int32_t ___m_IsOrthographic_0;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	int32_t ___m_CullingPlaneCount_4;
	uint32_t ___m_CullingMask_5;
	uint64_t ___m_SceneMask_6;
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_8;
	int32_t ___m_LayerCull_9;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_11;
	float ___m_ShadowDistance_12;
	float ___m_ShadowNearPlaneOffset_13;
	int32_t ___m_CullingOptions_14;
	int32_t ___m_ReflectionProbeSortingCriteria_15;
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_16;
	float ___m_AccurateOcclusionThreshold_17;
	int32_t ___m_MaximumPortalCullingJobs_18;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_19;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_20;
	float ___m_StereoSeparationDistance_21;
	int32_t ___m_maximumVisibleLights_22;
	int32_t ___m_ConservativeEnclosingSphere_23;
	int32_t ___m_NumIterationsEnclosingSphere_24;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Rendering.ShadowDrawingSettings
struct ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 
{
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.ShadowDrawingSettings::m_CullingResults
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___m_CullingResults_0;
	// System.Int32 UnityEngine.Rendering.ShadowDrawingSettings::m_LightIndex
	int32_t ___m_LightIndex_1;
	// System.Int32 UnityEngine.Rendering.ShadowDrawingSettings::m_UseRenderingLayerMaskTest
	int32_t ___m_UseRenderingLayerMaskTest_2;
	// UnityEngine.Rendering.ShadowSplitData UnityEngine.Rendering.ShadowDrawingSettings::m_SplitData
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___m_SplitData_3;
	// UnityEngine.ShadowObjectsFilter UnityEngine.Rendering.ShadowDrawingSettings::m_ObjectsFilter
	int32_t ___m_ObjectsFilter_4;
};

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SpriteID
	int32_t ___SpriteID_0;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::TextureID
	int32_t ___TextureID_1;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::MaterialID
	int32_t ___MaterialID_2;
	// UnityEngine.Color UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_3;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform_4;
	// UnityEngine.Bounds UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds_5;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Layer
	int32_t ___Layer_6;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingLayer
	int32_t ___SortingLayer_7;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingOrder
	int32_t ___SortingOrder_8;
	// System.UInt64 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SceneCullingMask
	uint64_t ___SceneCullingMask_9;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexData
	intptr_t ___IndexData_10;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexData
	intptr_t ___VertexData_11;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexCount
	int32_t ___IndexCount_12;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexCount
	int32_t ___VertexCount_13;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::ShaderChannelMask
	int32_t ___ShaderChannelMask_14;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Rendering.VisibleReflectionProbe
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	// UnityEngine.Bounds UnityEngine.Rendering.VisibleReflectionProbe::m_Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleReflectionProbe::m_LocalToWorldMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.VisibleReflectionProbe::m_HdrData
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData_2;
	// UnityEngine.Vector3 UnityEngine.Rendering.VisibleReflectionProbe::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_3;
	// System.Single UnityEngine.Rendering.VisibleReflectionProbe::m_BlendDistance
	float ___m_BlendDistance_4;
	// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::m_Importance
	int32_t ___m_Importance_5;
	// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::m_BoxProjection
	int32_t ___m_BoxProjection_6;
	// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::m_InstanceId
	int32_t ___m_InstanceId_7;
	// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::m_TextureId
	int32_t ___m_TextureId_8;
};

// System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>
struct Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// UnityEngine.Rendering.RendererUtils.RendererListDesc
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E 
{
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.RendererUtils.RendererListDesc::sortingCriteria
	int32_t ___sortingCriteria_0;
	// UnityEngine.Rendering.PerObjectData UnityEngine.Rendering.RendererUtils.RendererListDesc::rendererConfiguration
	int32_t ___rendererConfiguration_1;
	// UnityEngine.Rendering.RenderQueueRange UnityEngine.Rendering.RendererUtils.RendererListDesc::renderQueueRange
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	// System.Nullable`1<UnityEngine.Rendering.RenderStateBlock> UnityEngine.Rendering.RendererUtils.RendererListDesc::stateBlock
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	// UnityEngine.Material UnityEngine.Rendering.RendererUtils.RendererListDesc::overrideMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_4;
	// System.Boolean UnityEngine.Rendering.RendererUtils.RendererListDesc::excludeObjectMotionVectors
	bool ___excludeObjectMotionVectors_5;
	// System.Int32 UnityEngine.Rendering.RendererUtils.RendererListDesc::layerMask
	int32_t ___layerMask_6;
	// System.Int32 UnityEngine.Rendering.RendererUtils.RendererListDesc::overrideMaterialPassIndex
	int32_t ___overrideMaterialPassIndex_7;
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.RendererUtils.RendererListDesc::<cullingResult>k__BackingField
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_8;
	// UnityEngine.Camera UnityEngine.Rendering.RendererUtils.RendererListDesc::<camera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.RendererUtils.RendererListDesc::<passName>k__BackingField
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_10;
	// UnityEngine.Rendering.ShaderTagId[] UnityEngine.Rendering.RendererUtils.RendererListDesc::<passNames>k__BackingField
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* ___U3CpassNamesU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.RendererUtils.RendererListDesc
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke
{
	int32_t ___sortingCriteria_0;
	int32_t ___rendererConfiguration_1;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_4;
	int32_t ___excludeObjectMotionVectors_5;
	int32_t ___layerMask_6;
	int32_t ___overrideMaterialPassIndex_7;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_8;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_9;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_10;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.Rendering.RendererUtils.RendererListDesc
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com
{
	int32_t ___sortingCriteria_0;
	int32_t ___rendererConfiguration_1;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_4;
	int32_t ___excludeObjectMotionVectors_5;
	int32_t ___layerMask_6;
	int32_t ___overrideMaterialPassIndex_7;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_8;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_9;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_10;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField_11;
};

// UnityEngine.Rendering.RendererUtils.RendererListParams
struct RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC 
{
	// System.Boolean UnityEngine.Rendering.RendererUtils.RendererListParams::<isValid>k__BackingField
	bool ___U3CisValidU3Ek__BackingField_2;
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.RendererUtils.RendererListParams::cullingResult
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResult_3;
	// UnityEngine.Rendering.DrawingSettings UnityEngine.Rendering.RendererUtils.RendererListParams::drawSettings
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings_4;
	// UnityEngine.Rendering.FilteringSettings UnityEngine.Rendering.RendererUtils.RendererListParams::filteringSettings
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings_5;
	// System.Nullable`1<UnityEngine.Rendering.RenderStateBlock> UnityEngine.Rendering.RendererUtils.RendererListParams::stateBlock
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.RendererUtils.RendererListParams
struct RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_pinvoke
{
	int32_t ___U3CisValidU3Ek__BackingField_2;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResult_3;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings_4;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings_5;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_6;
};
// Native definition for COM marshalling of UnityEngine.Rendering.RendererUtils.RendererListParams
struct RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_com
{
	int32_t ___U3CisValidU3Ek__BackingField_2;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResult_3;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings_4;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings_5;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_6;
};

// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera>

// System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>
struct List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererListU5BU5D_tED46B37755BE0712107BE8F0C415BF8D63D5CFF8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>

// UnityEngine.Assertions.Assert
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields
{
	// System.Boolean UnityEngine.Assertions.Assert::raiseExceptions
	bool ___raiseExceptions_0;
};

// UnityEngine.Assertions.Assert

// UnityEngine.Assertions.AssertionMessageUtil

// UnityEngine.Assertions.AssertionMessageUtil

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableNoStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil_0;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil_1;
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::s_Instance
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance_0;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// UnityEngine.Experimental.U2D.SpriteRendererGroup

// UnityEngine.Experimental.U2D.SpriteRendererGroup

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active_0;
};

// UnityEngine.Rendering.SupportedRenderingFeatures

// System.ValueType

// System.ValueType

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.AttachmentDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.AttachmentDescriptor>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Rendering.CoreCameraValues

// UnityEngine.Rendering.CoreCameraValues

// UnityEngine.Rendering.DepthState

// UnityEngine.Rendering.DepthState

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LightBakingOutput

// UnityEngine.LightBakingOutput

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rendering.RasterState
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_StaticFields
{
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RasterState::defaultValue
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___defaultValue_0;
};

// UnityEngine.Rendering.RasterState

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.Rendering.RenderQueueRange
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_StaticFields
{
	// System.Int32 UnityEngine.Rendering.RenderQueueRange::minimumBound
	int32_t ___minimumBound_3;
	// System.Int32 UnityEngine.Rendering.RenderQueueRange::maximumBound
	int32_t ___maximumBound_5;
};

// UnityEngine.Rendering.RenderQueueRange

// UnityEngine.Rendering.RenderTargetBlendState

// UnityEngine.Rendering.RenderTargetBlendState

// UnityEngine.Rendering.ShaderKeyword

// UnityEngine.Rendering.ShaderKeyword

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};

// UnityEngine.Rendering.ShaderTagId

// System.Single

// System.Single

// UnityEngine.Rendering.SortingLayerRange

// UnityEngine.Rendering.SortingLayerRange

// UnityEngine.Rendering.StencilState

// UnityEngine.Rendering.StencilState

// System.UInt32

// System.UInt32

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer

// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer

// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer

// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer

// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer

// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer

// UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer

// UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer

// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer

// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer

// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer

// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer

// UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer

// UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer

// System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>

// System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>

// UnityEngine.Rendering.BlendState

// UnityEngine.Rendering.BlendState

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Rendering.CameraProperties

// UnityEngine.Rendering.CameraProperties

// UnityEngine.Rendering.CommandBuffer

// UnityEngine.Rendering.CommandBuffer

// UnityEngine.Experimental.GlobalIllumination.Cookie

// UnityEngine.Experimental.GlobalIllumination.Cookie

// UnityEngine.Rendering.CullingResults

// UnityEngine.Rendering.CullingResults

// System.Delegate

// System.Delegate

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Rendering.FilteringSettings

// UnityEngine.Rendering.FilteringSettings

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Rendering.LODParameters

// UnityEngine.Rendering.LODParameters

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Rendering.RendererUtils.RendererList
struct RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_StaticFields
{
	// UnityEngine.Rendering.RendererUtils.RendererList UnityEngine.Rendering.RendererUtils.RendererList::nullRendererList
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___nullRendererList_3;
};

// UnityEngine.Rendering.RendererUtils.RendererList

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.ScriptableRenderContext

// UnityEngine.Rendering.ShadowSplitData
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	// System.Int32 UnityEngine.Rendering.ShadowSplitData::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_1;
};

// UnityEngine.Rendering.ShadowSplitData

// UnityEngine.Rendering.SortingSettings

// UnityEngine.Rendering.SortingSettings

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Rendering.VisibleLight

// UnityEngine.Rendering.VisibleLight

// UnityEngine.Assertions.AssertionException

// UnityEngine.Assertions.AssertionException

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Rendering.DrawingSettings
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49_StaticFields
{
	// System.Int32 UnityEngine.Rendering.DrawingSettings::maxShaderPasses
	int32_t ___maxShaderPasses_0;
};

// UnityEngine.Rendering.DrawingSettings

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.Playable

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};

// UnityEngine.Playables.PlayableBinding

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.Playables.PlayableOutput

// UnityEngine.Rendering.RenderStateBlock

// UnityEngine.Rendering.RenderStateBlock

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_StaticFields
{
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_2;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::layerCount
	int32_t ___layerCount_7;
};

// UnityEngine.Rendering.ScriptableCullingParameters

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Rendering.ShadowDrawingSettings

// UnityEngine.Rendering.ShadowDrawingSettings

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Rendering.VisibleReflectionProbe

// UnityEngine.Rendering.VisibleReflectionProbe

// System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>

// System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Playables.FrameData

// UnityEngine.Playables.FrameData

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Light

// UnityEngine.Light

// System.ObjectDisposedException

// System.ObjectDisposedException

// UnityEngine.Rendering.RendererUtils.RendererListDesc

// UnityEngine.Rendering.RendererUtils.RendererListDesc

// UnityEngine.Rendering.RendererUtils.RendererListParams
struct RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.RendererUtils.RendererListParams::s_EmptyName
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___s_EmptyName_0;
	// UnityEngine.Rendering.RendererUtils.RendererListParams UnityEngine.Rendering.RendererUtils.RendererListParams::nullRendererList
	RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC ___nullRendererList_1;
};

// UnityEngine.Rendering.RendererUtils.RendererListParams

// UnityEngine.Rendering.SortingGroup

// UnityEngine.Rendering.SortingGroup
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Rendering.ShaderTagId[]
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143  : public RuntimeArray
{
	ALIGN_FIELD (8) ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 m_Items[1];

	inline ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 m_Items[1];

	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
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

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.AttachmentDescriptor>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB_gshared (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Int32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.ShaderTagId>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB_gshared (NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.RenderStateBlock>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6_gshared (NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___0_nativeArray, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_gshared_inline (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC_gshared (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204_gshared (Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C* __this, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___0_value, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Int32>(T,T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_gshared (int32_t ___0_expected, int32_t ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Rendering.RenderQueueRange::get_lowerBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_get_lowerBound_m0F11004DA9B02414047A9DB92275F009487581E4 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderQueueRange::get_upperBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_get_upperBound_m6A89E9331EE632619B0B71A36B183290C97A1D9F (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderQueueRange::Equals(UnityEngine.Rendering.RenderQueueRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderQueueRange_Equals_m365F88BC7D2E35E08F56821E98DE455689176A88 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderQueueRange::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderQueueRange_Equals_m9436E966960F5205E3EB1A9BC6D66FCD13046C68 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderQueueRange::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_GetHashCode_m0A0BAA317A8C6B094A92FEEF75448DAC103ACA6F (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.BlendState UnityEngine.Rendering.BlendState::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 BlendState_get_defaultValue_m0BF91DBDDEBA2976D54B94FD472E96236B8B7322 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.DepthState UnityEngine.Rendering.DepthState::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 DepthState_get_defaultValue_m1124EB628DFF0E2623145C8958B58961B68DFB51 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilState UnityEngine.Rendering.StencilState::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 StencilState_get_defaultValue_m4A98541E193B4B554C8529C240D54B0DC2994BA7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::.ctor(UnityEngine.Rendering.RenderStateMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock__ctor_mED2806102FED1023AB74D94DC37F535497AED1F9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_mask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_blendState(UnityEngine.Rendering.BlendState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_blendState_mFC21867EBDC8C76E8CB638265110E28E45326164 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_rasterState(UnityEngine.Rendering.RasterState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_rasterState_m9EA87A2AE04B16A03A0C426471EBD3D541BBFF93 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::get_depthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 RenderStateBlock_get_depthState_m7A6B50C345D9BB77874859675658E682D39B2F93 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_depthState(UnityEngine.Rendering.DepthState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_depthState_mC3E64761972C4C08337991AE4E2DEF565C059E56 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::get_stencilState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 RenderStateBlock_get_stencilState_mDB0789D0366CE036924C55EEC90A60F1DDAE7BC6 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_stencilState(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_stencilState_m1DD8E2B3953C435C65BA7D60348D717E16B29DEA (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderStateBlock::get_stencilReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_get_stencilReference_m8EF0C19AC4FA1BDEA87972A31EE3E3D4695F23DE (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_stencilReference(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_stencilReference_m9AE2F79509B0F431E8D0430B941DC23755722D84 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::get_mask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_get_mask_mC675CA5A35CC9912F9B8E34B1DB6BBDB66FFC4C6 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderStateBlock::set_mask(UnityEngine.Rendering.RenderStateMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_mask_m0857047D723D7AF5E378D4F9F25D0BC83AD6E9BC (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.BlendState::Equals(UnityEngine.Rendering.BlendState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlendState_Equals_m3F7EFA35979F29164E0FE66930C7FE3E870E3748 (BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630* __this, BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RasterState::Equals(UnityEngine.Rendering.RasterState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RasterState_Equals_m61270B22D9C4EF86DB8CADE3D217D9D3E849F410 (RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26* __this, RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.DepthState::Equals(UnityEngine.Rendering.DepthState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthState_Equals_mF4448D46992C7BB7BDBCBDC69CFA5394EE315C41 (DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255* __this, DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderStateBlock::Equals(UnityEngine.Rendering.RenderStateBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_m8D194B252A39D7E4BB15EDC9B1E1DE0B32445B14 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderStateBlock::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.BlendState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlendState_GetHashCode_mA0E61E556B7B64ED28D6C50D54665CE2914EE5B0 (BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RasterState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RasterState_GetHashCode_m2F2090DFF4366B0789D6803ABE64D00C29D704B1 (RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DepthState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthState_GetHashCode_m61A6034A3DC8EFCAD253A4A48C295473CB5C50B4 (DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderStateBlock::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_GetHashCode_m9CAE3D7AD3EF037725CB0CB809C1A3783790EB3D (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetBlendState::.ctor(UnityEngine.Rendering.ColorWriteMask,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendOp,UnityEngine.Rendering.BlendOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBlendState__ctor_m9B65D2DDAA8C8B40EBACC02A8D578D7DC7E013ED (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, int32_t ___0_writeMask, int32_t ___1_sourceColorBlendMode, int32_t ___2_destinationColorBlendMode, int32_t ___3_sourceAlphaBlendMode, int32_t ___4_destinationAlphaBlendMode, int32_t ___5_colorBlendOperation, int32_t ___6_alphaBlendOperation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetBlendState::Equals(UnityEngine.Rendering.RenderTargetBlendState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetBlendState_Equals_m8353DA559FC116A14C55F260415C9680E1F24C11 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetBlendState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetBlendState_Equals_mE7C353E5B3CCF2B9D1E9A43C2977589C96DCE029 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderTargetBlendState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetBlendState_GetHashCode_m957556CDC43ECA2EB13957DC50BBC420C43DD8E8 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull_Injected(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356 (ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___1_renderLoop, intptr_t ___2_results, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_Internal_mAE1E99BDF4C4E5A0FD9A0147E460E25ABB84BF14 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_Internal_m62C47EAA3BFEB09D86209728AF538780EF149164 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___2_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___3_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___4_tagName, bool ___5_isPassTagName, intptr_t ___6_tagValues, intptr_t ___7_stateBlocks, int32_t ___8_stateCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal(System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_shadowDrawingSettings, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_Internal_m08F763220CF5A16E5CFFEC14CBBB31232834FB44 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_shadowDrawingSettings, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_commandBuffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_Internal_mB1301CB153966010CFF3F80414704D7741ADC4DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_commandBuffer, int32_t ___2_queueType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_m037CBD4FE2C4BE55E93A3A1C09BB0DA4C36E6323 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, bool ___2_stereoSetup, int32_t ___3_eye, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal(UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_Internal_mF12DBDC413FC167EE8A1F6C6A5A27DCD9916AB9F (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_Internal_m1839C8DAE50943FD542048A0C131B9CDEFB3EE06 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_m9E720D8B842777F95E139A8DC739EFC2016B2CB6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_Impl_m58DEED5ECEE8C88AA137BC989623FA34261ECA12 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___2_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___3_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___4_tagName, bool ___5_isPassTagName, intptr_t ___6_tagValues, intptr_t ___7_stateBlocks, int32_t ___8_stateCount, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___9_ret, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RendererUtils.RendererList UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList_Internal(System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, RuntimeObject* ___1_rendererLists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync_Internal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_Internal_m7818765C4D15B9047F87E1BD3EC6ACC43EA8244E (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_rendererLists, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___1_handle, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus_Internal(UnityEngine.Rendering.RendererUtils.RendererList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_Internal_m07D1834B1268BE792FF68B45FFC4A8B9EF17FB8B (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.AttachmentDescriptor>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB_gshared)(___0_nativeArray, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginRenderPass_Internal(System.IntPtr,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC (intptr_t ___0_self, int32_t ___1_width, int32_t ___2_height, int32_t ___3_samples, intptr_t ___4_colors, int32_t ___5_colorCount, int32_t ___6_depthAttachmentIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginRenderPass(System.Int32,System.Int32,System.Int32,Unity.Collections.NativeArray`1<UnityEngine.Rendering.AttachmentDescriptor>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginRenderPass_mC026E069CF6681EA3331972D2D11BC9616C2BBBE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_samples, NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 ___3_attachments, int32_t ___4_depthAttachmentIndex, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Int32>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass_Internal(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B (intptr_t ___0_self, intptr_t ___1_colors, int32_t ___2_colorCount, intptr_t ___3_inputs, int32_t ___4_inputCount, bool ___5_isDepthReadOnly, bool ___6_isStencilReadOnly, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_m53AECA447C7DC5E5DBA8A3C3DB93CE091B9E9918 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_inputs, bool ___2_isDepthStencilReadOnly, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass(Unity.Collections.NativeArray`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_m9E1A59EB48A07EDC1FB233CAC1177EDE73B19767 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, bool ___1_isDepthStencilReadOnly, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndSubPass_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924 (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndSubPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndSubPass_m9A25C86A96A30590D7D8D9BEE2EE789B4C363602 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndRenderPass_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2 (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndRenderPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndRenderPass_mA729C3E803FAEBE9D99B2DD03315CC823E4081DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_mF417223097ECEB2768EE736BE00A7F94DA3BDD26 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_m8A96E2FFFD825B65086835D0809440AD0816EA24 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_m2128F24FEE37089B325EC8C76E24DBD12985A060 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.RenderStateBlock&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_m87278D0FBE7A0865779FF9541BF96EDB65F8A2C6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___3_stateBlock, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.ShaderTagId>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB (NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB_gshared)(___0_nativeArray, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Rendering.RenderStateBlock>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6 (NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___5_tagValues, NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___6_stateBlocks, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows(UnityEngine.Rendering.ShadowDrawingSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_mCB77DD8C8E93C607194E7577C01A3DAA49089841 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* ___0_settings, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties(UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_mE18627E12044732E9FAC254DFB49B8C1241D7CDD (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_mF45D617B34789AD064BF375CF50C854EAA20E4E8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_m478DC07F4D4C50CD4D050FCCFEA5BAED95748F01 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_mD098CE93A314B738A55B5A5CCE2C6B8A5881AB18 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_m5FBA5BFEF35D1499E023EFFF04D07B98CB05FDE8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Internal_Cull_m57895EC289AFC667CACAFC14F4CD11DEE3699C49 (ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___1_renderLoop, intptr_t ___2_results, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.ScriptableRenderContext::Cull(UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ScriptableRenderContext_Cull_mB7B0E5BE54C1E03AF1E6310E7B9150000DA76110 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RendererUtils.RendererListParams UnityEngine.Rendering.RendererUtils.RendererListParams::Create(UnityEngine.Rendering.RendererUtils.RendererListDesc&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC RendererListParams_Create_mDBFB73D009A35712C00015E51A566C2EF8A8CFA8 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* ___0_desc, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>::get_HasValue()
inline bool Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_inline (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5*, const RuntimeMethod*))Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Rendering.RenderStateBlock>::get_Value()
inline RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* __this, const RuntimeMethod* method)
{
	return ((  RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 (*) (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5*, const RuntimeMethod*))Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC_gshared)(__this, method);
}
// UnityEngine.Rendering.RendererUtils.RendererList UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList(UnityEngine.Rendering.RendererUtils.RendererListDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_m4372D2AFD3B865604E2A33F2AAB018954E8F53AE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___0_desc, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync(System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_mADDBA470A75397E689E1B962D05DC3A41D34D6C6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106* ___0_rendererLists, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus(UnityEngine.Rendering.RendererUtils.RendererList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_m0FDF33A036694A3A2EEAF68FF2C340B1B04E0CB3 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_rendererList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::TagToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_get_id_m4D63E4F238DF5078A339A60DCAA1C695D28E9B5F (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId_set_id_m539EEFBFF375A1DEA7F860EFFFDDFEE034135FC7 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::op_Equality(UnityEngine.Rendering.ShaderTagId,UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_op_Equality_mE83D02C57D788A5A9EADE3933DE9D8811B7F8761 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_tag1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___1_tag2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::set_useRenderingLayerMaskTest(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings_set_useRenderingLayerMaskTest_m9E81FEE30547B3720C365016689F87A2AB63F025 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::set_splitData(UnityEngine.Rendering.ShadowSplitData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings_set_splitData_mF65DC7AB678EE91AEF252687578E83B880AF4D93 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShadowSplitData::set_shadowCascadeBlendCullingFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::.ctor(UnityEngine.Rendering.CullingResults,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings__ctor_mA9BADD0F63BF177F6BF380999B9B7115263B2BF4 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, int32_t ___1_lightIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.CullingResults::Equals(UnityEngine.Rendering.CullingResults)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CullingResults_Equals_mC7DB3AB5E3FB65B137D80FE2218D5577493DFAAA (CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShadowSplitData::Equals(UnityEngine.Rendering.ShadowSplitData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShadowDrawingSettings::Equals(UnityEngine.Rendering.ShadowDrawingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowDrawingSettings_Equals_m30BBF392BE2B96951CDDB153EA6AF3634A061A70 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShadowDrawingSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowDrawingSettings_Equals_m93ED522213940B17CDC1AE79C4E564A71A547FBF (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.CullingResults::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CullingResults_GetHashCode_m9CD85BFBCDACEB4B9EC3E944F20A19ED023F55B2 (CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShadowSplitData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowSplitData_GetHashCode_mABE8E2F5079373A40AC9B97D5A22630A52B85900 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShadowDrawingSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowDrawingSettings_GetHashCode_m49BE34FCA1A942A213E682921120D78C38E9E637 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShadowSplitData::get_cullingPlaneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Rendering.ShadowSplitData::get_cullingSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShadowSplitData_get_cullingSphere_mEABEC468FE12ADDB09239EABD3FB59551E4A44E0 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// UnityEngine.Plane UnityEngine.Rendering.ShadowSplitData::GetCullingPlane(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShadowSplitData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowSplitData_Equals_m9D5B1886A1BEAC1509C7196842972F2EF0F91824 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SortingLayerRange::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingLayerRange__ctor_mEDA6E9B3D08FE3FC8E1E3AFB3FF3CE999835E9DD (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, int16_t ___0_lowerBound, int16_t ___1_upperBound, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.Rendering.SortingLayerRange::get_lowerBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SortingLayerRange_get_lowerBound_m85402D75932E01A1E2E40749615CD9F7D9B06209 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.Rendering.SortingLayerRange::get_upperBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SortingLayerRange_get_upperBound_m3ECCA010F56BFDDA42D7327D24E1340BF596D487 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SortingLayerRange::Equals(UnityEngine.Rendering.SortingLayerRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingLayerRange_Equals_m0E8CA61242958C8EA6CDFE9A52A1E966EB506AF1 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SortingLayerRange::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingLayerRange_Equals_m14563DEFE7101D0B67D20F31C7E885A0A834152A (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SortingLayerRange::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingLayerRange_GetHashCode_m783780AEEC61B63C1A10C56C1DD7CC0DDCE7A9AE (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InitializeSortSettings(UnityEngine.Camera,UnityEngine.Rendering.SortingSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* ___1_sortingSettings, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.SortingSettings::get_criteria()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingSettings_get_criteria_m994FF6A91C4C3B62E1F8B4D10CC942735A55C2B9 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SortingSettings::.ctor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings__ctor_m449888DBB95B75702BFC5BFA1E4A5BE40D9302ED (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SortingSettings::set_customAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_customAxis_mAE48373BC03C9F585FD119C7F1549EFFB84F49C9 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SortingSettings::set_criteria(UnityEngine.Rendering.SortingCriteria)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_criteria_m3D0A9A89ACF96F7135E47BEB44770EF439419E57 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SortingSettings::set_distanceMetric(UnityEngine.Rendering.DistanceMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_distanceMetric_mE0C526324AA32735CE4C76CACCF6921BB6925387 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SortingSettings::Equals(UnityEngine.Rendering.SortingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingSettings_Equals_m443E5F481572BB3008CB0249384CBC7A4F229A06 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SortingSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingSettings_Equals_m51AAFA490013115984F107343946BA2D9418ED8A (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.SortingSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingSettings_GetHashCode_mB5162E17F4C45C0ACB75E7B91942E11379FE002D (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::.ctor(System.Boolean,System.Byte,System.Byte,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState__ctor_mEC62013478099EA25296DED1A78EC7412EC106E6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunction, int32_t ___4_passOperation, int32_t ___5_failOperation, int32_t ___6_zFailOperation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::.ctor(System.Boolean,System.Byte,System.Byte,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState__ctor_mDE204DCDD73203CC81E2FEE8F142834449C8B56E (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunctionFront, int32_t ___4_passOperationFront, int32_t ___5_failOperationFront, int32_t ___6_zFailOperationFront, int32_t ___7_compareFunctionBack, int32_t ___8_passOperationBack, int32_t ___9_failOperationBack, int32_t ___10_zFailOperationBack, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08 (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_get_enabled_m03D0635E12B6B461F459A872E3B992C09AD2F709 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Rendering.StencilState::get_readMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StencilState_get_readMask_mFDA345D54433A4EDA6232002B4F7004656BBD0CB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Rendering.StencilState::get_writeMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StencilState_get_writeMask_mDE1345017B389C91E696FCB708700C78703734A0 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::SetCompareFunction(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetCompareFunction_m4F46E4197FDEBB0643BB1D529DB33CA3590D7E29 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::SetPassOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetPassOperation_m8DF4167E4EC16BDEA8DB8CAD4F5161094B8FD7CB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::SetFailOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetFailOperation_mC5BFB2CA88EFDEF6E302C1EA70471DFAFD9F19C9 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::SetZFailOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetZFailOperation_m1E6D4F210E0039A6E44F9550FEC8D4155F540DF2 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CompareFunction UnityEngine.Rendering.StencilState::get_compareFunctionFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_compareFunctionFront_mBEF97C76C814AA7072B0D8C6E90E5699EFA48DC6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_passOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_passOperationFront_mED3B1DD6437336A94A319DB2963C5EA4641C753F (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_failOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_failOperationFront_mAC199B756771167AA6FB068883D47FDEA2B2DBC5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_zFailOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_zFailOperationFront_m5E7C2ADCFA97B8E0A3387D2075C01D6F5385067C (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CompareFunction UnityEngine.Rendering.StencilState::get_compareFunctionBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_compareFunctionBack_m37AC5689D94A1719BEB75CC577096D271750A9C5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_passOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_passOperationBack_m3C6BAA44C73AE8FFC2C39BE1B3980498A28A6C38 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_failOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_failOperationBack_m5310F3D9B99EA2D8E1DDDAC651EBF6E12A630BDE (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_zFailOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_zFailOperationBack_m4569E6652B75DE77E582DA00FD92291ECC1EBABC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectFromInstanceID_m977F314530A838CAB5497C8F5D0D8DA134B92E0C (int32_t ___0_instanceID, const RuntimeMethod* method) ;
// UnityEngine.Light UnityEngine.Rendering.VisibleLight::get_light()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* VisibleLight_get_light_mD179E0BF18C77DBE2FD85FE9687F63A8C1859E6B (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::get_lightType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleLight_get_lightType_mFFCEBE6E368853F13E7CDBA910F6D9B689292454 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Rendering.VisibleLight::get_finalColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VisibleLight_get_finalColor_m5D7FBBD05FFF9A7100319E68A602D00563F72D03 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 VisibleLight_get_localToWorldMatrix_m5DD0193DBD7887878F93AB4A95DCD9A72F594081 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.VisibleLight::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisibleLight_get_range_m4DDAAF7B8AE9B35C1AD25ABD17841D277FE73D6D (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.VisibleLight::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisibleLight_get_spotAngle_m1C1A118B7398F354DA818F2B78986F133E933B97 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::Equals(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Equals(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VisibleLight::Equals(UnityEngine.Rendering.VisibleLight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m33A9D54C5C0D3761BE43F8D78DF55D08CF5A7C23 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VisibleLight::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Color::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m8E55539476EA6B7A6E0CEC5F980227CD15B778F1 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VisibleLight::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleLight_GetHashCode_mF7C3F790DF877B069608E4D56281B8840699876F (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Equals(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VisibleReflectionProbe::Equals(UnityEngine.Rendering.VisibleReflectionProbe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_mF734AD87DA035B60484FEEF89C5E746502EF63CE (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.VisibleReflectionProbe::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845 (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Bounds::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bounds_GetHashCode_m59C79B529D33866FE45FEFC0C69FBD3B4AC7E172 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleReflectionProbe_GetHashCode_m626DEF4FF062C9096286BE555B790FB725453BDC (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB (String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderKeyword::CreateGlobalKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6 (String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderKeyword::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderKeyword__ctor_m7F07272BD798B4145B55BC7CAD71D4E2330FD1D1 (ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* __this, String_t* ___0_keywordName, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.ShaderKeyword::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShaderKeyword_ToString_m4C7010D16DFFFA404F8E57F150AF80CF89FC6F10 (ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererList::get_isValid_Injected(UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererList::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererList_get_isValid_m4D3FB1386B71A02B9453A00ACD38355F1B82DD68 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RendererUtils.RendererList::.ctor(System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererList__ctor_m2635CB2FA9EA68E0B44A745319E07E8A3C44D7B2 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* __this, uintptr_t ___0_ctx, uint32_t ___1_indx, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.RendererUtils.RendererListDesc::get_cullingResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Rendering.RendererUtils.RendererListDesc::get_camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.RendererUtils.RendererListDesc::get_passName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ShaderTagId[] UnityEngine.Rendering.RendererUtils.RendererListDesc::get_passNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererListDesc::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererListDesc_IsValid_mF8A1A6A084873A0477FD398507A21E682FB90136 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RendererUtils.RendererListParams::set_isValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65_inline (RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DrawingSettings::.ctor(UnityEngine.Rendering.ShaderTagId,UnityEngine.Rendering.SortingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingSettings__ctor_m2B34DB19727143945DDE925B5CACD0E8E5D478A5 (DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_shaderPassName, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___1_sortingSettings, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DrawingSettings::set_perObjectData(UnityEngine.Rendering.PerObjectData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingSettings_set_perObjectData_mE83721A5FEDA0A0F5DFA6A385B5DB110A7AE2DC8 (DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::op_Inequality(UnityEngine.Rendering.ShaderTagId,UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_op_Inequality_m000FF53695F623FC1903B026837174552F9D1C1C (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_tag1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___1_tag2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DrawingSettings::SetShaderPassName(System.Int32,UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingSettings_SetShaderPassName_m3ABF2F58CA9D8B16989747058CAA504E7B4ED738 (DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* __this, int32_t ___0_index, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___1_shaderPassName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DrawingSettings::set_overrideMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingSettings_set_overrideMaterial_m6A1D1A128D31B5DAA3EEDFF0D6F07EF67D2B276F (DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DrawingSettings::set_overrideMaterialPassIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingSettings_set_overrideMaterialPassIndex_mED93BC41A0496812035C23337949A05C0A4C48ED (DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>::.ctor(T)
inline void Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204 (Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C* __this, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C*, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71, const RuntimeMethod*))Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.Rendering.FilteringSettings::.ctor(System.Nullable`1<UnityEngine.Rendering.RenderQueueRange>,System.Int32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilteringSettings__ctor_m2A2242373FC7D053CFBBC6814D02AAC73C7B3AE7 (FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* __this, Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C ___0_renderQueueRange, int32_t ___1_layerMask, uint32_t ___2_renderingLayerMask, int32_t ___3_excludeMotionVectorObjects, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.FilteringSettings::set_excludeMotionVectorObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilteringSettings_set_excludeMotionVectorObjects_mCD49214CD709CC26B932C33B11B4F9E90BE4E13B (FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::RGBMultiplied(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Color::get_maxColorComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.Cookie UnityEngine.Experimental.GlobalIllumination.Cookie::Defaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 Cookie_Defaults_mBA9A3DBD2873EDB1AA0000FCBE687EBF960916BC (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mC034DE9D2F105C07BDE41C110D59E525894C78CA (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mFA4616AFF5FCCEC48B97704A64CDE4F8DBBC5A36 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m75C7688AFBDEAA33C4CA3C937163998A6013FE7E (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C (float ___0_kelvin, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499 (int32_t ___0_format, int32_t ___1_usage, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogAssertion_m71A412A496EAB476FFF6253618C706B2F1E4AFF0 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.AssertionException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::BooleanFailureMessage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4 (bool ___0_expected, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::Fail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetEqualityMessage(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::NullFailureMessage(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Int32>(T,T,System.String)
inline void Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E (int32_t ___0_expected, int32_t ___1_actual, String_t* ___2_message, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, String_t*, const RuntimeMethod*))Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_gshared)(___0_expected, ___1_actual, ___2_message, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C (String_t* ___0_failureMessage, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3 (String_t* ___0_failureMessage, String_t* ___1_expected, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.RenderQueueRange UnityEngine.Rendering.RenderQueueRange::get_all()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 RenderQueueRange_get_all_m6064BAD9C1AC24196F0EC611C596DAF8BB6B207C (const RuntimeMethod* method) 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71));
		(&V_0)->___m_LowerBound_0 = 0;
		(&V_0)->___m_UpperBound_1 = ((int32_t)5000);
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Rendering.RenderQueueRange UnityEngine.Rendering.RenderQueueRange::get_opaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 RenderQueueRange_get_opaque_m197DF3E6CC12F21B15F3F603EFD640806FCB65D9 (const RuntimeMethod* method) 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71));
		(&V_0)->___m_LowerBound_0 = 0;
		(&V_0)->___m_UpperBound_1 = ((int32_t)2500);
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Rendering.RenderQueueRange UnityEngine.Rendering.RenderQueueRange::get_transparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 RenderQueueRange_get_transparent_m874E5D7D8B1F634BD31FF1306CCD6BDF018E2816 (const RuntimeMethod* method) 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71));
		(&V_0)->___m_LowerBound_0 = ((int32_t)2501);
		(&V_0)->___m_UpperBound_1 = ((int32_t)5000);
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.Rendering.RenderQueueRange::get_lowerBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_get_lowerBound_m0F11004DA9B02414047A9DB92275F009487581E4 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_LowerBound_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t RenderQueueRange_get_lowerBound_m0F11004DA9B02414047A9DB92275F009487581E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderQueueRange_get_lowerBound_m0F11004DA9B02414047A9DB92275F009487581E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderQueueRange::get_upperBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_get_upperBound_m6A89E9331EE632619B0B71A36B183290C97A1D9F (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_UpperBound_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t RenderQueueRange_get_upperBound_m6A89E9331EE632619B0B71A36B183290C97A1D9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderQueueRange_get_upperBound_m6A89E9331EE632619B0B71A36B183290C97A1D9F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderQueueRange::Equals(UnityEngine.Rendering.RenderQueueRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderQueueRange_Equals_m365F88BC7D2E35E08F56821E98DE455689176A88 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___m_LowerBound_0;
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_LowerBound_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = __this->___m_UpperBound_1;
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_4 = ___0_other;
		int32_t L_5 = L_4.___m_UpperBound_1;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool RenderQueueRange_Equals_m365F88BC7D2E35E08F56821E98DE455689176A88_AdjustorThunk (RuntimeObject* __this, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___0_other, const RuntimeMethod* method)
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderQueueRange_Equals_m365F88BC7D2E35E08F56821E98DE455689176A88(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderQueueRange::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderQueueRange_Equals_m9436E966960F5205E3EB1A9BC6D66FCD13046C68 (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = RenderQueueRange_Equals_m365F88BC7D2E35E08F56821E98DE455689176A88(__this, ((*(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*)((RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*)(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*)UnBox(L_3, RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderQueueRange_Equals_m9436E966960F5205E3EB1A9BC6D66FCD13046C68_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderQueueRange_Equals_m9436E966960F5205E3EB1A9BC6D66FCD13046C68(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderQueueRange::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderQueueRange_GetHashCode_m0A0BAA317A8C6B094A92FEEF75448DAC103ACA6F (RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_LowerBound_0;
		int32_t L_1 = __this->___m_UpperBound_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_1));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t RenderQueueRange_GetHashCode_m0A0BAA317A8C6B094A92FEEF75448DAC103ACA6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderQueueRange_GetHashCode_m0A0BAA317A8C6B094A92FEEF75448DAC103ACA6F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RenderQueueRange::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderQueueRange__cctor_m5F4E1D0EDF450CC389BCE8A7CEBD241ED50C73A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_StaticFields*)il2cpp_codegen_static_fields_for(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var))->___minimumBound_3 = 0;
		((RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_StaticFields*)il2cpp_codegen_static_fields_for(RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71_il2cpp_TypeInfo_var))->___maximumBound_5 = ((int32_t)5000);
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
// System.Void UnityEngine.Rendering.RenderStateBlock::.ctor(UnityEngine.Rendering.RenderStateMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock__ctor_mED2806102FED1023AB74D94DC37F535497AED1F9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_mask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 L_0;
		L_0 = BlendState_get_defaultValue_m0BF91DBDDEBA2976D54B94FD472E96236B8B7322(NULL);
		__this->___m_BlendState_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_il2cpp_TypeInfo_var);
		RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 L_1 = ((RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_StaticFields*)il2cpp_codegen_static_fields_for(RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26_il2cpp_TypeInfo_var))->___defaultValue_0;
		__this->___m_RasterState_1 = L_1;
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 L_2;
		L_2 = DepthState_get_defaultValue_m1124EB628DFF0E2623145C8958B58961B68DFB51(NULL);
		__this->___m_DepthState_2 = L_2;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_3;
		L_3 = StencilState_get_defaultValue_m4A98541E193B4B554C8529C240D54B0DC2994BA7(NULL);
		__this->___m_StencilState_3 = L_3;
		__this->___m_StencilReference_4 = 0;
		int32_t L_4 = ___0_mask;
		__this->___m_Mask_5 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock__ctor_mED2806102FED1023AB74D94DC37F535497AED1F9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_mask, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock__ctor_mED2806102FED1023AB74D94DC37F535497AED1F9(_thisAdjusted, ___0_mask, method);
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_blendState(UnityEngine.Rendering.BlendState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_blendState_mFC21867EBDC8C76E8CB638265110E28E45326164 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___0_value, const RuntimeMethod* method) 
{
	{
		BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 L_0 = ___0_value;
		__this->___m_BlendState_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_blendState_mFC21867EBDC8C76E8CB638265110E28E45326164_AdjustorThunk (RuntimeObject* __this, BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_blendState_mFC21867EBDC8C76E8CB638265110E28E45326164(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_rasterState(UnityEngine.Rendering.RasterState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_rasterState_m9EA87A2AE04B16A03A0C426471EBD3D541BBFF93 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___0_value, const RuntimeMethod* method) 
{
	{
		RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 L_0 = ___0_value;
		__this->___m_RasterState_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_rasterState_m9EA87A2AE04B16A03A0C426471EBD3D541BBFF93_AdjustorThunk (RuntimeObject* __this, RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_rasterState_m9EA87A2AE04B16A03A0C426471EBD3D541BBFF93(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::get_depthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 RenderStateBlock_get_depthState_m7A6B50C345D9BB77874859675658E682D39B2F93 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) 
{
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 L_0 = __this->___m_DepthState_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 RenderStateBlock_get_depthState_m7A6B50C345D9BB77874859675658E682D39B2F93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 _returnValue;
	_returnValue = RenderStateBlock_get_depthState_m7A6B50C345D9BB77874859675658E682D39B2F93(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_depthState(UnityEngine.Rendering.DepthState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_depthState_mC3E64761972C4C08337991AE4E2DEF565C059E56 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___0_value, const RuntimeMethod* method) 
{
	{
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 L_0 = ___0_value;
		__this->___m_DepthState_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_depthState_mC3E64761972C4C08337991AE4E2DEF565C059E56_AdjustorThunk (RuntimeObject* __this, DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_depthState_mC3E64761972C4C08337991AE4E2DEF565C059E56(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::get_stencilState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 RenderStateBlock_get_stencilState_mDB0789D0366CE036924C55EEC90A60F1DDAE7BC6 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) 
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_0 = __this->___m_StencilState_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 RenderStateBlock_get_stencilState_mDB0789D0366CE036924C55EEC90A60F1DDAE7BC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 _returnValue;
	_returnValue = RenderStateBlock_get_stencilState_mDB0789D0366CE036924C55EEC90A60F1DDAE7BC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_stencilState(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_stencilState_m1DD8E2B3953C435C65BA7D60348D717E16B29DEA (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_value, const RuntimeMethod* method) 
{
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_0 = ___0_value;
		__this->___m_StencilState_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_stencilState_m1DD8E2B3953C435C65BA7D60348D717E16B29DEA_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_stencilState_m1DD8E2B3953C435C65BA7D60348D717E16B29DEA(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.Rendering.RenderStateBlock::get_stencilReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_get_stencilReference_m8EF0C19AC4FA1BDEA87972A31EE3E3D4695F23DE (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_StencilReference_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t RenderStateBlock_get_stencilReference_m8EF0C19AC4FA1BDEA87972A31EE3E3D4695F23DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderStateBlock_get_stencilReference_m8EF0C19AC4FA1BDEA87972A31EE3E3D4695F23DE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_stencilReference(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_stencilReference_m9AE2F79509B0F431E8D0430B941DC23755722D84 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_StencilReference_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_stencilReference_m9AE2F79509B0F431E8D0430B941DC23755722D84_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_stencilReference_m9AE2F79509B0F431E8D0430B941DC23755722D84(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::get_mask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_get_mask_mC675CA5A35CC9912F9B8E34B1DB6BBDB66FFC4C6 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Mask_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t RenderStateBlock_get_mask_mC675CA5A35CC9912F9B8E34B1DB6BBDB66FFC4C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderStateBlock_get_mask_mC675CA5A35CC9912F9B8E34B1DB6BBDB66FFC4C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RenderStateBlock::set_mask(UnityEngine.Rendering.RenderStateMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderStateBlock_set_mask_m0857047D723D7AF5E378D4F9F25D0BC83AD6E9BC (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Mask_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderStateBlock_set_mask_m0857047D723D7AF5E378D4F9F25D0BC83AD6E9BC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	RenderStateBlock_set_mask_m0857047D723D7AF5E378D4F9F25D0BC83AD6E9BC(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.RenderStateBlock::Equals(UnityEngine.Rendering.RenderStateBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_m8D194B252A39D7E4BB15EDC9B1E1DE0B32445B14 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630* L_0 = (&__this->___m_BlendState_0);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_1 = ___0_other;
		BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 L_2 = L_1.___m_BlendState_0;
		bool L_3;
		L_3 = BlendState_Equals_m3F7EFA35979F29164E0FE66930C7FE3E870E3748(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26* L_4 = (&__this->___m_RasterState_1);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_5 = ___0_other;
		RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 L_6 = L_5.___m_RasterState_1;
		bool L_7;
		L_7 = RasterState_Equals_m61270B22D9C4EF86DB8CADE3D217D9D3E849F410(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255* L_8 = (&__this->___m_DepthState_2);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_9 = ___0_other;
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 L_10 = L_9.___m_DepthState_2;
		bool L_11;
		L_11 = DepthState_Equals_mF4448D46992C7BB7BDBCBDC69CFA5394EE315C41(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* L_12 = (&__this->___m_StencilState_3);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_13 = ___0_other;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_14 = L_13.___m_StencilState_3;
		bool L_15;
		L_15 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_16 = __this->___m_StencilReference_4;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_17 = ___0_other;
		int32_t L_18 = L_17.___m_StencilReference_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_19 = __this->___m_Mask_5;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_20 = ___0_other;
		int32_t L_21 = L_20.___m_Mask_5;
		G_B7_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B7_0 = 0;
	}

IL_006c:
	{
		V_0 = (bool)G_B7_0;
		goto IL_006f;
	}

IL_006f:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool RenderStateBlock_Equals_m8D194B252A39D7E4BB15EDC9B1E1DE0B32445B14_AdjustorThunk (RuntimeObject* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_other, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderStateBlock_Equals_m8D194B252A39D7E4BB15EDC9B1E1DE0B32445B14(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderStateBlock::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = RenderStateBlock_Equals_m8D194B252A39D7E4BB15EDC9B1E1DE0B32445B14(__this, ((*(RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)((RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)(RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)UnBox(L_3, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderStateBlock::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderStateBlock_GetHashCode_m9CAE3D7AD3EF037725CB0CB809C1A3783790EB3D (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630* L_0 = (&__this->___m_BlendState_0);
		int32_t L_1;
		L_1 = BlendState_GetHashCode_mA0E61E556B7B64ED28D6C50D54665CE2914EE5B0(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26* L_3 = (&__this->___m_RasterState_1);
		int32_t L_4;
		L_4 = RasterState_GetHashCode_m2F2090DFF4366B0789D6803ABE64D00C29D704B1(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255* L_6 = (&__this->___m_DepthState_2);
		int32_t L_7;
		L_7 = DepthState_GetHashCode_m61A6034A3DC8EFCAD253A4A48C295473CB5C50B4(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* L_9 = (&__this->___m_StencilState_3);
		int32_t L_10;
		L_10 = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_StencilReference_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_12));
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___m_Mask_5;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)397)))^(int32_t)L_14));
		int32_t L_15 = V_0;
		V_1 = L_15;
		goto IL_0084;
	}

IL_0084:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t RenderStateBlock_GetHashCode_m9CAE3D7AD3EF037725CB0CB809C1A3783790EB3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderStateBlock_GetHashCode_m9CAE3D7AD3EF037725CB0CB809C1A3783790EB3D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.RenderTargetBlendState::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 RenderTargetBlendState_get_defaultValue_m85BEE053134DB5898A885698588CF296EDB2CBB2 (const RuntimeMethod* method) 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		RenderTargetBlendState__ctor_m9B65D2DDAA8C8B40EBACC02A8D578D7DC7E013ED((&L_0), ((int32_t)15), 1, 0, 1, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.RenderTargetBlendState::.ctor(UnityEngine.Rendering.ColorWriteMask,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendMode,UnityEngine.Rendering.BlendOp,UnityEngine.Rendering.BlendOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBlendState__ctor_m9B65D2DDAA8C8B40EBACC02A8D578D7DC7E013ED (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, int32_t ___0_writeMask, int32_t ___1_sourceColorBlendMode, int32_t ___2_destinationColorBlendMode, int32_t ___3_sourceAlphaBlendMode, int32_t ___4_destinationAlphaBlendMode, int32_t ___5_colorBlendOperation, int32_t ___6_alphaBlendOperation, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_writeMask;
		__this->___m_WriteMask_0 = (uint8_t)((int32_t)(uint8_t)L_0);
		int32_t L_1 = ___1_sourceColorBlendMode;
		__this->___m_SourceColorBlendMode_1 = (uint8_t)((int32_t)(uint8_t)L_1);
		int32_t L_2 = ___2_destinationColorBlendMode;
		__this->___m_DestinationColorBlendMode_2 = (uint8_t)((int32_t)(uint8_t)L_2);
		int32_t L_3 = ___3_sourceAlphaBlendMode;
		__this->___m_SourceAlphaBlendMode_3 = (uint8_t)((int32_t)(uint8_t)L_3);
		int32_t L_4 = ___4_destinationAlphaBlendMode;
		__this->___m_DestinationAlphaBlendMode_4 = (uint8_t)((int32_t)(uint8_t)L_4);
		int32_t L_5 = ___5_colorBlendOperation;
		__this->___m_ColorBlendOperation_5 = (uint8_t)((int32_t)(uint8_t)L_5);
		int32_t L_6 = ___6_alphaBlendOperation;
		__this->___m_AlphaBlendOperation_6 = (uint8_t)((int32_t)(uint8_t)L_6);
		__this->___m_Padding_7 = (uint8_t)0;
		return;
	}
}
IL2CPP_EXTERN_C  void RenderTargetBlendState__ctor_m9B65D2DDAA8C8B40EBACC02A8D578D7DC7E013ED_AdjustorThunk (RuntimeObject* __this, int32_t ___0_writeMask, int32_t ___1_sourceColorBlendMode, int32_t ___2_destinationColorBlendMode, int32_t ___3_sourceAlphaBlendMode, int32_t ___4_destinationAlphaBlendMode, int32_t ___5_colorBlendOperation, int32_t ___6_alphaBlendOperation, const RuntimeMethod* method)
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*>(__this + _offset);
	RenderTargetBlendState__ctor_m9B65D2DDAA8C8B40EBACC02A8D578D7DC7E013ED(_thisAdjusted, ___0_writeMask, ___1_sourceColorBlendMode, ___2_destinationColorBlendMode, ___3_sourceAlphaBlendMode, ___4_destinationAlphaBlendMode, ___5_colorBlendOperation, ___6_alphaBlendOperation, method);
}
// System.Boolean UnityEngine.Rendering.RenderTargetBlendState::Equals(UnityEngine.Rendering.RenderTargetBlendState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetBlendState_Equals_m8353DA559FC116A14C55F260415C9680E1F24C11 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		uint8_t L_0 = __this->___m_WriteMask_0;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_1 = ___0_other;
		uint8_t L_2 = L_1.___m_WriteMask_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_3 = __this->___m_SourceColorBlendMode_1;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_4 = ___0_other;
		uint8_t L_5 = L_4.___m_SourceColorBlendMode_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_6 = __this->___m_DestinationColorBlendMode_2;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_7 = ___0_other;
		uint8_t L_8 = L_7.___m_DestinationColorBlendMode_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_9 = __this->___m_SourceAlphaBlendMode_3;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_10 = ___0_other;
		uint8_t L_11 = L_10.___m_SourceAlphaBlendMode_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_12 = __this->___m_DestinationAlphaBlendMode_4;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_13 = ___0_other;
		uint8_t L_14 = L_13.___m_DestinationAlphaBlendMode_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_15 = __this->___m_ColorBlendOperation_5;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_16 = ___0_other;
		uint8_t L_17 = L_16.___m_ColorBlendOperation_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_18 = __this->___m_AlphaBlendOperation_6;
		RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 L_19 = ___0_other;
		uint8_t L_20 = L_19.___m_AlphaBlendOperation_6;
		G_B8_0 = ((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 0;
	}

IL_0066:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetBlendState_Equals_m8353DA559FC116A14C55F260415C9680E1F24C11_AdjustorThunk (RuntimeObject* __this, RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___0_other, const RuntimeMethod* method)
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetBlendState_Equals_m8353DA559FC116A14C55F260415C9680E1F24C11(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetBlendState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetBlendState_Equals_mE7C353E5B3CCF2B9D1E9A43C2977589C96DCE029 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = RenderTargetBlendState_Equals_m8353DA559FC116A14C55F260415C9680E1F24C11(__this, ((*(RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*)((RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*)(RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*)UnBox(L_3, RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetBlendState_Equals_mE7C353E5B3CCF2B9D1E9A43C2977589C96DCE029_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetBlendState_Equals_mE7C353E5B3CCF2B9D1E9A43C2977589C96DCE029(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderTargetBlendState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetBlendState_GetHashCode_m957556CDC43ECA2EB13957DC50BBC420C43DD8E8 (RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (&__this->___m_WriteMask_0);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (&__this->___m_SourceColorBlendMode_1);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (&__this->___m_DestinationColorBlendMode_2);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (&__this->___m_SourceAlphaBlendMode_3);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (&__this->___m_DestinationAlphaBlendMode_4);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (&__this->___m_ColorBlendOperation_5);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (&__this->___m_AlphaBlendOperation_6);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_008a;
	}

IL_008a:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C  int32_t RenderTargetBlendState_GetHashCode_m957556CDC43ECA2EB13957DC50BBC420C43DD8E8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderTargetBlendState_GetHashCode_m957556CDC43ECA2EB13957DC50BBC420C43DD8E8(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginRenderPass_Internal(System.IntPtr,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC (intptr_t ___0_self, int32_t ___1_width, int32_t ___2_height, int32_t ___3_samples, intptr_t ___4_colors, int32_t ___5_colorCount, int32_t ___6_depthAttachmentIndex, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC_ftn) (intptr_t, int32_t, int32_t, int32_t, intptr_t, int32_t, int32_t);
	static ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::BeginRenderPass_Internal(System.IntPtr,System.Int32,System.Int32,System.Int32,System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___0_self, ___1_width, ___2_height, ___3_samples, ___4_colors, ___5_colorCount, ___6_depthAttachmentIndex);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass_Internal(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B (intptr_t ___0_self, intptr_t ___1_colors, int32_t ___2_colorCount, intptr_t ___3_inputs, int32_t ___4_inputCount, bool ___5_isDepthReadOnly, bool ___6_isStencilReadOnly, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B_ftn) (intptr_t, intptr_t, int32_t, intptr_t, int32_t, bool, bool);
	static ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass_Internal(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(___0_self, ___1_colors, ___2_colorCount, ___3_inputs, ___4_inputCount, ___5_isDepthReadOnly, ___6_isStencilReadOnly);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndSubPass_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924 (intptr_t ___0_self, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924_ftn) (intptr_t);
	static ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::EndSubPass_Internal(System.IntPtr)");
	_il2cpp_icall_func(___0_self);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndRenderPass_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2 (intptr_t ___0_self, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2_ftn) (intptr_t);
	static ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::EndRenderPass_Internal(System.IntPtr)");
	_il2cpp_icall_func(___0_self);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Internal_Cull_m57895EC289AFC667CACAFC14F4CD11DEE3699C49 (ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___1_renderLoop, intptr_t ___2_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* L_0 = ___0_parameters;
		intptr_t L_1 = ___2_results;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356(L_0, (&___1_renderLoop), L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InitializeSortSettings(UnityEngine.Camera,UnityEngine.Rendering.SortingSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* ___1_sortingSettings, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE_ftn) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*);
	static ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::InitializeSortSettings(UnityEngine.Camera,UnityEngine.Rendering.SortingSettings&)");
	_il2cpp_icall_func(___0_camera, ___1_sortingSettings);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_Internal_mAE1E99BDF4C4E5A0FD9A0147E460E25ABB84BF14 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_Submit_Internal_mAE1E99BDF4C4E5A0FD9A0147E460E25ABB84BF14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_Submit_Internal_mAE1E99BDF4C4E5A0FD9A0147E460E25ABB84BF14(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_Internal_m62C47EAA3BFEB09D86209728AF538780EF149164 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_SubmitForRenderPassValidation_Internal_m62C47EAA3BFEB09D86209728AF538780EF149164_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_SubmitForRenderPassValidation_Internal_m62C47EAA3BFEB09D86209728AF538780EF149164(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_listType;
		RuntimeObject* L_1 = ___1_resultList;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(_thisAdjusted, ___0_listType, ___1_resultList, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal(System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_cullResults;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_1 = ___1_drawingSettings;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_2 = ___2_filteringSettings;
		bool L_3 = ___4_isPassTagName;
		intptr_t L_4 = ___5_tagValues;
		intptr_t L_5 = ___6_stateBlocks;
		int32_t L_6 = ___7_stateCount;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286(__this, L_0, L_1, L_2, (&___3_tagName), L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5(_thisAdjusted, ___0_cullResults, ___1_drawingSettings, ___2_filteringSettings, ___3_tagName, ___4_isPassTagName, ___5_tagValues, ___6_stateBlocks, ___7_stateCount, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_Internal_m08F763220CF5A16E5CFFEC14CBBB31232834FB44 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_shadowDrawingSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_shadowDrawingSettings;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawShadows_Internal_m08F763220CF5A16E5CFFEC14CBBB31232834FB44_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_shadowDrawingSettings, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawShadows_Internal_m08F763220CF5A16E5CFFEC14CBBB31232834FB44(_thisAdjusted, ___0_shadowDrawingSettings, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_Internal_mB1301CB153966010CFF3F80414704D7741ADC4DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_commandBuffer;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_ExecuteCommandBuffer_Internal_mB1301CB153966010CFF3F80414704D7741ADC4DF_AdjustorThunk (RuntimeObject* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_ExecuteCommandBuffer_Internal_mB1301CB153966010CFF3F80414704D7741ADC4DF(_thisAdjusted, ___0_commandBuffer, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_m037CBD4FE2C4BE55E93A3A1C09BB0DA4C36E6323 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_commandBuffer;
		int32_t L_1 = ___1_queueType;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_m037CBD4FE2C4BE55E93A3A1C09BB0DA4C36E6323_AdjustorThunk (RuntimeObject* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_m037CBD4FE2C4BE55E93A3A1C09BB0DA4C36E6323(_thisAdjusted, ___0_commandBuffer, ___1_queueType, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal(UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_Internal_mF12DBDC413FC167EE8A1F6C6A5A27DCD9916AB9F (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		bool L_1 = ___1_stereoSetup;
		int32_t L_2 = ___2_eye;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_SetupCameraProperties_Internal_mF12DBDC413FC167EE8A1F6C6A5A27DCD9916AB9F_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_SetupCameraProperties_Internal_mF12DBDC413FC167EE8A1F6C6A5A27DCD9916AB9F(_thisAdjusted, ___0_camera, ___1_stereoSetup, ___2_eye, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_Internal_m1839C8DAE50943FD542048A0C131B9CDEFB3EE06 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawSkybox_Internal_m1839C8DAE50943FD542048A0C131B9CDEFB3EE06_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawSkybox_Internal_m1839C8DAE50943FD542048A0C131B9CDEFB3EE06(_thisAdjusted, ___0_camera, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_m9E720D8B842777F95E139A8DC739EFC2016B2CB6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_m9E720D8B842777F95E139A8DC739EFC2016B2CB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_m9E720D8B842777F95E139A8DC739EFC2016B2CB6(_thisAdjusted, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_Impl_m58DEED5ECEE8C88AA137BC989623FA34261ECA12 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawWireOverlay_Impl_m58DEED5ECEE8C88AA137BC989623FA34261ECA12_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawWireOverlay_Impl_m58DEED5ECEE8C88AA137BC989623FA34261ECA12(_thisAdjusted, ___0_camera, method);
}
// UnityEngine.Rendering.RendererUtils.RendererList UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList_Internal(System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_cullResults;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_1 = ___1_drawingSettings;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_2 = ___2_filteringSettings;
		bool L_3 = ___4_isPassTagName;
		intptr_t L_4 = ___5_tagValues;
		intptr_t L_5 = ___6_stateBlocks;
		int32_t L_6 = ___7_stateCount;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196(__this, L_0, L_1, L_2, (&___3_tagName), L_3, L_4, L_5, L_6, (&V_0), NULL);
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, intptr_t ___5_tagValues, intptr_t ___6_stateBlocks, int32_t ___7_stateCount, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E _returnValue;
	_returnValue = ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4(_thisAdjusted, ___0_cullResults, ___1_drawingSettings, ___2_filteringSettings, ___3_tagName, ___4_isPassTagName, ___5_tagValues, ___6_stateBlocks, ___7_stateCount, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync_Internal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_Internal_m7818765C4D15B9047F87E1BD3EC6ACC43EA8244E (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_rendererLists, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_rendererLists;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_PrepareRendererListsAsync_Internal_m7818765C4D15B9047F87E1BD3EC6ACC43EA8244E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_rendererLists, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_PrepareRendererListsAsync_Internal_m7818765C4D15B9047F87E1BD3EC6ACC43EA8244E(_thisAdjusted, ___0_rendererLists, method);
}
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus_Internal(UnityEngine.Rendering.RendererUtils.RendererList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_Internal_m07D1834B1268BE792FF68B45FFC4A8B9EF17FB8B (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054(__this, (&___0_handle), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_QueryRendererListStatus_Internal_m07D1834B1268BE792FF68B45FFC4A8B9EF17FB8B_AdjustorThunk (RuntimeObject* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_handle, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_QueryRendererListStatus_Internal_m07D1834B1268BE792FF68B45FFC4A8B9EF17FB8B(_thisAdjusted, ___0_handle, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5(_thisAdjusted, ___0_ptr, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginRenderPass(System.Int32,System.Int32,System.Int32,Unity.Collections.NativeArray`1<UnityEngine.Rendering.AttachmentDescriptor>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginRenderPass_mC026E069CF6681EA3331972D2D11BC9616C2BBBE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_samples, NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 ___3_attachments, int32_t ___4_depthAttachmentIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_1;
		int32_t L_1 = ___0_width;
		int32_t L_2 = ___1_height;
		int32_t L_3 = ___2_samples;
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_4 = ___3_attachments;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB(L_4, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m868FE20024E99C804E8A209DBE956807672339BB_RuntimeMethod_var);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_5, NULL);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___3_attachments))->___m_Length_1);
		int32_t L_8 = ___4_depthAttachmentIndex;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_BeginRenderPass_Internal_m4310C41E014B542257CF522B60CF8EB43E3C68CC(L_0, L_1, L_2, L_3, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_BeginRenderPass_mC026E069CF6681EA3331972D2D11BC9616C2BBBE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_samples, NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 ___3_attachments, int32_t ___4_depthAttachmentIndex, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_BeginRenderPass_mC026E069CF6681EA3331972D2D11BC9616C2BBBE(_thisAdjusted, ___0_width, ___1_height, ___2_samples, ___3_attachments, ___4_depthAttachmentIndex, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_m53AECA447C7DC5E5DBA8A3C3DB93CE091B9E9918 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_inputs, bool ___2_isDepthStencilReadOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = ___0_colors;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_1, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_colors))->___m_Length_1);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = ___1_inputs;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_5, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_6, NULL);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_inputs))->___m_Length_1);
		bool L_9 = ___2_isDepthStencilReadOnly;
		bool L_10 = ___2_isDepthStencilReadOnly;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_BeginSubPass_m53AECA447C7DC5E5DBA8A3C3DB93CE091B9E9918_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_inputs, bool ___2_isDepthStencilReadOnly, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_BeginSubPass_m53AECA447C7DC5E5DBA8A3C3DB93CE091B9E9918(_thisAdjusted, ___0_colors, ___1_inputs, ___2_isDepthStencilReadOnly, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::BeginSubPass(Unity.Collections.NativeArray`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_BeginSubPass_m9E1A59EB48A07EDC1FB233CAC1177EDE73B19767 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, bool ___1_isDepthStencilReadOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_1 = ___0_colors;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_1, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_colors))->___m_Length_1);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6 = ___1_isDepthStencilReadOnly;
		bool L_7 = ___1_isDepthStencilReadOnly;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_BeginSubPass_Internal_m42AEAD86E8AF42C6A33ECAC836C9390816811E6B(L_0, L_3, L_4, L_5, 0, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_BeginSubPass_m9E1A59EB48A07EDC1FB233CAC1177EDE73B19767_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_colors, bool ___1_isDepthStencilReadOnly, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_BeginSubPass_m9E1A59EB48A07EDC1FB233CAC1177EDE73B19767(_thisAdjusted, ___0_colors, ___1_isDepthStencilReadOnly, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndSubPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndSubPass_m9A25C86A96A30590D7D8D9BEE2EE789B4C363602 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_1;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_EndSubPass_Internal_mD450FDF3B8438CB6705B8E73634202AF670C0924(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_EndSubPass_m9A25C86A96A30590D7D8D9BEE2EE789B4C363602_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_EndSubPass_m9A25C86A96A30590D7D8D9BEE2EE789B4C363602(_thisAdjusted, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::EndRenderPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_EndRenderPass_mA729C3E803FAEBE9D99B2DD03315CC823E4081DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_1;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_EndRenderPass_Internal_m47BE5E972C9ACF79C9E1BEAD8C404BE31AC2D9D2(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_EndRenderPass_mA729C3E803FAEBE9D99B2DD03315CC823E4081DF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_EndRenderPass_mA729C3E803FAEBE9D99B2DD03315CC823E4081DF(_thisAdjusted, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_mF417223097ECEB2768EE736BE00A7F94DA3BDD26 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	{
		ScriptableRenderContext_Submit_Internal_mAE1E99BDF4C4E5A0FD9A0147E460E25ABB84BF14(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_Submit_mF417223097ECEB2768EE736BE00A7F94DA3BDD26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_Submit_mF417223097ECEB2768EE736BE00A7F94DA3BDD26(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_m8A96E2FFFD825B65086835D0809440AD0816EA24 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = ScriptableRenderContext_SubmitForRenderPassValidation_Internal_m62C47EAA3BFEB09D86209728AF538780EF149164(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_SubmitForRenderPassValidation_m8A96E2FFFD825B65086835D0809440AD0816EA24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_SubmitForRenderPassValidation_m8A96E2FFFD825B65086835D0809440AD0816EA24(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_2 = ___0_results;
		ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189_AdjustorThunk (RuntimeObject* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189(_thisAdjusted, ___0_results, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_m2128F24FEE37089B325EC8C76E24DBD12985A060 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_0 = ___0_cullingResults;
		intptr_t L_1 = L_0.___ptr_0;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_2 = ___1_drawingSettings;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_3 = ___2_filteringSettings;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_4 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5(__this, L_1, L_2, L_3, L_4, (bool)0, L_5, L_6, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawRenderers_m2128F24FEE37089B325EC8C76E24DBD12985A060_AdjustorThunk (RuntimeObject* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawRenderers_m2128F24FEE37089B325EC8C76E24DBD12985A060(_thisAdjusted, ___0_cullingResults, ___1_drawingSettings, ___2_filteringSettings, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.RenderStateBlock&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_m87278D0FBE7A0865779FF9541BF96EDB65F8A2C6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___3_stateBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* V_1 = NULL;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0));
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___3_stateBlock;
		V_2 = L_0;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_1 = V_2;
		V_1 = (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)((uintptr_t)L_1);
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_2 = ___0_cullingResults;
		intptr_t L_3 = L_2.___ptr_0;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_4 = ___1_drawingSettings;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_5 = ___2_filteringSettings;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_6 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&V_0)), NULL);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_8 = V_1;
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_8, NULL);
		ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5(__this, L_3, L_4, L_5, L_6, (bool)0, L_7, L_9, 1, NULL);
		V_2 = (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawRenderers_m87278D0FBE7A0865779FF9541BF96EDB65F8A2C6_AdjustorThunk (RuntimeObject* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___3_stateBlock, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawRenderers_m87278D0FBE7A0865779FF9541BF96EDB65F8A2C6(_thisAdjusted, ___0_cullingResults, ___1_drawingSettings, ___2_filteringSettings, ___3_stateBlock, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers(UnityEngine.Rendering.CullingResults,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId,System.Boolean,Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___5_tagValues, NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___6_stateBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___5_tagValues))->___m_Length_1);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___6_stateBlocks))->___m_Length_1);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9349F69EBC794CACA792A953D209129589F86F2A)));
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9349F69EBC794CACA792A953D209129589F86F2A)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFF201D71A66B6B79AE967AB8C08533D6661BEBA)));
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFF201D71A66B6B79AE967AB8C08533D6661BEBA)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9349F69EBC794CACA792A953D209129589F86F2A)));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9349F69EBC794CACA792A953D209129589F86F2A)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___5_tagValues))->___m_Length_1);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFF201D71A66B6B79AE967AB8C08533D6661BEBA)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFF201D71A66B6B79AE967AB8C08533D6661BEBA)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___6_stateBlocks))->___m_Length_1);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC77066553C7A3911927C3AA36BBB18DD9A65EE59)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B_RuntimeMethod_var)));
	}

IL_006c:
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_18 = ___0_cullingResults;
		intptr_t L_19 = L_18.___ptr_0;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_20 = ___1_drawingSettings;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_21 = ___2_filteringSettings;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_22 = ___3_tagName;
		bool L_23 = ___4_isPassTagName;
		NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 L_24 = ___5_tagValues;
		void* L_25;
		L_25 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB(L_24, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mC419FDBA6A2E1FD845B9BFCF11D8F7CDEA7ABCDB_RuntimeMethod_var);
		intptr_t L_26;
		L_26 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_25, NULL);
		NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB L_27 = ___6_stateBlocks;
		void* L_28;
		L_28 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6(L_27, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m77246AD1BBCC71811B32D4FE97B4C77215751CF6_RuntimeMethod_var);
		intptr_t L_29;
		L_29 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_28, NULL);
		int32_t L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___5_tagValues))->___m_Length_1);
		ScriptableRenderContext_DrawRenderers_Internal_mCF9F5F80F19E1AD79C2BA49454D79742BA52AAF5(__this, L_19, L_20, L_21, L_22, L_23, L_26, L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B_AdjustorThunk (RuntimeObject* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___1_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___2_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___3_tagName, bool ___4_isPassTagName, NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___5_tagValues, NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___6_stateBlocks, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawRenderers_mB72BEF70DB7193510B53B358D75F1A0C324D371B(_thisAdjusted, ___0_cullingResults, ___1_drawingSettings, ___2_filteringSettings, ___3_tagName, ___4_isPassTagName, ___5_tagValues, ___6_stateBlocks, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows(UnityEngine.Rendering.ShadowDrawingSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_mCB77DD8C8E93C607194E7577C01A3DAA49089841 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* ___0_settings, const RuntimeMethod* method) 
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* V_0 = NULL;
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* V_1 = NULL;
	{
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* L_0 = ___0_settings;
		V_1 = L_0;
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* L_1 = V_1;
		V_0 = (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*)((uintptr_t)L_1);
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* L_2 = V_0;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		ScriptableRenderContext_DrawShadows_Internal_m08F763220CF5A16E5CFFEC14CBBB31232834FB44(__this, L_3, NULL);
		V_1 = (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawShadows_mCB77DD8C8E93C607194E7577C01A3DAA49089841_AdjustorThunk (RuntimeObject* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* ___0_settings, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawShadows_mCB77DD8C8E93C607194E7577C01A3DAA49089841(_thisAdjusted, ___0_settings, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_commandBuffer;
		V_0 = (bool)((((RuntimeObject*)(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10045265A10E0CC3B6EAB29D0E2C0D982F7BF6B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896_RuntimeMethod_var)));
	}

IL_0014:
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ___0_commandBuffer;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___m_Ptr_0;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_8 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10045265A10E0CC3B6EAB29D0E2C0D982F7BF6B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896_RuntimeMethod_var)));
	}

IL_0033:
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = ___0_commandBuffer;
		ScriptableRenderContext_ExecuteCommandBuffer_Internal_mB1301CB153966010CFF3F80414704D7741ADC4DF(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896_AdjustorThunk (RuntimeObject* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896(_thisAdjusted, ___0_commandBuffer, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_commandBuffer;
		V_0 = (bool)((((RuntimeObject*)(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10045265A10E0CC3B6EAB29D0E2C0D982F7BF6B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056_RuntimeMethod_var)));
	}

IL_0014:
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ___0_commandBuffer;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___m_Ptr_0;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_8 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10045265A10E0CC3B6EAB29D0E2C0D982F7BF6B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056_RuntimeMethod_var)));
	}

IL_0033:
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = ___0_commandBuffer;
		int32_t L_10 = ___1_queueType;
		ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_m037CBD4FE2C4BE55E93A3A1C09BB0DA4C36E6323(__this, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056_AdjustorThunk (RuntimeObject* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_commandBuffer, int32_t ___1_queueType, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_ExecuteCommandBufferAsync_m9A198CF7DBC51263331A186D2B7B926EC5E90056(_thisAdjusted, ___0_commandBuffer, ___1_queueType, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_mF45D617B34789AD064BF375CF50C854EAA20E4E8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		bool L_1 = ___1_stereoSetup;
		ScriptableRenderContext_SetupCameraProperties_mE18627E12044732E9FAC254DFB49B8C1241D7CDD(__this, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_SetupCameraProperties_mF45D617B34789AD064BF375CF50C854EAA20E4E8_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_SetupCameraProperties_mF45D617B34789AD064BF375CF50C854EAA20E4E8(_thisAdjusted, ___0_camera, ___1_stereoSetup, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties(UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_mE18627E12044732E9FAC254DFB49B8C1241D7CDD (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		bool L_1 = ___1_stereoSetup;
		int32_t L_2 = ___2_eye;
		ScriptableRenderContext_SetupCameraProperties_Internal_mF12DBDC413FC167EE8A1F6C6A5A27DCD9916AB9F(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_SetupCameraProperties_mE18627E12044732E9FAC254DFB49B8C1241D7CDD_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, bool ___1_stereoSetup, int32_t ___2_eye, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_SetupCameraProperties_mE18627E12044732E9FAC254DFB49B8C1241D7CDD(_thisAdjusted, ___0_camera, ___1_stereoSetup, ___2_eye, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_m478DC07F4D4C50CD4D050FCCFEA5BAED95748F01 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		ScriptableRenderContext_DrawSkybox_Internal_m1839C8DAE50943FD542048A0C131B9CDEFB3EE06(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawSkybox_m478DC07F4D4C50CD4D050FCCFEA5BAED95748F01_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawSkybox_m478DC07F4D4C50CD4D050FCCFEA5BAED95748F01(_thisAdjusted, ___0_camera, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_mD098CE93A314B738A55B5A5CCE2C6B8A5881AB18 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	{
		ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_m9E720D8B842777F95E139A8DC739EFC2016B2CB6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_InvokeOnRenderObjectCallback_mD098CE93A314B738A55B5A5CCE2C6B8A5881AB18_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_InvokeOnRenderObjectCallback_mD098CE93A314B738A55B5A5CCE2C6B8A5881AB18(_thisAdjusted, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_m5FBA5BFEF35D1499E023EFFF04D07B98CB05FDE8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		ScriptableRenderContext_DrawWireOverlay_Impl_m58DEED5ECEE8C88AA137BC989623FA34261ECA12(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_DrawWireOverlay_m5FBA5BFEF35D1499E023EFFF04D07B98CB05FDE8_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_DrawWireOverlay_m5FBA5BFEF35D1499E023EFFF04D07B98CB05FDE8(_thisAdjusted, ___0_camera, method);
}
// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.ScriptableRenderContext::Cull(UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ScriptableRenderContext_Cull_mB7B0E5BE54C1E03AF1E6310E7B9150000DA76110 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267));
		ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* L_0 = ___0_parameters;
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = (*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)__this);
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_Internal_Cull_m57895EC289AFC667CACAFC14F4CD11DEE3699C49(L_0, L_1, L_2, NULL);
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_3 = V_0;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ScriptableRenderContext_Cull_mB7B0E5BE54C1E03AF1E6310E7B9150000DA76110_AdjustorThunk (RuntimeObject* __this, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 _returnValue;
	_returnValue = ScriptableRenderContext_Cull_mB7B0E5BE54C1E03AF1E6310E7B9150000DA76110(_thisAdjusted, ___0_parameters, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = ___0_other;
		intptr_t L_2 = L_1.___m_Ptr_1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D_AdjustorThunk (RuntimeObject* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(__this, ((*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)UnBox(L_3, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.RendererUtils.RendererList UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList(UnityEngine.Rendering.RendererUtils.RendererListDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_m4372D2AFD3B865604E2A33F2AAB018954E8F53AE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___0_desc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var);
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_0;
		L_0 = RendererListParams_Create_mDBFB73D009A35712C00015E51A566C2EF8A8CFA8((&___0_desc), NULL);
		V_0 = L_0;
		Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* L_1 = (&(&V_0)->___stateBlock_6);
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_inline(L_1, Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_4 = V_0;
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_5 = L_4.___cullingResult_3;
		intptr_t L_6 = L_5.___ptr_0;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_7 = (&(&V_0)->___drawSettings_4);
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_8 = (&(&V_0)->___filteringSettings_5);
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_9 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_12;
		L_12 = ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4(__this, L_6, L_7, L_8, L_9, (bool)0, L_10, L_11, 0, NULL);
		V_2 = L_12;
		goto IL_00a4;
	}

IL_004f:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0));
		Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* L_13 = (&(&V_0)->___stateBlock_6);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_14;
		L_14 = Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC(L_13, Nullable_1_get_Value_m08688BF6623E2E42107DC4DB56A01847202C35BC_RuntimeMethod_var);
		V_4 = L_14;
		V_5 = (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733*)((uintptr_t)(&V_4));
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_15 = V_0;
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_16 = L_15.___cullingResult_3;
		intptr_t L_17 = L_16.___ptr_0;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* L_18 = (&(&V_0)->___drawSettings_4);
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* L_19 = (&(&V_0)->___filteringSettings_5);
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_20 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&V_3)), NULL);
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_22 = V_5;
		intptr_t L_23;
		L_23 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_22, NULL);
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_24;
		L_24 = ScriptableRenderContext_CreateRendererList_Internal_mEEF0C22F3CE045E4F43477773DBC310464995FD4(__this, L_17, L_18, L_19, L_20, (bool)0, L_21, L_23, 1, NULL);
		V_2 = L_24;
		goto IL_00a4;
	}

IL_00a4:
	{
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C  RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ScriptableRenderContext_CreateRendererList_m4372D2AFD3B865604E2A33F2AAB018954E8F53AE_AdjustorThunk (RuntimeObject* __this, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___0_desc, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E _returnValue;
	_returnValue = ScriptableRenderContext_CreateRendererList_m4372D2AFD3B865604E2A33F2AAB018954E8F53AE(_thisAdjusted, ___0_desc, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync(System.Collections.Generic.List`1<UnityEngine.Rendering.RendererUtils.RendererList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_mADDBA470A75397E689E1B962D05DC3A41D34D6C6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106* ___0_rendererLists, const RuntimeMethod* method) 
{
	{
		List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106* L_0 = ___0_rendererLists;
		ScriptableRenderContext_PrepareRendererListsAsync_Internal_m7818765C4D15B9047F87E1BD3EC6ACC43EA8244E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_PrepareRendererListsAsync_mADDBA470A75397E689E1B962D05DC3A41D34D6C6_AdjustorThunk (RuntimeObject* __this, List_1_tB068F6876F36A8D0FD515CD3094C8D1F23E36106* ___0_rendererLists, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_PrepareRendererListsAsync_mADDBA470A75397E689E1B962D05DC3A41D34D6C6(_thisAdjusted, ___0_rendererLists, method);
}
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus(UnityEngine.Rendering.RendererUtils.RendererList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_m0FDF33A036694A3A2EEAF68FF2C340B1B04E0CB3 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_rendererList, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_0 = ___0_rendererList;
		int32_t L_1;
		L_1 = ScriptableRenderContext_QueryRendererListStatus_Internal_m07D1834B1268BE792FF68B45FFC4A8B9EF17FB8B(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_QueryRendererListStatus_m0FDF33A036694A3A2EEAF68FF2C340B1B04E0CB3_AdjustorThunk (RuntimeObject* __this, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E ___0_rendererList, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_QueryRendererListStatus_m0FDF33A036694A3A2EEAF68FF2C340B1B04E0CB3(_thisAdjusted, ___0_rendererList, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__cctor_m0C385A2E228FAAEBACE8E912E26F05147525E8B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, /*hidden argument*/NULL);
		((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var))->___kRenderTypeTag_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull_Injected(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356 (ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899* ___0_parameters, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___1_renderLoop, intptr_t ___2_results, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356_ftn) (ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899*, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, intptr_t);
	static ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_Internal_Cull_Injected_m627E84920799755A2751CFC49C7A1960D6C6A356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull_Injected(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)");
	_il2cpp_icall_func(___0_parameters, ___1_renderLoop, ___2_results);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*);
	static ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_Submit_Internal_Injected_m681E323A4F4BA559D199AC99252F417D825B2CBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)");
	_il2cpp_icall_func(___0__unity_self);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*);
	static ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_SubmitForRenderPassValidation_Internal_Injected_mD667F5FA9FEFCE3DB4DF30B5FDDDE8E919F3ED76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::SubmitForRenderPassValidation_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Type_t*, RuntimeObject*);
	static ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_listType, ___2_resultList);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___2_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___3_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___4_tagName, bool ___5_isPassTagName, intptr_t ___6_tagValues, intptr_t ___7_stateBlocks, int32_t ___8_stateCount, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, intptr_t, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49*, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F*, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*, bool, intptr_t, intptr_t, int32_t);
	static ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_DrawRenderers_Internal_Injected_mDAC0CC4AC2BCF1C2FDAF219DD39C36EA9F79E286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_cullResults, ___2_drawingSettings, ___3_filteringSettings, ___4_tagName, ___5_isPassTagName, ___6_tagValues, ___7_stateBlocks, ___8_stateCount);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_shadowDrawingSettings, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, intptr_t);
	static ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_DrawShadows_Internal_Injected_m8732E70FB409FA3630A19EEF7A1512DD36DD0F85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::DrawShadows_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_shadowDrawingSettings);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_commandBuffer, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*);
	static ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected_m64BCAFCA08D53109E9E3244243DF3C9112CF96EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer)");
	_il2cpp_icall_func(___0__unity_self, ___1_commandBuffer);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___1_commandBuffer, int32_t ___2_queueType, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, int32_t);
	static ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected_mCBC0CEA6A9255368E0AC004F864C5BBB996269DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)");
	_il2cpp_icall_func(___0__unity_self, ___1_commandBuffer, ___2_queueType);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, bool ___2_stereoSetup, int32_t ___3_eye, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, bool, int32_t);
	static ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_SetupCameraProperties_Internal_Injected_m2126D32413CA96B64CA65774E4F214E1E1E0E76A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera,System.Boolean,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_camera, ___2_stereoSetup, ___3_eye);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*);
	static ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_DrawSkybox_Internal_Injected_m58F5F165E15D928EA543EE14748D505238A17FF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::DrawSkybox_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)");
	_il2cpp_icall_func(___0__unity_self, ___1_camera);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*);
	static ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_InvokeOnRenderObjectCallback_Internal_Injected_m337ECC0E7CC14CD09E0F1F5C2B46C76D0CF93DE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)");
	_il2cpp_icall_func(___0__unity_self);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*);
	static ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_DrawWireOverlay_Impl_Injected_m5C17EEE37A48427AFA522AC6F70ED3E85C2BEC4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::DrawWireOverlay_Impl_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera)");
	_il2cpp_icall_func(___0__unity_self, ___1_camera);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, intptr_t ___1_cullResults, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49* ___2_drawingSettings, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F* ___3_filteringSettings, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___4_tagName, bool ___5_isPassTagName, intptr_t ___6_tagValues, intptr_t ___7_stateBlocks, int32_t ___8_stateCount, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___9_ret, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, intptr_t, DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49*, FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F*, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*, bool, intptr_t, intptr_t, int32_t, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E*);
	static ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_CreateRendererList_Internal_Injected_m3D3D6EB3489658AF1730754C96272BBE26568196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::CreateRendererList_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Rendering.RendererUtils.RendererList&)");
	_il2cpp_icall_func(___0__unity_self, ___1_cullResults, ___2_drawingSettings, ___3_filteringSettings, ___4_tagName, ___5_isPassTagName, ___6_tagValues, ___7_stateBlocks, ___8_stateCount, ___9_ret);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, RuntimeObject* ___1_rendererLists, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, RuntimeObject*);
	static ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_PrepareRendererListsAsync_Internal_Injected_mED179450E53545C77745C18D0B7C280D1AF98E37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::PrepareRendererListsAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_rendererLists);
}
// UnityEngine.Rendering.RendererUtils.RendererListStatus UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___1_handle, const RuntimeMethod* method) 
{
	typedef int32_t (*ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E*);
	static ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_QueryRendererListStatus_Internal_Injected_m07825754339B9ACF8D5CCA4F1A58B0F6294E6054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::QueryRendererListStatus_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.RendererUtils.RendererList&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9(L_0, NULL);
		__this->___m_Id_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B(_thisAdjusted, ___0_name, method);
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_get_id_m4D63E4F238DF5078A339A60DCAA1C695D28E9B5F (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Id_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_get_id_m4D63E4F238DF5078A339A60DCAA1C695D28E9B5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_get_id_m4D63E4F238DF5078A339A60DCAA1C695D28E9B5F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ShaderTagId::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId_set_id_m539EEFBFF375A1DEA7F860EFFFDDFEE034135FC7 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Id_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId_set_id_m539EEFBFF375A1DEA7F860EFFFDDFEE034135FC7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId_set_id_m539EEFBFF375A1DEA7F860EFFFDDFEE034135FC7(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(__this, ((*(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)UnBox(L_1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Id_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Id_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0_AdjustorThunk (RuntimeObject* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)2079669542);
		int32_t L_0 = V_0;
		int32_t* L_1 = (&__this->___m_Id_1);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::op_Equality(UnityEngine.Rendering.ShaderTagId,UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_op_Equality_mE83D02C57D788A5A9EADE3933DE9D8811B7F8761 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_tag1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___1_tag2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0 = ___1_tag2;
		bool L_1;
		L_1 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0((&___0_tag1), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::op_Inequality(UnityEngine.Rendering.ShaderTagId,UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_op_Inequality_m000FF53695F623FC1903B026837174552F9D1C1C (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_tag1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___1_tag2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0 = ___0_tag1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___1_tag2;
		bool L_2;
		L_2 = ShaderTagId_op_Equality_mE83D02C57D788A5A9EADE3933DE9D8811B7F8761(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::set_useRenderingLayerMaskTest(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings_set_useRenderingLayerMaskTest_m9E81FEE30547B3720C365016689F87A2AB63F025 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* G_B2_0 = NULL;
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* G_B3_1 = NULL;
	{
		bool L_0 = ___0_value;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->___m_UseRenderingLayerMaskTest_2 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ShadowDrawingSettings_set_useRenderingLayerMaskTest_m9E81FEE30547B3720C365016689F87A2AB63F025_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	ShadowDrawingSettings_set_useRenderingLayerMaskTest_m9E81FEE30547B3720C365016689F87A2AB63F025(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::set_splitData(UnityEngine.Rendering.ShadowSplitData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings_set_splitData_mF65DC7AB678EE91AEF252687578E83B880AF4D93 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_value, const RuntimeMethod* method) 
{
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF L_0 = ___0_value;
		__this->___m_SplitData_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ShadowDrawingSettings_set_splitData_mF65DC7AB678EE91AEF252687578E83B880AF4D93_AdjustorThunk (RuntimeObject* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_value, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	ShadowDrawingSettings_set_splitData_mF65DC7AB678EE91AEF252687578E83B880AF4D93(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.ShadowDrawingSettings::.ctor(UnityEngine.Rendering.CullingResults,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowDrawingSettings__ctor_mA9BADD0F63BF177F6BF380999B9B7115263B2BF4 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, int32_t ___1_lightIndex, const RuntimeMethod* method) 
{
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_0 = ___0_cullingResults;
		__this->___m_CullingResults_0 = L_0;
		int32_t L_1 = ___1_lightIndex;
		__this->___m_LightIndex_1 = L_1;
		__this->___m_UseRenderingLayerMaskTest_2 = 0;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_2 = (&__this->___m_SplitData_3);
		il2cpp_codegen_initobj(L_2, sizeof(ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF));
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_3 = (&__this->___m_SplitData_3);
		ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41(L_3, (1.0f), NULL);
		__this->___m_ObjectsFilter_4 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void ShadowDrawingSettings__ctor_mA9BADD0F63BF177F6BF380999B9B7115263B2BF4_AdjustorThunk (RuntimeObject* __this, CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___0_cullingResults, int32_t ___1_lightIndex, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	ShadowDrawingSettings__ctor_mA9BADD0F63BF177F6BF380999B9B7115263B2BF4(_thisAdjusted, ___0_cullingResults, ___1_lightIndex, method);
}
// System.Boolean UnityEngine.Rendering.ShadowDrawingSettings::Equals(UnityEngine.Rendering.ShadowDrawingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowDrawingSettings_Equals_m30BBF392BE2B96951CDDB153EA6AF3634A061A70 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowObjectsFilter_t33DCB0BA372F88094F5BDCDAD3ADD835453AE186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267* L_0 = (&__this->___m_CullingResults_0);
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 L_1 = ___0_other;
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_2 = L_1.___m_CullingResults_0;
		bool L_3;
		L_3 = CullingResults_Equals_mC7DB3AB5E3FB65B137D80FE2218D5577493DFAAA(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_4 = __this->___m_LightIndex_1;
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 L_5 = ___0_other;
		int32_t L_6 = L_5.___m_LightIndex_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0066;
		}
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_7 = (&__this->___m_SplitData_3);
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 L_8 = ___0_other;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF L_9 = L_8.___m_SplitData_3;
		bool L_10;
		L_10 = ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_11 = (&__this->___m_UseRenderingLayerMaskTest_2);
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 L_12 = ___0_other;
		int32_t L_13 = L_12.___m_UseRenderingLayerMaskTest_2;
		bool L_14;
		L_14 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_15 = (&__this->___m_ObjectsFilter_4);
		ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 L_16 = ___0_other;
		int32_t L_17 = L_16.___m_ObjectsFilter_4;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(ShadowObjectsFilter_t33DCB0BA372F88094F5BDCDAD3ADD835453AE186_il2cpp_TypeInfo_var, &L_18);
		Il2CppFakeBox<int32_t> L_20(ShadowObjectsFilter_t33DCB0BA372F88094F5BDCDAD3ADD835453AE186_il2cpp_TypeInfo_var, L_15);
		bool L_21;
		L_21 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), L_19, NULL);
		G_B6_0 = ((int32_t)(L_21));
		goto IL_0067;
	}

IL_0066:
	{
		G_B6_0 = 0;
	}

IL_0067:
	{
		V_0 = (bool)G_B6_0;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool ShadowDrawingSettings_Equals_m30BBF392BE2B96951CDDB153EA6AF3634A061A70_AdjustorThunk (RuntimeObject* __this, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4 ___0_other, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShadowDrawingSettings_Equals_m30BBF392BE2B96951CDDB153EA6AF3634A061A70(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShadowDrawingSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowDrawingSettings_Equals_m93ED522213940B17CDC1AE79C4E564A71A547FBF (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = ShadowDrawingSettings_Equals_m30BBF392BE2B96951CDDB153EA6AF3634A061A70(__this, ((*(ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*)((ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*)(ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*)UnBox(L_3, ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ShadowDrawingSettings_Equals_m93ED522213940B17CDC1AE79C4E564A71A547FBF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShadowDrawingSettings_Equals_m93ED522213940B17CDC1AE79C4E564A71A547FBF(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShadowDrawingSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowDrawingSettings_GetHashCode_m49BE34FCA1A942A213E682921120D78C38E9E637 (ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267* L_0 = (&__this->___m_CullingResults_0);
		int32_t L_1;
		L_1 = CullingResults_GetHashCode_m9CD85BFBCDACEB4B9EC3E944F20A19ED023F55B2(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___m_LightIndex_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___m_UseRenderingLayerMaskTest_2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)397)))^L_5));
		int32_t L_6 = V_0;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_7 = (&__this->___m_SplitData_3);
		int32_t L_8;
		L_8 = ShadowSplitData_GetHashCode_mABE8E2F5079373A40AC9B97D5A22630A52B85900(L_7, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)397)))^L_8));
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___m_ObjectsFilter_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)397)))^(int32_t)L_10));
		int32_t L_11 = V_0;
		V_1 = L_11;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t ShadowDrawingSettings_GetHashCode_m49BE34FCA1A942A213E682921120D78C38E9E637_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowDrawingSettings_t3C0AD7F3960F1BF5536867AF6E641F23F4C7AFA4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShadowDrawingSettings_GetHashCode_m49BE34FCA1A942A213E682921120D78C38E9E637(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Rendering.ShadowSplitData::get_cullingPlaneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_CullingPlaneCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector4 UnityEngine.Rendering.ShadowSplitData::get_cullingSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShadowSplitData_get_cullingSphere_mEABEC468FE12ADDB09239EABD3FB59551E4A44E0 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___m_CullingSphere_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShadowSplitData_get_cullingSphere_mEABEC468FE12ADDB09239EABD3FB59551E4A44E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = ShadowSplitData_get_cullingSphere_mEABEC468FE12ADDB09239EABD3FB59551E4A44E0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ShadowSplitData::set_shadowCascadeBlendCullingFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = 0;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = 1;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		float L_7 = ___0_value;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29FCA82A8845B80036C48DEEBAADCB1798D5103D)), L_4, L_6, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41_RuntimeMethod_var)));
	}

IL_003a:
	{
		float L_12 = ___0_value;
		__this->___m_ShadowCascadeBlendCullingFactor_5 = L_12;
		return;
	}
}
IL2CPP_EXTERN_C  void ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	ShadowSplitData_set_shadowCascadeBlendCullingFactor_m1AFDA53FEAD6A41B3AE12F244D321CB5BB9C1B41(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Plane UnityEngine.Rendering.ShadowSplitData::GetCullingPlane(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* V_3 = NULL;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4(__this, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_4 = 0;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6;
		L_6 = ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ___0_index;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF4020D8849146EB9CBF7C3D8FF7F43C1F58FDB0)), L_5, L_8, L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799_RuntimeMethod_var)));
	}

IL_0044:
	{
		U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62* L_14 = (&__this->___m_CullingPlanes_3);
		uint8_t* L_15 = (&L_14->___FixedElementField_0);
		V_2 = L_15;
		uint8_t* L_16 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_16);
		uint8_t* L_17 = V_1;
		V_3 = (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)L_17;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_18 = V_3;
		int32_t L_19 = ___0_index;
		uint32_t L_20 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_21 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), (int32_t)L_20)))));
		V_4 = L_21;
		goto IL_006a;
	}

IL_006a:
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_22 = V_4;
		return L_22;
	}
}
IL2CPP_EXTERN_C  Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C _returnValue;
	_returnValue = ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShadowSplitData::Equals(UnityEngine.Rendering.ShadowSplitData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		int32_t L_0 = __this->___m_CullingPlaneCount_2;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF L_1 = ___0_other;
		int32_t L_2 = L_1.___m_CullingPlaneCount_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0077;
	}

IL_001b:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_001f:
	{
		int32_t L_4 = V_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_5;
		L_5 = ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799(__this, L_4, NULL);
		V_4 = L_5;
		int32_t L_6 = V_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_7;
		L_7 = ShadowSplitData_GetCullingPlane_m1C9252EEFF0FE4D49806B8CD9857082701861799((&___0_other), L_6, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_8 = L_7;
		RuntimeObject* L_9 = Box(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_il2cpp_TypeInfo_var, &L_8);
		Il2CppFakeBox<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C> L_10(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_il2cpp_TypeInfo_var, (&V_4));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0077;
	}

IL_004f:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0054:
	{
		int32_t L_14 = V_2;
		int32_t L_15;
		L_15 = ShadowSplitData_get_cullingPlaneCount_mE8D0E58BD2628B98AB41395B2C61795576EFA8A4(__this, NULL);
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_001f;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_17 = (&__this->___m_CullingSphere_4);
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF L_18 = ___0_other;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = L_18.___m_CullingSphere_4;
		bool L_20;
		L_20 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(L_17, L_19, NULL);
		V_1 = L_20;
		goto IL_0077;
	}

IL_0077:
	{
		bool L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C  bool ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422_AdjustorThunk (RuntimeObject* __this, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___0_other, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShadowSplitData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowSplitData_Equals_m9D5B1886A1BEAC1509C7196842972F2EF0F91824 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = ShadowSplitData_Equals_mD0264A43F663BDE3753E911AECBEC10798369422(__this, ((*(ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*)((ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*)(ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*)UnBox(L_3, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ShadowSplitData_Equals_m9D5B1886A1BEAC1509C7196842972F2EF0F91824_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShadowSplitData_Equals_m9D5B1886A1BEAC1509C7196842972F2EF0F91824(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShadowSplitData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowSplitData_GetHashCode_mABE8E2F5079373A40AC9B97D5A22630A52B85900 (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_CullingPlaneCount_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = (&__this->___m_CullingSphere_4);
		int32_t L_2;
		L_2 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline(L_1, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t ShadowSplitData_GetHashCode_mABE8E2F5079373A40AC9B97D5A22630A52B85900_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShadowSplitData_GetHashCode_mABE8E2F5079373A40AC9B97D5A22630A52B85900(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ShadowSplitData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSplitData__cctor_mDE077188EE00C8A56926C009794A803806860052 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields*)il2cpp_codegen_static_fields_for(ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_il2cpp_TypeInfo_var))->___maximumCullingPlaneCount_1 = ((int32_t)10);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.SortingLayerRange::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingLayerRange__ctor_mEDA6E9B3D08FE3FC8E1E3AFB3FF3CE999835E9DD (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, int16_t ___0_lowerBound, int16_t ___1_upperBound, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_lowerBound;
		__this->___m_LowerBound_0 = L_0;
		int16_t L_1 = ___1_upperBound;
		__this->___m_UpperBound_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SortingLayerRange__ctor_mEDA6E9B3D08FE3FC8E1E3AFB3FF3CE999835E9DD_AdjustorThunk (RuntimeObject* __this, int16_t ___0_lowerBound, int16_t ___1_upperBound, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	SortingLayerRange__ctor_mEDA6E9B3D08FE3FC8E1E3AFB3FF3CE999835E9DD(_thisAdjusted, ___0_lowerBound, ___1_upperBound, method);
}
// System.Int16 UnityEngine.Rendering.SortingLayerRange::get_lowerBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SortingLayerRange_get_lowerBound_m85402D75932E01A1E2E40749615CD9F7D9B06209 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		int16_t L_0 = __this->___m_LowerBound_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int16_t SortingLayerRange_get_lowerBound_m85402D75932E01A1E2E40749615CD9F7D9B06209_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = SortingLayerRange_get_lowerBound_m85402D75932E01A1E2E40749615CD9F7D9B06209(_thisAdjusted, method);
	return _returnValue;
}
// System.Int16 UnityEngine.Rendering.SortingLayerRange::get_upperBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SortingLayerRange_get_upperBound_m3ECCA010F56BFDDA42D7327D24E1340BF596D487 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		int16_t L_0 = __this->___m_UpperBound_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int16_t SortingLayerRange_get_upperBound_m3ECCA010F56BFDDA42D7327D24E1340BF596D487_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = SortingLayerRange_get_upperBound_m3ECCA010F56BFDDA42D7327D24E1340BF596D487(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.SortingLayerRange UnityEngine.Rendering.SortingLayerRange::get_all()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 SortingLayerRange_get_all_m863C4A568C531502EED02C576BA3E09EBDC9F3B3 (const RuntimeMethod* method) 
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9));
		(&V_0)->___m_LowerBound_0 = (int16_t)((int32_t)-32768);
		(&V_0)->___m_UpperBound_1 = (int16_t)((int32_t)32767);
		SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SortingLayerRange::Equals(UnityEngine.Rendering.SortingLayerRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingLayerRange_Equals_m0E8CA61242958C8EA6CDFE9A52A1E966EB506AF1 (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int16_t L_0 = __this->___m_LowerBound_0;
		SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 L_1 = ___0_other;
		int16_t L_2 = L_1.___m_LowerBound_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int16_t L_3 = __this->___m_UpperBound_1;
		SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 L_4 = ___0_other;
		int16_t L_5 = L_4.___m_UpperBound_1;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool SortingLayerRange_Equals_m0E8CA61242958C8EA6CDFE9A52A1E966EB506AF1_AdjustorThunk (RuntimeObject* __this, SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___0_other, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	bool _returnValue;
	_returnValue = SortingLayerRange_Equals_m0E8CA61242958C8EA6CDFE9A52A1E966EB506AF1(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.SortingLayerRange::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingLayerRange_Equals_m14563DEFE7101D0B67D20F31C7E885A0A834152A (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = SortingLayerRange_Equals_m0E8CA61242958C8EA6CDFE9A52A1E966EB506AF1(__this, ((*(SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*)((SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*)(SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*)UnBox(L_2, SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool SortingLayerRange_Equals_m14563DEFE7101D0B67D20F31C7E885A0A834152A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	bool _returnValue;
	_returnValue = SortingLayerRange_Equals_m14563DEFE7101D0B67D20F31C7E885A0A834152A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.SortingLayerRange::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingLayerRange_GetHashCode_m783780AEEC61B63C1A10C56C1DD7CC0DDCE7A9AE (SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int16_t L_0 = __this->___m_UpperBound_1;
		int16_t L_1 = __this->___m_LowerBound_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)16)))|((int32_t)((int32_t)L_1&((int32_t)65535)))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t SortingLayerRange_GetHashCode_m783780AEEC61B63C1A10C56C1DD7CC0DDCE7A9AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SortingLayerRange_GetHashCode_m783780AEEC61B63C1A10C56C1DD7CC0DDCE7A9AE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.SortingSettings::.ctor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings__ctor_m449888DBB95B75702BFC5BFA1E4A5BE40D9302ED (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_InitializeSortSettings_mD1E31EC0ED1A3BD4EBC1D12F85DCF4CA82111FEE(L_0, __this, NULL);
		int32_t L_1;
		L_1 = SortingSettings_get_criteria_m994FF6A91C4C3B62E1F8B4D10CC942735A55C2B9(__this, NULL);
		__this->___m_Criteria_3 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SortingSettings__ctor_m449888DBB95B75702BFC5BFA1E4A5BE40D9302ED_AdjustorThunk (RuntimeObject* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	SortingSettings__ctor_m449888DBB95B75702BFC5BFA1E4A5BE40D9302ED(_thisAdjusted, ___0_camera, method);
}
// System.Void UnityEngine.Rendering.SortingSettings::set_customAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_customAxis_mAE48373BC03C9F585FD119C7F1549EFFB84F49C9 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_CustomAxis_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SortingSettings_set_customAxis_mAE48373BC03C9F585FD119C7F1549EFFB84F49C9_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	SortingSettings_set_customAxis_mAE48373BC03C9F585FD119C7F1549EFFB84F49C9(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.SortingSettings::get_criteria()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingSettings_get_criteria_m994FF6A91C4C3B62E1F8B4D10CC942735A55C2B9 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Criteria_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SortingSettings_get_criteria_m994FF6A91C4C3B62E1F8B4D10CC942735A55C2B9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SortingSettings_get_criteria_m994FF6A91C4C3B62E1F8B4D10CC942735A55C2B9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.SortingSettings::set_criteria(UnityEngine.Rendering.SortingCriteria)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_criteria_m3D0A9A89ACF96F7135E47BEB44770EF439419E57 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Criteria_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SortingSettings_set_criteria_m3D0A9A89ACF96F7135E47BEB44770EF439419E57_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	SortingSettings_set_criteria_m3D0A9A89ACF96F7135E47BEB44770EF439419E57(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.SortingSettings::set_distanceMetric(UnityEngine.Rendering.DistanceMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingSettings_set_distanceMetric_mE0C526324AA32735CE4C76CACCF6921BB6925387 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_DistanceMetric_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SortingSettings_set_distanceMetric_mE0C526324AA32735CE4C76CACCF6921BB6925387_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	SortingSettings_set_distanceMetric_mE0C526324AA32735CE4C76CACCF6921BB6925387(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.SortingSettings::Equals(UnityEngine.Rendering.SortingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingSettings_Equals_m443E5F481572BB3008CB0249384CBC7A4F229A06 (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_WorldToCameraMatrix_0);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_1 = ___0_other;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = L_1.___m_WorldToCameraMatrix_0;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___m_CameraPosition_1);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_5 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___m_CameraPosition_1;
		bool L_7;
		L_7 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___m_CustomAxis_2);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_9 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___m_CustomAxis_2;
		bool L_11;
		L_11 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_12 = __this->___m_Criteria_3;
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_Criteria_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_15 = __this->___m_DistanceMetric_4;
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_16 = ___0_other;
		int32_t L_17 = L_16.___m_DistanceMetric_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_007c;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_18 = (&__this->___m_PreviousVPMatrix_5);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_19 = ___0_other;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = L_19.___m_PreviousVPMatrix_5;
		bool L_21;
		L_21 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_22 = (&__this->___m_NonJitteredVPMatrix_6);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_23 = ___0_other;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = L_23.___m_NonJitteredVPMatrix_6;
		bool L_25;
		L_25 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(L_22, L_24, NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
IL2CPP_EXTERN_C  bool SortingSettings_Equals_m443E5F481572BB3008CB0249384CBC7A4F229A06_AdjustorThunk (RuntimeObject* __this, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___0_other, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	bool _returnValue;
	_returnValue = SortingSettings_Equals_m443E5F481572BB3008CB0249384CBC7A4F229A06(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.SortingSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortingSettings_Equals_m51AAFA490013115984F107343946BA2D9418ED8A (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = SortingSettings_Equals_m443E5F481572BB3008CB0249384CBC7A4F229A06(__this, ((*(SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*)((SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*)(SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*)UnBox(L_3, SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool SortingSettings_Equals_m51AAFA490013115984F107343946BA2D9418ED8A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	bool _returnValue;
	_returnValue = SortingSettings_Equals_m51AAFA490013115984F107343946BA2D9418ED8A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.SortingSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingSettings_GetHashCode_mB5162E17F4C45C0ACB75E7B91942E11379FE002D (SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_WorldToCameraMatrix_0);
		int32_t L_1;
		L_1 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___m_CameraPosition_1);
		int32_t L_4;
		L_4 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___m_CustomAxis_2);
		int32_t L_7;
		L_7 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___m_Criteria_3;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^(int32_t)L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___m_DistanceMetric_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)397)))^(int32_t)L_11));
		int32_t L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_13 = (&__this->___m_PreviousVPMatrix_5);
		int32_t L_14;
		L_14 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline(L_13, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)397)))^L_14));
		int32_t L_15 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_16 = (&__this->___m_NonJitteredVPMatrix_6);
		int32_t L_17;
		L_17 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline(L_16, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)397)))^L_17));
		int32_t L_18 = V_0;
		V_1 = L_18;
		goto IL_009e;
	}

IL_009e:
	{
		int32_t L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C  int32_t SortingSettings_GetHashCode_mB5162E17F4C45C0ACB75E7B91942E11379FE002D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SortingSettings_GetHashCode_mB5162E17F4C45C0ACB75E7B91942E11379FE002D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.StencilState UnityEngine.Rendering.StencilState::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 StencilState_get_defaultValue_m4A98541E193B4B554C8529C240D54B0DC2994BA7 (const RuntimeMethod* method) 
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		StencilState__ctor_mEC62013478099EA25296DED1A78EC7412EC106E6((&L_0), (bool)1, (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), 8, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0018;
	}

IL_0018:
	{
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.StencilState::.ctor(System.Boolean,System.Byte,System.Byte,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState__ctor_mEC62013478099EA25296DED1A78EC7412EC106E6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunction, int32_t ___4_passOperation, int32_t ___5_failOperation, int32_t ___6_zFailOperation, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_enabled;
		uint8_t L_1 = ___1_readMask;
		uint8_t L_2 = ___2_writeMask;
		int32_t L_3 = ___3_compareFunction;
		int32_t L_4 = ___4_passOperation;
		int32_t L_5 = ___5_failOperation;
		int32_t L_6 = ___6_zFailOperation;
		int32_t L_7 = ___3_compareFunction;
		int32_t L_8 = ___4_passOperation;
		int32_t L_9 = ___5_failOperation;
		int32_t L_10 = ___6_zFailOperation;
		StencilState__ctor_mDE204DCDD73203CC81E2FEE8F142834449C8B56E(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState__ctor_mEC62013478099EA25296DED1A78EC7412EC106E6_AdjustorThunk (RuntimeObject* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunction, int32_t ___4_passOperation, int32_t ___5_failOperation, int32_t ___6_zFailOperation, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState__ctor_mEC62013478099EA25296DED1A78EC7412EC106E6(_thisAdjusted, ___0_enabled, ___1_readMask, ___2_writeMask, ___3_compareFunction, ___4_passOperation, ___5_failOperation, ___6_zFailOperation, method);
}
// System.Void UnityEngine.Rendering.StencilState::.ctor(System.Boolean,System.Byte,System.Byte,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState__ctor_mDE204DCDD73203CC81E2FEE8F142834449C8B56E (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunctionFront, int32_t ___4_passOperationFront, int32_t ___5_failOperationFront, int32_t ___6_zFailOperationFront, int32_t ___7_compareFunctionBack, int32_t ___8_passOperationBack, int32_t ___9_failOperationBack, int32_t ___10_zFailOperationBack, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08(L_0, NULL);
		__this->___m_Enabled_0 = L_1;
		uint8_t L_2 = ___1_readMask;
		__this->___m_ReadMask_1 = L_2;
		uint8_t L_3 = ___2_writeMask;
		__this->___m_WriteMask_2 = L_3;
		__this->___m_Padding_3 = (uint8_t)0;
		int32_t L_4 = ___3_compareFunctionFront;
		__this->___m_CompareFunctionFront_4 = (uint8_t)((int32_t)(uint8_t)L_4);
		int32_t L_5 = ___4_passOperationFront;
		__this->___m_PassOperationFront_5 = (uint8_t)((int32_t)(uint8_t)L_5);
		int32_t L_6 = ___5_failOperationFront;
		__this->___m_FailOperationFront_6 = (uint8_t)((int32_t)(uint8_t)L_6);
		int32_t L_7 = ___6_zFailOperationFront;
		__this->___m_ZFailOperationFront_7 = (uint8_t)((int32_t)(uint8_t)L_7);
		int32_t L_8 = ___7_compareFunctionBack;
		__this->___m_CompareFunctionBack_8 = (uint8_t)((int32_t)(uint8_t)L_8);
		int32_t L_9 = ___8_passOperationBack;
		__this->___m_PassOperationBack_9 = (uint8_t)((int32_t)(uint8_t)L_9);
		int32_t L_10 = ___9_failOperationBack;
		__this->___m_FailOperationBack_10 = (uint8_t)((int32_t)(uint8_t)L_10);
		int32_t L_11 = ___10_zFailOperationBack;
		__this->___m_ZFailOperationBack_11 = (uint8_t)((int32_t)(uint8_t)L_11);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState__ctor_mDE204DCDD73203CC81E2FEE8F142834449C8B56E_AdjustorThunk (RuntimeObject* __this, bool ___0_enabled, uint8_t ___1_readMask, uint8_t ___2_writeMask, int32_t ___3_compareFunctionFront, int32_t ___4_passOperationFront, int32_t ___5_failOperationFront, int32_t ___6_zFailOperationFront, int32_t ___7_compareFunctionBack, int32_t ___8_passOperationBack, int32_t ___9_failOperationBack, int32_t ___10_zFailOperationBack, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState__ctor_mDE204DCDD73203CC81E2FEE8F142834449C8B56E(_thisAdjusted, ___0_enabled, ___1_readMask, ___2_writeMask, ___3_compareFunctionFront, ___4_passOperationFront, ___5_failOperationFront, ___6_zFailOperationFront, ___7_compareFunctionBack, ___8_passOperationBack, ___9_failOperationBack, ___10_zFailOperationBack, method);
}
// System.Boolean UnityEngine.Rendering.StencilState::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_get_enabled_m03D0635E12B6B461F459A872E3B992C09AD2F709 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint8_t L_0 = __this->___m_Enabled_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool StencilState_get_enabled_m03D0635E12B6B461F459A872E3B992C09AD2F709_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_get_enabled_m03D0635E12B6B461F459A872E3B992C09AD2F709(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08(L_0, NULL);
		__this->___m_Enabled_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564(_thisAdjusted, ___0_value, method);
}
// System.Byte UnityEngine.Rendering.StencilState::get_readMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StencilState_get_readMask_mFDA345D54433A4EDA6232002B4F7004656BBD0CB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_ReadMask_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t StencilState_get_readMask_mFDA345D54433A4EDA6232002B4F7004656BBD0CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = StencilState_get_readMask_mFDA345D54433A4EDA6232002B4F7004656BBD0CB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_ReadMask_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B(_thisAdjusted, ___0_value, method);
}
// System.Byte UnityEngine.Rendering.StencilState::get_writeMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StencilState_get_writeMask_mDE1345017B389C91E696FCB708700C78703734A0 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___m_WriteMask_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t StencilState_get_writeMask_mDE1345017B389C91E696FCB708700C78703734A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = StencilState_get_writeMask_mDE1345017B389C91E696FCB708700C78703734A0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_WriteMask_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::SetCompareFunction(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetCompareFunction_m4F46E4197FDEBB0643BB1D529DB33CA3590D7E29 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(__this, L_0, NULL);
		int32_t L_1 = ___0_value;
		StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_SetCompareFunction_m4F46E4197FDEBB0643BB1D529DB33CA3590D7E29_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_SetCompareFunction_m4F46E4197FDEBB0643BB1D529DB33CA3590D7E29(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::SetPassOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetPassOperation_m8DF4167E4EC16BDEA8DB8CAD4F5161094B8FD7CB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(__this, L_0, NULL);
		int32_t L_1 = ___0_value;
		StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_SetPassOperation_m8DF4167E4EC16BDEA8DB8CAD4F5161094B8FD7CB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_SetPassOperation_m8DF4167E4EC16BDEA8DB8CAD4F5161094B8FD7CB(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::SetFailOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetFailOperation_mC5BFB2CA88EFDEF6E302C1EA70471DFAFD9F19C9 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(__this, L_0, NULL);
		int32_t L_1 = ___0_value;
		StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_SetFailOperation_mC5BFB2CA88EFDEF6E302C1EA70471DFAFD9F19C9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_SetFailOperation_mC5BFB2CA88EFDEF6E302C1EA70471DFAFD9F19C9(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::SetZFailOperation(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_SetZFailOperation_m1E6D4F210E0039A6E44F9550FEC8D4155F540DF2 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(__this, L_0, NULL);
		int32_t L_1 = ___0_value;
		StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_SetZFailOperation_m1E6D4F210E0039A6E44F9550FEC8D4155F540DF2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_SetZFailOperation_m1E6D4F210E0039A6E44F9550FEC8D4155F540DF2(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.CompareFunction UnityEngine.Rendering.StencilState::get_compareFunctionFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_compareFunctionFront_mBEF97C76C814AA7072B0D8C6E90E5699EFA48DC6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_CompareFunctionFront_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_compareFunctionFront_mBEF97C76C814AA7072B0D8C6E90E5699EFA48DC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_compareFunctionFront_mBEF97C76C814AA7072B0D8C6E90E5699EFA48DC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionFront_4 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_passOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_passOperationFront_mED3B1DD6437336A94A319DB2963C5EA4641C753F (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_PassOperationFront_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_passOperationFront_mED3B1DD6437336A94A319DB2963C5EA4641C753F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_passOperationFront_mED3B1DD6437336A94A319DB2963C5EA4641C753F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationFront_5 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_failOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_failOperationFront_mAC199B756771167AA6FB068883D47FDEA2B2DBC5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_FailOperationFront_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_failOperationFront_mAC199B756771167AA6FB068883D47FDEA2B2DBC5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_failOperationFront_mAC199B756771167AA6FB068883D47FDEA2B2DBC5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationFront_6 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_zFailOperationFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_zFailOperationFront_m5E7C2ADCFA97B8E0A3387D2075C01D6F5385067C (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_ZFailOperationFront_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_zFailOperationFront_m5E7C2ADCFA97B8E0A3387D2075C01D6F5385067C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_zFailOperationFront_m5E7C2ADCFA97B8E0A3387D2075C01D6F5385067C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationFront_7 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.CompareFunction UnityEngine.Rendering.StencilState::get_compareFunctionBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_compareFunctionBack_m37AC5689D94A1719BEB75CC577096D271750A9C5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_CompareFunctionBack_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_compareFunctionBack_m37AC5689D94A1719BEB75CC577096D271750A9C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_compareFunctionBack_m37AC5689D94A1719BEB75CC577096D271750A9C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionBack_8 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_passOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_passOperationBack_m3C6BAA44C73AE8FFC2C39BE1B3980498A28A6C38 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_PassOperationBack_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_passOperationBack_m3C6BAA44C73AE8FFC2C39BE1B3980498A28A6C38_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_passOperationBack_m3C6BAA44C73AE8FFC2C39BE1B3980498A28A6C38(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationBack_9 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_failOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_failOperationBack_m5310F3D9B99EA2D8E1DDDAC651EBF6E12A630BDE (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_FailOperationBack_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_failOperationBack_m5310F3D9B99EA2D8E1DDDAC651EBF6E12A630BDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_failOperationBack_m5310F3D9B99EA2D8E1DDDAC651EBF6E12A630BDE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationBack_10 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.StencilOp UnityEngine.Rendering.StencilState::get_zFailOperationBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_get_zFailOperationBack_m4569E6652B75DE77E582DA00FD92291ECC1EBABC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = __this->___m_ZFailOperationBack_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_get_zFailOperationBack_m4569E6652B75DE77E582DA00FD92291ECC1EBABC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_get_zFailOperationBack_m4569E6652B75DE77E582DA00FD92291ECC1EBABC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationBack_11 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		uint8_t L_0 = __this->___m_Enabled_0;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = ___0_other;
		uint8_t L_2 = L_1.___m_Enabled_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_3 = __this->___m_ReadMask_1;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_4 = ___0_other;
		uint8_t L_5 = L_4.___m_ReadMask_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_6 = __this->___m_WriteMask_2;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_7 = ___0_other;
		uint8_t L_8 = L_7.___m_WriteMask_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_9 = __this->___m_CompareFunctionFront_4;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_10 = ___0_other;
		uint8_t L_11 = L_10.___m_CompareFunctionFront_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_12 = __this->___m_PassOperationFront_5;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_13 = ___0_other;
		uint8_t L_14 = L_13.___m_PassOperationFront_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_15 = __this->___m_FailOperationFront_6;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_16 = ___0_other;
		uint8_t L_17 = L_16.___m_FailOperationFront_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_18 = __this->___m_ZFailOperationFront_7;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_19 = ___0_other;
		uint8_t L_20 = L_19.___m_ZFailOperationFront_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_21 = __this->___m_CompareFunctionBack_8;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_22 = ___0_other;
		uint8_t L_23 = L_22.___m_CompareFunctionBack_8;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_24 = __this->___m_PassOperationBack_9;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_25 = ___0_other;
		uint8_t L_26 = L_25.___m_PassOperationBack_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_27 = __this->___m_FailOperationBack_10;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_28 = ___0_other;
		uint8_t L_29 = L_28.___m_FailOperationBack_10;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_30 = __this->___m_ZFailOperationBack_11;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_31 = ___0_other;
		uint8_t L_32 = L_31.___m_ZFailOperationBack_11;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B12_0 = 0;
	}

IL_00a4:
	{
		V_0 = (bool)G_B12_0;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(__this, ((*(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)((StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)UnBox(L_3, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (&__this->___m_Enabled_0);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (&__this->___m_ReadMask_1);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (&__this->___m_WriteMask_2);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (&__this->___m_CompareFunctionFront_4);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (&__this->___m_PassOperationFront_5);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (&__this->___m_FailOperationFront_6);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (&__this->___m_ZFailOperationFront_7);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		uint8_t* L_21 = (&__this->___m_CompareFunctionBack_8);
		int32_t L_22;
		L_22 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_21, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		int32_t L_23 = V_0;
		uint8_t* L_24 = (&__this->___m_PassOperationBack_9);
		int32_t L_25;
		L_25 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_24, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		int32_t L_26 = V_0;
		uint8_t* L_27 = (&__this->___m_FailOperationBack_10);
		int32_t L_28;
		L_28 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_27, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)397)))^L_28));
		int32_t L_29 = V_0;
		uint8_t* L_30 = (&__this->___m_ZFailOperationBack_11);
		int32_t L_31;
		L_31 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_30, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)397)))^L_31));
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00da;
	}

IL_00da:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_motionVectors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_motionVectors_mEE2FCB3BBBB279DE389C75E189B25B87BFB56C75 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_mEC3BA55F7A145AFCD9762F1FD752CA4D587D0F88 (intptr_t ___0_fallbackModePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___0_fallbackModePtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_mixedMode;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___0_mixedMode;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___0_mixedMode;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___0_mixedMode;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_bakeType;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___0_bakeType;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___0_bakeType;
		int32_t L_14 = ___0_bakeType;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___0_bakeType;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m99BF1104DDA5C0EB37E529F76670E7F10E6319E8 (int32_t ___0_mode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___0_mode;
		int32_t L_6 = ___0_mode;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_m891045E2F4FF9AC667E6FC75F6119D5AB546FBDB (int32_t ___0_lightmapper, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___0_lightmapper;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m15CF763E502A362DC677DEBBEC12A9B45CEEB458 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoAmbientProbeBakingSupported_mBC9E03F60617335C1E8D4DE88FD57F591CDA6C50 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoDefaultReflectionProbeBakingSupported_mD59A4D48FC5A6095035739F187C9BCF4D0DC67C5 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mBA3E826098F185845769A99830E50C43294304FF (intptr_t ___0_lightmapperPtr, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_lightmapperPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField_1 = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField_3 = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField_4 = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField_5 = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField_6 = (bool)1;
		__this->___U3CenlightenU3Ek__BackingField_7 = (bool)1;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField_8 = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField_10 = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField_11 = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12 = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField_13 = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField_15 = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField_16 = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17 = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18 = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField_19 = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField_20 = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField_21 = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField_22 = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField_23 = (bool)1;
		__this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24 = (bool)1;
		__this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25 = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField_26 = (bool)0;
		__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_mD97BB2123C1AC4DAEF2B5D8D1DC8219C31968416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
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
// UnityEngine.Light UnityEngine.Rendering.VisibleLight::get_light()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* VisibleLight_get_light_mD179E0BF18C77DBE2FD85FE9687F63A8C1859E6B (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___m_InstanceId_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Object_FindObjectFromInstanceID_m977F314530A838CAB5497C8F5D0D8DA134B92E0C(L_0, NULL);
		return ((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_1, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* VisibleLight_get_light_mD179E0BF18C77DBE2FD85FE9687F63A8C1859E6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* _returnValue;
	_returnValue = VisibleLight_get_light_mD179E0BF18C77DBE2FD85FE9687F63A8C1859E6B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::get_lightType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleLight_get_lightType_mFFCEBE6E368853F13E7CDBA910F6D9B689292454 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_LightType_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t VisibleLight_get_lightType_mFFCEBE6E368853F13E7CDBA910F6D9B689292454_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VisibleLight_get_lightType_mFFCEBE6E368853F13E7CDBA910F6D9B689292454(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color UnityEngine.Rendering.VisibleLight::get_finalColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VisibleLight_get_finalColor_m5D7FBBD05FFF9A7100319E68A602D00563F72D03 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_FinalColor_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VisibleLight_get_finalColor_m5D7FBBD05FFF9A7100319E68A602D00563F72D03_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = VisibleLight_get_finalColor_m5D7FBBD05FFF9A7100319E68A602D00563F72D03(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 VisibleLight_get_localToWorldMatrix_m5DD0193DBD7887878F93AB4A95DCD9A72F594081 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_LocalToWorldMatrix_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 VisibleLight_get_localToWorldMatrix_m5DD0193DBD7887878F93AB4A95DCD9A72F594081_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _returnValue;
	_returnValue = VisibleLight_get_localToWorldMatrix_m5DD0193DBD7887878F93AB4A95DCD9A72F594081(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Rendering.VisibleLight::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisibleLight_get_range_m4DDAAF7B8AE9B35C1AD25ABD17841D277FE73D6D (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Range_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float VisibleLight_get_range_m4DDAAF7B8AE9B35C1AD25ABD17841D277FE73D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	float _returnValue;
	_returnValue = VisibleLight_get_range_m4DDAAF7B8AE9B35C1AD25ABD17841D277FE73D6D(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Rendering.VisibleLight::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VisibleLight_get_spotAngle_m1C1A118B7398F354DA818F2B78986F133E933B97 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_SpotAngle_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float VisibleLight_get_spotAngle_m1C1A118B7398F354DA818F2B78986F133E933B97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	float _returnValue;
	_returnValue = VisibleLight_get_spotAngle_m1C1A118B7398F354DA818F2B78986F133E933B97(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VisibleLight::Equals(UnityEngine.Rendering.VisibleLight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m33A9D54C5C0D3761BE43F8D78DF55D08CF5A7C23 (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->___m_LightType_0;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_LightType_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_008c;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___m_FinalColor_1);
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_4 = ___0_other;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4.___m_FinalColor_1;
		bool L_6;
		L_6 = Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&__this->___m_ScreenRect_2);
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_8 = ___0_other;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = L_8.___m_ScreenRect_2;
		bool L_10;
		L_10 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_11 = (&__this->___m_LocalToWorldMatrix_3);
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_12 = ___0_other;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12.___m_LocalToWorldMatrix_3;
		bool L_14;
		L_14 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		float* L_15 = (&__this->___m_Range_4);
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_16 = ___0_other;
		float L_17 = L_16.___m_Range_4;
		bool L_18;
		L_18 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		float* L_19 = (&__this->___m_SpotAngle_5);
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_20 = ___0_other;
		float L_21 = L_20.___m_SpotAngle_5;
		bool L_22;
		L_22 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_23 = __this->___m_InstanceId_6;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_24 = ___0_other;
		int32_t L_25 = L_24.___m_InstanceId_6;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_26 = __this->___m_Flags_7;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_27 = ___0_other;
		int32_t L_28 = L_27.___m_Flags_7;
		G_B9_0 = ((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0);
		goto IL_008d;
	}

IL_008c:
	{
		G_B9_0 = 0;
	}

IL_008d:
	{
		V_0 = (bool)G_B9_0;
		goto IL_0090;
	}

IL_0090:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
IL2CPP_EXTERN_C  bool VisibleLight_Equals_m33A9D54C5C0D3761BE43F8D78DF55D08CF5A7C23_AdjustorThunk (RuntimeObject* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_other, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	bool _returnValue;
	_returnValue = VisibleLight_Equals_m33A9D54C5C0D3761BE43F8D78DF55D08CF5A7C23(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VisibleLight::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = VisibleLight_Equals_m33A9D54C5C0D3761BE43F8D78DF55D08CF5A7C23(__this, ((*(VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*)((VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*)(VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*)UnBox(L_3, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	bool _returnValue;
	_returnValue = VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.VisibleLight::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleLight_GetHashCode_mF7C3F790DF877B069608E4D56281B8840699876F (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_LightType_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->___m_FinalColor_1);
		int32_t L_3;
		L_3 = Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline(L_2, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		int32_t L_4 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&__this->___m_ScreenRect_2);
		int32_t L_6;
		L_6 = Rect_GetHashCode_m8E55539476EA6B7A6E0CEC5F980227CD15B778F1(L_5, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)397)))^L_6));
		int32_t L_7 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = (&__this->___m_LocalToWorldMatrix_3);
		int32_t L_9;
		L_9 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline(L_8, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)397)))^L_9));
		int32_t L_10 = V_0;
		float* L_11 = (&__this->___m_Range_4);
		int32_t L_12;
		L_12 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_11, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)397)))^L_12));
		int32_t L_13 = V_0;
		float* L_14 = (&__this->___m_SpotAngle_5);
		int32_t L_15;
		L_15 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_14, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)397)))^L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = __this->___m_InstanceId_6;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)397)))^L_17));
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___m_Flags_7;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)397)))^(int32_t)L_19));
		int32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_00a1;
	}

IL_00a1:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
IL2CPP_EXTERN_C  int32_t VisibleLight_GetHashCode_mF7C3F790DF877B069608E4D56281B8840699876F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VisibleLight_GetHashCode_mF7C3F790DF877B069608E4D56281B8840699876F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.VisibleReflectionProbe::Equals(UnityEngine.Rendering.VisibleReflectionProbe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_mF734AD87DA035B60484FEEF89C5E746502EF63CE (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B10_0 = 0;
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = (&__this->___m_Bounds_0);
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_1 = ___0_other;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = L_1.___m_Bounds_0;
		bool L_3;
		L_3 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = (&__this->___m_LocalToWorldMatrix_1);
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_5 = ___0_other;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = L_5.___m_LocalToWorldMatrix_1;
		bool L_7;
		L_7 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_009d;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8 = (&__this->___m_HdrData_2);
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_9 = ___0_other;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = L_9.___m_HdrData_2;
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_009d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___m_Center_3);
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_13 = ___0_other;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___m_Center_3;
		bool L_15;
		L_15 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		float* L_16 = (&__this->___m_BlendDistance_4);
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_17 = ___0_other;
		float L_18 = L_17.___m_BlendDistance_4;
		bool L_19;
		L_19 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_20 = __this->___m_Importance_5;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_21 = ___0_other;
		int32_t L_22 = L_21.___m_Importance_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_23 = __this->___m_BoxProjection_6;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_24 = ___0_other;
		int32_t L_25 = L_24.___m_BoxProjection_6;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = __this->___m_InstanceId_7;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_27 = ___0_other;
		int32_t L_28 = L_27.___m_InstanceId_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_29 = __this->___m_TextureId_8;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_30 = ___0_other;
		int32_t L_31 = L_30.___m_TextureId_8;
		G_B10_0 = ((((int32_t)L_29) == ((int32_t)L_31))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B10_0 = 0;
	}

IL_009e:
	{
		V_0 = (bool)G_B10_0;
		goto IL_00a1;
	}

IL_00a1:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
IL2CPP_EXTERN_C  bool VisibleReflectionProbe_Equals_mF734AD87DA035B60484FEEF89C5E746502EF63CE_AdjustorThunk (RuntimeObject* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_other, const RuntimeMethod* method)
{
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*>(__this + _offset);
	bool _returnValue;
	_returnValue = VisibleReflectionProbe_Equals_mF734AD87DA035B60484FEEF89C5E746502EF63CE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.VisibleReflectionProbe::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845 (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = VisibleReflectionProbe_Equals_mF734AD87DA035B60484FEEF89C5E746502EF63CE(__this, ((*(VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*)((VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*)(VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*)UnBox(L_3, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*>(__this + _offset);
	bool _returnValue;
	_returnValue = VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.VisibleReflectionProbe::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisibleReflectionProbe_GetHashCode_m626DEF4FF062C9096286BE555B790FB725453BDC (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = (&__this->___m_Bounds_0);
		int32_t L_1;
		L_1 = Bounds_GetHashCode_m59C79B529D33866FE45FEFC0C69FBD3B4AC7E172(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___m_LocalToWorldMatrix_1);
		int32_t L_4;
		L_4 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6 = (&__this->___m_HdrData_2);
		int32_t L_7;
		L_7 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___m_Center_3);
		int32_t L_10;
		L_10 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		float* L_12 = (&__this->___m_BlendDistance_4);
		int32_t L_13;
		L_13 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___m_Importance_5;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = __this->___m_BoxProjection_6;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)397)))^L_17));
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___m_InstanceId_7;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___m_TextureId_8;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_21));
		int32_t L_22 = V_0;
		V_1 = L_22;
		goto IL_00b6;
	}

IL_00b6:
	{
		int32_t L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t VisibleReflectionProbe_GetHashCode_m626DEF4FF062C9096286BE555B790FB725453BDC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VisibleReflectionProbe_GetHashCode_m626DEF4FF062C9096286BE555B790FB725453BDC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Rendering.ShaderKeyword
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke(const ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661& unmarshaled, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Index_1 = unmarshaled.___m_Index_1;
	marshaled.___m_IsLocal_2 = static_cast<int32_t>(unmarshaled.___m_IsLocal_2);
	marshaled.___m_IsCompute_3 = static_cast<int32_t>(unmarshaled.___m_IsCompute_3);
	marshaled.___m_IsValid_4 = static_cast<int32_t>(unmarshaled.___m_IsValid_4);
}
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_back(const ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke& marshaled, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	uint32_t unmarshaledm_Index_temp_1 = 0;
	unmarshaledm_Index_temp_1 = marshaled.___m_Index_1;
	unmarshaled.___m_Index_1 = unmarshaledm_Index_temp_1;
	bool unmarshaledm_IsLocal_temp_2 = false;
	unmarshaledm_IsLocal_temp_2 = static_cast<bool>(marshaled.___m_IsLocal_2);
	unmarshaled.___m_IsLocal_2 = unmarshaledm_IsLocal_temp_2;
	bool unmarshaledm_IsCompute_temp_3 = false;
	unmarshaledm_IsCompute_temp_3 = static_cast<bool>(marshaled.___m_IsCompute_3);
	unmarshaled.___m_IsCompute_3 = unmarshaledm_IsCompute_temp_3;
	bool unmarshaledm_IsValid_temp_4 = false;
	unmarshaledm_IsValid_temp_4 = static_cast<bool>(marshaled.___m_IsValid_4);
	unmarshaled.___m_IsValid_4 = unmarshaledm_IsValid_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.ShaderKeyword
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_cleanup(ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Rendering.ShaderKeyword
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_com(const ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661& unmarshaled, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_Index_1 = unmarshaled.___m_Index_1;
	marshaled.___m_IsLocal_2 = static_cast<int32_t>(unmarshaled.___m_IsLocal_2);
	marshaled.___m_IsCompute_3 = static_cast<int32_t>(unmarshaled.___m_IsCompute_3);
	marshaled.___m_IsValid_4 = static_cast<int32_t>(unmarshaled.___m_IsValid_4);
}
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_com_back(const ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com& marshaled, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	uint32_t unmarshaledm_Index_temp_1 = 0;
	unmarshaledm_Index_temp_1 = marshaled.___m_Index_1;
	unmarshaled.___m_Index_1 = unmarshaledm_Index_temp_1;
	bool unmarshaledm_IsLocal_temp_2 = false;
	unmarshaledm_IsLocal_temp_2 = static_cast<bool>(marshaled.___m_IsLocal_2);
	unmarshaled.___m_IsLocal_2 = unmarshaledm_IsLocal_temp_2;
	bool unmarshaledm_IsCompute_temp_3 = false;
	unmarshaledm_IsCompute_temp_3 = static_cast<bool>(marshaled.___m_IsCompute_3);
	unmarshaled.___m_IsCompute_3 = unmarshaledm_IsCompute_temp_3;
	bool unmarshaledm_IsValid_temp_4 = false;
	unmarshaledm_IsValid_temp_4 = static_cast<bool>(marshaled.___m_IsValid_4);
	unmarshaled.___m_IsValid_4 = unmarshaledm_IsValid_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.ShaderKeyword
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_com_cleanup(ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.UInt32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7 (const RuntimeMethod* method) 
{
	typedef uint32_t (*ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7_ftn) ();
	static ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordCount()");
	uint32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.UInt32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB (String_t* ___0_keyword, const RuntimeMethod* method) 
{
	typedef uint32_t (*ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB_ftn) (String_t*);
	static ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordIndex(System.String)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_keyword);
	return icallRetVal;
}
// System.Void UnityEngine.Rendering.ShaderKeyword::CreateGlobalKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6 (String_t* ___0_keyword, const RuntimeMethod* method) 
{
	typedef void (*ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6_ftn) (String_t*);
	static ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ShaderKeyword::CreateGlobalKeyword(System.String)");
	_il2cpp_icall_func(___0_keyword);
}
// System.Void UnityEngine.Rendering.ShaderKeyword::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderKeyword__ctor_m7F07272BD798B4145B55BC7CAD71D4E2330FD1D1 (ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* __this, String_t* ___0_keywordName, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_keywordName;
		__this->___m_Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)L_0);
		String_t* L_1 = ___0_keywordName;
		uint32_t L_2;
		L_2 = ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB(L_1, NULL);
		__this->___m_Index_1 = L_2;
		uint32_t L_3 = __this->___m_Index_1;
		uint32_t L_4;
		L_4 = ShaderKeyword_GetGlobalKeywordCount_mF20CB3637A42E4CDDBF8EF83B5729D7355ED6BA7(NULL);
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_3) >= ((uint32_t)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = ___0_keywordName;
		ShaderKeyword_CreateGlobalKeyword_m75A1E6D2EC62FADC6B1B13648346A83B1C0127A6(L_6, NULL);
		String_t* L_7 = ___0_keywordName;
		uint32_t L_8;
		L_8 = ShaderKeyword_GetGlobalKeywordIndex_m9482DD897CA8BE71B1C5F535412EF881184644BB(L_7, NULL);
		__this->___m_Index_1 = L_8;
	}

IL_003d:
	{
		__this->___m_IsValid_4 = (bool)1;
		__this->___m_IsLocal_2 = (bool)0;
		__this->___m_IsCompute_3 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderKeyword__ctor_m7F07272BD798B4145B55BC7CAD71D4E2330FD1D1_AdjustorThunk (RuntimeObject* __this, String_t* ___0_keywordName, const RuntimeMethod* method)
{
	ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661*>(__this + _offset);
	ShaderKeyword__ctor_m7F07272BD798B4145B55BC7CAD71D4E2330FD1D1(_thisAdjusted, ___0_keywordName, method);
}
// System.String UnityEngine.Rendering.ShaderKeyword::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShaderKeyword_ToString_m4C7010D16DFFFA404F8E57F150AF80CF89FC6F10 (ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ShaderKeyword_ToString_m4C7010D16DFFFA404F8E57F150AF80CF89FC6F10_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ShaderKeyword_ToString_m4C7010D16DFFFA404F8E57F150AF80CF89FC6F10(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererList::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererList_get_isValid_m4D3FB1386B71A02B9453A00ACD38355F1B82DD68 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool RendererList_get_isValid_m4D3FB1386B71A02B9453A00ACD38355F1B82DD68_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E*>(__this + _offset);
	bool _returnValue;
	_returnValue = RendererList_get_isValid_m4D3FB1386B71A02B9453A00ACD38355F1B82DD68(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.RendererUtils.RendererList::.ctor(System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererList__ctor_m2635CB2FA9EA68E0B44A745319E07E8A3C44D7B2 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* __this, uintptr_t ___0_ctx, uint32_t ___1_indx, const RuntimeMethod* method) 
{
	{
		uintptr_t L_0 = ___0_ctx;
		__this->___context_0 = L_0;
		uint32_t L_1 = ___1_indx;
		__this->___index_1 = L_1;
		__this->___frame_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void RendererList__ctor_m2635CB2FA9EA68E0B44A745319E07E8A3C44D7B2_AdjustorThunk (RuntimeObject* __this, uintptr_t ___0_ctx, uint32_t ___1_indx, const RuntimeMethod* method)
{
	RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E*>(__this + _offset);
	RendererList__ctor_m2635CB2FA9EA68E0B44A745319E07E8A3C44D7B2(_thisAdjusted, ___0_ctx, ___1_indx, method);
}
// System.Void UnityEngine.Rendering.RendererUtils.RendererList::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererList__cctor_m7E9DC20DEDE74F95088AD05B59EC687BAED3A16F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_0 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E L_1;
		memset((&L_1), 0, sizeof(L_1));
		RendererList__ctor_m2635CB2FA9EA68E0B44A745319E07E8A3C44D7B2((&L_1), L_0, (-1), /*hidden argument*/NULL);
		((RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_StaticFields*)il2cpp_codegen_static_fields_for(RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E_il2cpp_TypeInfo_var))->___nullRendererList_3 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererList::get_isValid_Injected(UnityEngine.Rendering.RendererUtils.RendererList&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243 (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243_ftn) (RendererList_t84DD8775E9B0759757DE88FBCB50A06A7C80D20E*);
	static RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RendererList_get_isValid_Injected_mFB23B89ED4931CCA067CCB2E309854A9E9F74243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.RendererUtils.RendererList::get_isValid_Injected(UnityEngine.Rendering.RendererUtils.RendererList&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Rendering.RendererUtils.RendererListDesc
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke(const RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E& unmarshaled, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___stateBlock_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListDesc'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_3Exception, NULL);
}
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_back(const RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke& marshaled, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E& unmarshaled)
{
	Exception_t* ___stateBlock_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListDesc'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.RendererUtils.RendererListDesc
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_cleanup(RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.RendererUtils.RendererListDesc
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_com(const RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E& unmarshaled, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com& marshaled)
{
	Exception_t* ___stateBlock_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListDesc'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_3Exception, NULL);
}
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_com_back(const RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com& marshaled, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E& unmarshaled)
{
	Exception_t* ___stateBlock_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListDesc'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.RendererUtils.RendererListDesc
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_com_cleanup(RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com& marshaled)
{
}
// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.RendererUtils.RendererListDesc::get_cullingResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_0 = __this->___U3CcullingResultU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*>(__this + _offset);
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 _returnValue;
	_returnValue = RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Camera UnityEngine.Rendering.RendererUtils.RendererListDesc::get_camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___U3CcameraU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*>(__this + _offset);
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* _returnValue;
	_returnValue = RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.RendererUtils.RendererListDesc::get_passName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0 = __this->___U3CpassNameU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*>(__this + _offset);
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 _returnValue;
	_returnValue = RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.ShaderTagId[] UnityEngine.Rendering.RendererUtils.RendererListDesc::get_passNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_0 = __this->___U3CpassNamesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*>(__this + _offset);
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* _returnValue;
	_returnValue = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RendererUtils.RendererListDesc::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RendererListDesc_IsValid_mF8A1A6A084873A0477FD398507A21E682FB90136 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_2;
		L_2 = RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline(__this, NULL);
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_3 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		bool L_4;
		L_4 = ShaderTagId_op_Equality_mE83D02C57D788A5A9EADE3933DE9D8811B7F8761(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_5;
		L_5 = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(__this, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_6;
		L_6 = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(__this, NULL);
		NullCheck(L_6);
		G_B5_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 1;
	}

IL_0036:
	{
		G_B7_0 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = 0;
	}

IL_0039:
	{
		G_B9_0 = G_B7_0;
		goto IL_003c;
	}

IL_003b:
	{
		G_B9_0 = 1;
	}

IL_003c:
	{
		V_0 = (bool)G_B9_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_0044:
	{
		V_1 = (bool)1;
		goto IL_0048;
	}

IL_0048:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool RendererListDesc_IsValid_mF8A1A6A084873A0477FD398507A21E682FB90136_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*>(__this + _offset);
	bool _returnValue;
	_returnValue = RendererListDesc_IsValid_mF8A1A6A084873A0477FD398507A21E682FB90136(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Rendering.RendererUtils.RendererListParams
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke(const RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC& unmarshaled, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___stateBlock_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_6Exception, NULL);
}
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_back(const RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_pinvoke& marshaled, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC& unmarshaled)
{
	Exception_t* ___stateBlock_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.RendererUtils.RendererListParams
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_cleanup(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.RendererUtils.RendererListParams
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_com(const RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC& unmarshaled, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_com& marshaled)
{
	Exception_t* ___stateBlock_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_6Exception, NULL);
}
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_com_back(const RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_com& marshaled, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC& unmarshaled)
{
	Exception_t* ___stateBlock_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'stateBlock' of type 'RendererListParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___stateBlock_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.RendererUtils.RendererListParams
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_com_cleanup(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Rendering.RendererUtils.RendererListParams::set_isValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65 (RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisValidU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC*>(__this + _offset);
	RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.RendererUtils.RendererListParams UnityEngine.Rendering.RendererUtils.RendererListParams::Create(UnityEngine.Rendering.RendererUtils.RendererListDesc&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC RendererListParams_Create_mDBFB73D009A35712C00015E51A566C2EF8A8CFA8 (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* ___0_desc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E V_5;
	memset((&V_5), 0, sizeof(V_5));
	RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC V_6;
	memset((&V_6), 0, sizeof(V_6));
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 V_7;
	memset((&V_7), 0, sizeof(V_7));
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC));
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_0 = ___0_desc;
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E L_1 = (*(RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E*)L_0);
		V_5 = L_1;
		bool L_2;
		L_2 = RendererListDesc_IsValid_mF8A1A6A084873A0477FD398507A21E682FB90136((&V_5), NULL);
		V_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_4 = V_0;
		V_6 = L_4;
		goto IL_0168;
	}

IL_0029:
	{
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_5 = ___0_desc;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_inline(L_5, NULL);
		SortingSettings__ctor_m449888DBB95B75702BFC5BFA1E4A5BE40D9302ED((&V_7), L_6, NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_7 = ___0_desc;
		int32_t L_8 = L_7->___sortingCriteria_0;
		SortingSettings_set_criteria_m3D0A9A89ACF96F7135E47BEB44770EF439419E57((&V_7), L_8, NULL);
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_9 = V_7;
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var);
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_10 = ((RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_StaticFields*)il2cpp_codegen_static_fields_for(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var))->___s_EmptyName_0;
		SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 L_11 = V_1;
		DrawingSettings__ctor_m2B34DB19727143945DDE925B5CACD0E8E5D478A5((&V_8), L_10, L_11, NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_12 = ___0_desc;
		int32_t L_13 = L_12->___rendererConfiguration_1;
		DrawingSettings_set_perObjectData_mE83721A5FEDA0A0F5DFA6A385B5DB110A7AE2DC8((&V_8), L_13, NULL);
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 L_14 = V_8;
		V_2 = L_14;
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_15 = ___0_desc;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_16;
		L_16 = RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline(L_15, NULL);
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_17 = ((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields*)il2cpp_codegen_static_fields_for(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var))->___none_0;
		bool L_18;
		L_18 = ShaderTagId_op_Inequality_m000FF53695F623FC1903B026837174552F9D1C1C(L_16, L_17, NULL);
		V_9 = L_18;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_20 = ___0_desc;
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_21;
		L_21 = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((RuntimeObject*)(ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143*)L_21) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_22 = ___0_desc;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_23;
		L_23 = RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline(L_22, NULL);
		DrawingSettings_SetShaderPassName_m3ABF2F58CA9D8B16989747058CAA504E7B4ED738((&V_2), 0, L_23, NULL);
		goto IL_00d5;
	}

IL_009d:
	{
		V_10 = 0;
		goto IL_00c2;
	}

IL_00a3:
	{
		int32_t L_24 = V_10;
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_25 = ___0_desc;
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_26;
		L_26 = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(L_25, NULL);
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		DrawingSettings_SetShaderPassName_m3ABF2F58CA9D8B16989747058CAA504E7B4ED738((&V_2), L_24, L_29, NULL);
		int32_t L_30 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c2:
	{
		int32_t L_31 = V_10;
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_32 = ___0_desc;
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_33;
		L_33 = RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline(L_32, NULL);
		NullCheck(L_33);
		V_11 = (bool)((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))? 1 : 0);
		bool L_34 = V_11;
		if (L_34)
		{
			goto IL_00a3;
		}
	}
	{
	}

IL_00d5:
	{
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_35 = ___0_desc;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = L_35->___overrideMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_0105;
		}
	}
	{
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_39 = ___0_desc;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = L_39->___overrideMaterial_4;
		DrawingSettings_set_overrideMaterial_m6A1D1A128D31B5DAA3EEDFF0D6F07EF67D2B276F((&V_2), L_40, NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_41 = ___0_desc;
		int32_t L_42 = L_41->___overrideMaterialPassIndex_7;
		DrawingSettings_set_overrideMaterialPassIndex_mED93BC41A0496812035C23337949A05C0A4C48ED((&V_2), L_42, NULL);
	}

IL_0105:
	{
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_43 = ___0_desc;
		RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 L_44 = L_43->___renderQueueRange_2;
		Nullable_1_t7D98773CC20A842A0846271D1181ECBB0D95926C L_45;
		memset((&L_45), 0, sizeof(L_45));
		Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204((&L_45), L_44, /*hidden argument*/Nullable_1__ctor_mC09CE20B08C6A7188EE04F52B6A2E598657A0204_RuntimeMethod_var);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_46 = ___0_desc;
		int32_t L_47 = L_46->___layerMask_6;
		FilteringSettings__ctor_m2A2242373FC7D053CFBBC6814D02AAC73C7B3AE7((&V_13), L_45, L_47, (-1), 0, NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_48 = ___0_desc;
		bool L_49 = L_48->___excludeObjectMotionVectors_5;
		FilteringSettings_set_excludeMotionVectorObjects_mCD49214CD709CC26B932C33B11B4F9E90BE4E13B((&V_13), L_49, NULL);
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F L_50 = V_13;
		V_3 = L_50;
		RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65_inline((&V_0), (bool)1, NULL);
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_51 = ___0_desc;
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_52;
		L_52 = RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA_inline(L_51, NULL);
		(&V_0)->___cullingResult_3 = L_52;
		DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 L_53 = V_2;
		(&V_0)->___drawSettings_4 = L_53;
		FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F L_54 = V_3;
		(&V_0)->___filteringSettings_5 = L_54;
		RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* L_55 = ___0_desc;
		Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 L_56 = L_55->___stateBlock_3;
		(&V_0)->___stateBlock_6 = L_56;
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_57 = V_0;
		V_6 = L_57;
		goto IL_0168;
	}

IL_0168:
	{
		RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC L_58 = V_6;
		return L_58;
	}
}
// System.Void UnityEngine.Rendering.RendererUtils.RendererListParams::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererListParams__cctor_mB608BD0E64AFCA1FF3D71D96DC8E630CCA753409 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		((RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_StaticFields*)il2cpp_codegen_static_fields_for(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var))->___s_EmptyName_0 = L_0;
		il2cpp_codegen_initobj((&((RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_StaticFields*)il2cpp_codegen_static_fields_for(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_il2cpp_TypeInfo_var))->___nullRendererList_1), sizeof(RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86_AdjustorThunk (RuntimeObject* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.Playable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__cctor_m079282CFC9FB3C8D02C0F6F9FF45C167DF583459 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableAsset_get_outputs_m5760B1B5EE08B0327FA7D90AE92C94227B1C993C (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_CreatePlayable_m8D90055AAB62B51D1F73B58F30715C4512100714 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___1_graph, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, intptr_t ___3_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* V_1 = NULL;
	bool V_2 = false;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2(NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0014:
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_4 = ___0_asset;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_5 = ___1_graph;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___2_go;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7;
		L_7 = VirtualFuncInvoker2< Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_4, L_5, L_6);
		V_0 = L_7;
	}

IL_001d:
	{
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_ptr), NULL);
		V_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_8;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_9 = V_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = V_0;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_9 = L_10;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_GetPlayableAssetDuration_mD80D4032B1E5DECC8710CB63A49E815F21EFDBDA (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, intptr_t ___1_ptrToDouble, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___1_ptrToDouble), NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)L_3) = (double)L_4;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStart_mB5944807796239EFB530022539674C4E4D185D65 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStop_mF80DFC8A3C2D2CA9299011D9E871ED6A8A9586CA (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableCreate_m22B0F0051A677A523C5702AABC6B1C9D358E90B8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableDestroy_m3DB0AF7BD9689DA1BCCBBFD19BDD544143027C3C (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m05F6FCCBC6E8FB4BA0BE2690045AF28BF95C6FE2 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPause_m431A7BD2EE99C1862563FEA37E20C365B753930B (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_PrepareFrame_m33FED1E870D350D8276712A2CD75118FEFAA86BD (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_mB80DDB2AB5D7EC0D3B9A466D37BE8556F6BBD2A0 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, RuntimeObject* ___2_playerData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableBehaviour_Clone_m6A5B052F4ECA2ADED5937A4843777F52CCD33EE8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBinding__cctor_m3055AFB9F43633F1353C40FC9E1B2A4492732AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = (PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)SZArrayNew(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var, (uint32_t)0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4), (void*)L_0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5 = (std::numeric_limits<double>::infinity());
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
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* currentDelegate = reinterpret_cast<CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*>(delegatesToInvoke[i]);
		typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenInst(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_graph, ___1_name);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_graph, ___1_name);
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 returnValue = il2cppPInvokeFunc(___0_graph, ____1_name_marshaled);

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_x;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(__this, ((*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)UnBox(L_1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = (*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle__cctor_mE31857278AA27F9CF449BD99AC79EC5E295A5278 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(__this, NULL);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1;
		L_1 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121_AdjustorThunk (RuntimeObject* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__cctor_m02CBFEB6C9DB324655B9D354B32C268EED13749A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1 = L_1;
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
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___1_rhs;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(__this, ((*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)UnBox(L_1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = (*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)__this);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle__cctor_mBA610D820061BDA36802735EEC57A83B0985CFC2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_red_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_red_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_green_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_green_1 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_blue_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_blue_2 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&___0_color), L_1, NULL);
		V_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_4), NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_001b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&___0_color), NULL);
		V_4 = L_4;
		float L_5 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&V_4), L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		float L_7;
		L_7 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_1 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___r_0;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		float L_11 = L_10.___g_1;
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___b_2;
		G_B7_0 = ((((float)L_13) < ((float)(0.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B7_0 = 1;
	}

IL_005f:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (&(&V_0)->___r_0);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (&(&V_0)->___g_1);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (&(&V_0)->___b_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_29;
		L_29 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_28, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_30 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var)));
	}

IL_00c3:
	{
		float L_31 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_31) <= ((float)(9.99999968E-21f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33;
		L_33 = LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42(NULL);
		V_7 = L_33;
		goto IL_0125;
	}

IL_00dd:
	{
		float L_34;
		L_34 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_2 = ((float)((1.0f)/L_34));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_0;
		float L_36 = L_35.___r_0;
		float L_37 = V_2;
		(&V_3)->___m_red_0 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		float L_39 = L_38.___g_1;
		float L_40 = V_2;
		(&V_3)->___m_green_1 = ((float)il2cpp_codegen_multiply(L_39, L_40));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_0;
		float L_42 = L_41.___b_2;
		float L_43 = V_2;
		(&V_3)->___m_blue_2 = ((float)il2cpp_codegen_multiply(L_42, L_43));
		float L_44 = V_1;
		(&V_3)->___m_intensity_3 = L_44;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_45 = V_3;
		V_7 = L_45;
		goto IL_0125;
	}

IL_0125:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_46 = V_7;
		return L_46;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = (0.0f);
		V_1 = L_0;
		(&V_0)->___m_intensity_3 = L_0;
		float L_1 = V_1;
		float L_2 = L_1;
		V_1 = L_2;
		(&V_0)->___m_blue_2 = L_2;
		float L_3 = V_1;
		float L_4 = L_3;
		V_1 = L_4;
		(&V_0)->___m_green_1 = L_4;
		float L_5 = V_1;
		(&V_0)->___m_red_0 = L_5;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6 = V_0;
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_2;
		return L_7;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.Cookie UnityEngine.Experimental.GlobalIllumination.Cookie::Defaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 Cookie_Defaults_mBA9A3DBD2873EDB1AA0000FCBE687EBF960916BC (const RuntimeMethod* method) 
{
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___instanceID_0 = 0;
		(&V_0)->___scale_1 = (1.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___sizes_2 = L_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 L_1 = V_0;
		V_1 = L_1;
		goto IL_002f;
	}

IL_002f:
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 L_2 = V_1;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		__this->___range_7 = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&L_14->___sizes_2);
		float L_16 = L_15->___x_0;
		__this->___coneAngle_8 = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___sizes_2);
		float L_19 = L_18->___y_1;
		__this->___innerConeAngle_9 = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___0_light;
		float L_21 = L_20->___penumbraWidthRadian_7;
		__this->___shape0_10 = L_21;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___0_light;
		uint8_t L_23 = L_22->___mode_2;
		__this->___mode_13 = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___0_light;
		bool L_25 = L_24->___shadow_1;
		G_B1_0 = __this;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff_15 = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___0_light;
		float L_17 = L_16->___sphereRadius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___0_light;
		float L_17 = L_16->___coneAngle_9;
		__this->___coneAngle_8 = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___0_light;
		float L_19 = L_18->___innerConeAngle_10;
		__this->___innerConeAngle_9 = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___0_light;
		float L_21 = L_20->___sphereRadius_8;
		__this->___shape0_10 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___0_light;
		uint8_t L_23 = L_22->___angularFalloff_12;
		__this->___shape1_11 = ((float)L_23);
		__this->___type_12 = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___0_light;
		uint8_t L_25 = L_24->___mode_2;
		__this->___mode_13 = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___0_light;
		bool L_27 = L_26->___shadow_1;
		G_B1_0 = __this;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___0_light;
		uint8_t L_29 = L_28->___falloff_11;
		__this->___falloff_15 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___0_light;
		float L_17 = L_16->___width_8;
		__this->___shape0_10 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___0_light;
		float L_19 = L_18->___height_9;
		__this->___shape1_11 = L_19;
		__this->___type_12 = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___0_light;
		uint8_t L_21 = L_20->___mode_2;
		__this->___mode_13 = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___0_light;
		bool L_23 = L_22->___shadow_1;
		G_B1_0 = __this;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___0_light;
		uint8_t L_25 = L_24->___falloff_10;
		__this->___falloff_15 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___0_light;
		float L_17 = L_16->___radius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mC034DE9D2F105C07BDE41C110D59E525894C78CA (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, const RuntimeMethod* method) 
{
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 L_0;
		L_0 = Cookie_Defaults_mBA9A3DBD2873EDB1AA0000FCBE687EBF960916BC(NULL);
		V_0 = L_0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_1 = ___0_light;
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(__this, L_1, (&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mC034DE9D2F105C07BDE41C110D59E525894C78CA_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mC034DE9D2F105C07BDE41C110D59E525894C78CA(_thisAdjusted, ___0_light, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mFA4616AFF5FCCEC48B97704A64CDE4F8DBBC5A36 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, const RuntimeMethod* method) 
{
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 L_0;
		L_0 = Cookie_Defaults_mBA9A3DBD2873EDB1AA0000FCBE687EBF960916BC(NULL);
		V_0 = L_0;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_1 = ___0_light;
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(__this, L_1, (&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mFA4616AFF5FCCEC48B97704A64CDE4F8DBBC5A36_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mFA4616AFF5FCCEC48B97704A64CDE4F8DBBC5A36(_thisAdjusted, ___0_light, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m75C7688AFBDEAA33C4CA3C937163998A6013FE7E (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, const RuntimeMethod* method) 
{
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 L_0;
		L_0 = Cookie_Defaults_mBA9A3DBD2873EDB1AA0000FCBE687EBF960916BC(NULL);
		V_0 = L_0;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_1 = ___0_light;
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(__this, L_1, (&V_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m75C7688AFBDEAA33C4CA3C937163998A6013FE7E_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m75C7688AFBDEAA33C4CA3C937163998A6013FE7E(_thisAdjusted, ___0_light, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lightInstanceID;
		__this->___instanceID_0 = L_0;
		__this->___mode_13 = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___0_lightInstanceID, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_baketype;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_baketype;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___0_l;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_cct;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_cct;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_cct;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___1_dir;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___1_point;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___1_point;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___1_spot;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___0_l;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___0_l;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___1_spot;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___1_spot;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___1_rect;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___1_rect;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___1_rect;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___1_disc;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___1_disc;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___1_cookie;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___0_l;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___0_l;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___0_l;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m8BEF0FE5035180FF94119860CD15BBE2BE90129D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___0_del;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___0_del;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m073E4FFA73169C20833F77984024BD328003258A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_m8D4AAF4F08C8697953B3CB110DD4E6CD130371D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m1967533AFFB328B3386E7E0D1EC414105E509B80 (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_lights, intptr_t ___1_outLightsPtr, int32_t ___2_outLightsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___1_outLightsPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		int32_t L_2 = ___2_outLightsCount;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___0_lights;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m6AEDE40A651280EC1A7944E9CFD161AFB78802B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	NullCheck(___0_requests);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, ___0_requests, ___1_lightsOutput);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_requests, ___1_lightsOutput);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m766681161796D9912477BF60542C4DD1EB0D2096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___0_requests;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___1_lightsOutput))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___0_requests;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
	{
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::TickRealtimeProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_mA100197AC7CA73600AAD55A67E43039EEF8D2C27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_mA216659518CF27854FB65C184B10197AB74AFBF7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		RuntimeObject* L_10 = ___0_value;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mED3776EB64E9E6BF61705125F20F6893C2098E03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m8225B0B8673C3B8B4529F9BFDAC91D417F1DB083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___0_result;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem::TickRealtimeProbes() */, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
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
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormat(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetFormat_mD887169D00B07B66B9AE4AF5E620AC95604CBE64 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetFormat_mD887169D00B07B66B9AE4AF5E620AC95604CBE64_ftn) (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*);
	static GraphicsFormatUtility_GetFormat_mD887169D00B07B66B9AE4AF5E620AC95604CBE64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetFormat_mD887169D00B07B66B9AE4AF5E620AC95604CBE64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormat(UnityEngine.Texture)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_texture);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m3DD7EAFBC4F60FA47453B93DAA7B392AEC818BD5 (int32_t ___0_format, int32_t ___1_readWrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___1_readWrite;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_readWrite;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___0_format;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_minimumDepthBits);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m76EEE7255F874FD3AC8E149830EE48F345DF8425 (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321 (int32_t ___0_minimumDepthBits, int32_t ___1_minimumStencilBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B24_0 = NULL;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___1_minimumStencilBits;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_0016:
	{
		int32_t L_3 = ___0_minimumDepthBits;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___1_minimumStencilBits;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___0_minimumDepthBits;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___1_minimumStencilBits;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___0_minimumDepthBits;
		V_7 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)16);
		goto IL_008f;
	}

IL_0073:
	{
		int32_t L_15 = ___0_minimumDepthBits;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)24);
		goto IL_008f;
	}

IL_0089:
	{
		___0_minimumDepthBits = ((int32_t)32);
	}

IL_008f:
	{
		int32_t L_17 = ___1_minimumStencilBits;
		V_9 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		___1_minimumStencilBits = 8;
	}

IL_009c:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_19 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		NullCheck(L_19);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_20 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		NullCheck(L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0), NULL);
		int32_t L_21 = ___1_minimumStencilBits;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		G_B24_0 = L_22;
		goto IL_00c2;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_23 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		G_B24_0 = L_23;
	}

IL_00c2:
	{
		V_0 = G_B24_0;
		int32_t L_24 = ___0_minimumDepthBits;
		V_1 = ((int32_t)(L_24/8));
		int32_t L_25 = V_1;
		V_10 = L_25;
		goto IL_00ed;
	}

IL_00cc:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_26 = V_0;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = L_29;
		int32_t L_30 = V_11;
		bool L_31;
		L_31 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(L_30, 4, NULL);
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_11;
		V_3 = L_33;
		goto IL_00fe;
	}

IL_00e6:
	{
		int32_t L_34 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ed:
	{
		int32_t L_35 = V_10;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_36 = V_0;
		NullCheck(L_36);
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_00fe:
	{
		int32_t L_38 = V_3;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetLinearFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetLinearFormat_m4A0172B7E0D08BE4E8A012610DB4E68EE28A2898 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetLinearFormat_m4A0172B7E0D08BE4E8A012610DB4E68EE28A2898_ftn) (int32_t);
	static GraphicsFormatUtility_GetLinearFormat_m4A0172B7E0D08BE4E8A012610DB4E68EE28A2898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetLinearFormat_m4A0172B7E0D08BE4E8A012610DB4E68EE28A2898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetLinearFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn) (int32_t);
	static GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetComponentCount(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GraphicsFormatUtility_GetComponentCount_mA313F1D16326A684823C59EC06D67C219DA9CCF7 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef uint32_t (*GraphicsFormatUtility_GetComponentCount_mA313F1D16326A684823C59EC06D67C219DA9CCF7_ftn) (int32_t);
	static GraphicsFormatUtility_GetComponentCount_mA313F1D16326A684823C59EC06D67C219DA9CCF7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetComponentCount_mA313F1D16326A684823C59EC06D67C219DA9CCF7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetComponentCount(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.String UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormatString(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GraphicsFormatUtility_GetFormatString_mBA71DD20138F0DE734016184C62350081A4B94A0 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef String_t* (*GraphicsFormatUtility_GetFormatString_mBA71DD20138F0DE734016184C62350081A4B94A0_ftn) (int32_t);
	static GraphicsFormatUtility_GetFormatString_mBA71DD20138F0DE734016184C62350081A4B94A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetFormatString_mBA71DD20138F0DE734016184C62350081A4B94A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormatString(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___0_format, ___1_wholeImage);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m443675E54409D934EE0DC0FDA5CF6D56DE9C4282 (int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsAlphaOnlyFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsAlphaOnlyFormat_m16B3790B87311EE379932EF735A178F255EF5FA4 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsAlphaOnlyFormat_m16B3790B87311EE379932EF735A178F255EF5FA4_ftn) (int32_t);
	static GraphicsFormatUtility_IsAlphaOnlyFormat_m16B3790B87311EE379932EF735A178F255EF5FA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsAlphaOnlyFormat_m16B3790B87311EE379932EF735A178F255EF5FA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsAlphaOnlyFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn) (int32_t);
	static GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB (int32_t ___0_format, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_format;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)28))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___0_format;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)29))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_format;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___0_format;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)65)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Rendering.FormatSwizzle UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleR(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetSwizzleR_m80F727B54ED6C7F03D0A73868CE3377AA754E677 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetSwizzleR_m80F727B54ED6C7F03D0A73868CE3377AA754E677_ftn) (int32_t);
	static GraphicsFormatUtility_GetSwizzleR_m80F727B54ED6C7F03D0A73868CE3377AA754E677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetSwizzleR_m80F727B54ED6C7F03D0A73868CE3377AA754E677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleR(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Rendering.FormatSwizzle UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleG(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetSwizzleG_m9C3D85CD62D7A105207AA9B4946509551F5F939B (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetSwizzleG_m9C3D85CD62D7A105207AA9B4946509551F5F939B_ftn) (int32_t);
	static GraphicsFormatUtility_GetSwizzleG_m9C3D85CD62D7A105207AA9B4946509551F5F939B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetSwizzleG_m9C3D85CD62D7A105207AA9B4946509551F5F939B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleG(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Rendering.FormatSwizzle UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleB(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetSwizzleB_mAED2D20985D8A37B3568253CFF1042F46813D88A (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetSwizzleB_mAED2D20985D8A37B3568253CFF1042F46813D88A_ftn) (int32_t);
	static GraphicsFormatUtility_GetSwizzleB_mAED2D20985D8A37B3568253CFF1042F46813D88A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetSwizzleB_mAED2D20985D8A37B3568253CFF1042F46813D88A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleB(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Rendering.FormatSwizzle UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleA(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetSwizzleA_m0C4861726AACE64A897C0925854F0FA90293513D (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetSwizzleA_m0C4861726AACE64A897C0925854F0FA90293513D_ftn) (int32_t);
	static GraphicsFormatUtility_GetSwizzleA_m0C4861726AACE64A897C0925854F0FA90293513D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetSwizzleA_m0C4861726AACE64A897C0925854F0FA90293513D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetSwizzleA(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetBlockSize(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GraphicsFormatUtility_GetBlockSize_mB8CEC0E04DAC5AE52858E5740A9C6FC791BA6B0A (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef uint32_t (*GraphicsFormatUtility_GetBlockSize_mB8CEC0E04DAC5AE52858E5740A9C6FC791BA6B0A_ftn) (int32_t);
	static GraphicsFormatUtility_GetBlockSize_mB8CEC0E04DAC5AE52858E5740A9C6FC791BA6B0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetBlockSize_mB8CEC0E04DAC5AE52858E5740A9C6FC791BA6B0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetBlockSize(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Void UnityEngine.Experimental.Rendering.GraphicsFormatUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_mA72A657D7B9FB8670567D2CB6B6FA3A1419980D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)91));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)93));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0), (void*)L_4);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_5 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)94));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1), (void*)L_9);
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
// System.Void UnityEngine.Assertions.Assert::Fail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		bool L_0 = ((Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields*)il2cpp_codegen_static_fields_for(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var))->___raiseExceptions_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_2 = ___0_message;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		___0_message = _stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1;
	}

IL_001d:
	{
		String_t* L_4 = ___1_userMessage;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = ___1_userMessage;
		String_t* L_7 = ___0_message;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_7, NULL);
		___0_message = L_8;
	}

IL_0033:
	{
		String_t* L_9 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogAssertion_m71A412A496EAB476FFF6253618C706B2F1E4AFF0(L_9, NULL);
		goto IL_0044;
	}

IL_003c:
	{
		String_t* L_10 = ___0_message;
		String_t* L_11 = ___1_userMessage;
		AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* L_12 = (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6(L_12, L_10, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = ___0_condition;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE(L_2, (String_t*)NULL, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2;
		L_2 = AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4((bool)1, NULL);
		String_t* L_3 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_2, L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsFalse(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsFalse_mC11212C418E6B5009F6474AE90FFB24734482E56 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2;
		L_2 = AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4((bool)0, NULL);
		String_t* L_3 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_2, L_3, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreEqual(UnityEngine.Object,UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_expected;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_expected;
		String_t* L_6;
		L_6 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_4, L_5, (bool)1, NULL);
		String_t* L_7 = ___2_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_6, L_7, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreNotEqual(UnityEngine.Object,UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_m4E953971244A0BEACD42190612093ACC87C1A26F (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_expected;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_expected;
		String_t* L_6;
		L_6 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_4, L_5, (bool)0, NULL);
		String_t* L_7 = ___2_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_6, L_7, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsNull(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___0_value;
		String_t* L_4;
		L_4 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50(L_3, (bool)1, NULL);
		String_t* L_5 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_4, L_5, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsNotNull(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___0_value;
		String_t* L_4;
		L_4 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50(L_3, (bool)0, NULL);
		String_t* L_5 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_4, L_5, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreEqual(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_m718BB4BD31FA3176A3A236F96BC5405EB750D6CF (int32_t ___0_expected, int32_t ___1_actual, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_expected;
		int32_t L_1 = ___1_actual;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___0_expected;
		int32_t L_4 = ___1_actual;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E(L_3, L_4, (String_t*)NULL, Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert__cctor_mC2C4583746B3D6E98224F4692EAE5EF17B5F9CC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields*)il2cpp_codegen_static_fields_for(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var))->___raiseExceptions_0 = (bool)1;
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
// System.Void UnityEngine.Assertions.AssertionException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___1_userMessage;
		__this->___m_UserMessage_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserMessage_18), (void*)L_1);
		return;
	}
}
// System.String UnityEngine.Assertions.AssertionException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionException_get_Message_m4320D1607BDF97D451569837340C8E4A04461089 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		String_t* L_0;
		L_0 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = __this->___m_UserMessage_18;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = __this->___m_UserMessage_18;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_4, NULL);
		V_0 = L_5;
	}

IL_0027:
	{
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_7 = V_2;
		return L_7;
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
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C (String_t* ___0_failureMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_failureMessage;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_2, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3 (String_t* ___0_failureMessage, String_t* ___1_expected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_failureMessage;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4;
		L_4 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___1_expected;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988, L_6, NULL);
		String_t* L_9;
		L_9 = AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C(L_8, NULL);
		V_0 = L_9;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetEqualityMessage(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15688BC513A63346074978C5D893B01207733A34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___2_expectEqual;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteral15688BC513A63346074978C5D893B01207733A34;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteral15688BC513A63346074978C5D893B01207733A34;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B3_4, G_B3_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___0_actual;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___1_expected;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		bool L_10 = ___2_expectEqual;
		G_B4_0 = 2;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
		G_B4_4 = L_3;
		if (L_10)
		{
			G_B5_0 = 2;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
			G_B5_4 = L_3;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0047;
	}

IL_0042:
	{
		G_B6_0 = _stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0047:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_11;
		L_11 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B6_4, G_B6_3, NULL);
		String_t* L_12;
		L_12 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(G_B6_5, L_11, NULL);
		V_0 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::NullFailureMessage(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___1_expectNull;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B3_4, G_B3_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		bool L_6 = ___1_expectNull;
		G_B4_0 = 0;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
		G_B4_4 = L_3;
		if (L_6)
		{
			G_B5_0 = 0;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
			G_B5_4 = L_3;
			goto IL_003a;
		}
	}
	{
		G_B6_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_003f;
	}

IL_003a:
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_003f:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_7;
		L_7 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B6_4, G_B6_3, NULL);
		String_t* L_8;
		L_8 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(G_B6_5, L_7, NULL);
		V_0 = L_8;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::BooleanFailureMessage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4 (bool ___0_expected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		bool L_0 = ___0_expected;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB, L_1, NULL);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___0_expected), NULL);
		String_t* L_4;
		L_4 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x_1;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y_2;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z_3;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w_4;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_1);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_2);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___w_4);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (&__this->___r_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_other;
		float L_2 = L_1.___r_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (&__this->___g_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_other;
		float L_6 = L_5.___g_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (&__this->___b_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_other;
		float L_10 = L_9.___b_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (&__this->___a_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_other;
		float L_14 = L_13.___a_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 RendererListDesc_get_cullingResult_m32AFA5E3C7F0FE92E531BA68D0086887CC47DFEA_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 L_0 = __this->___U3CcullingResultU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* RendererListDesc_get_camera_mDB7C5C1D0CD7749A0DA158639AE50C681BBD6815_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___U3CcameraU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 RendererListDesc_get_passName_m74C1A879F1E33C713F902D62F65F7CD939D7A79F_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0 = __this->___U3CpassNameU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* RendererListDesc_get_passNames_m0E883A32A8FCC03B28B45CD207BFFE84F57E1594_inline (RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E* __this, const RuntimeMethod* method) 
{
	{
		ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* L_0 = __this->___U3CpassNamesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RendererListParams_set_isValid_m9B24B24E8B7EC872AA56F91E174772AE17E06B65_inline (RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisValidU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1 = ___0_multiplier;
		float L_2 = __this->___g_1;
		float L_3 = ___0_multiplier;
		float L_4 = __this->___b_2;
		float L_5 = ___0_multiplier;
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2;
		L_2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_1, NULL);
		float L_3 = __this->___b_2;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m041B73328344EFEE224C1F2CF997B0C4122055BD_gshared_inline (Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
