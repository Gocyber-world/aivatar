#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs>
struct EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs>
struct EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs>
struct EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs>
struct EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>
struct Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667;
// System.Func`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>
struct Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>
struct Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B;
// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>
struct Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3;
// Microsoft.CognitiveServices.Speech.AudioDataStream
struct AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs
struct SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs
struct SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult
struct SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs
struct SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs
struct SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370;
// Microsoft.CognitiveServices.Speech.SpeechSynthesizer
struct SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate
struct TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F;
// Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66;
// Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1
struct U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04;
IL2CPP_EXTERN_C String_t* _stringLiteral1532A53696EE625AE3777874840B492D52037C8E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9;
IL2CPP_EXTERN_C String_t* _stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643;
IL2CPP_EXTERN_C String_t* _stringLiteral2E442987A1E9B831CFD58BF1AAA33C8607649320;
IL2CPP_EXTERN_C String_t* _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863;
IL2CPP_EXTERN_C String_t* _stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658;
IL2CPP_EXTERN_C String_t* _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D;
IL2CPP_EXTERN_C String_t* _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral990E9465081709697449AFB110415A8629DE2E13;
IL2CPP_EXTERN_C String_t* _stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D;
IL2CPP_EXTERN_C String_t* _stringLiteralA23629C306AA023437DA41361139F76CFB792614;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06;
IL2CPP_EXTERN_C String_t* _stringLiteralCECFFCAE7D77CF35E61D927143796E78460BB795;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32;
IL2CPP_EXTERN_C String_t* _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E779EA0EBB458249332A7C78EF45C63CA4F4CD;
IL2CPP_EXTERN_C String_t* _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404;
IL2CPP_EXTERN_C String_t* _stringLiteralFFFA71817F742F0D10431BE4FB000597A602B574;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioDataStream_audio_data_stream_release_m60F3E000537EE43FD411BBDDD688D1585DE039E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CRecognizeOnceAsyncU3Eb__51_0_m17AA2EC59E2581E9856607686CA5212C8A5D7BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_Dispose_mC3F2CFF3C80CA2756C271F4E6621DA0A30CB0A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_DoAsyncSynthesisAction_mF03CC316FCEDC3444835D96BAC5A6B13B8CD4669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechSynthesizer_FromConfig_mD54239FD253B3D246244B0F3CD7580993A30AE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SynthesisResult_synth_result_get_result_id_mCCB4D25C807CBB1FAC9F89F062128CC9C5A0A762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SynthesisResult_synthesizer_result_handle_release_m0EDE65F2F2201E9AF489CFBEA553C6D707A284DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Synthesizer_synthesizer_handle_release_m444FCCF4A16075AF1C2F434F437E5DE09BD83F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisSpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_mA5D72B4D1C3CF491E0D12BA3A00CFA4286BF8D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisSpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_mCD545A80AF7B5088D68E7DC9049C42E5DCA8CCD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass51_0_U3CRecognizeOnceAsyncU3Eb__1_m0DA0C610A30093BE146D6892B03A8F4501F8C32F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass83_0_U3CStartSpeakingTextAsyncU3Eb__0_mE941333E2E680AAB9EDE111056D0CE9D9D41BAE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass83_1_U3CStartSpeakingTextAsyncU3Eb__1_m8A1854045416A3C5E4B1E995F2A551B1DF340E33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4B71144DD958900B2F50C53B47A66308A0261701 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3  : public RuntimeObject
{
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___propBag_4;
};

// Microsoft.CognitiveServices.Speech.AudioDataStream
struct AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.AudioDataStream::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.AudioDataStream::disposed
	bool ___disposed_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.AudioDataStream::streamHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___streamHandle_2;
};

// Microsoft.CognitiveServices.Speech.Internal.AudioDataStream
struct AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___recognitionResult_3;
};

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct Diagnostics_t3FA9C63DF2124EF11754F978D11B2A7A784CED0F  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport
struct DotNetFrameworkAnyCpuSupport_tC631B80333E93506D3950CF4861E6440DA923A6C  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct EventArgs_t8D97A306218CF4538968C67C8EF6DB40C09F6A54  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbagHandle_0;
};

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F  : public RuntimeObject
{
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_4;
};

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct RecognitionResult_t1921BD961EE6E7BC5A34A80B51BADA8479F9F4B7  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct Recognizer_t5CF9ED1A4463BECEAA89CA3C159DC1F9505B6F45  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___progBag_1;
};

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct SpxExceptionThrower_t7089A8D1D67637C6D033489493B093A2B8E94491  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Microsoft.CognitiveServices.Speech.Internal.SynthesisResult
struct SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.Synthesizer
struct Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct Utf8StringMarshaler_t05B5825C33FC825D08D4E781E0DF7CB3AFE2E3EF  : public RuntimeObject
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

// Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0::result
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* ___result_0;
	// Microsoft.CognitiveServices.Speech.SpeechRecognizer Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0::<>4__this
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* ___U3CU3E4__this_1;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0
struct U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.SpeechSynthesizer Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0::<>4__this
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* ___U3CU3E4__this_0;
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0::text
	String_t* ___text_1;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1
struct U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1::result
	SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* ___result_0;
	// Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0 Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* ___CSU24U3CU3E8__locals1_1;
};

// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>
struct Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>
struct Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* ___m_result_22;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t* ___type_0;
};

// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94  : public RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F
{
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs
struct SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_1;
	// System.UInt64 Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::<AudioOffset>k__BackingField
	uint64_t ___U3CAudioOffsetU3Ek__BackingField_2;
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_4;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs
struct SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::<Result>k__BackingField
	SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* ___U3CResultU3Ek__BackingField_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_2;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs
struct SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_1;
	// System.UInt64 Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::<AudioOffset>k__BackingField
	uint64_t ___U3CAudioOffsetU3Ek__BackingField_2;
	// System.UInt32 Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::<VisemeId>k__BackingField
	uint32_t ___U3CVisemeIdU3Ek__BackingField_3;
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::<Animation>k__BackingField
	String_t* ___U3CAnimationU3Ek__BackingField_4;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_5;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9  : public SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC
{
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult
struct SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA  : public RuntimeObject
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.TimeSpan Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::<AudioDuration>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CAudioDurationU3Ek__BackingField_2;
	// System.Byte[] Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::<AudioData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CAudioDataU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_4;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::disposed
	bool ___disposed_7;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs
struct SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_1;
	// System.TimeSpan Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::<Duration>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CDurationU3Ek__BackingField_2;
	// System.String Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.SpeechSynthesisBoundaryType Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::<BoundaryType>k__BackingField
	int32_t ___U3CBoundaryTypeU3Ek__BackingField_4;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_5;
	// System.UInt64 Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::audioOffset
	uint64_t ___audioOffset_6;
	// System.UInt32 Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::textOffset
	uint32_t ___textOffset_7;
	// System.UInt32 Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::wordLength
	uint32_t ___wordLength_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::disposed
	bool ___disposed_9;
};

// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD  : public RuntimeObject
{
};

struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields
{
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidArgument
	intptr_t ___InvalidArgument_3;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::NotFound
	intptr_t ___NotFound_4;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandleFunc_6;
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

// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A  : public RuntimeObject
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle_4;
	// System.String Microsoft.CognitiveServices.Speech.Recognizer::pointerHandle
	String_t* ___pointerHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_8;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject* ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD  : public RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9
{
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* ___U3CResultU3Ek__BackingField_6;
};

// Microsoft.CognitiveServices.Speech.SpeechSynthesizer
struct SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B  : public RuntimeObject
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_SynthesisStarted
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* ____SynthesisStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_Synthesizing
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* ____Synthesizing_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_SynthesisCompleted
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* ____SynthesisCompleted_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_SynthesisCanceled
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* ____SynthesisCanceled_3;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_WordBoundary
	EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* ____WordBoundary_4;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_VisemeReceived
	EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* ____VisemeReceived_5;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::_BookmarkReached
	EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* ____BookmarkReached_6;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle_7;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthesisStartedCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___synthesisStartedCallbackDelegate_8;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthesizingCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___synthesizingCallbackDelegate_9;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthesisCompletedCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___synthesisCompletedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthesisCanceledCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___synthesisCanceledCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::wordBoundaryCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___wordBoundaryCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::visemeReceivedCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___visemeReceivedCallbackDelegate_13;
	// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechSynthesizer::bookmarkReachedCallbackDelegate
	TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___bookmarkReachedCallbackDelegate_14;
	// System.IntPtr Microsoft.CognitiveServices.Speech.SpeechSynthesizer::asyncStopSpeakingHandle
	intptr_t ___asyncStopSpeakingHandle_15;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::gch
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gch_16;
	// System.Object Microsoft.CognitiveServices.Speech.SpeechSynthesizer::synthesizerLock
	RuntimeObject* ___synthesizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.SpeechSynthesizer::activeAsyncSynthesisCounter
	int32_t ___activeAsyncSynthesisCounter_19;
	// System.IDisposable Microsoft.CognitiveServices.Speech.SpeechSynthesizer::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.SpeechSynthesizer::disposed
	bool ___disposed_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.SpeechSynthesizer::isDisposing
	bool ___isDisposing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_23;
};

struct SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_StaticFields
{
	// System.TimeSpan Microsoft.CognitiveServices.Speech.SpeechSynthesizer::disposeWaitingTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___disposeWaitingTime_18;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs>
struct EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs>
struct EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs>
struct EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs>
struct EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>
struct Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>
struct Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86  : public SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B  : public Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioInputKeepAlive_26;
};

// Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate
struct TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared (intptr_t ___nativeHandle0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___function0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66 (RuntimeObject* ___item0, String_t* ___message1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_create_from_result(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_create_from_result_m3408BEECC96FD9303133F63249CEA66D095A2906 (intptr_t* ___audioStream0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33 (intptr_t ___hr0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream__ctor_m98BF95367577112730DA0871C12C64590EFA530A (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, intptr_t ___streamHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___handle0, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandle1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_get_property_bag_mFB8F62544F9BD9755182A88932F6C421F86E6717 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioStream0, intptr_t* ___propbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioDataStream_set_Properties_m10664403F7212F1C8FDDFF877352D3434A1A13B4_inline (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_read(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_read_m931E657BF641957A7B058ABF7DFF86CCBBF004AB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioStream0, intptr_t ___buffer1, uint32_t ___bufferSize2, uint32_t* ___filledSize3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.AudioDataStream::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* AudioDataStream_get_Properties_m4369F02E8CB0EF11B852F1AD6179BCF14D357142_inline (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A (String_t* ___str0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1 (intptr_t ___native0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___functionPtr0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___errorCode1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* __this, RuntimeObject* ___sender0, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*, RuntimeObject*, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* __this, RuntimeObject* ___sender0, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*, RuntimeObject*, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognize_once(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognize_once_mEE6844B24F8301DA1BA63C1E239A3DCF607A1C60 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___result1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) ;
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, intptr_t* ___propbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___configPtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_set_audio_output_format(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.SpeechSynthesisOutputFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_set_audio_output_format_mF99D84B7879D0D2EADF83CC52E41ABA1E32F58FB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, int32_t ___formatId1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___fromConfig0, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoPtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m7480590924E94E85BCFC5A86557BCC4DB1337058 (Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult>(System.Func`1<TResult>)
inline Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* Task_Run_TisSpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_mA5D72B4D1C3CF491E0D12BA3A00CFA4286BF8D68 (Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667* ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* (*) (Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___function0, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F (intptr_t ___hr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___disposing0, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* __this, RuntimeObject* ___sender0, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*, RuntimeObject*, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* __this, RuntimeObject* ___sender0, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*, RuntimeObject*, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m8B7BE6C9DC4FD1991EAED1C69A750D1BE700B880 (U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___recoImplAction0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::RecognizeOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_RecognizeOnce_m7E8882DCB0411C272636620C95B9EDBA724BCD74 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_bookmark_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_bookmark_event_get_values_mCAE29489EE4B0EC0DF3BB372B812E0AB8A120EF9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_event_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_event_get_text_m7B3B8AC425A44469C90911F6407C17CA287FB30D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_reason_m466B23C507E0838C41036507BFC3CDC72A4FC9B9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_audio_length_duration(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt32&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_audio_length_duration_m105316474F7DB531DE3468CB62906D372E01A02A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, uint32_t* ___audioLength1, uint64_t* ___audioDuration2, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775 (double ___value0, const RuntimeMethod* method) ;
// System.Byte[] Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::GetAudioData(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SpeechSynthesisResult_GetAudioData_m0BE88557DB54AD64CC11B9B87DCE82BB9E1509FF (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, uint32_t ___audioSize0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_property_bag_mFF4E670DAE5B58907D115AB5AB0E4630CE70BE6D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesisResult_get_Properties_m3B7366D7F670CD2274B834DFC0EF58FBF6176D4F_inline (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_audio_data_m2C136377B25D9D230F032EC95B3132E734AED9F8 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___buffer1, uint32_t ___bufferSize2, uint32_t* ___filledSize3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_synthesis_event_get_result(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_synthesis_event_get_result_mD49067C443FB675B243CD8194BA0F9CAA80CB3FE (intptr_t ___eventHandle0, intptr_t* ___resultHandle1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisResult__ctor_mDA7D562737C32DC48CE573F61085A270812D1E41 (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* SpeechSynthesisEventArgs_get_Result_m41BDA1D35F6871E28ACD56C2FA25B8254BA327D2_inline (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisResult_Dispose_m412A5BEB10D7D87962C2346F357ECE21DF86E23B (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_viseme_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_viseme_event_get_values_mFC13D5EA589F7F92E1A9661A8ABC4376DB078C59 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, uint32_t* ___visemeId2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_viseme_event_get_animation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_viseme_event_get_animation_m7382B20F1AB3592B32F47BC0551F2D7C43BB4081 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_word_boundary_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&,System.UInt64&,System.UInt32&,System.UInt32&,Microsoft.CognitiveServices.Speech.SpeechSynthesisBoundaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_word_boundary_event_get_values_m9F78A4BDEE004F097F90938EE360CB8A54924AF4 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, uint64_t* ___duration2, uint32_t* ___textOffset3, uint32_t* ___wordLength4, int32_t* ___boundaryType5, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_Synthesizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisCompleted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisCanceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_WordBoundary(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_VisemeReceived(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_BookmarkReached(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FromConfig(Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* SpeechSynthesizer_FromConfig_mD54239FD253B3D246244B0F3CD7580993A30AE2E (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig0, AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioConfig1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer__ctor_mFC640FB071AF23809A7321166BBE63C355C5BE37 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, const RuntimeMethod* method) ;
// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::MoveStreamOwnerShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioConfig_MoveStreamOwnerShip_mEA9971D3F1B2796B3E8C09E5BE0CF64F68E03B36 (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976 (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_get_property_bag_m2D35AA3989E43AD62324D124694190DA536082F4 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, intptr_t* ___hpropbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechSynthesizer_set_Properties_mD6774644250F5226F108CB2F490A57FD9380ED8A_inline (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::getAudioConfigHandle(Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* SpeechSynthesizer_getAudioConfigHandle_mBBE360380917590B10EA99244866A21066D47A4E (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioConfig0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::synthesizer_create_speech_synthesizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_synthesizer_create_speech_synthesizer_from_config_m8DAF703D0C17AAF9D07C6553E2C9C1753EFAAB6A (intptr_t* ___synthHandle0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioOutput2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0__ctor_m28680EA3282B2EAC83EE59AB71AB12780C8E980E (U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m2DC1FF85808F14B7CC0791EE278A65CC3F3E82A4 (Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult>(System.Func`1<TResult>)
inline Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* Task_Run_TisSpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_mCD545A80AF7B5088D68E7DC9049C42E5DCA8CCD3 (Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE* ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* (*) (Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___function0, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_Dispose_mAE3691013853800A2846F00D81FC7EFE0004875A (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m65BFA4D84197E61C1D0427E0D27B9BBF07945F83 (RuntimeObject* ___obj0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::PulseAll(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_PulseAll_m176CB60AB441BA3F5EC1ADD72BAF603556E9D958 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesizer_get_Properties_m8062364DEFE28CC124B32A28D388BF2E99142D93_inline (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_started_set_callback_m73C93991233680FD42DC9340E280F82593BE8586 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_synthesizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_synthesizing_set_callback_mDF49C94C09C57DF34EB014BC2B0A74CB80E5A6EF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_completed_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_completed_set_callback_m9AE05DA8F453BE5592EB29ABAEBFD0E8FF8876C0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_canceled_set_callback_mE4865E50A7921B7D04009458C68C5D709D2AE12D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_word_boundary_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_word_boundary_set_callback_mCEA4C44AAC6AC8DB28AD7ACA1ECD920CD7F5CC09 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechSynthesizer>(System.IntPtr)
inline SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___nativeHandle0, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21 (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mC538439C36C803DB9548A453447422CAC87D3A02_inline (EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* __this, RuntimeObject* ___sender0, SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108*, RuntimeObject*, SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisWordBoundaryEventArgs__ctor_m365E6772816E45029A4597C7FF874319A9C0EB9C (SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m131F7E0724571386D29C6B936FDBB4E6948CD241_inline (EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* __this, RuntimeObject* ___sender0, SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E*, RuntimeObject*, SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisVisemeEventArgs__ctor_m9B3F2E40DD680C5E098A32D826BB20E8D4DBE89D (SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m7F010D7C7DCD1233C7829436CD23B6188870AD6E_inline (EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* __this, RuntimeObject* ___sender0, SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697*, RuntimeObject*, SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisBookmarkEventArgs__ctor_m7EBCF31E6B9C273ABC252B6763EAAEF54BD02C9A (SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0807FBC2EBECC4102D566402DDF74A20355C2512_inline (EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* __this, RuntimeObject* ___sender0, SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73*, RuntimeObject*, SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_1__ctor_mC8745A8172DE954AED4E7976D72159E4E5322A96 (U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::DoAsyncSynthesisAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_DoAsyncSynthesisAction_mF03CC316FCEDC3444835D96BAC5A6B13B8CD4669 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___synthImplAction0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_start_speaking_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_start_speaking_text_m53C923F983EDD3B639DDE9CB8DDF7B07F44F13EC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, intptr_t ___text1, uint32_t ___textLength2, intptr_t* ___resultHandle3, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332 (const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13 (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m7BB641553588142FA7C6E4653C6AE83A0CEFD25F (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5 (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m066886B8F93D94A1EC21B990179BF6C41AC9762B (intptr_t ___ptr0, uint8_t ___val1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_reason_canceled(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_canceled_error_code(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL speech_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL speech_config_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL speech_config_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL speech_config_set_audio_output_format(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C void CDECL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL error_get_message(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL error_get_error_code(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL error_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_create_speech_synthesizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL property_bag_set_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL property_bag_get_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL property_bag_free_string(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL property_bag_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_reason(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_text(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL result_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_result_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_recognize_once(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_recognition_event_get_offset(void*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_session_event_get_session_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_recognition_event_get_result(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_session_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_session_stopped_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_speech_start_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_speech_end_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_recognizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_recognized_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL recognizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL audio_data_stream_create_from_result(intptr_t*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL audio_data_stream_read(void*, intptr_t, uint32_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL audio_data_stream_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL audio_data_stream_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synth_result_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synth_result_get_reason(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synth_result_get_audio_data(void*, intptr_t, uint32_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synth_result_get_audio_length_duration(void*, uint32_t*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synth_result_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_result_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_start_speaking_text(void*, intptr_t, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_synthesizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_completed_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_word_boundary_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_synthesis_event_get_result(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_word_boundary_event_get_values(void*, uint64_t*, uint64_t*, uint32_t*, uint32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_viseme_event_get_values(void*, uint64_t*, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_viseme_event_get_animation(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_bookmark_event_get_values(void*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_event_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL synthesizer_event_get_text(void*);
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
// Microsoft.CognitiveServices.Speech.AudioDataStream Microsoft.CognitiveServices.Speech.AudioDataStream::FromResult(Microsoft.CognitiveServices.Speech.SpeechSynthesisResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* AudioDataStream_FromResult_m83C0327FA212AAD3797D5CE9EDA3905C80AC7230 (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* V_1 = NULL;
	{
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_1;
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_2 = ___result0;
		NullCheck(L_2);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = L_2->___resultHandle_5;
		il2cpp_codegen_runtime_class_init_inline(AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = AudioDataStream_audio_data_stream_create_from_result_m3408BEECC96FD9303133F63249CEA66D095A2906((&V_0), L_3, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_4, NULL);
		intptr_t L_5 = V_0;
		AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* L_6 = (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1*)il2cpp_codegen_object_new(AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AudioDataStream__ctor_m98BF95367577112730DA0871C12C64590EFA530A(L_6, L_5, NULL);
		V_1 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* L_7 = V_1;
		return L_7;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream__ctor_m98BF95367577112730DA0871C12C64590EFA530A (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, intptr_t ___streamHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDataStream_audio_data_stream_release_m60F3E000537EE43FD411BBDDD688D1585DE039E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_1 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___streamHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___streamHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)AudioDataStream_audio_data_stream_release_m60F3E000537EE43FD411BBDDD688D1585DE039E8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___streamHandle_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamHandle_2), (void*)L_3);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___streamHandle_2;
		il2cpp_codegen_runtime_class_init_inline(AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = AudioDataStream_audio_data_stream_get_property_bag_mFB8F62544F9BD9755182A88932F6C421F86E6717(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_8 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_8, L_7, NULL);
		AudioDataStream_set_Properties_m10664403F7212F1C8FDDFF877352D3434A1A13B4_inline(__this, L_8, NULL);
		return;
	}
}
// System.UInt32 Microsoft.CognitiveServices.Speech.AudioDataStream::ReadData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioDataStream_ReadData_m4A92D3B79DFCA9077A3F5240B329AE6FC7CFE4AF (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECFFCAE7D77CF35E61D927143796E78460BB795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E779EA0EBB458249332A7C78EF45C63CA4F4CD);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66((RuntimeObject*)L_0, _stringLiteralCECFFCAE7D77CF35E61D927143796E78460BB795, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___streamHandle_2;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, _stringLiteralF3E779EA0EBB458249332A7C78EF45C63CA4F4CD, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				intptr_t L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___streamHandle_2;
			intptr_t L_6 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer0;
			NullCheck(L_7);
			il2cpp_codegen_runtime_class_init_inline(AudioDataStream_t81AFB90A1E5E7BF66964E53AE3D0B93656D7675E_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = AudioDataStream_audio_data_stream_read_m931E657BF641957A7B058ABF7DFF86CCBBF004AB(L_5, L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), (&V_0), NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
			uint32_t L_9 = V_0;
			V_0 = ((int32_t)((uint32_t)(int32_t)L_9%(uint32_t)(int32_t)((int32_t)2147483647LL)));
			intptr_t L_10 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
			uint32_t L_12 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_10, L_11, 0, L_12, NULL);
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		uint32_t L_13 = V_0;
		V_2 = L_13;
		goto IL_0062;
	}

IL_0062:
	{
		uint32_t L_14 = V_2;
		return L_14;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream_Dispose_m1A7468DEF54E0F3D25890F099E071B9FC1FE964F (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream_Dispose_m7705658BFB47CF13762E1D96105D4031C131239D (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B5_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B4_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B8_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	{
		bool L_0 = __this->___disposed_1;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0044;
	}

IL_0010:
	{
		bool L_2 = ___disposing0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_4;
		L_4 = AudioDataStream_get_Properties_m4369F02E8CB0EF11B852F1AD6179BCF14D357142_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B5_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B5_0);
	}

IL_0028:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___streamHandle_2;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_0034;
		}
	}
	{
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B8_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B8_0, NULL);
	}

IL_003a:
	{
	}

IL_003b:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_1 = (bool)1;
	}

IL_0044:
	{
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.AudioDataStream::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* AudioDataStream_get_Properties_m4369F02E8CB0EF11B852F1AD6179BCF14D357142 (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.AudioDataStream::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream_set_Properties_m10664403F7212F1C8FDDFF877352D3434A1A13B4 (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		intptr_t L_4 = ___propertyBagPtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_5 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_5, NULL, (intptr_t)((void*)PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_6, L_4, L_5, NULL);
		__this->___propbagHandle_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propbagHandle_0), (void*)L_6);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, const RuntimeMethod* method) 
{
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		NullCheck(L_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_0, NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___propbagHandle_0;
		int32_t L_2 = ___id0;
		String_t* L_3;
		L_3 = PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___propbagHandle_0;
			int32_t L_5 = ___id0;
			intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			intptr_t L_7 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC(L_4, L_5, L_6, L_7, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_5, NULL);
				intptr_t L_6 = V_1;
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___propbagHandle_0;
			intptr_t L_8 = V_1;
			intptr_t L_9 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
			intptr_t L_10;
			L_10 = PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC(L_7, (-1), L_8, L_9, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_10, NULL);
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_5, NULL);
				intptr_t L_6 = V_2;
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___propHandle0;
				int32_t L_8 = ___id1;
				intptr_t L_9 = V_1;
				intptr_t L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
				intptr_t L_11;
				L_11 = PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D(L_7, L_8, L_9, L_10, NULL);
				V_3 = L_11;
				intptr_t L_12 = V_3;
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_14;
				L_14 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_12, L_13, NULL);
				V_4 = L_14;
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_004e_1;
				}
			}
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003e_1:
					{// begin finally (depth: 2)
						intptr_t L_16 = V_3;
						il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
						intptr_t L_17;
						L_17 = PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9(L_16, NULL);
						SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_17, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					intptr_t L_18 = V_3;
					String_t* L_19;
					L_19 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_18, NULL);
					V_0 = L_19;
					goto IL_004d_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004d_1:
			{
			}

IL_004e_1:
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		String_t* L_20 = V_0;
		V_5 = L_20;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_21 = V_5;
		return L_21;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, (String_t*)NULL, NULL);
		V_0 = ((int64_t)0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		uint64_t L_4 = V_0;
		__this->___U3COffsetU3Ek__BackingField_5 = L_4;
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		uint64_t L_2;
		L_2 = RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline(__this, NULL);
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE, L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		intptr_t L_4 = ___resultHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_5 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_5, NULL, (intptr_t)((void*)RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_6, L_4, L_5, NULL);
		__this->___resultHandle_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_4), (void*)L_6);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_7 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_7, NULL, (intptr_t)((void*)RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = __this->___resultHandle_4;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_7, L_8, ((int32_t)2048), NULL);
		__this->___U3CResultIdU3Ek__BackingField_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_0), (void*)L_9);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_10 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_10, NULL, (intptr_t)((void*)RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = __this->___resultHandle_4;
		String_t* L_12;
		L_12 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_10, L_11, ((int32_t)2048), NULL);
		__this->___U3CTextU3Ek__BackingField_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_2), (void*)L_12);
		V_1 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = __this->___resultHandle_4;
		intptr_t L_14;
		L_14 = RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C(L_13, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_14, NULL);
		int32_t L_15 = V_1;
		__this->___U3CReasonU3Ek__BackingField_1 = L_15;
		intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_2 = L_16;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_17 = __this->___resultHandle_4;
		intptr_t L_18;
		L_18 = RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF(L_17, (&V_2), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_18, NULL);
		intptr_t L_19 = V_2;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_20 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_20, L_19, NULL);
		RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline(__this, L_20, NULL);
	}

IL_00ba:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResultIdU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6260956A285A95B964811F944839C8CA994BAAD8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_11;
		L_11 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8, L_10, NULL);
		V_0 = L_13;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___result0;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_1 = (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A*)il2cpp_codegen_object_new(CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___recognitionResult_3 = (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognitionResult_3), (void*)(RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_1 = ___result0;
		__this->___recognitionResult_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognitionResult_3), (void*)L_1);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_2 = __this->___recognitionResult_3;
		NullCheck(L_2);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = L_2->___resultHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_3, _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_4 = __this->___recognitionResult_3;
		NullCheck(L_4);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = L_4->___resultHandle_4;
		il2cpp_codegen_runtime_class_init_inline(CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline(__this, L_7, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_8 = __this->___recognitionResult_3;
		NullCheck(L_8);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = L_8->___resultHandle_4;
		intptr_t L_10;
		L_10 = CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74(L_9, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_10, NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline(__this, L_11, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_12 = __this->___recognitionResult_3;
		NullCheck(L_12);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_13;
		L_13 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline(__this, L_14, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_1;
		L_1 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStartContinuousHandle_6 = L_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopContinuousHandle_7 = L_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStartKeywordHandle_8 = L_2;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopKeywordHandle_9 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->___disposed_15 = (bool)0;
		il2cpp_codegen_memory_barrier();
		__this->___isDisposing_16 = (bool)0;
		RuntimeObject* L_4 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_4, NULL);
		__this->___recognizerLock_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizerLock_17), (void*)L_4);
		__this->___activeAsyncRecognitionCounter_18 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_5, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ___recoPtr0;
		__this->___recoHandle_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recoHandle_4), (void*)L_6);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___recoPtr0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		__this->___pointerHandle_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointerHandle_5), (void*)L_8);
		String_t* L_9 = __this->___pointerHandle_5;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06, L_9, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_10, ((int32_t)120), _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(__this, 0, NULL);
		__this->___gch_14 = L_11;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_12 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_12, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var), NULL);
		__this->___speechStartDetectedCallbackDelegate_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)L_12);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_13 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_13, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var), NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)L_13);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_14 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_14, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var), NULL);
		__this->___sessionStartedCallbackDelegate_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)L_14);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_15 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_15, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var), NULL);
		__this->___sessionStoppedCallbackDelegate_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)L_15);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral990E9465081709697449AFB110415A8629DE2E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = __this->___pointerHandle_5;
			String_t* L_1;
			L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral990E9465081709697449AFB110415A8629DE2E13, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_1, ((int32_t)131), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
			il2cpp_codegen_memory_barrier();
			__this->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0042;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->___isDisposing_16 = (bool)1;
				RuntimeObject* L_0 = __this->___recognizerLock_17;
				V_0 = L_0;
				V_1 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003a_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_1;
							if (!L_1)
							{
								goto IL_0044_1;
							}
						}
						{
							RuntimeObject* L_2 = V_0;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
						}

IL_0044_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_0;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
						int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
						V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
						bool L_5 = V_2;
						if (!L_5)
						{
							goto IL_0037_2;
						}
					}
					{
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						NullCheck(L_6);
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var)));
					}

IL_0037_2:
					{
						goto IL_0045_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0045_1:
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->___pointerHandle_5;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_4, ((int32_t)169), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		bool L_5 = __this->___disposed_15;
		il2cpp_codegen_memory_barrier();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_007d;
	}

IL_003b:
	{
		__this->___speechStartDetectedCallbackDelegate_10 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStartedCallbackDelegate_12 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStoppedCallbackDelegate_13 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (&__this->___gch_14);
		bool L_8;
		L_8 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___gch_14);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_0074:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_15 = (bool)1;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B8_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_7 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8->____SessionStarted_0;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B8_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_7 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8->____SessionStopped_1;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B8_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_7 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8->____SpeechStartDetected_2;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B8_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_7 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8->____SpeechEndDetected_3;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___recoImplAction0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = __this->___recognizerLock_17;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
			__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		bool L_5 = __this->___disposed_15;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->___isDisposing_16;
		il2cpp_codegen_memory_barrier();
		G_B8_0 = ((int32_t)(L_6));
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B8_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_10 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var)));
	}

IL_005b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = __this->___recognizerLock_17;
					V_3 = L_11;
					V_4 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0095:
						{// begin finally (depth: 2)
							{
								bool L_12 = V_4;
								if (!L_12)
								{
									goto IL_00a0;
								}
							}
							{
								RuntimeObject* L_13 = V_3;
								Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
							}

IL_00a0:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						RuntimeObject* L_14 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_14, (&V_4), NULL);
						int32_t L_15 = __this->___activeAsyncRecognitionCounter_18;
						__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
						goto IL_00a1;
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___recoImplAction0;
			SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_16, (String_t*)NULL, NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___recoImplAction0;
			NullCheck(L_17);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
			goto IL_00a3;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::RecognizeOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_RecognizeOnce_m7E8882DCB0411C272636620C95B9EDBA724BCD74 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___recoHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognize_once_mEE6844B24F8301DA1BA63C1E239A3DCF607A1C60(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		V_1 = L_4;
		goto IL_002f;
	}

IL_002f:
	{
		intptr_t L_5 = V_1;
		return L_5;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___fromConfig0, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_4 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_5 = NULL;
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_0 = ___speechConfig1;
		V_1 = (bool)((((RuntimeObject*)(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66_RuntimeMethod_var)));
	}

IL_0014:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_5, L_4, (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0069;
					}
				}
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			V_3 = L_8;
			GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_9 = ___fromConfig0;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_10 = ___speechConfig1;
			NullCheck(L_10);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = L_10->___configHandle_0;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = V_2;
			NullCheck(L_9);
			intptr_t L_13;
			L_13 = GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline(L_9, (&V_3), L_11, L_12, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_13, NULL);
			intptr_t L_14 = V_3;
			HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_15 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_15, NULL, (intptr_t)((void*)Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var), NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_16, L_14, L_15, NULL);
			V_4 = L_16;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_17 = ___speechConfig1;
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(L_17, NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_18 = V_4;
			V_5 = L_18;
			goto IL_006a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = V_5;
		return L_19;
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
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* currentDelegate = reinterpret_cast<GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenInst(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___phreco0, ___speechconfig1, ___audioInput2, method);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStatic(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___phreco0, ___speechconfig1, ___audioInput2, method);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke(__this->___method_ptr_0, method, NULL, ___phreco0, ___speechconfig1, ___audioInput2);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___phreco0, ___speechconfig1, ___audioInput2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___eventHandle_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_1), (void*)L_3);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_4, NULL, (intptr_t)((void*)Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___eventHandle_1;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_4, L_5, ((int32_t)37), NULL);
		__this->___U3CSessionIdU3Ek__BackingField_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIdU3Ek__BackingField_4), (void*)L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33 (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_0, _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943, L_1, NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___configPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		__this->___progBag_1 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progBag_1), (void*)(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___configPtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___configHandle_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configHandle_0), (void*)L_3);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___configHandle_0;
		il2cpp_codegen_runtime_class_init_inline(SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_8 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_8, L_7, NULL);
		__this->___progBag_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progBag_1), (void*)L_8);
		SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C(__this, _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9, _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* SpeechConfig_FromSubscription_m5CBC02A0591FF4C81402782CEE8E0770F5A359D2 (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* V_1 = NULL;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		String_t* L_1 = ___subscriptionKey0;
		String_t* L_2 = ___region1;
		il2cpp_codegen_runtime_class_init_inline(SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3((&V_0), L_1, L_2, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_5 = (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)il2cpp_codegen_object_new(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechSynthesisLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechSynthesisLanguage_m72D4B17392AC2B116B3DB7CF6C4F777A368F05B6 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3100), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechSynthesisVoiceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechSynthesisVoiceName_m4FA613D33974365C98282C83DBD57271C601963B (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3101), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetSpeechSynthesisOutputFormat(Microsoft.CognitiveServices.Speech.SpeechSynthesisOutputFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetSpeechSynthesisOutputFormat_mA3B68061860606948FBD4C9B6E4D953EE32D7F9D (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, int32_t ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___configHandle_0;
		int32_t L_1 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpeechConfig_speech_config_set_audio_output_format_mF99D84B7879D0D2EADF83CC52E41ABA1E32F58FB(L_0, L_1, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(__this, L_0, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_1;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5 = (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)il2cpp_codegen_object_new(SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056(L_5, L_4, NULL);
		__this->___U3CResultU3Ek__BackingField_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_6), (void*)L_5);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_8;
		L_8 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_7;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_13;
		L_13 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9, L_12, NULL);
		V_0 = L_15;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(__this, L_0, NULL);
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_1;
		L_1 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2;
		L_2 = CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541(L_1, NULL);
		V_0 = L_2;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(L_3, NULL);
		__this->___U3CReasonU3Ek__BackingField_7 = L_4;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline(L_5, NULL);
		__this->___U3CErrorCodeU3Ek__BackingField_8 = L_6;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(L_7, NULL);
		__this->___U3CErrorDetailsU3Ek__BackingField_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_9), (void*)L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8;
		L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, NULL);
		V_0 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_16 = V_0;
		return L_16;
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_0 = (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567(L_0, NULL, (intptr_t)((void*)SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var), NULL);
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_1 = ___speechConfig0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66(L_0, L_1, NULL);
		SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A(__this, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___recoHandle0;
		Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_2, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var), NULL);
		__this->___recognizingCallbackDelegate_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)L_2);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_3, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var), NULL);
		__this->___recognizedCallbackDelegate_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)L_3);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_4 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_4, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var), NULL);
		__this->___canceledCallbackDelegate_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)L_4);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_5;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ___recoHandle0;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9(L_6, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_7, NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_9 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_9, L_8, NULL);
		SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline(__this, L_9, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionResult> Microsoft.CognitiveServices.Speech.SpeechRecognizer::RecognizeOnceAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* SpeechRecognizer_RecognizeOnceAsync_m71807617C31B4920E431453EB48C9BF8EFC89DD1 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CRecognizeOnceAsyncU3Eb__51_0_m17AA2EC59E2581E9856607686CA5212C8A5D7BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisSpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_mA5D72B4D1C3CF491E0D12BA3A00CFA4286BF8D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* V_0 = NULL;
	{
		Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667* L_0 = (Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667*)il2cpp_codegen_object_new(Func_1_tEF0D6E01D13A3583EB2ABAE25E809854D73CD667_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m7480590924E94E85BCFC5A86557BCC4DB1337058(L_0, __this, (intptr_t)((void*)SpeechRecognizer_U3CRecognizeOnceAsyncU3Eb__51_0_m17AA2EC59E2581E9856607686CA5212C8A5D7BED_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* L_1;
		L_1 = Task_Run_TisSpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_mA5D72B4D1C3CF491E0D12BA3A00CFA4286BF8D68(L_0, Task_Run_TisSpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_mA5D72B4D1C3CF491E0D12BA3A00CFA4286BF8D68_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_1_tF90A9F33E59240000450E04525E180A7A7BBD87B* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B6_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B10_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___disposed_15;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0115;
	}

IL_0013:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		V_1 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_4, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_5, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_6, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_7, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_8, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_12;
		L_12 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_10, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_11, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_12, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_15;
		L_15 = Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7(L_13, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_14, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_15, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_18;
		L_18 = Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0(L_16, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_17, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_18, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_21;
		L_21 = Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A(L_19, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_20, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_21, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_22 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_24;
		L_24 = Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883(L_22, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_23, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_24, NULL);
	}

IL_00c6:
	{
		bool L_25 = ___disposing0;
		V_2 = L_25;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00f1;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_27 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_28 = L_27;
		G_B6_0 = L_28;
		if (L_28)
		{
			G_B7_0 = L_28;
			goto IL_00d8;
		}
	}
	{
		goto IL_00de;
	}

IL_00d8:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B7_0, NULL);
	}

IL_00de:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_29;
		L_29 = SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_30 = L_29;
		G_B9_0 = L_30;
		if (L_30)
		{
			G_B10_0 = L_30;
			goto IL_00ea;
		}
	}
	{
		goto IL_00f0;
	}

IL_00ea:
	{
		NullCheck(G_B10_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00f0:
	{
	}

IL_00f1:
	{
		__this->___recognizingCallbackDelegate_22 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___recognizedCallbackDelegate_23 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___canceledCallbackDelegate_24 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___audioInputKeepAlive_26 = (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioInputKeepAlive_26), (void*)(AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL);
		bool L_31 = ___disposing0;
		Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B(__this, L_31, NULL);
	}

IL_0115:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B8_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_7 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8->____Recognizing_19;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B8_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_7 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8->____Recognized_20;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B8_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_7 = (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = L_8->____Canceled_21;
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognizer::<RecognizeOnceAsync>b__51_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognizer_U3CRecognizeOnceAsyncU3Eb__51_0_m17AA2EC59E2581E9856607686CA5212C8A5D7BED (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_U3CRecognizeOnceAsyncU3Eb__1_m0DA0C610A30093BE146D6892B03A8F4501F8C32F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* V_0 = NULL;
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* L_0 = (U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass51_0__ctor_m8B7BE6C9DC4FD1991EAED1C69A750D1BE700B880(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* L_2 = V_0;
		NullCheck(L_2);
		L_2->___result_0 = (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___result_0), (void*)(SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)NULL);
		U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass51_0_U3CRecognizeOnceAsyncU3Eb__1_m0DA0C610A30093BE146D6892B03A8F4501F8C32F_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_4, NULL);
		U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* L_5 = V_0;
		NullCheck(L_5);
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_6 = L_5->___result_0;
		V_1 = L_6;
		goto IL_0031;
	}

IL_0031:
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_7 = V_1;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m8B7BE6C9DC4FD1991EAED1C69A750D1BE700B880 (U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer/<>c__DisplayClass51_0::<RecognizeOnceAsync>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3CRecognizeOnceAsyncU3Eb__1_m0DA0C610A30093BE146D6892B03A8F4501F8C32F (U3CU3Ec__DisplayClass51_0_tD963EAB058BF2A9D9FD7E16FEBF1A4D714FF158F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Recognizer_RecognizeOnce_m7E8882DCB0411C272636620C95B9EDBA724BCD74(L_0, NULL);
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_2 = (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)il2cpp_codegen_object_new(SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056(L_2, L_1, NULL);
		__this->___result_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_0), (void*)L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisBookmarkEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisBookmarkEventArgs__ctor_m7EBCF31E6B9C273ABC252B6763EAAEF54BD02C9A (SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_1, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_2, L_0, L_1, NULL);
		__this->___eventHandle_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_4), (void*)L_2);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_3 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_3, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___eventHandle_4;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_3, L_4, ((int32_t)256), NULL);
		__this->___U3CResultIdU3Ek__BackingField_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_1), (void*)L_5);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___eventHandle_4;
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Synthesizer_synthesizer_bookmark_event_get_values_mCAE29489EE4B0EC0DF3BB372B812E0AB8A120EF9(L_6, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_7, NULL);
		uint64_t L_8 = V_0;
		__this->___U3CAudioOffsetU3Ek__BackingField_2 = L_8;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = __this->___eventHandle_4;
		intptr_t L_10;
		L_10 = Synthesizer_synthesizer_event_get_text_m7B3B8AC425A44469C90911F6407C17CA287FB30D(L_9, NULL);
		V_1 = L_10;
		intptr_t L_11 = V_1;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_11, (String_t*)NULL, NULL);
		intptr_t L_12 = V_1;
		String_t* L_13;
		L_13 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_12, NULL);
		__this->___U3CTextU3Ek__BackingField_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_13);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisResult__ctor_mDA7D562737C32DC48CE573F61085A270812D1E41 (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynthesisResult_synth_result_get_result_id_mCCB4D25C807CBB1FAC9F89F062128CC9C5A0A762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynthesisResult_synthesizer_result_handle_release_m0EDE65F2F2201E9AF489CFBEA553C6D707A284DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint64_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_7 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___resultHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)SynthesisResult_synthesizer_result_handle_release_m0EDE65F2F2201E9AF489CFBEA553C6D707A284DA_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___resultHandle_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_5), (void*)L_3);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_4, NULL, (intptr_t)((void*)SynthesisResult_synth_result_get_result_id_mCCB4D25C807CBB1FAC9F89F062128CC9C5A0A762_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___resultHandle_5;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_4, L_5, ((int32_t)1024), NULL);
		__this->___U3CResultIdU3Ek__BackingField_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_0), (void*)L_6);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___resultHandle_5;
		il2cpp_codegen_runtime_class_init_inline(SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = SynthesisResult_synth_result_get_reason_m466B23C507E0838C41036507BFC3CDC72A4FC9B9(L_7, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
		int32_t L_9 = V_0;
		__this->___U3CReasonU3Ek__BackingField_1 = L_9;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = __this->___resultHandle_5;
		intptr_t L_11;
		L_11 = SynthesisResult_synth_result_get_audio_length_duration_m105316474F7DB531DE3468CB62906D372E01A02A(L_10, (&V_1), (&V_2), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_11, NULL);
		uint64_t L_12 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
		L_13 = TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775(((double)((double)(uint64_t)L_12)), NULL);
		__this->___U3CAudioDurationU3Ek__BackingField_2 = L_13;
		uint32_t L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = SpeechSynthesisResult_GetAudioData_m0BE88557DB54AD64CC11B9B87DCE82BB9E1509FF(__this, ((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)((int32_t)2147483647LL))), NULL);
		__this->___U3CAudioDataU3Ek__BackingField_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioDataU3Ek__BackingField_3), (void*)L_15);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = __this->___resultHandle_5;
		intptr_t L_17;
		L_17 = SynthesisResult_synth_result_get_property_bag_mFF4E670DAE5B58907D115AB5AB0E4630CE70BE6D(L_16, (&V_3), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_17, NULL);
		intptr_t L_18 = V_3;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_19 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_19, L_18, NULL);
		__this->___U3CPropertiesU3Ek__BackingField_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_4), (void*)L_19);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesisResult_get_Properties_m3B7366D7F670CD2274B834DFC0EF58FBF6176D4F (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisResult_Dispose_m412A5BEB10D7D87962C2346F357ECE21DF86E23B (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisResult_Dispose_m9707424A8B875A1CA70183B4DFAAF06EB9E12BC0 (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B5_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B4_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B8_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	{
		bool L_0 = __this->___disposed_7;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0044;
	}

IL_0010:
	{
		bool L_2 = ___disposing0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_4;
		L_4 = SpeechSynthesisResult_get_Properties_m3B7366D7F670CD2274B834DFC0EF58FBF6176D4F_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B5_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B5_0);
	}

IL_0028:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___resultHandle_5;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_0034;
		}
	}
	{
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B8_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B8_0, NULL);
	}

IL_003a:
	{
	}

IL_003b:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_7 = (bool)1;
	}

IL_0044:
	{
		return;
	}
}
// System.Byte[] Microsoft.CognitiveServices.Speech.SpeechSynthesisResult::GetAudioData(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SpeechSynthesisResult_GetAudioData_m0BE88557DB54AD64CC11B9B87DCE82BB9E1509FF (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, uint32_t ___audioSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		uint32_t L_0 = ___audioSize0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				intptr_t L_2 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = __this->___resultHandle_5;
			intptr_t L_4 = V_0;
			uint32_t L_5 = ___audioSize0;
			il2cpp_codegen_runtime_class_init_inline(SynthesisResult_t6A58E4273053756F5C411D8CE4EAA8F17242C66C_il2cpp_TypeInfo_var);
			intptr_t L_6;
			L_6 = SynthesisResult_synth_result_get_audio_data_m2C136377B25D9D230F032EC95B3132E734AED9F8(L_3, L_4, L_5, (&V_1), NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
			uint32_t L_7 = V_1;
			V_1 = ((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)((int32_t)2147483647LL)));
			uint32_t L_8 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
			V_2 = L_9;
			intptr_t L_10 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
			uint32_t L_12 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_10, L_11, 0, L_12, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
			V_3 = L_13;
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		return L_14;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21 (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_1, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_2, L_0, L_1, NULL);
		__this->___eventHandle_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_2), (void*)L_2);
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_3;
		intptr_t L_4 = ___eventHandlePtr0;
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Synthesizer_synthesizer_synthesis_event_get_result_mD49067C443FB675B243CD8194BA0F9CAA80CB3FE(L_4, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_5, NULL);
		intptr_t L_6 = V_0;
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_7 = (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA*)il2cpp_codegen_object_new(SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SpeechSynthesisResult__ctor_mDA7D562737C32DC48CE573F61085A270812D1E41(L_7, L_6, NULL);
		__this->___U3CResultU3Ek__BackingField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_7);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* SpeechSynthesisEventArgs_get_Result_m41BDA1D35F6871E28ACD56C2FA25B8254BA327D2 (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, const RuntimeMethod* method) 
{
	{
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisEventArgs::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisEventArgs_Dispose_mD76B28701C6B5E0BEA225C6C1047589C13931318 (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___eventHandle_2;
		NullCheck(L_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_0, NULL);
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_1;
		L_1 = SpeechSynthesisEventArgs_get_Result_m41BDA1D35F6871E28ACD56C2FA25B8254BA327D2_inline(__this, NULL);
		NullCheck(L_1);
		SpeechSynthesisResult_Dispose_m412A5BEB10D7D87962C2346F357ECE21DF86E23B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisVisemeEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisVisemeEventArgs__ctor_m9B3F2E40DD680C5E098A32D826BB20E8D4DBE89D (SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_1, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_2, L_0, L_1, NULL);
		__this->___eventHandle_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_5), (void*)L_2);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_3 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_3, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___eventHandle_5;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_3, L_4, ((int32_t)256), NULL);
		__this->___U3CResultIdU3Ek__BackingField_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_1), (void*)L_5);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___eventHandle_5;
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Synthesizer_synthesizer_viseme_event_get_values_mFC13D5EA589F7F92E1A9661A8ABC4376DB078C59(L_6, (&V_0), (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_7, NULL);
		uint64_t L_8 = V_0;
		__this->___U3CAudioOffsetU3Ek__BackingField_2 = L_8;
		uint32_t L_9 = V_1;
		__this->___U3CVisemeIdU3Ek__BackingField_3 = L_9;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = __this->___eventHandle_5;
		intptr_t L_11;
		L_11 = Synthesizer_synthesizer_viseme_event_get_animation_m7382B20F1AB3592B32F47BC0551F2D7C43BB4081(L_10, NULL);
		V_2 = L_11;
		intptr_t L_12 = V_2;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_12, (String_t*)NULL, NULL);
		intptr_t L_13 = V_2;
		String_t* L_14;
		L_14 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_13, NULL);
		__this->___U3CAnimationU3Ek__BackingField_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimationU3Ek__BackingField_4), (void*)L_14);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisWordBoundaryEventArgs__ctor_m365E6772816E45029A4597C7FF874319A9C0EB9C (SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_9 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_1, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_2, L_0, L_1, NULL);
		__this->___eventHandle_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_5), (void*)L_2);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_3 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_3, NULL, (intptr_t)((void*)Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___eventHandle_5;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_3, L_4, ((int32_t)256), NULL);
		__this->___U3CResultIdU3Ek__BackingField_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_1), (void*)L_5);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___eventHandle_5;
		uint64_t* L_7 = (&__this->___audioOffset_6);
		uint32_t* L_8 = (&__this->___textOffset_7);
		uint32_t* L_9 = (&__this->___wordLength_8);
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Synthesizer_synthesizer_word_boundary_event_get_values_m9F78A4BDEE004F097F90938EE360CB8A54924AF4(L_6, L_7, (&V_0), L_8, L_9, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_10, NULL);
		uint64_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_11, NULL);
		__this->___U3CDurationU3Ek__BackingField_2 = L_12;
		int32_t L_13 = V_1;
		__this->___U3CBoundaryTypeU3Ek__BackingField_4 = L_13;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = __this->___eventHandle_5;
		intptr_t L_15;
		L_15 = Synthesizer_synthesizer_event_get_text_m7B3B8AC425A44469C90911F6407C17CA287FB30D(L_14, NULL);
		V_2 = L_15;
		intptr_t L_16 = V_2;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_16, (String_t*)NULL, NULL);
		intptr_t L_17 = V_2;
		String_t* L_18;
		L_18 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_17, NULL);
		__this->___U3CTextU3Ek__BackingField_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_3), (void*)L_18);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisWordBoundaryEventArgs_Dispose_m2FC7138AF5685E65B2F0548C108CE4CB761B5734 (SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesisWordBoundaryEventArgs::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisWordBoundaryEventArgs_Dispose_m77E1067AD61E597C78B842ADE79BFB09AB1EFC7D (SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B5_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B4_0 = NULL;
	{
		bool L_0 = __this->___disposed_9;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0032;
	}

IL_0010:
	{
		bool L_2 = ___disposing0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___eventHandle_5;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B5_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B5_0, NULL);
	}

IL_0028:
	{
	}

IL_0029:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_9 = (bool)1;
	}

IL_0032:
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B(intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B(___hsynth0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer__ctor_m12E565D5146E3C7DF42DA0FC24F40D3EE91E68B8 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig0, AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioConfig1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* G_B2_0 = NULL;
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* G_B3_1 = NULL;
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_0 = ___speechConfig0;
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_1 = ___audioConfig1;
		il2cpp_codegen_runtime_class_init_inline(SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = SpeechSynthesizer_FromConfig_mD54239FD253B3D246244B0F3CD7580993A30AE2E(L_0, L_1, NULL);
		SpeechSynthesizer__ctor_mFC640FB071AF23809A7321166BBE63C355C5BE37(__this, L_2, NULL);
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_3 = ___audioConfig1;
		G_B1_0 = __this;
		if (L_3)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0016:
	{
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_4 = ___audioConfig1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = AudioConfig_MoveStreamOwnerShip_mEA9971D3F1B2796B3E8C09E5BE0CF64F68E03B36(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___streamKeepAlive_20 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___streamKeepAlive_20), (void*)G_B3_0);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer__ctor_mFC640FB071AF23809A7321166BBE63C355C5BE37 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFFA71817F742F0D10431BE4FB000597A602B574);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopSpeakingHandle_15 = L_0;
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___synthesizerLock_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesizerLock_17), (void*)L_1);
		__this->___activeAsyncSynthesisCounter_19 = 0;
		__this->___streamKeepAlive_20 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamKeepAlive_20), (void*)(RuntimeObject*)NULL);
		il2cpp_codegen_memory_barrier();
		__this->___disposed_21 = (bool)0;
		il2cpp_codegen_memory_barrier();
		__this->___isDisposing_22 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ___synthHandle0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_2, _stringLiteralFFFA71817F742F0D10431BE4FB000597A602B574, NULL);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_3 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_3, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF_RuntimeMethod_var), NULL);
		__this->___synthesisStartedCallbackDelegate_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisStartedCallbackDelegate_8), (void*)L_3);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_4 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_4, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B_RuntimeMethod_var), NULL);
		__this->___synthesizingCallbackDelegate_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesizingCallbackDelegate_9), (void*)L_4);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_5 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_5, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697_RuntimeMethod_var), NULL);
		__this->___synthesisCompletedCallbackDelegate_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisCompletedCallbackDelegate_10), (void*)L_5);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_6 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_6, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62_RuntimeMethod_var), NULL);
		__this->___synthesisCanceledCallbackDelegate_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisCanceledCallbackDelegate_11), (void*)L_6);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_7 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_7, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772_RuntimeMethod_var), NULL);
		__this->___wordBoundaryCallbackDelegate_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wordBoundaryCallbackDelegate_12), (void*)L_7);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_8 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_8, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0_RuntimeMethod_var), NULL);
		__this->___visemeReceivedCallbackDelegate_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___visemeReceivedCallbackDelegate_13), (void*)L_8);
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* L_9 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)il2cpp_codegen_object_new(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976(L_9, NULL, (intptr_t)((void*)SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B_RuntimeMethod_var), NULL);
		__this->___bookmarkReachedCallbackDelegate_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bookmarkReachedCallbackDelegate_14), (void*)L_9);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ___synthHandle0;
		__this->___synthHandle_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthHandle_7), (void*)L_10);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(__this, 0, NULL);
		__this->___gch_16 = L_11;
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_12;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = ___synthHandle0;
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_14;
		L_14 = Synthesizer_synthesizer_get_property_bag_m2D35AA3989E43AD62324D124694190DA536082F4(L_13, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_14, NULL);
		intptr_t L_15 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_16 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_16, L_15, NULL);
		SpeechSynthesizer_set_Properties_mD6774644250F5226F108CB2F490A57FD9380ED8A_inline(__this, L_16, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::getAudioConfigHandle(Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* SpeechSynthesizer_getAudioConfigHandle_mBBE360380917590B10EA99244866A21066D47A4E (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B3_0 = NULL;
	{
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_0 = ___audioConfig0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_1 = ___audioConfig0;
		NullCheck(L_1);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = L_1->___configHandle_3;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_4, L_3, (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL, NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = V_0;
		return L_5;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FromConfig(Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* SpeechSynthesizer_FromConfig_mD54239FD253B3D246244B0F3CD7580993A30AE2E (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig0, AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioConfig1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_synthesizer_handle_release_m444FCCF4A16075AF1C2F434F437E5DE09BD83F28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_2 = NULL;
	bool V_3 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_4 = NULL;
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_0 = ___speechConfig0;
		V_3 = (bool)((((RuntimeObject*)(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpeechSynthesizer_FromConfig_mD54239FD253B3D246244B0F3CD7580993A30AE2E_RuntimeMethod_var)));
	}

IL_0015:
	{
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_3 = ___audioConfig1;
		il2cpp_codegen_runtime_class_init_inline(SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4;
		L_4 = SpeechSynthesizer_getAudioConfigHandle_mBBE360380917590B10EA99244866A21066D47A4E(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_1 = L_5;
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_6 = ___speechConfig0;
		NullCheck(L_6);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = L_6->___configHandle_0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = SpxFactory_synthesizer_create_speech_synthesizer_from_config_m8DAF703D0C17AAF9D07C6553E2C9C1753EFAAB6A((&V_1), L_7, L_8, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_9, NULL);
		intptr_t L_10 = V_1;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_11 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_11, NULL, (intptr_t)((void*)Synthesizer_synthesizer_handle_release_m444FCCF4A16075AF1C2F434F437E5DE09BD83F28_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_12, L_10, L_11, NULL);
		V_2 = L_12;
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_13 = ___speechConfig0;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(L_13, NULL);
		AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* L_14 = ___audioConfig1;
		GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(L_14, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_15 = V_2;
		V_4 = L_15;
		goto IL_005c;
	}

IL_005c:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = V_4;
		return L_16;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechSynthesizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesizer_get_Properties_m8062364DEFE28CC124B32A28D388BF2E99142D93 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_set_Properties_mD6774644250F5226F108CB2F490A57FD9380ED8A (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.CognitiveServices.Speech.SpeechSynthesisResult> Microsoft.CognitiveServices.Speech.SpeechSynthesizer::StartSpeakingTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* SpeechSynthesizer_StartSpeakingTextAsync_mC2E4F6B823257CC9F5721AF0D05F818E38E828AC (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisSpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_mCD545A80AF7B5088D68E7DC9049C42E5DCA8CCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_0_U3CStartSpeakingTextAsyncU3Eb__0_mE941333E2E680AAB9EDE111056D0CE9D9D41BAE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* V_0 = NULL;
	Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_0 = (U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass83_0__ctor_m28680EA3282B2EAC83EE59AB71AB12780C8E980E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_2 = V_0;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		L_2->___text_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___text_1), (void*)L_3);
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_4 = V_0;
		Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE* L_5 = (Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE*)il2cpp_codegen_object_new(Func_1_tF675F12CA0D271AB89DB7564E6F96DCA658F07FE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_m2DC1FF85808F14B7CC0791EE278A65CC3F3E82A4(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass83_0_U3CStartSpeakingTextAsyncU3Eb__0_mE941333E2E680AAB9EDE111056D0CE9D9D41BAE3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* L_6;
		L_6 = Task_Run_TisSpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_mCD545A80AF7B5088D68E7DC9049C42E5DCA8CCD3(L_5, Task_Run_TisSpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_mCD545A80AF7B5088D68E7DC9049C42E5DCA8CCD3_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		Task_1_t2E5A0CD99B8032016537B7B557F2BBB0BF08084E* L_7 = V_1;
		return L_7;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_Dispose_mC3F2CFF3C80CA2756C271F4E6621DA0A30CB0A0F (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				SpeechSynthesizer_Dispose_mAE3691013853800A2846F00D81FC7EFE0004875A(__this, (bool)1, NULL);
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->___isDisposing_22 = (bool)1;
				RuntimeObject* L_0 = __this->___synthesizerLock_17;
				V_0 = L_0;
				V_1 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005a_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_1;
							if (!L_1)
							{
								goto IL_0064_1;
							}
						}
						{
							RuntimeObject* L_2 = V_0;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
						}

IL_0064_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_0;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
						int32_t L_4 = __this->___activeAsyncSynthesisCounter_19;
						V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
						bool L_5 = V_2;
						if (!L_5)
						{
							goto IL_003e_2;
						}
					}
					{
						RuntimeObject* L_6 = __this->___synthesizerLock_17;
						il2cpp_codegen_runtime_class_init_inline(SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
						TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = ((SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_StaticFields*)il2cpp_codegen_static_fields_for(SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var))->___disposeWaitingTime_18;
						bool L_8;
						L_8 = Monitor_Wait_m65BFA4D84197E61C1D0427E0D27B9BBF07945F83(L_6, L_7, NULL);
					}

IL_003e_2:
					{
						int32_t L_9 = __this->___activeAsyncSynthesisCounter_19;
						V_3 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
						bool L_10 = V_3;
						if (!L_10)
						{
							goto IL_0057_2;
						}
					}
					{
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						NullCheck(L_11);
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E442987A1E9B831CFD58BF1AAA33C8607649320)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpeechSynthesizer_Dispose_mC3F2CFF3C80CA2756C271F4E6621DA0A30CB0A0F_RuntimeMethod_var)));
					}

IL_0057_2:
					{
						goto IL_0065_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0065_1:
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_Finalize_mDF11BD867338123C518DF97CCE6BA5335BF84CF9 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			__this->___isDisposing_22 = (bool)1;
			SpeechSynthesizer_Dispose_mAE3691013853800A2846F00D81FC7EFE0004875A(__this, (bool)0, NULL);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::DoAsyncSynthesisAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_DoAsyncSynthesisAction_mF03CC316FCEDC3444835D96BAC5A6B13B8CD4669 (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___synthImplAction0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = __this->___synthesizerLock_17;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___activeAsyncSynthesisCounter_19;
			__this->___activeAsyncSynthesisCounter_19 = ((int32_t)il2cpp_codegen_add(L_4, 1));
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		bool L_5 = __this->___disposed_21;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->___isDisposing_22;
		il2cpp_codegen_memory_barrier();
		G_B8_0 = ((int32_t)(L_6));
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B8_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_10 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpeechSynthesizer_DoAsyncSynthesisAction_mF03CC316FCEDC3444835D96BAC5A6B13B8CD4669_RuntimeMethod_var)));
	}

IL_005b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = __this->___synthesizerLock_17;
					V_3 = L_11;
					V_4 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0099:
						{// begin finally (depth: 2)
							{
								bool L_12 = V_4;
								if (!L_12)
								{
									goto IL_00a4;
								}
							}
							{
								RuntimeObject* L_13 = V_3;
								Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
							}

IL_00a4:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						RuntimeObject* L_14 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_14, (&V_4), NULL);
						int32_t L_15 = __this->___activeAsyncSynthesisCounter_19;
						__this->___activeAsyncSynthesisCounter_19 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
						RuntimeObject* L_16 = __this->___synthesizerLock_17;
						Monitor_PulseAll_m176CB60AB441BA3F5EC1ADD72BAF603556E9D958(L_16, NULL);
						goto IL_00a5;
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00a5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___synthImplAction0;
			NullCheck(L_17);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
			goto IL_00a7;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_Dispose_mAE3691013853800A2846F00D81FC7EFE0004875A (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		bool L_0 = __this->___disposed_21;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0120;
	}

IL_0013:
	{
		bool L_2 = ___disposing0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_4;
		L_4 = SpeechSynthesizer_get_Properties_m8062364DEFE28CC124B32A28D388BF2E99142D93_inline(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, L_4);
	}

IL_0026:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___synthHandle_7;
		V_2 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00b7;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___synthHandle_7;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Synthesizer_synthesizer_started_set_callback_m73C93991233680FD42DC9340E280F82593BE8586(L_7, (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL, L_8, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = __this->___synthHandle_7;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_12;
		L_12 = Synthesizer_synthesizer_synthesizing_set_callback_mDF49C94C09C57DF34EB014BC2B0A74CB80E5A6EF(L_10, (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL, L_11, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_12, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = __this->___synthHandle_7;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_15;
		L_15 = Synthesizer_synthesizer_completed_set_callback_m9AE05DA8F453BE5592EB29ABAEBFD0E8FF8876C0(L_13, (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL, L_14, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_15, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = __this->___synthHandle_7;
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_18;
		L_18 = Synthesizer_synthesizer_canceled_set_callback_mE4865E50A7921B7D04009458C68C5D709D2AE12D(L_16, (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL, L_17, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_18, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = __this->___synthHandle_7;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_21;
		L_21 = Synthesizer_synthesizer_word_boundary_set_callback_mCEA4C44AAC6AC8DB28AD7ACA1ECD920CD7F5CC09(L_19, (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL, L_20, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_21, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_22 = __this->___synthHandle_7;
		NullCheck(L_22);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_22, NULL);
	}

IL_00b7:
	{
		__this->___synthesisStartedCallbackDelegate_8 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisStartedCallbackDelegate_8), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___synthesizingCallbackDelegate_9 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesizingCallbackDelegate_9), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___synthesisCompletedCallbackDelegate_10 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisCompletedCallbackDelegate_10), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___synthesisCanceledCallbackDelegate_11 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synthesisCanceledCallbackDelegate_11), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___wordBoundaryCallbackDelegate_12 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wordBoundaryCallbackDelegate_12), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___visemeReceivedCallbackDelegate_13 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___visemeReceivedCallbackDelegate_13), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		__this->___bookmarkReachedCallbackDelegate_14 = (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bookmarkReachedCallbackDelegate_14), (void*)(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*)NULL);
		RuntimeObject* L_23 = __this->___streamKeepAlive_20;
		RuntimeObject* L_24 = L_23;
		G_B7_0 = L_24;
		if (L_24)
		{
			G_B8_0 = L_24;
			goto IL_00f4;
		}
	}
	{
		goto IL_00fa;
	}

IL_00f4:
	{
		NullCheck(G_B8_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B8_0);
	}

IL_00fa:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_25 = (&__this->___gch_16);
		bool L_26;
		L_26 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_25, NULL);
		V_3 = L_26;
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0117;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_28 = (&__this->___gch_16);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_28, NULL);
	}

IL_0117:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_21 = (bool)1;
	}

IL_0120:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisStarted_m5F334596EDCFD05CDB4580B5EA48652570F8FFCF (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	bool V_1 = false;
	SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B9_0 = NULL;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B8_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_005c;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_7 = (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500*)il2cpp_codegen_object_new(SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21(L_7, L_6, NULL);
			V_2 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_8 = V_2;
						if (!L_8)
						{
							goto IL_0047_1;
						}
					}
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_10 = V_0;
					NullCheck(L_10);
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_11 = L_10->____SynthesisStarted_0;
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_12 = L_11;
					G_B8_0 = L_12;
					if (L_12)
					{
						G_B9_0 = L_12;
						goto IL_0032_2;
					}
				}
				{
					goto IL_003a_2;
				}

IL_0032_2:
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = V_0;
					SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_14 = V_2;
					NullCheck(G_B9_0);
					EventHandler_1_Invoke_mC538439C36C803DB9548A453447422CAC87D3A02_inline(G_B9_0, L_13, L_14, NULL);
				}

IL_003a_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_Synthesizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_Synthesizing_m24B7E2544FCD3A790884321EF6CB19782CC2012B (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	bool V_1 = false;
	SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B9_0 = NULL;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B8_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_005c;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_7 = (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500*)il2cpp_codegen_object_new(SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21(L_7, L_6, NULL);
			V_2 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_8 = V_2;
						if (!L_8)
						{
							goto IL_0047_1;
						}
					}
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_10 = V_0;
					NullCheck(L_10);
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_11 = L_10->____Synthesizing_1;
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_12 = L_11;
					G_B8_0 = L_12;
					if (L_12)
					{
						G_B9_0 = L_12;
						goto IL_0032_2;
					}
				}
				{
					goto IL_003a_2;
				}

IL_0032_2:
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = V_0;
					SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_14 = V_2;
					NullCheck(G_B9_0);
					EventHandler_1_Invoke_mC538439C36C803DB9548A453447422CAC87D3A02_inline(G_B9_0, L_13, L_14, NULL);
				}

IL_003a_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisCompleted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisCompleted_mA6B9B9608284B368EBB0ACEB2435F8AF4E1DA697 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	bool V_1 = false;
	SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B9_0 = NULL;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B8_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_005c;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_7 = (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500*)il2cpp_codegen_object_new(SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21(L_7, L_6, NULL);
			V_2 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_8 = V_2;
						if (!L_8)
						{
							goto IL_0047_1;
						}
					}
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_10 = V_0;
					NullCheck(L_10);
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_11 = L_10->____SynthesisCompleted_2;
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_12 = L_11;
					G_B8_0 = L_12;
					if (L_12)
					{
						G_B9_0 = L_12;
						goto IL_0032_2;
					}
				}
				{
					goto IL_003a_2;
				}

IL_0032_2:
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = V_0;
					SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_14 = V_2;
					NullCheck(G_B9_0);
					EventHandler_1_Invoke_mC538439C36C803DB9548A453447422CAC87D3A02_inline(G_B9_0, L_13, L_14, NULL);
				}

IL_003a_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_SynthesisCanceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_SynthesisCanceled_m7DE5EEF47A97AB9A87086BBAEFD1071AD0FE6A62 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	bool V_1 = false;
	SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B9_0 = NULL;
	EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* G_B8_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_005c;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_7 = (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500*)il2cpp_codegen_object_new(SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisEventArgs__ctor_m774553DFE1A022CC3A2C91398A70ABD96214BE21(L_7, L_6, NULL);
			V_2 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_8 = V_2;
						if (!L_8)
						{
							goto IL_0047_1;
						}
					}
					{
						SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_10 = V_0;
					NullCheck(L_10);
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_11 = L_10->____SynthesisCanceled_3;
					EventHandler_1_tBB72D927E2BD93CE2F1B142CA075F823BC608108* L_12 = L_11;
					G_B8_0 = L_12;
					if (L_12)
					{
						G_B9_0 = L_12;
						goto IL_0032_2;
					}
				}
				{
					goto IL_003a_2;
				}

IL_0032_2:
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = V_0;
					SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* L_14 = V_2;
					NullCheck(G_B9_0);
					EventHandler_1_Invoke_mC538439C36C803DB9548A453447422CAC87D3A02_inline(G_B9_0, L_13, L_14, NULL);
				}

IL_003a_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_WordBoundary(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_WordBoundary_m04868B177600ED62D38CFC0FF380E6D3D4416772 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	bool V_1 = false;
	SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* G_B9_0 = NULL;
	EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* G_B8_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_1 = (bool)G_B4_0;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_005c;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* L_7 = (SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370*)il2cpp_codegen_object_new(SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisWordBoundaryEventArgs__ctor_m365E6772816E45029A4597C7FF874319A9C0EB9C(L_7, L_6, NULL);
			V_2 = L_7;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* L_8 = V_2;
						if (!L_8)
						{
							goto IL_0047_1;
						}
					}
					{
						SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* L_9 = V_2;
						NullCheck(L_9);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
					}

IL_0047_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_10 = V_0;
					NullCheck(L_10);
					EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* L_11 = L_10->____WordBoundary_4;
					EventHandler_1_t1471AFCF15F1B9BAC026673E96AC51EE6966416E* L_12 = L_11;
					G_B8_0 = L_12;
					if (L_12)
					{
						G_B9_0 = L_12;
						goto IL_0032_2;
					}
				}
				{
					goto IL_003a_2;
				}

IL_0032_2:
				{
					SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = V_0;
					SpeechSynthesisWordBoundaryEventArgs_t912C08185E8C9CDB9816820D9AB7DA2D07087370* L_14 = V_2;
					NullCheck(G_B9_0);
					EventHandler_1_Invoke_m131F7E0724571386D29C6B936FDBB4E6948CD241_inline(G_B9_0, L_13, L_14, NULL);
				}

IL_003a_2:
				{
					goto IL_0048_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0048_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004b;
		}
		throw e;
	}

CATCH_004b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_VisemeReceived(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_VisemeReceived_m7001E3B02AF59432D43A2ABBDE78CDA7791D0AC0 (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* G_B8_0 = NULL;
	EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* L_7 = (SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E*)il2cpp_codegen_object_new(SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisVisemeEventArgs__ctor_m9B3F2E40DD680C5E098A32D826BB20E8D4DBE89D(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* L_9 = L_8->____VisemeReceived_5;
			EventHandler_1_tAB65FEF690705CC3816D38B364FDB6DC43B2E697* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_11 = V_0;
			SpeechSynthesisVisemeEventArgs_tAAB71641531380FD33792A90A5BF1E4850DCF76E* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m7F010D7C7DCD1233C7829436CD23B6188870AD6E_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::FireEvent_BookmarkReached(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_FireEvent_BookmarkReached_mAE29BA2C13370B1DAD470C77BA94D6C78323252B (intptr_t ___hsynth0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* V_0 = NULL;
	SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* G_B8_0 = NULL;
	EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_m4E6B3DE4C1A557CEA080D46EBE03F4E6E2E965B3_RuntimeMethod_var);
			V_0 = L_1;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_22;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___hevent1;
			SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* L_7 = (SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101*)il2cpp_codegen_object_new(SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechSynthesisBookmarkEventArgs__ctor_m7EBCF31E6B9C273ABC252B6763EAAEF54BD02C9A(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* L_9 = L_8->____BookmarkReached_6;
			EventHandler_1_tC6679B9A8EE68550BE954AE4039E2568FC6C7F73* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_11 = V_0;
			SpeechSynthesisBookmarkEventArgs_tC2C400C989457E439F4647FAF15F465787DEB101* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m0807FBC2EBECC4102D566402DDF74A20355C2512_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer__cctor_m9BFFE3CA1DB6E8F4C401438CA8E362E55BE652DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775((100.0), NULL);
		((SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_StaticFields*)il2cpp_codegen_static_fields_for(SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B_il2cpp_TypeInfo_var))->___disposeWaitingTime_18 = L_0;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_0__ctor_m28680EA3282B2EAC83EE59AB71AB12780C8E980E (U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechSynthesisResult Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_0::<StartSpeakingTextAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* U3CU3Ec__DisplayClass83_0_U3CStartSpeakingTextAsyncU3Eb__0_mE941333E2E680AAB9EDE111056D0CE9D9D41BAE3 (U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_1_U3CStartSpeakingTextAsyncU3Eb__1_m8A1854045416A3C5E4B1E995F2A551B1DF340E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* V_0 = NULL;
	SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* L_0 = (U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass83_1__ctor_mC8745A8172DE954AED4E7976D72159E4E5322A96(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* L_2 = V_0;
		NullCheck(L_2);
		L_2->___result_0 = (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___result_0), (void*)(SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA*)NULL);
		SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_3 = __this->___U3CU3E4__this_0;
		U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass83_1_U3CStartSpeakingTextAsyncU3Eb__1_m8A1854045416A3C5E4B1E995F2A551B1DF340E33_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		SpeechSynthesizer_DoAsyncSynthesisAction_mF03CC316FCEDC3444835D96BAC5A6B13B8CD4669(L_3, L_5, NULL);
		U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* L_6 = V_0;
		NullCheck(L_6);
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_7 = L_6->___result_0;
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_8 = V_1;
		return L_8;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_1__ctor_mC8745A8172DE954AED4E7976D72159E4E5322A96 (U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechSynthesizer/<>c__DisplayClass83_1::<StartSpeakingTextAsync>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass83_1_U3CStartSpeakingTextAsyncU3Eb__1_m8A1854045416A3C5E4B1E995F2A551B1DF340E33 (U3CU3Ec__DisplayClass83_1_t15B3EB2A03ABD44CD6D9E49710806FE4BF742692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFFA71817F742F0D10431BE4FB000597A602B574);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_1 = L_0->___U3CU3E4__this_0;
		NullCheck(L_1);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = L_1->___synthHandle_7;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_2, _stringLiteralFFFA71817F742F0D10431BE4FB000597A602B574, NULL);
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___text_1;
		intptr_t L_5;
		L_5 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_4, NULL);
		V_0 = L_5;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_7 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___text_1;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
		NullCheck(L_9);
		V_1 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				intptr_t L_10 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_10, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			V_2 = L_11;
			U3CU3Ec__DisplayClass83_0_tEFDA19F1A0B32D9E3846AEEE1885F8E27A337B66* L_12 = __this->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_12);
			SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* L_13 = L_12->___U3CU3E4__this_0;
			NullCheck(L_13);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = L_13->___synthHandle_7;
			intptr_t L_15 = V_0;
			uint32_t L_16 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Synthesizer_t0FDC0082A8996E01019EE563C70293DDA00E5F77_il2cpp_TypeInfo_var);
			intptr_t L_17;
			L_17 = Synthesizer_synthesizer_start_speaking_text_m53C923F983EDD3B639DDE9CB8DDF7B07F44F13EC(L_14, L_15, L_16, (&V_2), NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_17, NULL);
			intptr_t L_18 = V_2;
			SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_19 = (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA*)il2cpp_codegen_object_new(SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			SpeechSynthesisResult__ctor_mDA7D562737C32DC48CE573F61085A270812D1E41(L_19, L_18, NULL);
			__this->___result_0 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___result_0), (void*)L_19);
			goto IL_0084;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
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
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5(L_1, NULL);
		int32_t L_3 = ___line1;
		String_t* L_4 = ___caller2;
		String_t* L_5 = ___file3;
		Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9(L_0, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___file4;
		int32_t L_4 = ___line2;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var);
		DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B(((int32_t)16), _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404, L_3, L_4, L_5, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332 (const RuntimeMethod* method) 
{
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__cctor_mBEB7D958D2D09294C4BBD616934A9A42D6292E3E (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_reason_canceled", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___errorCode1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_canceled_error_code", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____result0_marshaled, ___errorCode1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__cctor_m7122FDABA765CCAE9E9844545B7AA07E65A9243F (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "speech_config_from_subscription", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4 (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "speech_config_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_release)(___config0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, intptr_t* ___propbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "speech_config_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____config0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___config0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_set_audio_output_format(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.SpeechSynthesisOutputFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_set_audio_output_format_mF99D84B7879D0D2EADF83CC52E41ABA1E32F58FB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, int32_t ___formatId1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "speech_config_set_audio_output_format", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_set_audio_output_format)(____config0_marshaled, ___formatId1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___formatId1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___config0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop__cctor_m8B3A8BAC343F54DA27CED74A94A75ED4D27A7537 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int32_t, char*, char*, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "diagnostics_log_trace_string", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___fileName2' to native representation
	char* ____fileName2_marshaled = NULL;
	____fileName2_marshaled = il2cpp_codegen_marshal_string(___fileName2);

	// Marshaling of parameter '___message4' to native representation
	char* ____message4_marshaled = NULL;
	____message4_marshaled = il2cpp_codegen_marshal_string(___message4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	reinterpret_cast<PInvokeFunc>(diagnostics_log_trace_string)(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#else
	il2cppPInvokeFunc(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___fileName2' native representation
	il2cpp_codegen_marshal_free(____fileName2_marshaled);
	____fileName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___message4' native representation
	il2cpp_codegen_marshal_free(____message4_marshaled);
	____message4_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_m26F27A784D2DFA07811AB4A6376066A85B12CC44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)25), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0 = L_0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)27), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___RuntimeError_1 = L_1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)33), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidHandle_2 = L_2;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(5, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidArgument_3 = L_3;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(4, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___NotFound_4 = L_4;
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF(L_1, NULL);
		V_1 = L_2;
		intptr_t L_3 = V_1;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_7 = V_1;
		String_t* L_8;
		L_8 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_7, NULL);
		V_0 = L_8;
	}

IL_0026:
	{
		String_t* L_9 = V_0;
		V_3 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_10 = V_3;
		return L_10;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5(L_0, NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___errorHandle0), NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC(L_0, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "error_get_message", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_message)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "error_get_error_code", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_error_code)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "error_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_release)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.EventArgs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__cctor_m302E0D6CEEDB9BDC8D1D38604F8D285B1DD954F8 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE (intptr_t ___eventHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_event_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_event_handle_release)(___eventHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062 (MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___t0;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
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
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* currentDelegate = reinterpret_cast<HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenInst(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hresult0, method);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStatic(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hresult0, method);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___hresult0);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hresult0);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___handle0, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___releaseHandleFunc_6 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL);
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = ___releaseHandle1;
		__this->___releaseHandleFunc_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)L_1);
		intptr_t L_2 = ___handle0;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_2, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_3 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_4), (-1), /*hidden argument*/NULL);
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
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
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_0 = __this->___releaseHandleFunc_6;
		V_0 = (bool)((!(((RuntimeObject*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = __this->___releaseHandleFunc_6;
		intptr_t L_3 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		NullCheck(L_2);
		intptr_t L_4;
		L_4 = HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline(L_2, L_3, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_4, NULL);
		__this->___releaseHandleFunc_6 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = L_5;
	}

IL_0039:
	{
		V_1 = (bool)1;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_4, ((int32_t)83), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t* L_0 = (&((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0);
		String_t* L_1;
		L_1 = IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13(L_0, _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0;
			L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
			String_t* L_1;
			L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_1, ((int32_t)104), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
			VirtualActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxFactory__cctor_m4BB68A04E62A96852C374DEE4D7D751167B02E57 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___functionPtr0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = ___functionPtr0;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___handle1;
			intptr_t L_6 = V_1;
			int32_t L_7 = ___maxCharCount2;
			NullCheck(L_4);
			intptr_t L_8;
			L_8 = GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline(L_4, L_5, L_6, L_7, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
			intptr_t L_9 = V_1;
			String_t* L_10;
			L_10 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_9, NULL);
			V_0 = L_10;
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		String_t* L_11 = V_0;
		V_2 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067 (intptr_t* ___recoHandle0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioInput2, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::synthesizer_create_speech_synthesizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_synthesizer_create_speech_synthesizer_from_config_m8DAF703D0C17AAF9D07C6553E2C9C1753EFAAB6A (intptr_t* ___synthHandle0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioOutput2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_create_speech_synthesizer_from_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioOutput2' to native representation
	void* ____audioOutput2_marshaled = NULL;
	if (___audioOutput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioOutput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioOutput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioOutput2, (&___safeHandle_reference_incremented_for____audioOutput2), NULL);
	____audioOutput2_marshaled = reinterpret_cast<void*>((___audioOutput2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_create_speech_synthesizer_from_config)(___synthHandle0, ____speechconfig1_marshaled, ____audioOutput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___synthHandle0, ____speechconfig1_marshaled, ____audioOutput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioOutput2' native representation
	if (___safeHandle_reference_incremented_for____audioOutput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioOutput2, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* currentDelegate = reinterpret_cast<GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenInst(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	NullCheck(___handle0);
	typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___handle0, ___result1, ___maxCharCount2, method);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStatic(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___handle0, ___result1, ___maxCharCount2, method);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___handle0, ___result1, ___maxCharCount2);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handle0, ___result1, ___maxCharCount2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__cctor_mD5B1A5034EA0352927781A90400CE9F536E5623A (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "property_bag_set_string", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "property_bag_get_string", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "property_bag_free_string", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_free_string)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A (intptr_t ___propbag0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "property_bag_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_release)(___propbag0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___propbag0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_reason", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_result_id", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_text", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____result0_marshaled, ___text1, ___textLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "result_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7 (intptr_t ___result0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_result_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_release)(___result0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___result0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* currentDelegate = reinterpret_cast<CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hreco0, ___hevent1, ___context2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenInst(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___hreco0, ___hevent1, ___context2, method);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStatic(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___hreco0, ___hevent1, ___context2, method);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___hreco0, ___hevent1, ___context2);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hreco0, ___hevent1, ___context2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hreco0, ___hevent1, ___context2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____recoHandle0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18 (intptr_t ___recoHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_handle_release)(___recoHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognize_once(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognize_once_mEE6844B24F8301DA1BA63C1E239A3DCF607A1C60 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___result1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_recognize_once", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognize_once)(____recoHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____eventHandle0_marshaled, ___offset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_session_event_get_session_id", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_recognition_event_get_result", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____eventHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_session_started_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_started_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_stopped_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_start_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_end_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_recognizing_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognizing_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_recognized_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognized_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "recognizer_canceled_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_canceled_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33 (intptr_t ___hr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___hr0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_4 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6(L_4, NULL);
		V_1 = L_5;
		intptr_t L_6 = ___hr0;
		String_t* L_7;
		L_7 = SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864(L_6, NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_13;
		L_13 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_1), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_12, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_13, L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D)), L_15, NULL);
		V_2 = L_16;
	}

IL_0056:
	{
		intptr_t L_17 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		bool L_18;
		L_18 = SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754(L_17, NULL);
		String_t* L_19 = V_2;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_20 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33_RuntimeMethod_var)));
	}

IL_0064:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66 (RuntimeObject* ___item0, String_t* ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___item0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2 = ___message1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		___message1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA23629C306AA023437DA41361139F76CFB792614));
	}

IL_001d:
	{
		String_t* L_5 = ___message1;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F (intptr_t ___hr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		intptr_t L_0 = ___hr0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		intptr_t L_4 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6(L_4, NULL);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_8;
		L_8 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_7, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_8, L_9, NULL);
		String_t* L_11;
		L_11 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_6, _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7, L_10, NULL);
		V_2 = L_11;
		intptr_t L_12 = ___hr0;
		SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A(L_12, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562 (String_t* ___message0, const RuntimeMethod* method) 
{
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDataStream__cctor_mA9329E10BC20C31399C160A1A6A8D1318B946C4A (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_create_from_result(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_create_from_result_m3408BEECC96FD9303133F63249CEA66D095A2906 (intptr_t* ___audioStream0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "audio_data_stream_create_from_result", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result1' to native representation
	void* ____result1_marshaled = NULL;
	if (___result1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result1, (&___safeHandle_reference_incremented_for____result1), NULL);
	____result1_marshaled = reinterpret_cast<void*>((___result1)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(audio_data_stream_create_from_result)(___audioStream0, ____result1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___audioStream0, ____result1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___result1' native representation
	if (___safeHandle_reference_incremented_for____result1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result1, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_read(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_read_m931E657BF641957A7B058ABF7DFF86CCBBF004AB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioStream0, intptr_t ___buffer1, uint32_t ___bufferSize2, uint32_t* ___filledSize3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "audio_data_stream_read", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___audioStream0' to native representation
	void* ____audioStream0_marshaled = NULL;
	if (___audioStream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioStream"), NULL);
	bool ___safeHandle_reference_incremented_for____audioStream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioStream0, (&___safeHandle_reference_incremented_for____audioStream0), NULL);
	____audioStream0_marshaled = reinterpret_cast<void*>((___audioStream0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(audio_data_stream_read)(____audioStream0_marshaled, ___buffer1, ___bufferSize2, ___filledSize3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____audioStream0_marshaled, ___buffer1, ___bufferSize2, ___filledSize3);
	#endif

	// Marshaling cleanup of parameter '___audioStream0' native representation
	if (___safeHandle_reference_incremented_for____audioStream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioStream0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_get_property_bag_mFB8F62544F9BD9755182A88932F6C421F86E6717 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioStream0, intptr_t* ___propbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "audio_data_stream_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___audioStream0' to native representation
	void* ____audioStream0_marshaled = NULL;
	if (___audioStream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioStream"), NULL);
	bool ___safeHandle_reference_incremented_for____audioStream0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioStream0, (&___safeHandle_reference_incremented_for____audioStream0), NULL);
	____audioStream0_marshaled = reinterpret_cast<void*>((___audioStream0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(audio_data_stream_get_property_bag)(____audioStream0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____audioStream0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___audioStream0' native representation
	if (___safeHandle_reference_incremented_for____audioStream0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioStream0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioDataStream::audio_data_stream_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioDataStream_audio_data_stream_release_m60F3E000537EE43FD411BBDDD688D1585DE039E8 (intptr_t ___audioStream0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "audio_data_stream_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(audio_data_stream_release)(___audioStream0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___audioStream0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynthesisResult__cctor_m24F9748593FFC29D393C77B6AC621358FAB3AF82 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_result_id_mCCB4D25C807CBB1FAC9F89F062128CC9C5A0A762 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synth_result_get_result_id", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synth_result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_reason_m466B23C507E0838C41036507BFC3CDC72A4FC9B9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synth_result_get_reason", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synth_result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_audio_data_m2C136377B25D9D230F032EC95B3132E734AED9F8 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___buffer1, uint32_t ___bufferSize2, uint32_t* ___filledSize3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synth_result_get_audio_data", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synth_result_get_audio_data)(____result0_marshaled, ___buffer1, ___bufferSize2, ___filledSize3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___buffer1, ___bufferSize2, ___filledSize3);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_audio_length_duration(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt32&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_audio_length_duration_m105316474F7DB531DE3468CB62906D372E01A02A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, uint32_t* ___audioLength1, uint64_t* ___audioDuration2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, uint32_t*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synth_result_get_audio_length_duration", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synth_result_get_audio_length_duration)(____result0_marshaled, ___audioLength1, ___audioDuration2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___audioLength1, ___audioDuration2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synth_result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synth_result_get_property_bag_mFF4E670DAE5B58907D115AB5AB0E4630CE70BE6D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synth_result_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synth_result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SynthesisResult::synthesizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SynthesisResult_synthesizer_result_handle_release_m0EDE65F2F2201E9AF489CFBEA553C6D707A284DA (intptr_t ___result0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_result_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_result_handle_release)(___result0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___result0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_Multicast(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* currentDelegate = reinterpret_cast<TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___synthHandle0, ___eventHandle1, ___context2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_OpenInst(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___synthHandle0, ___eventHandle1, ___context2, method);
}
void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_OpenStatic(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___synthHandle0, ___eventHandle1, ___context2, method);
}
void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_OpenStaticInvoker(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___synthHandle0, ___eventHandle1, ___context2);
}
void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_ClosedStaticInvoker(TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___synthHandle0, ___eventHandle1, ___context2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4 (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___synthHandle0, ___eventHandle1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TtsCallbackFunctionDelegate__ctor_m7D6C3071AA013778019244F57D51A9201C7FD976 (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035_Multicast;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TtsCallbackFunctionDelegate_Invoke_mFC3676EC8D98482A5D1AE035A2E60B68D4059035 (TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* __this, intptr_t ___synthHandle0, intptr_t ___eventHandle1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___synthHandle0, ___eventHandle1, ___context2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.Synthesizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synthesizer__cctor_m8FE63CC516D6523BEBCF343DC47021117E15030E (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_handle_release_m444FCCF4A16075AF1C2F434F437E5DE09BD83F28 (intptr_t ___synthHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_handle_release)(___synthHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___synthHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_event_handle_release_mB42F66400F4CC0F023D7A34235E129CC5BFAD1E8 (intptr_t ___eventHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_event_handle_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_event_handle_release)(___eventHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_get_property_bag_m2D35AA3989E43AD62324D124694190DA536082F4 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, intptr_t* ___hpropbag1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_get_property_bag", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_get_property_bag)(____synthHandle0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_start_speaking_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_start_speaking_text_m53C923F983EDD3B639DDE9CB8DDF7B07F44F13EC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, intptr_t ___text1, uint32_t ___textLength2, intptr_t* ___resultHandle3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_start_speaking_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_start_speaking_text)(____synthHandle0_marshaled, ___text1, ___textLength2, ___resultHandle3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ___text1, ___textLength2, ___resultHandle3);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_started_set_callback_m73C93991233680FD42DC9340E280F82593BE8586 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_started_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_started_set_callback)(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_synthesizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_synthesizing_set_callback_mDF49C94C09C57DF34EB014BC2B0A74CB80E5A6EF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_synthesizing_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_synthesizing_set_callback)(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_completed_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_completed_set_callback_m9AE05DA8F453BE5592EB29ABAEBFD0E8FF8876C0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_completed_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_completed_set_callback)(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_canceled_set_callback_mE4865E50A7921B7D04009458C68C5D709D2AE12D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_canceled_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_canceled_set_callback)(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_word_boundary_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.TtsCallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_word_boundary_set_callback_mCEA4C44AAC6AC8DB28AD7ACA1ECD920CD7F5CC09 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___synthHandle0, TtsCallbackFunctionDelegate_t5D70C30EAF30BDC52F5AAD5C2E8790FC21B311E4* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_word_boundary_set_callback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___synthHandle0' to native representation
	void* ____synthHandle0_marshaled = NULL;
	if (___synthHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("synthHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____synthHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___synthHandle0, (&___safeHandle_reference_incremented_for____synthHandle0), NULL);
	____synthHandle0_marshaled = reinterpret_cast<void*>((___synthHandle0)->___handle_0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_word_boundary_set_callback)(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____synthHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___synthHandle0' native representation
	if (___safeHandle_reference_incremented_for____synthHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___synthHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_synthesis_event_get_result(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_synthesis_event_get_result_mD49067C443FB675B243CD8194BA0F9CAA80CB3FE (intptr_t ___eventHandle0, intptr_t* ___resultHandle1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_synthesis_event_get_result", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_synthesis_event_get_result)(___eventHandle0, ___resultHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0, ___resultHandle1);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_word_boundary_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&,System.UInt64&,System.UInt32&,System.UInt32&,Microsoft.CognitiveServices.Speech.SpeechSynthesisBoundaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_word_boundary_event_get_values_m9F78A4BDEE004F097F90938EE360CB8A54924AF4 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, uint64_t* ___duration2, uint32_t* ___textOffset3, uint32_t* ___wordLength4, int32_t* ___boundaryType5, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, uint64_t*, uint64_t*, uint32_t*, uint32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*) + sizeof(uint64_t*) + sizeof(uint32_t*) + sizeof(uint32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_word_boundary_event_get_values", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_word_boundary_event_get_values)(____eventHandle0_marshaled, ___audioOffset1, ___duration2, ___textOffset3, ___wordLength4, ___boundaryType5);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___audioOffset1, ___duration2, ___textOffset3, ___wordLength4, ___boundaryType5);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_viseme_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_viseme_event_get_values_mFC13D5EA589F7F92E1A9661A8ABC4376DB078C59 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, uint32_t* ___visemeId2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, uint64_t*, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_viseme_event_get_values", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_viseme_event_get_values)(____eventHandle0_marshaled, ___audioOffset1, ___visemeId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___audioOffset1, ___visemeId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_viseme_event_get_animation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_viseme_event_get_animation_m7382B20F1AB3592B32F47BC0551F2D7C43BB4081 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_viseme_event_get_animation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_viseme_event_get_animation)(____eventHandle0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_bookmark_event_get_values(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_bookmark_event_get_values_mCAE29489EE4B0EC0DF3BB372B812E0AB8A120EF9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___audioOffset1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_bookmark_event_get_values", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_bookmark_event_get_values)(____eventHandle0_marshaled, ___audioOffset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___audioOffset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_event_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_event_get_result_id_m69F74EC75240FC2CF74C24F20F2F8A0FC5F21B9C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___hEvent0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_event_get_result_id", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hEvent0' to native representation
	void* ____hEvent0_marshaled = NULL;
	if (___hEvent0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("hEvent"), NULL);
	bool ___safeHandle_reference_incremented_for____hEvent0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___hEvent0, (&___safeHandle_reference_incremented_for____hEvent0), NULL);
	____hEvent0_marshaled = reinterpret_cast<void*>((___hEvent0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_event_get_result_id)(____hEvent0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____hEvent0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___hEvent0' native representation
	if (___safeHandle_reference_incremented_for____hEvent0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___hEvent0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Synthesizer::synthesizer_event_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Synthesizer_synthesizer_event_get_text_m7B3B8AC425A44469C90911F6407C17CA287FB30D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMicrosoft.CognitiveServices.Speech.core.so"), "synthesizer_event_get_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMicrosoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(synthesizer_event_get_text)(____eventHandle0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1 (intptr_t ___native0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		intptr_t L_0 = ___native0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_4;
		goto IL_007b;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		intptr_t L_6 = ___native0;
		int32_t L_7 = V_0;
		intptr_t L_8;
		L_8 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		uint8_t L_9;
		L_9 = Marshal_ReadByte_m7BB641553588142FA7C6E4653C6AE83A0CEFD25F(L_8, NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)L_10) < ((int32_t)((int32_t)4194304)))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B7_0 = 0;
	}

IL_003c:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_12 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)((int32_t)4194304)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_15 = ((int32_t)4194304);
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658)), L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1_RuntimeMethod_var)));
	}

IL_0071:
	{
		intptr_t L_19 = ___native0;
		int32_t L_20 = V_0;
		String_t* L_21;
		L_21 = Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C(L_19, L_20, NULL);
		V_2 = L_21;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_22 = V_2;
		return L_22;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___native0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (String_t*)NULL;
		goto IL_0045;
	}

IL_0015:
	{
		int32_t L_4 = ___lengthInBytes1;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_6;
		goto IL_0045;
	}

IL_0026:
	{
		int32_t L_7 = ___lengthInBytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		intptr_t L_9 = ___native0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = ___lengthInBytes1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, 0, L_11, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_12, L_13);
		V_2 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_15 = V_2;
		return L_15;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A (String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		intptr_t L_1;
		L_1 = Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5(L_0, (&V_0), NULL);
		V_1 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_2 = V_1;
		return L_2;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5 (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___str0;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_2 = ___length1;
		*((int32_t*)L_2) = (int32_t)0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_3 = L_3;
		goto IL_0050;
	}

IL_0015:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = ___str0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_0 = L_6;
		int32_t* L_7 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		int32_t* L_9 = ___length1;
		int32_t L_10 = *((int32_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_10, NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		intptr_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_12, 0, L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		intptr_t L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Marshal_WriteByte_m066886B8F93D94A1EC21B990179BF6C41AC9762B(L_17, (uint8_t)0, NULL);
		intptr_t L_18 = V_1;
		V_3 = L_18;
		goto IL_0050;
	}

IL_0050:
	{
		intptr_t L_19 = V_3;
		return L_19;
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
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioConfig::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfig_Dispose_m9157E272C7539E484B8A911947749F8F7A31FC2E (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B7_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B6_0 = NULL;
	{
		bool L_0 = __this->___disposed_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_004a;
	}

IL_000e:
	{
		__this->___disposed_0 = (bool)1;
		bool L_2 = __this->___disposeStream_2;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_4 = __this->___streamKeepAlive_1;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
		goto IL_0038;
	}

IL_002f:
	{
		__this->___streamKeepAlive_1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamKeepAlive_1), (void*)(RuntimeObject*)NULL);
	}

IL_0038:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_5 = __this->___propBag_4;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_6 = L_5;
		G_B6_0 = L_6;
		if (L_6)
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		goto IL_004a;
	}

IL_0044:
	{
		NullCheck(G_B7_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B7_0);
	}

IL_004a:
	{
		return;
	}
}
// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::MoveStreamOwnerShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioConfig_MoveStreamOwnerShip_mEA9971D3F1B2796B3E8C09E5BE0CF64F68E03B36 (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		bool L_0 = __this->___disposeStream_2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->___disposeStream_2 = (bool)0;
		RuntimeObject* L_2 = __this->___streamKeepAlive_1;
		V_1 = L_2;
		goto IL_0020;
	}

IL_001c:
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioDataStream_set_Properties_m10664403F7212F1C8FDDFF877352D3434A1A13B4_inline (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* AudioDataStream_get_Properties_m4369F02E8CB0EF11B852F1AD6179BCF14D357142_inline (AudioDataStream_tA30ADD17F742458785B8F24CEAD015D7AE2152D1* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesisResult_get_Properties_m3B7366D7F670CD2274B834DFC0EF58FBF6176D4F_inline (SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* SpeechSynthesisEventArgs_get_Result_m41BDA1D35F6871E28ACD56C2FA25B8254BA327D2_inline (SpeechSynthesisEventArgs_t2D40C578F13657B3E6F61A1E8626CCCE321AC500* __this, const RuntimeMethod* method) 
{
	{
		SpeechSynthesisResult_t4ECF49D66D50202BF21644E48BCEBA8917B818BA* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechSynthesizer_set_Properties_mD6774644250F5226F108CB2F490A57FD9380ED8A_inline (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechSynthesizer_get_Properties_m8062364DEFE28CC124B32A28D388BF2E99142D93_inline (SpeechSynthesizer_t603DE1090EA0E0F860D8E4967F9FCCE85932BB9B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
