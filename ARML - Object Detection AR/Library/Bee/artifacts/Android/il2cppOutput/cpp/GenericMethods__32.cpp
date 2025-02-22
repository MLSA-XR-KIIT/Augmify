#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;

IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C String_t* _stringLiteral973C45718ACB19FB28D206360A3094F43D27EDED;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};
typedef Il2CppFullySharedGenericStruct BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10;
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004 
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block;
	int32_t ___OffsetInFirstBlock;
	int32_t ___ElementCount;
	int32_t ___LastOffset;
	int32_t ___NumberOfBlocks;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 
{
	bool ___x;
	bool ___y;
	bool ___z;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct half_tE8A6792149696F478D662DD4B736964C0FF018AF 
{
	uint16_t ___value;
};
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 
{
	union
	{
		struct
		{
		};
		uint8_t ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3__padding[1];
	};
};
struct ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 
{
	union
	{
		struct
		{
		};
		uint8_t ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292__padding[1];
	};
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 
{
	int32_t ___Hash;
	bool ___IsTriggerSet;
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke
{
	int32_t ___Hash;
	int32_t ___IsTriggerSet;
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com
{
	int32_t ___Hash;
	int32_t ___IsTriggerSet;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_pinvoke
{
	Il2CppSafeArray* ___Parameters;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_com
{
	Il2CppSafeArray* ___Parameters;
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer;
	int64_t ___m_bytes;
	int64_t ___m_current;
	int64_t ___m_allocations;
};
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr;
	int32_t ___Size;
	int32_t ___Offset;
};
struct U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11__padding[8192];
	};
};
struct ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3 
{
	void* ___Ptr;
	int32_t ___Length;
};
struct ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB 
{
	void* ___Ptr;
	UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___ListData;
};
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_ForeachIndex;
	int32_t ___m_ElementCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock;
	int32_t ___m_FirstOffset;
	int32_t ___m_NumberOfBlocks;
	int32_t ___m_ThreadIndex;
};
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
};
struct BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87 
{
	intptr_t ___m_FirstBlock;
	int32_t ___m_NumBlocks;
	int32_t ___m_MaxBlocks;
	int32_t ___m_AllocLock;
};
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_forAlignmentOnly;
		};
	};
};
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	void* ___Ptr;
	int32_t ___Length;
	int32_t ___unused;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data;
};
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks;
	int32_t ___BlockCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free;
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges;
	int32_t ___RangeCount;
};
struct half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
};
struct half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___w;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct AsyncConversionStatus_tB9035BBA640774DAFF34FEEE5DF141A2F24E1236 
{
	int32_t ___value__;
};
struct Transformation_t26ED8CF20E035506740A8504E00ECD67AF5FD137 
{
	int32_t ___value__;
};
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B 
{
	BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 ___m_Implementation;
};
struct BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 
{
	BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 ___m_Implementation;
};
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD 
{
	half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___Axis;
	bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 ___AxisToSynchronize;
};
struct HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC 
{
	half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___Axis;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Allocator;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions;
	int32_t ___m_Format;
	int32_t ___m_Transformation;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187 
{
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfVector3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentBasePosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PrecisionLossDelta;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HalfDeltaConvertedBack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PreviousPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	int32_t ___NetworkTick;
	bool ___SynchronizeBase;
	bool ___CollapsedDeltaIntoBase;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api;
	int32_t ___m_RequestId;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField;
};
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 
{
	uint32_t ___m_Bitset;
	double ___SentTime;
	float ___PositionX;
	float ___PositionY;
	float ___PositionZ;
	float ___RotAngleX;
	float ___RotAngleY;
	float ___RotAngleZ;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	float ___ScaleX;
	float ___ScaleY;
	float ___ScaleZ;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187 ___NetworkDeltaPosition;
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfVectorScale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LossyScale;
	HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC ___HalfVectorRotation;
	uint32_t ___QuaternionCompressed;
	bool ___U3CIsDirtyU3Ek__BackingField;
	int32_t ___U3CLastSerializedSizeU3Ek__BackingField;
	int32_t ___NetworkTick;
	int32_t ___StateId;
	bool ___ExplicitSet;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfEulerRotation;
};
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer;
};
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer;
};
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer;
};
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer;
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer;
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___s_QuatAbsValues;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct half_tE8A6792149696F478D662DD4B736964C0FF018AF_StaticFields
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___zero;
};
struct half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8_StaticFields
{
	half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___zero;
};
struct half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826_StaticFields
{
	half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___zero;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59AF230EB443B685CB322B5AA0898734756EADD7_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m53224A30FDD9F347134C5F058A4AA1902F046703_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m77A3B1A6805879DFC74A55FBE9F076C81CF22869_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7B4A33CD1D215EDE706B9F3F54F930263A54879F_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D4559355D8982D0FDFBECB67C3DFD8B5977522F_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD89D6AD1671054722C3ECC148291524285C35D8_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mDC7C63B97D1CB62A66224F617696006712694A3C_gshared (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_mA4C486568DCD3BFE68EA5C62E4F210BA872555C0_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_mF8864064239A7820146C9482A6E1F7FE22607F81_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m175DEC7EA748331C16BF1972F3981E933059BE3A_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_m2BE6775E459379A790847DEB39C71874549F7FBE_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_m4A4E597D00C4E913CE0E881D1912EB2B440ED06B_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m722DC25C9E88D9FC755356D5CA6377947EAEECFC_gshared (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_m283E1A8E6B025E806D15B7C961098B3751211E51_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_m5703B125C4DB4384D52002A802AB88FA88E27331_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6F6DFB50403FF15EAF7B88A883C1739AE9E6900B_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_mB866930E038815304EFFE7B77B5EF0E89E604102_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_mD55651A3A4DEF17B124573359CB76A02D68B7091_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

inline void BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59AF230EB443B685CB322B5AA0898734756EADD7 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59AF230EB443B685CB322B5AA0898734756EADD7_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m53224A30FDD9F347134C5F058A4AA1902F046703 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, bool*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m53224A30FDD9F347134C5F058A4AA1902F046703_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008 (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B, const RuntimeMethod*))AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008_gshared)(__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m77A3B1A6805879DFC74A55FBE9F076C81CF22869 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m77A3B1A6805879DFC74A55FBE9F076C81CF22869_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7B4A33CD1D215EDE706B9F3F54F930263A54879F (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, bool*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7B4A33CD1D215EDE706B9F3F54F930263A54879F_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99 (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*))AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99_gshared)(__this, ___0_serializer, method);
}
inline void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160 (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared)((AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*)__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D4559355D8982D0FDFBECB67C3DFD8B5977522F (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D4559355D8982D0FDFBECB67C3DFD8B5977522F_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B, const RuntimeMethod*))ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA_gshared)(__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD89D6AD1671054722C3ECC148291524285C35D8 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD89D6AD1671054722C3ECC148291524285C35D8_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097 (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*))ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097_gshared)(__this, ___0_serializer, method);
}
inline void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared)((ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*)__this, ___0_serializer, method);
}
inline bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28_gshared)(__this, method);
}
inline FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
inline FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_UseUnreliableDeltas_m270E4809697670D9F8CE7FDFCE6CE003A2EC27AF (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_UnreliableFrameSync_m499E8BCAE9BDCA2BB0D29419B1565E31C538FDF0 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteValueBitPacked_m510F6322BA0F2C85AF9527A7927FF9B03F0AE613 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValueBitPacked_mACA5F48002EFB41F31DB0F4AAB4936A2E423DCA4 (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValueBitPacked_mC5142499F3BA1F4D8C60EDF335D6C54B0D78C4AC (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_TrackByStateId_mD630BAB87E7ACD7B235E1EF41C1AEB1EE317CC28 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_SynchronizeBaseHalfFloat_m25AB962E5590D008A7CC1E1C13FD6E1856EA2FFA (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462 (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
inline void BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16_gshared)(__this, ___0_value, method);
}
inline void NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mDC7C63B97D1CB62A66224F617696006712694A3C (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B, const RuntimeMethod*))NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mDC7C63B97D1CB62A66224F617696006712694A3C_gshared)(__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_mA4C486568DCD3BFE68EA5C62E4F210BA872555C0 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, const RuntimeMethod*))BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_mA4C486568DCD3BFE68EA5C62E4F210BA872555C0_gshared)(__this, ___0_value, method);
}
inline void BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159_gshared)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_QuaternionSync_mD6C5DCEB4B7EB4C2A0E869F2BD446C28C1021198 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
inline void BufferSerializer_1_SerializeValue_mF8864064239A7820146C9482A6E1F7FE22607F81 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))BufferSerializer_1_SerializeValue_mF8864064239A7820146C9482A6E1F7FE22607F81_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_QuaternionCompression_m224E16547D4DC81BEB8FE301E460EB20283F0C3D (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t QuaternionCompressor_CompressQuaternion_mD233C59AA28D7780F9526AF968906804DA3BCF2C_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, const RuntimeMethod* method) ;
inline void BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m175DEC7EA748331C16BF1972F3981E933059BE3A (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, uint32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m175DEC7EA748331C16BF1972F3981E933059BE3A_gshared)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuaternionCompressor_DecompressQuaternion_mA1789CE56A285E8D41D2E9115311F795D06C3885_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, uint32_t ___1_compressed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HalfVector4_UpdateFrom_m68602A56252D21D669B5DE016C210A221C33F0E5_inline (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, const RuntimeMethod* method) ;
inline void BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_m2BE6775E459379A790847DEB39C71874549F7FBE (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*, const RuntimeMethod*))BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_m2BE6775E459379A790847DEB39C71874549F7FBE_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HalfVector4_ToQuaternion_m303E824115C33255DF5C9357F5D6165FFCA8E19F_inline (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230 (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
inline void BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_m4A4E597D00C4E913CE0E881D1912EB2B440ED06B (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_m4A4E597D00C4E913CE0E881D1912EB2B440ED06B_gshared)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsParented_m4E379976B06D17E675043E0E4386B2C56D7592CC (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsDirty_m576063164F12AF5D862306DB64F057523E9F5AC1_inline (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B, const RuntimeMethod*))NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9_gshared)(__this, ___0_serializer, method);
}
inline bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB_gshared)(__this, method);
}
inline FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60_gshared)(__this, method);
}
inline FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171_gshared)(__this, method);
}
inline void BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6_gshared)(__this, ___0_value, method);
}
inline void NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m722DC25C9E88D9FC755356D5CA6377947EAEECFC (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*))NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m722DC25C9E88D9FC755356D5CA6377947EAEECFC_gshared)(__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_m283E1A8E6B025E806D15B7C961098B3751211E51 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, const RuntimeMethod*))BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_m283E1A8E6B025E806D15B7C961098B3751211E51_gshared)(__this, ___0_value, method);
}
inline void BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeValue_m5703B125C4DB4384D52002A802AB88FA88E27331 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))BufferSerializer_1_SerializeValue_m5703B125C4DB4384D52002A802AB88FA88E27331_gshared)(__this, ___0_value, method);
}
inline void BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6F6DFB50403FF15EAF7B88A883C1739AE9E6900B (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, uint32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6F6DFB50403FF15EAF7B88A883C1739AE9E6900B_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_mB866930E038815304EFFE7B77B5EF0E89E604102 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*, const RuntimeMethod*))BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_mB866930E038815304EFFE7B77B5EF0E89E604102_gshared)(__this, ___0_value, method);
}
inline void BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_mD55651A3A4DEF17B124573359CB76A02D68B7091 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* ___0_value, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_mD55651A3A4DEF17B124573359CB76A02D68B7091_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*))NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985_gshared)(__this, ___0_serializer, method);
}
inline void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared)((NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*)__this, ___0_serializer, method);
}
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared)(__this, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline)(___0_ptr, ___1_output, method);
}
inline void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared)(__this, ___0_value, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___0_value, ___1_allocator, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___0_length, method);
}
inline bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
inline int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
inline void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, int32_t ___0_sizeOf, int32_t ___1_alignOf, void* ___2_ptr, int32_t ___3_length, const RuntimeMethod* method) ;
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared)(__this, ___0_list, method);
}
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, void*, int32_t, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___0_ptr, ___1_max, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___0_ptr, ___1_max, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR half_tE8A6792149696F478D662DD4B736964C0FF018AF math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline (float ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 math_half4_m323B80DFCB91F80383F7B7CF9EB0F9D79CB401E4_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_x, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___1_y, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___2_z, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m7821C639FFD50CF1DCED1888EFD19411063E125C_inline (half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41 (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_float3_m51DA9AF48A7A0BEADC7497534BCFEECFB46EF93D_inline (half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bool3_get_Item_m6DF4E7C6E3F91FA25B3C318DBC2A4D227A5AD05A (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539 (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared)(___0_ptr, ___1_output, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void half__ctor_m8B752133073B9817027C11F1F56CA27206F6DAC3_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF* __this, float ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void half4__ctor_m3815024A2EFAEC34F3C5AD76A07ACD1C29347108_inline (half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826* __this, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_x, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___1_y, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___2_z, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m01CCEB586EAAE29F243B120FB95B6965EA2F1E53_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m6D73914615F80887E1AE6439C78716E8348CB8EE_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_f32tof16_m336C5288458B517FFE3A1B1AE1D3B50C349381BD_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline (uint32_t ___0_falseValue, uint32_t ___1_trueValue, bool ___2_test, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_f16tof32_m558AB5CFC4B974A267AFB1E799C3F8D7D530B419_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t* L_0 = (int32_t*)(&__this->___Hash);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59AF230EB443B685CB322B5AA0898734756EADD7((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool* L_2 = (bool*)(&__this->___IsTriggerSet);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_3 = V_0;
		BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m53224A30FDD9F347134C5F058A4AA1902F046703((&___0_serializer), L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*>(__this + _offset);
	AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m3A4043886A4C31365EB99E8D4009D96FBFF81008(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t* L_0 = (int32_t*)(&__this->___Hash);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m77A3B1A6805879DFC74A55FBE9F076C81CF22869((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool* L_2 = (bool*)(&__this->___IsTriggerSet);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_3 = V_0;
		BufferSerializer_1_SerializeValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7B4A33CD1D215EDE706B9F3F54F930263A54879F((&___0_serializer), L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*>(__this + _offset);
	AnimationTriggerMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m4340D400C78F7DBCABFFB703BCFC4E6EBF2F5D99(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t* L_0 = (int32_t*)(&__this->___Hash);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool* L_2 = (bool*)(&__this->___IsTriggerSet);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_3 = V_0;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, bool*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*>(__this + _offset);
	AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___Parameters);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D4559355D8982D0FDFBECB67C3DFD8B5977522F((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*>(__this + _offset);
	ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m0609CBEC3EE667572CF17E63E2017276CB195BDA(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___Parameters);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD89D6AD1671054722C3ECC148291524285C35D8((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*>(__this + _offset);
	ParametersUpdateMessage_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m9AECB7C82E8E643ECEB357788F3BF6F5F6535097(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___Parameters);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*>(__this + _offset);
	ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B92_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B90_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B91_0 = NULL;
	int32_t G_B93_0 = 0;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B93_1 = NULL;
	{
		V_0 = 0;
		bool L_0;
		L_0 = BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2;
		L_2 = BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 3));
		__this->___m_Writer = L_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_3 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_3, NULL);
		V_0 = L_4;
		goto IL_0041;
	}

IL_0028:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_5;
		L_5 = BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 4));
		__this->___m_Reader = L_5;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_6 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_7;
		L_7 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_6, NULL);
		V_0 = L_7;
	}

IL_0041:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_9;
		L_9 = NetworkTransformState_get_UseUnreliableDeltas_m270E4809697670D9F8CE7FDFCE6CE003A2EC27AF(__this, NULL);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		bool L_10;
		L_10 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_10)
		{
			goto IL_0079;
		}
	}
	{
		bool L_11;
		L_11 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (L_11)
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = NetworkTransformState_get_UnreliableFrameSync_m499E8BCAE9BDCA2BB0D29419B1565E31C538FDF0(__this, NULL);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		bool L_13;
		L_13 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_14 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_15 = L_14->___CollapsedDeltaIntoBase;
		if (!L_15)
		{
			goto IL_0082;
		}
	}

IL_0079:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
		goto IL_0092;
	}

IL_0082:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)0, NULL);
		goto IL_0092;
	}

IL_008b:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
	}

IL_0092:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_16 = __this->___m_Writer;
		uint32_t L_17 = __this->___m_Bitset;
		BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_16, L_17, NULL);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_18 = __this->___m_Writer;
		int32_t L_19 = __this->___NetworkTick;
		BytePacker_WriteValueBitPacked_m510F6322BA0F2C85AF9527A7927FF9B03F0AE613(L_18, L_19, NULL);
		goto IL_00d8;
	}

IL_00b6:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_20 = __this->___m_Reader;
		uint32_t* L_21 = (uint32_t*)(&__this->___m_Bitset);
		ByteUnpacker_ReadValueBitPacked_mACA5F48002EFB41F31DB0F4AAB4936A2E423DCA4(L_20, L_21, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_22 = __this->___m_Reader;
		int32_t* L_23 = (int32_t*)(&__this->___NetworkTick);
		ByteUnpacker_ReadValueBitPacked_mC5142499F3BA1F4D8C60EDF335D6C54B0D78C4AC(L_22, L_23, NULL);
	}

IL_00d8:
	{
		bool L_24;
		L_24 = NetworkTransformState_get_TrackByStateId_mD630BAB87E7ACD7B235E1EF41C1AEB1EE317CC28(__this, NULL);
		if (!L_24)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t* L_25 = (int32_t*)(&__this->___StateId);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_26 = V_2;
		BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m59AF230EB443B685CB322B5AA0898734756EADD7((&___0_serializer), L_25, L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_00f6:
	{
		bool L_27;
		L_27 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (!L_27)
		{
			goto IL_0260;
		}
	}
	{
		bool L_28;
		L_28 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_28)
		{
			goto IL_0206;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_29 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_30;
		L_30 = NetworkTransformState_get_SynchronizeBaseHalfFloat_m25AB962E5590D008A7CC1E1C13FD6E1856EA2FFA(__this, NULL);
		L_29->___SynchronizeBase = L_30;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_31 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_32 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_31->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_33 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_32->___AxisToSynchronize);
		bool L_34;
		L_34 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_33, 0, L_34, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_35 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_36 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_35->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_37 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_36->___AxisToSynchronize);
		bool L_38;
		L_38 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_37, 1, L_38, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_39 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_40 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_39->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_41 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_40->___AxisToSynchronize);
		bool L_42;
		L_42 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_41, 2, L_42, NULL);
		bool L_43;
		L_43 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_43)
		{
			goto IL_01d5;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___CurrentPosition);
		BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16((&___0_serializer), L_44, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_45;
		L_45 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (!L_45)
		{
			goto IL_0260;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___DeltaPosition);
		BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16((&___0_serializer), L_46, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_47 = V_1;
		if (L_47)
		{
			goto IL_01c3;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_48 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_49 = __this->___NetworkTick;
		L_48->___NetworkTick = L_49;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_50 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B L_51 = ___0_serializer;
		NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mDC7C63B97D1CB62A66224F617696006712694A3C(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 7));
		goto IL_0260;
	}

IL_01c3:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_52 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_mA4C486568DCD3BFE68EA5C62E4F210BA872555C0((&___0_serializer), L_52, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_01d5:
	{
		bool L_53 = V_1;
		if (L_53)
		{
			goto IL_01f7;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_54 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_55 = __this->___NetworkTick;
		L_54->___NetworkTick = L_55;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_56 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B L_57 = ___0_serializer;
		NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mDC7C63B97D1CB62A66224F617696006712694A3C(L_56, L_57, il2cpp_rgctx_method(method->rgctx_data, 7));
		goto IL_0260;
	}

IL_01f7:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_58 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_mA4C486568DCD3BFE68EA5C62E4F210BA872555C0((&___0_serializer), L_58, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_0206:
	{
		bool L_59;
		L_59 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		if (!L_59)
		{
			goto IL_0224;
		}
	}
	{
		float* L_60 = (float*)(&__this->___PositionX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_61 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_60, L_61, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0224:
	{
		bool L_62;
		L_62 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		if (!L_62)
		{
			goto IL_0242;
		}
	}
	{
		float* L_63 = (float*)(&__this->___PositionY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_64 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_63, L_64, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0242:
	{
		bool L_65;
		L_65 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		if (!L_65)
		{
			goto IL_0260;
		}
	}
	{
		float* L_66 = (float*)(&__this->___PositionZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_67 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_66, L_67, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0260:
	{
		bool L_68;
		L_68 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_68)
		{
			goto IL_047f;
		}
	}
	{
		bool L_69;
		L_69 = NetworkTransformState_get_QuaternionSync_mD6C5DCEB4B7EB4C2A0E869F2BD446C28C1021198(__this, NULL);
		if (!L_69)
		{
			goto IL_0335;
		}
	}
	{
		bool L_70;
		L_70 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_70)
		{
			goto IL_0290;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_71 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		BufferSerializer_1_SerializeValue_mF8864064239A7820146C9482A6E1F7FE22607F81((&___0_serializer), L_71, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0290:
	{
		bool L_72;
		L_72 = NetworkTransformState_get_QuaternionCompression_m224E16547D4DC81BEB8FE301E460EB20283F0C3D(__this, NULL);
		if (!L_72)
		{
			goto IL_02de;
		}
	}
	{
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_02ac;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_74 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		uint32_t L_75;
		L_75 = QuaternionCompressor_CompressQuaternion_mD233C59AA28D7780F9526AF968906804DA3BCF2C_inline(L_74, NULL);
		__this->___QuaternionCompressed = L_75;
	}

IL_02ac:
	{
		uint32_t* L_76 = (uint32_t*)(&__this->___QuaternionCompressed);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_77 = V_2;
		BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m175DEC7EA748331C16BF1972F3981E933059BE3A((&___0_serializer), L_76, L_77, il2cpp_rgctx_method(method->rgctx_data, 11));
		bool L_78 = V_1;
		if (L_78)
		{
			goto IL_047f;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_79 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		uint32_t L_80 = __this->___QuaternionCompressed;
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		QuaternionCompressor_DecompressQuaternion_mA1789CE56A285E8D41D2E9115311F795D06C3885_inline(L_79, L_80, NULL);
		goto IL_047f;
	}

IL_02de:
	{
		bool L_81;
		L_81 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_81)
		{
			goto IL_0323;
		}
	}
	{
		bool L_82 = V_1;
		if (!L_82)
		{
			goto IL_02fa;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_83 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_84 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		HalfVector4_UpdateFrom_m68602A56252D21D669B5DE016C210A221C33F0E5_inline(L_83, L_84, NULL);
	}

IL_02fa:
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_85 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_m2BE6775E459379A790847DEB39C71874549F7FBE((&___0_serializer), L_85, il2cpp_rgctx_method(method->rgctx_data, 12));
		bool L_86 = V_1;
		if (L_86)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_87 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = HalfVector4_ToQuaternion_m303E824115C33255DF5C9357F5D6165FFCA8E19F_inline(L_87, NULL);
		__this->___Rotation = L_88;
		goto IL_047f;
	}

IL_0323:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_89 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		BufferSerializer_1_SerializeValue_mF8864064239A7820146C9482A6E1F7FE22607F81((&___0_serializer), L_89, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0335:
	{
		bool L_90;
		L_90 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_90)
		{
			goto IL_0425;
		}
	}
	{
		bool L_91;
		L_91 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_91)
		{
			goto IL_0425;
		}
	}
	{
		bool L_92;
		L_92 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_92)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_93 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_94 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_93->___AxisToSynchronize);
		bool L_95;
		L_95 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_94, 0, L_95, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_96 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_97 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_96->___AxisToSynchronize);
		bool L_98;
		L_98 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_97, 1, L_98, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_99 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_100 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_99->___AxisToSynchronize);
		bool L_101;
		L_101 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_100, 2, L_101, NULL);
		bool L_102 = V_1;
		if (!L_102)
		{
			goto IL_03bb;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_103 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		float L_104 = __this->___RotAngleX;
		float L_105 = __this->___RotAngleY;
		float L_106 = __this->___RotAngleZ;
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_103, L_104, L_105, L_106, NULL);
	}

IL_03bb:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_107 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_108 = V_3;
		BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_m4A4E597D00C4E913CE0E881D1912EB2B440ED06B((&___0_serializer), L_107, L_108, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_109 = V_1;
		if (L_109)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_110 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_110, NULL);
		V_4 = L_111;
		bool L_112;
		L_112 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_112)
		{
			goto IL_03f9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_4;
		float L_114 = L_113.___x;
		__this->___RotAngleX = L_114;
	}

IL_03f9:
	{
		bool L_115;
		L_115 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_115)
		{
			goto IL_040e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_4;
		float L_117 = L_116.___y;
		__this->___RotAngleY = L_117;
	}

IL_040e:
	{
		bool L_118;
		L_118 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_118)
		{
			goto IL_047f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_4;
		float L_120 = L_119.___z;
		__this->___RotAngleZ = L_120;
		goto IL_047f;
	}

IL_0425:
	{
		bool L_121;
		L_121 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_121)
		{
			goto IL_0443;
		}
	}
	{
		float* L_122 = (float*)(&__this->___RotAngleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_123 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_122, L_123, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0443:
	{
		bool L_124;
		L_124 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_124)
		{
			goto IL_0461;
		}
	}
	{
		float* L_125 = (float*)(&__this->___RotAngleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_126 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_125, L_126, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0461:
	{
		bool L_127;
		L_127 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_127)
		{
			goto IL_047f;
		}
	}
	{
		float* L_128 = (float*)(&__this->___RotAngleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_129 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_128, L_129, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_047f:
	{
		bool L_130;
		L_130 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		if (!L_130)
		{
			goto IL_0617;
		}
	}
	{
		bool L_131;
		L_131 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_131)
		{
			goto IL_04a7;
		}
	}
	{
		bool L_132;
		L_132 = NetworkTransformState_get_IsParented_m4E379976B06D17E675043E0E4386B2C56D7592CC(__this, NULL);
		if (!L_132)
		{
			goto IL_04a7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_133 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___LossyScale);
		BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16((&___0_serializer), L_133, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_04a7:
	{
		bool L_134;
		L_134 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_134)
		{
			goto IL_05bd;
		}
	}
	{
		bool L_135;
		L_135 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_135)
		{
			goto IL_04cc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		BufferSerializer_1_SerializeValue_m0773DBBB39CFDB93D7DE224B29AA3E23DADF8D16((&___0_serializer), L_136, il2cpp_rgctx_method(method->rgctx_data, 6));
		goto IL_0617;
	}

IL_04cc:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_137 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_138 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_137->___AxisToSynchronize);
		bool L_139;
		L_139 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_138, 0, L_139, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_140 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_141 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_140->___AxisToSynchronize);
		bool L_142;
		L_142 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_141, 1, L_142, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_143 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_144 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_143->___AxisToSynchronize);
		bool L_145;
		L_145 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_144, 2, L_145, NULL);
		bool L_146 = V_1;
		if (!L_146)
		{
			goto IL_0543;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_147 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_149;
		L_149 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_148, 0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_150 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_151;
		L_151 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_150, 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_152 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_153;
		L_153 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_152, 2, NULL);
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_147, L_149, L_151, L_153, NULL);
	}

IL_0543:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_154 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_155 = V_3;
		BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_m4A4E597D00C4E913CE0E881D1912EB2B440ED06B((&___0_serializer), L_154, L_155, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_156 = V_1;
		if (L_156)
		{
			goto IL_0617;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_157 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_157, NULL);
		__this->___Scale = L_158;
		bool L_159;
		L_159 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_159)
		{
			goto IL_0589;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_160 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_161 = L_160->___x;
		__this->___ScaleX = L_161;
	}

IL_0589:
	{
		bool L_162;
		L_162 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_162)
		{
			goto IL_05a2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_163 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_164 = L_163->___y;
		__this->___ScaleY = L_164;
	}

IL_05a2:
	{
		bool L_165;
		L_165 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_165)
		{
			goto IL_0617;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_166 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_167 = L_166->___x;
		__this->___ScaleZ = L_167;
		goto IL_0617;
	}

IL_05bd:
	{
		bool L_168;
		L_168 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_168)
		{
			goto IL_05db;
		}
	}
	{
		float* L_169 = (float*)(&__this->___ScaleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_170 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_169, L_170, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05db:
	{
		bool L_171;
		L_171 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_171)
		{
			goto IL_05f9;
		}
	}
	{
		float* L_172 = (float*)(&__this->___ScaleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_173 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_172, L_173, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05f9:
	{
		bool L_174;
		L_174 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_174)
		{
			goto IL_0617;
		}
	}
	{
		float* L_175 = (float*)(&__this->___ScaleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_176 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6101B238F07953CE18E1F86F2233DEFF3CB93159((&___0_serializer), L_175, L_176, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0617:
	{
		bool L_177 = V_1;
		if (L_177)
		{
			goto IL_064d;
		}
	}
	{
		bool L_178;
		L_178 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (L_178)
		{
			G_B92_0 = __this;
			goto IL_0633;
		}
		G_B90_0 = __this;
	}
	{
		bool L_179;
		L_179 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (L_179)
		{
			G_B92_0 = G_B90_0;
			goto IL_0633;
		}
		G_B91_0 = G_B90_0;
	}
	{
		bool L_180;
		L_180 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		G_B93_0 = ((int32_t)(L_180));
		G_B93_1 = G_B91_0;
		goto IL_0634;
	}

IL_0633:
	{
		G_B93_0 = 1;
		G_B93_1 = G_B92_0;
	}

IL_0634:
	{
		NetworkTransformState_set_IsDirty_m576063164F12AF5D862306DB64F057523E9F5AC1_inline(G_B93_1, (bool)G_B93_0, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_181 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_182;
		L_182 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_181, NULL);
		int32_t L_183 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_182, L_183)), NULL);
		return;
	}

IL_064d:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_184 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_185;
		L_185 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_184, NULL);
		int32_t L_186 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_185, L_186)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA1443DCB5355BB444E05D9D2B856B29C4D9698C9(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B92_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B90_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B91_0 = NULL;
	int32_t G_B93_0 = 0;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B93_1 = NULL;
	{
		V_0 = 0;
		bool L_0;
		L_0 = BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2;
		L_2 = BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 3));
		__this->___m_Writer = L_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_3 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_3, NULL);
		V_0 = L_4;
		goto IL_0041;
	}

IL_0028:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_5;
		L_5 = BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171((&___0_serializer), il2cpp_rgctx_method(method->rgctx_data, 4));
		__this->___m_Reader = L_5;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_6 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_7;
		L_7 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_6, NULL);
		V_0 = L_7;
	}

IL_0041:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_9;
		L_9 = NetworkTransformState_get_UseUnreliableDeltas_m270E4809697670D9F8CE7FDFCE6CE003A2EC27AF(__this, NULL);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		bool L_10;
		L_10 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_10)
		{
			goto IL_0079;
		}
	}
	{
		bool L_11;
		L_11 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (L_11)
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = NetworkTransformState_get_UnreliableFrameSync_m499E8BCAE9BDCA2BB0D29419B1565E31C538FDF0(__this, NULL);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		bool L_13;
		L_13 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_14 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_15 = L_14->___CollapsedDeltaIntoBase;
		if (!L_15)
		{
			goto IL_0082;
		}
	}

IL_0079:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
		goto IL_0092;
	}

IL_0082:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)0, NULL);
		goto IL_0092;
	}

IL_008b:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
	}

IL_0092:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_16 = __this->___m_Writer;
		uint32_t L_17 = __this->___m_Bitset;
		BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_16, L_17, NULL);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_18 = __this->___m_Writer;
		int32_t L_19 = __this->___NetworkTick;
		BytePacker_WriteValueBitPacked_m510F6322BA0F2C85AF9527A7927FF9B03F0AE613(L_18, L_19, NULL);
		goto IL_00d8;
	}

IL_00b6:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_20 = __this->___m_Reader;
		uint32_t* L_21 = (uint32_t*)(&__this->___m_Bitset);
		ByteUnpacker_ReadValueBitPacked_mACA5F48002EFB41F31DB0F4AAB4936A2E423DCA4(L_20, L_21, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_22 = __this->___m_Reader;
		int32_t* L_23 = (int32_t*)(&__this->___NetworkTick);
		ByteUnpacker_ReadValueBitPacked_mC5142499F3BA1F4D8C60EDF335D6C54B0D78C4AC(L_22, L_23, NULL);
	}

IL_00d8:
	{
		bool L_24;
		L_24 = NetworkTransformState_get_TrackByStateId_mD630BAB87E7ACD7B235E1EF41C1AEB1EE317CC28(__this, NULL);
		if (!L_24)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t* L_25 = (int32_t*)(&__this->___StateId);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_26 = V_2;
		BufferSerializer_1_SerializeValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m77A3B1A6805879DFC74A55FBE9F076C81CF22869((&___0_serializer), L_25, L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_00f6:
	{
		bool L_27;
		L_27 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (!L_27)
		{
			goto IL_0260;
		}
	}
	{
		bool L_28;
		L_28 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_28)
		{
			goto IL_0206;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_29 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_30;
		L_30 = NetworkTransformState_get_SynchronizeBaseHalfFloat_m25AB962E5590D008A7CC1E1C13FD6E1856EA2FFA(__this, NULL);
		L_29->___SynchronizeBase = L_30;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_31 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_32 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_31->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_33 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_32->___AxisToSynchronize);
		bool L_34;
		L_34 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_33, 0, L_34, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_35 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_36 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_35->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_37 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_36->___AxisToSynchronize);
		bool L_38;
		L_38 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_37, 1, L_38, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_39 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_40 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_39->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_41 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_40->___AxisToSynchronize);
		bool L_42;
		L_42 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_41, 2, L_42, NULL);
		bool L_43;
		L_43 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_43)
		{
			goto IL_01d5;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___CurrentPosition);
		BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6((&___0_serializer), L_44, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_45;
		L_45 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (!L_45)
		{
			goto IL_0260;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___DeltaPosition);
		BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6((&___0_serializer), L_46, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_47 = V_1;
		if (L_47)
		{
			goto IL_01c3;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_48 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_49 = __this->___NetworkTick;
		L_48->___NetworkTick = L_49;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_50 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 L_51 = ___0_serializer;
		NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m722DC25C9E88D9FC755356D5CA6377947EAEECFC(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 7));
		goto IL_0260;
	}

IL_01c3:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_52 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_m283E1A8E6B025E806D15B7C961098B3751211E51((&___0_serializer), L_52, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_01d5:
	{
		bool L_53 = V_1;
		if (L_53)
		{
			goto IL_01f7;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_54 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_55 = __this->___NetworkTick;
		L_54->___NetworkTick = L_55;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_56 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 L_57 = ___0_serializer;
		NetworkDeltaPosition_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m722DC25C9E88D9FC755356D5CA6377947EAEECFC(L_56, L_57, il2cpp_rgctx_method(method->rgctx_data, 7));
		goto IL_0260;
	}

IL_01f7:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_58 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		BufferSerializer_1_SerializeNetworkSerializable_TisNetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187_m283E1A8E6B025E806D15B7C961098B3751211E51((&___0_serializer), L_58, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_0206:
	{
		bool L_59;
		L_59 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		if (!L_59)
		{
			goto IL_0224;
		}
	}
	{
		float* L_60 = (float*)(&__this->___PositionX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_61 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_60, L_61, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0224:
	{
		bool L_62;
		L_62 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		if (!L_62)
		{
			goto IL_0242;
		}
	}
	{
		float* L_63 = (float*)(&__this->___PositionY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_64 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_63, L_64, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0242:
	{
		bool L_65;
		L_65 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		if (!L_65)
		{
			goto IL_0260;
		}
	}
	{
		float* L_66 = (float*)(&__this->___PositionZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_67 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_66, L_67, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0260:
	{
		bool L_68;
		L_68 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_68)
		{
			goto IL_047f;
		}
	}
	{
		bool L_69;
		L_69 = NetworkTransformState_get_QuaternionSync_mD6C5DCEB4B7EB4C2A0E869F2BD446C28C1021198(__this, NULL);
		if (!L_69)
		{
			goto IL_0335;
		}
	}
	{
		bool L_70;
		L_70 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_70)
		{
			goto IL_0290;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_71 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		BufferSerializer_1_SerializeValue_m5703B125C4DB4384D52002A802AB88FA88E27331((&___0_serializer), L_71, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0290:
	{
		bool L_72;
		L_72 = NetworkTransformState_get_QuaternionCompression_m224E16547D4DC81BEB8FE301E460EB20283F0C3D(__this, NULL);
		if (!L_72)
		{
			goto IL_02de;
		}
	}
	{
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_02ac;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_74 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		uint32_t L_75;
		L_75 = QuaternionCompressor_CompressQuaternion_mD233C59AA28D7780F9526AF968906804DA3BCF2C_inline(L_74, NULL);
		__this->___QuaternionCompressed = L_75;
	}

IL_02ac:
	{
		uint32_t* L_76 = (uint32_t*)(&__this->___QuaternionCompressed);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_77 = V_2;
		BufferSerializer_1_SerializeValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6F6DFB50403FF15EAF7B88A883C1739AE9E6900B((&___0_serializer), L_76, L_77, il2cpp_rgctx_method(method->rgctx_data, 11));
		bool L_78 = V_1;
		if (L_78)
		{
			goto IL_047f;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_79 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		uint32_t L_80 = __this->___QuaternionCompressed;
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		QuaternionCompressor_DecompressQuaternion_mA1789CE56A285E8D41D2E9115311F795D06C3885_inline(L_79, L_80, NULL);
		goto IL_047f;
	}

IL_02de:
	{
		bool L_81;
		L_81 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_81)
		{
			goto IL_0323;
		}
	}
	{
		bool L_82 = V_1;
		if (!L_82)
		{
			goto IL_02fa;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_83 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_84 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		HalfVector4_UpdateFrom_m68602A56252D21D669B5DE016C210A221C33F0E5_inline(L_83, L_84, NULL);
	}

IL_02fa:
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_85 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		BufferSerializer_1_SerializeNetworkSerializable_TisHalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC_mB866930E038815304EFFE7B77B5EF0E89E604102((&___0_serializer), L_85, il2cpp_rgctx_method(method->rgctx_data, 12));
		bool L_86 = V_1;
		if (L_86)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_87 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = HalfVector4_ToQuaternion_m303E824115C33255DF5C9357F5D6165FFCA8E19F_inline(L_87, NULL);
		__this->___Rotation = L_88;
		goto IL_047f;
	}

IL_0323:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_89 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		BufferSerializer_1_SerializeValue_m5703B125C4DB4384D52002A802AB88FA88E27331((&___0_serializer), L_89, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0335:
	{
		bool L_90;
		L_90 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_90)
		{
			goto IL_0425;
		}
	}
	{
		bool L_91;
		L_91 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_91)
		{
			goto IL_0425;
		}
	}
	{
		bool L_92;
		L_92 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_92)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_93 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_94 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_93->___AxisToSynchronize);
		bool L_95;
		L_95 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_94, 0, L_95, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_96 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_97 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_96->___AxisToSynchronize);
		bool L_98;
		L_98 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_97, 1, L_98, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_99 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_100 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_99->___AxisToSynchronize);
		bool L_101;
		L_101 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_100, 2, L_101, NULL);
		bool L_102 = V_1;
		if (!L_102)
		{
			goto IL_03bb;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_103 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		float L_104 = __this->___RotAngleX;
		float L_105 = __this->___RotAngleY;
		float L_106 = __this->___RotAngleZ;
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_103, L_104, L_105, L_106, NULL);
	}

IL_03bb:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_107 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_108 = V_3;
		BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_mD55651A3A4DEF17B124573359CB76A02D68B7091((&___0_serializer), L_107, L_108, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_109 = V_1;
		if (L_109)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_110 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_110, NULL);
		V_4 = L_111;
		bool L_112;
		L_112 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_112)
		{
			goto IL_03f9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_4;
		float L_114 = L_113.___x;
		__this->___RotAngleX = L_114;
	}

IL_03f9:
	{
		bool L_115;
		L_115 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_115)
		{
			goto IL_040e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_4;
		float L_117 = L_116.___y;
		__this->___RotAngleY = L_117;
	}

IL_040e:
	{
		bool L_118;
		L_118 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_118)
		{
			goto IL_047f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_4;
		float L_120 = L_119.___z;
		__this->___RotAngleZ = L_120;
		goto IL_047f;
	}

IL_0425:
	{
		bool L_121;
		L_121 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_121)
		{
			goto IL_0443;
		}
	}
	{
		float* L_122 = (float*)(&__this->___RotAngleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_123 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_122, L_123, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0443:
	{
		bool L_124;
		L_124 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_124)
		{
			goto IL_0461;
		}
	}
	{
		float* L_125 = (float*)(&__this->___RotAngleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_126 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_125, L_126, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0461:
	{
		bool L_127;
		L_127 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_127)
		{
			goto IL_047f;
		}
	}
	{
		float* L_128 = (float*)(&__this->___RotAngleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_129 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_128, L_129, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_047f:
	{
		bool L_130;
		L_130 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		if (!L_130)
		{
			goto IL_0617;
		}
	}
	{
		bool L_131;
		L_131 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_131)
		{
			goto IL_04a7;
		}
	}
	{
		bool L_132;
		L_132 = NetworkTransformState_get_IsParented_m4E379976B06D17E675043E0E4386B2C56D7592CC(__this, NULL);
		if (!L_132)
		{
			goto IL_04a7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_133 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___LossyScale);
		BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6((&___0_serializer), L_133, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_04a7:
	{
		bool L_134;
		L_134 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_134)
		{
			goto IL_05bd;
		}
	}
	{
		bool L_135;
		L_135 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_135)
		{
			goto IL_04cc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		BufferSerializer_1_SerializeValue_m0364BE9DADF6A928C2E671E4712E0E74660342D6((&___0_serializer), L_136, il2cpp_rgctx_method(method->rgctx_data, 6));
		goto IL_0617;
	}

IL_04cc:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_137 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_138 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_137->___AxisToSynchronize);
		bool L_139;
		L_139 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_138, 0, L_139, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_140 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_141 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_140->___AxisToSynchronize);
		bool L_142;
		L_142 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_141, 1, L_142, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_143 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_144 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_143->___AxisToSynchronize);
		bool L_145;
		L_145 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_144, 2, L_145, NULL);
		bool L_146 = V_1;
		if (!L_146)
		{
			goto IL_0543;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_147 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_149;
		L_149 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_148, 0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_150 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_151;
		L_151 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_150, 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_152 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_153;
		L_153 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_152, 2, NULL);
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_147, L_149, L_151, L_153, NULL);
	}

IL_0543:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_154 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_155 = V_3;
		BufferSerializer_1_SerializeValue_TisHalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD_mD55651A3A4DEF17B124573359CB76A02D68B7091((&___0_serializer), L_154, L_155, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_156 = V_1;
		if (L_156)
		{
			goto IL_0617;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_157 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_157, NULL);
		__this->___Scale = L_158;
		bool L_159;
		L_159 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_159)
		{
			goto IL_0589;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_160 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_161 = L_160->___x;
		__this->___ScaleX = L_161;
	}

IL_0589:
	{
		bool L_162;
		L_162 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_162)
		{
			goto IL_05a2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_163 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_164 = L_163->___y;
		__this->___ScaleY = L_164;
	}

IL_05a2:
	{
		bool L_165;
		L_165 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_165)
		{
			goto IL_0617;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_166 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_167 = L_166->___x;
		__this->___ScaleZ = L_167;
		goto IL_0617;
	}

IL_05bd:
	{
		bool L_168;
		L_168 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_168)
		{
			goto IL_05db;
		}
	}
	{
		float* L_169 = (float*)(&__this->___ScaleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_170 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_169, L_170, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05db:
	{
		bool L_171;
		L_171 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_171)
		{
			goto IL_05f9;
		}
	}
	{
		float* L_172 = (float*)(&__this->___ScaleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_173 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_172, L_173, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05f9:
	{
		bool L_174;
		L_174 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_174)
		{
			goto IL_0617;
		}
	}
	{
		float* L_175 = (float*)(&__this->___ScaleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_176 = V_2;
		BufferSerializer_1_SerializeValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m27B1CE4986F8F5797956E336EDF7FF730AB613E4((&___0_serializer), L_175, L_176, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0617:
	{
		bool L_177 = V_1;
		if (L_177)
		{
			goto IL_064d;
		}
	}
	{
		bool L_178;
		L_178 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (L_178)
		{
			G_B92_0 = __this;
			goto IL_0633;
		}
		G_B90_0 = __this;
	}
	{
		bool L_179;
		L_179 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (L_179)
		{
			G_B92_0 = G_B90_0;
			goto IL_0633;
		}
		G_B91_0 = G_B90_0;
	}
	{
		bool L_180;
		L_180 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		G_B93_0 = ((int32_t)(L_180));
		G_B93_1 = G_B91_0;
		goto IL_0634;
	}

IL_0633:
	{
		G_B93_0 = 1;
		G_B93_1 = G_B92_0;
	}

IL_0634:
	{
		NetworkTransformState_set_IsDirty_m576063164F12AF5D862306DB64F057523E9F5AC1_inline(G_B93_1, (bool)G_B93_0, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_181 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_182;
		L_182 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_181, NULL);
		int32_t L_183 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_182, L_183)), NULL);
		return;
	}

IL_064d:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_184 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_185;
		L_185 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_184, NULL);
		int32_t L_186 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_185, L_186)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mD1A30810E15D851190FDAFB741ACAF658F2AF985(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_BufferSerializer_1_t0B917FCBAA3382F74AB31BFF919D2998EE25668C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 L_51 = alloca(SizeOf_BufferSerializer_1_t0B917FCBAA3382F74AB31BFF919D2998EE25668C);
	const BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 L_57 = L_51;
	int32_t V_0 = 0;
	bool V_1 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B92_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B90_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B91_0 = NULL;
	int32_t G_B93_0 = 0;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B93_1 = NULL;
	{
		V_0 = 0;
		bool L_0;
		L_0 = ((  bool (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2;
		L_2 = ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, il2cpp_rgctx_method(method->rgctx_data, 3));
		__this->___m_Writer = L_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_3 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_3, NULL);
		V_0 = L_4;
		goto IL_0041;
	}

IL_0028:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_5;
		L_5 = ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, il2cpp_rgctx_method(method->rgctx_data, 4));
		__this->___m_Reader = L_5;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_6 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_7;
		L_7 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_6, NULL);
		V_0 = L_7;
	}

IL_0041:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_9;
		L_9 = NetworkTransformState_get_UseUnreliableDeltas_m270E4809697670D9F8CE7FDFCE6CE003A2EC27AF(__this, NULL);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		bool L_10;
		L_10 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_10)
		{
			goto IL_0079;
		}
	}
	{
		bool L_11;
		L_11 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (L_11)
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = NetworkTransformState_get_UnreliableFrameSync_m499E8BCAE9BDCA2BB0D29419B1565E31C538FDF0(__this, NULL);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		bool L_13;
		L_13 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_14 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_15 = L_14->___CollapsedDeltaIntoBase;
		if (!L_15)
		{
			goto IL_0082;
		}
	}

IL_0079:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
		goto IL_0092;
	}

IL_0082:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)0, NULL);
		goto IL_0092;
	}

IL_008b:
	{
		NetworkTransformState_set_ReliableSequenced_m79B24B8C50F70C270A688B56EFDC71EC9D53A547(__this, (bool)1, NULL);
	}

IL_0092:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_16 = __this->___m_Writer;
		uint32_t L_17 = __this->___m_Bitset;
		BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_16, L_17, NULL);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_18 = __this->___m_Writer;
		int32_t L_19 = __this->___NetworkTick;
		BytePacker_WriteValueBitPacked_m510F6322BA0F2C85AF9527A7927FF9B03F0AE613(L_18, L_19, NULL);
		goto IL_00d8;
	}

IL_00b6:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_20 = __this->___m_Reader;
		uint32_t* L_21 = (uint32_t*)(&__this->___m_Bitset);
		ByteUnpacker_ReadValueBitPacked_mACA5F48002EFB41F31DB0F4AAB4936A2E423DCA4(L_20, L_21, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_22 = __this->___m_Reader;
		int32_t* L_23 = (int32_t*)(&__this->___NetworkTick);
		ByteUnpacker_ReadValueBitPacked_mC5142499F3BA1F4D8C60EDF335D6C54B0D78C4AC(L_22, L_23, NULL);
	}

IL_00d8:
	{
		bool L_24;
		L_24 = NetworkTransformState_get_TrackByStateId_mD630BAB87E7ACD7B235E1EF41C1AEB1EE317CC28(__this, NULL);
		if (!L_24)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t* L_25 = (int32_t*)(&__this->___StateId);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_26 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_25, L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_00f6:
	{
		bool L_27;
		L_27 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (!L_27)
		{
			goto IL_0260;
		}
	}
	{
		bool L_28;
		L_28 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_28)
		{
			goto IL_0206;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_29 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		bool L_30;
		L_30 = NetworkTransformState_get_SynchronizeBaseHalfFloat_m25AB962E5590D008A7CC1E1C13FD6E1856EA2FFA(__this, NULL);
		L_29->___SynchronizeBase = L_30;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_31 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_32 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_31->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_33 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_32->___AxisToSynchronize);
		bool L_34;
		L_34 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_33, 0, L_34, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_35 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_36 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_35->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_37 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_36->___AxisToSynchronize);
		bool L_38;
		L_38 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_37, 1, L_38, NULL);
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_39 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_40 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&L_39->___HalfVector3);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_41 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_40->___AxisToSynchronize);
		bool L_42;
		L_42 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_41, 2, L_42, NULL);
		bool L_43;
		L_43 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_43)
		{
			goto IL_01d5;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___CurrentPosition);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_44, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_45;
		L_45 = NetworkTransformState_get_IsSynchronizing_mD8599721F651DBB156AF5587F20B6373FA440D51(__this, NULL);
		if (!L_45)
		{
			goto IL_0260;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___DeltaPosition);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_46, il2cpp_rgctx_method(method->rgctx_data, 6));
		bool L_47 = V_1;
		if (L_47)
		{
			goto IL_01c3;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_48 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_49 = __this->___NetworkTick;
		L_48->___NetworkTick = L_49;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_50 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		il2cpp_codegen_memcpy(L_51, ___0_serializer, SizeOf_BufferSerializer_1_t0B917FCBAA3382F74AB31BFF919D2998EE25668C);
		InvokerActionInvoker1< BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_50, L_51);
		goto IL_0260;
	}

IL_01c3:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_52 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_52, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_01d5:
	{
		bool L_53 = V_1;
		if (L_53)
		{
			goto IL_01f7;
		}
	}
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_54 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		int32_t L_55 = __this->___NetworkTick;
		L_54->___NetworkTick = L_55;
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_56 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		il2cpp_codegen_memcpy(L_57, ___0_serializer, SizeOf_BufferSerializer_1_t0B917FCBAA3382F74AB31BFF919D2998EE25668C);
		InvokerActionInvoker1< BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_56, L_57);
		goto IL_0260;
	}

IL_01f7:
	{
		NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187* L_58 = (NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*)(&__this->___NetworkDeltaPosition);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_58, il2cpp_rgctx_method(method->rgctx_data, 8));
		goto IL_0260;
	}

IL_0206:
	{
		bool L_59;
		L_59 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		if (!L_59)
		{
			goto IL_0224;
		}
	}
	{
		float* L_60 = (float*)(&__this->___PositionX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_61 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_60, L_61, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0224:
	{
		bool L_62;
		L_62 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		if (!L_62)
		{
			goto IL_0242;
		}
	}
	{
		float* L_63 = (float*)(&__this->___PositionY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_64 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_63, L_64, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0242:
	{
		bool L_65;
		L_65 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		if (!L_65)
		{
			goto IL_0260;
		}
	}
	{
		float* L_66 = (float*)(&__this->___PositionZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_67 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_66, L_67, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0260:
	{
		bool L_68;
		L_68 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_68)
		{
			goto IL_047f;
		}
	}
	{
		bool L_69;
		L_69 = NetworkTransformState_get_QuaternionSync_mD6C5DCEB4B7EB4C2A0E869F2BD446C28C1021198(__this, NULL);
		if (!L_69)
		{
			goto IL_0335;
		}
	}
	{
		bool L_70;
		L_70 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_70)
		{
			goto IL_0290;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_71 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_71, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0290:
	{
		bool L_72;
		L_72 = NetworkTransformState_get_QuaternionCompression_m224E16547D4DC81BEB8FE301E460EB20283F0C3D(__this, NULL);
		if (!L_72)
		{
			goto IL_02de;
		}
	}
	{
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_02ac;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_74 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		uint32_t L_75;
		L_75 = QuaternionCompressor_CompressQuaternion_mD233C59AA28D7780F9526AF968906804DA3BCF2C_inline(L_74, NULL);
		__this->___QuaternionCompressed = L_75;
	}

IL_02ac:
	{
		uint32_t* L_76 = (uint32_t*)(&__this->___QuaternionCompressed);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_77 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, uint32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_76, L_77, il2cpp_rgctx_method(method->rgctx_data, 11));
		bool L_78 = V_1;
		if (L_78)
		{
			goto IL_047f;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_79 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		uint32_t L_80 = __this->___QuaternionCompressed;
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		QuaternionCompressor_DecompressQuaternion_mA1789CE56A285E8D41D2E9115311F795D06C3885_inline(L_79, L_80, NULL);
		goto IL_047f;
	}

IL_02de:
	{
		bool L_81;
		L_81 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_81)
		{
			goto IL_0323;
		}
	}
	{
		bool L_82 = V_1;
		if (!L_82)
		{
			goto IL_02fa;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_83 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_84 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		HalfVector4_UpdateFrom_m68602A56252D21D669B5DE016C210A221C33F0E5_inline(L_83, L_84, NULL);
	}

IL_02fa:
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_85 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_85, il2cpp_rgctx_method(method->rgctx_data, 12));
		bool L_86 = V_1;
		if (L_86)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* L_87 = (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC*)(&__this->___HalfVectorRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = HalfVector4_ToQuaternion_m303E824115C33255DF5C9357F5D6165FFCA8E19F_inline(L_87, NULL);
		__this->___Rotation = L_88;
		goto IL_047f;
	}

IL_0323:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_89 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___Rotation);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_89, il2cpp_rgctx_method(method->rgctx_data, 10));
		goto IL_047f;
	}

IL_0335:
	{
		bool L_90;
		L_90 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_90)
		{
			goto IL_0425;
		}
	}
	{
		bool L_91;
		L_91 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (L_91)
		{
			goto IL_0425;
		}
	}
	{
		bool L_92;
		L_92 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (!L_92)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_93 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_94 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_93->___AxisToSynchronize);
		bool L_95;
		L_95 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_94, 0, L_95, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_96 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_97 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_96->___AxisToSynchronize);
		bool L_98;
		L_98 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_97, 1, L_98, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_99 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_100 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_99->___AxisToSynchronize);
		bool L_101;
		L_101 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_100, 2, L_101, NULL);
		bool L_102 = V_1;
		if (!L_102)
		{
			goto IL_03bb;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_103 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		float L_104 = __this->___RotAngleX;
		float L_105 = __this->___RotAngleY;
		float L_106 = __this->___RotAngleZ;
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_103, L_104, L_105, L_106, NULL);
	}

IL_03bb:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_107 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_108 = V_3;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_107, L_108, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_109 = V_1;
		if (L_109)
		{
			goto IL_047f;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_110 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfEulerRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_110, NULL);
		V_4 = L_111;
		bool L_112;
		L_112 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_112)
		{
			goto IL_03f9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_4;
		float L_114 = L_113.___x;
		__this->___RotAngleX = L_114;
	}

IL_03f9:
	{
		bool L_115;
		L_115 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_115)
		{
			goto IL_040e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_4;
		float L_117 = L_116.___y;
		__this->___RotAngleY = L_117;
	}

IL_040e:
	{
		bool L_118;
		L_118 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_118)
		{
			goto IL_047f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_4;
		float L_120 = L_119.___z;
		__this->___RotAngleZ = L_120;
		goto IL_047f;
	}

IL_0425:
	{
		bool L_121;
		L_121 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		if (!L_121)
		{
			goto IL_0443;
		}
	}
	{
		float* L_122 = (float*)(&__this->___RotAngleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_123 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_122, L_123, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0443:
	{
		bool L_124;
		L_124 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		if (!L_124)
		{
			goto IL_0461;
		}
	}
	{
		float* L_125 = (float*)(&__this->___RotAngleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_126 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_125, L_126, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0461:
	{
		bool L_127;
		L_127 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		if (!L_127)
		{
			goto IL_047f;
		}
	}
	{
		float* L_128 = (float*)(&__this->___RotAngleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_129 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_128, L_129, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_047f:
	{
		bool L_130;
		L_130 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		if (!L_130)
		{
			goto IL_0617;
		}
	}
	{
		bool L_131;
		L_131 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_131)
		{
			goto IL_04a7;
		}
	}
	{
		bool L_132;
		L_132 = NetworkTransformState_get_IsParented_m4E379976B06D17E675043E0E4386B2C56D7592CC(__this, NULL);
		if (!L_132)
		{
			goto IL_04a7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_133 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___LossyScale);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_133, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_04a7:
	{
		bool L_134;
		L_134 = NetworkTransformState_get_UseHalfFloatPrecision_m46CA4D1E96F19C8034EEB9208DEE99DCE983C42B(__this, NULL);
		if (!L_134)
		{
			goto IL_05bd;
		}
	}
	{
		bool L_135;
		L_135 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(__this, NULL);
		if (!L_135)
		{
			goto IL_04cc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_136, il2cpp_rgctx_method(method->rgctx_data, 6));
		goto IL_0617;
	}

IL_04cc:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_137 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_138 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_137->___AxisToSynchronize);
		bool L_139;
		L_139 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_138, 0, L_139, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_140 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_141 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_140->___AxisToSynchronize);
		bool L_142;
		L_142 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_141, 1, L_142, NULL);
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_143 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_144 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&L_143->___AxisToSynchronize);
		bool L_145;
		L_145 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		bool3_set_Item_m4C00252756240D7B023E9E194FE7DE7A33471462(L_144, 2, L_145, NULL);
		bool L_146 = V_1;
		if (!L_146)
		{
			goto IL_0543;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_147 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_149;
		L_149 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_148, 0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_150 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_151;
		L_151 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_150, 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_152 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_153;
		L_153 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_152, 2, NULL);
		HalfVector3_Set_m6BA6E33B552870133F0D09607A3049642A9A0230(L_147, L_149, L_151, L_153, NULL);
	}

IL_0543:
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_154 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		il2cpp_codegen_initobj((&V_3), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_155 = V_3;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_154, L_155, il2cpp_rgctx_method(method->rgctx_data, 13));
		bool L_156 = V_1;
		if (L_156)
		{
			goto IL_0617;
		}
	}
	{
		HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* L_157 = (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD*)(&__this->___HalfVectorScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline(L_157, NULL);
		__this->___Scale = L_158;
		bool L_159;
		L_159 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_159)
		{
			goto IL_0589;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_160 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_161 = L_160->___x;
		__this->___ScaleX = L_161;
	}

IL_0589:
	{
		bool L_162;
		L_162 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_162)
		{
			goto IL_05a2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_163 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_164 = L_163->___y;
		__this->___ScaleY = L_164;
	}

IL_05a2:
	{
		bool L_165;
		L_165 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_165)
		{
			goto IL_0617;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_166 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___Scale);
		float L_167 = L_166->___x;
		__this->___ScaleZ = L_167;
		goto IL_0617;
	}

IL_05bd:
	{
		bool L_168;
		L_168 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		if (!L_168)
		{
			goto IL_05db;
		}
	}
	{
		float* L_169 = (float*)(&__this->___ScaleX);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_170 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_169, L_170, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05db:
	{
		bool L_171;
		L_171 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		if (!L_171)
		{
			goto IL_05f9;
		}
	}
	{
		float* L_172 = (float*)(&__this->___ScaleY);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_173 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_172, L_173, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_05f9:
	{
		bool L_174;
		L_174 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		if (!L_174)
		{
			goto IL_0617;
		}
	}
	{
		float* L_175 = (float*)(&__this->___ScaleZ);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_176 = V_2;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_175, L_176, il2cpp_rgctx_method(method->rgctx_data, 9));
	}

IL_0617:
	{
		bool L_177 = V_1;
		if (L_177)
		{
			goto IL_064d;
		}
	}
	{
		bool L_178;
		L_178 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		if (L_178)
		{
			G_B92_0 = __this;
			goto IL_0633;
		}
		G_B90_0 = __this;
	}
	{
		bool L_179;
		L_179 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		if (L_179)
		{
			G_B92_0 = G_B90_0;
			goto IL_0633;
		}
		G_B91_0 = G_B90_0;
	}
	{
		bool L_180;
		L_180 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		G_B93_0 = ((int32_t)(L_180));
		G_B93_1 = G_B91_0;
		goto IL_0634;
	}

IL_0633:
	{
		G_B93_0 = 1;
		G_B93_1 = G_B92_0;
	}

IL_0634:
	{
		NetworkTransformState_set_IsDirty_m576063164F12AF5D862306DB64F057523E9F5AC1_inline(G_B93_1, (bool)G_B93_0, NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* L_181 = (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)(&__this->___m_Reader);
		int32_t L_182;
		L_182 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline(L_181, NULL);
		int32_t L_183 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_182, L_183)), NULL);
		return;
	}

IL_064d:
	{
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_184 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&__this->___m_Writer);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_185;
		L_185 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_184, NULL);
		int32_t L_186 = V_0;
		NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_185, L_186)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		int32_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, (Il2CppFullySharedGenericStruct*)L_3);
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		int32_t* L_3 = ___0_value;
		UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		Il2CppFullySharedGenericStruct* L_3 = ___0_value;
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = __this->___Offset;
		int32_t L_5 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___0_length;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___0_length;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		return L_7;
	}

IL_001b:
	{
		return (void*)(((uintptr_t)0));
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
	{
		void* L_0 = __this->___Ptr;
		int32_t L_1 = __this->___Length;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
	int32_t V_0 = 0;
	{
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = __this->___ListData;
		NullCheck(L_0);
		int32_t* L_1 = (int32_t*)(&L_0->___Length);
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		void* L_3 = __this->___Ptr;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, ___0_value, SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_2 = ___0_list;
		void* L_3 = L_2.___Ptr;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_4 = ___0_list;
		int32_t L_5 = L_4.___Length;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_AdjustorThunk (RuntimeObject* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476(_thisAdjusted, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_2 = ___0_ptr;
		int32_t L_3 = ___1_length;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_AdjustorThunk (RuntimeObject* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727(_thisAdjusted, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = __this->___m_CurrentPtr;
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = __this->___m_CurrentBlockEnd;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) > ((uintptr_t)L_4))))
		{
			goto IL_002f;
		}
	}
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_5 = __this->___m_CurrentBlock;
		NullCheck(L_5);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = L_5->___Next;
		NullCheck(L_6);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_7 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_6->___Data);
		uint8_t* L_8 = (uint8_t*)(&L_7->___FixedElementField);
		V_1 = (uint8_t*)((uintptr_t)L_8);
	}

IL_002f:
	{
		uint8_t* L_9 = V_1;
		Il2CppFullySharedGenericStruct* L_10;
		L_10 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_1, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		double* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		double* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int32_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int32_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int64_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int64_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		float* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		float* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___0_dptr;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0054:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0058:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___4_n;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___0_dptr;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0053:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___4_n;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint8_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int16_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int8_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint16_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_9 = L_3;
	const Il2CppFullySharedGenericStruct L_15 = L_3;
	const Il2CppFullySharedGenericStruct L_26 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_40 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_124 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_27 = L_16;
	const Il2CppFullySharedGenericStruct L_31 = L_16;
	const Il2CppFullySharedGenericStruct L_41 = L_16;
	const Il2CppFullySharedGenericStruct L_51 = L_16;
	const Il2CppFullySharedGenericStruct L_125 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_8, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_12, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		Il2CppFullySharedGenericStruct* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_9, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_8, L_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_14;
		L_14 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_15, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_16, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_25;
		L_25 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_26, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_27, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_29;
		L_29 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_30, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_31, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_39;
		L_39 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_41, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_120;
		L_120 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_124, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_125, V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_1, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___2_allOnesT;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___2_allOnesT;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___2_allOnesT;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___2_allOnesT;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_7, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), L_7, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), (void*)L_7);
		goto IL_0049;
	}

IL_0038:
	{
		Il2CppFullySharedGenericStruct* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_2 = __this->___m_Api;
		int32_t L_3 = __this->___m_RequestId;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9, L_2, L_3, (&V_0), (&V_1));
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_5;
		intptr_t L_6 = V_0;
		void* L_7;
		L_7 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_6, NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10;
		L_10 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, ((int32_t)(L_8/L_9)), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_10;
	}

IL_0041:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___2_array;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___2_array;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length);
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___2_array;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___2_array;
		int32_t L_7 = ___0_length;
		int32_t L_8 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___2_array;
		int32_t L_11 = ___0_length;
		int32_t L_12 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___2_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___2_array;
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___2_array;
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___2_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___2_array;
		int32_t L_7 = ___0_length;
		int32_t L_8 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_7, L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___2_array;
		int32_t L_11 = ___0_length;
		int32_t L_12 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_13), L_11, L_12, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_13;
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Allocate_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_mCDBD1381CA662F016D4B6003D9BA89FE592EB6D8_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2;
		L_2 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3((MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_pointer;
		int64_t L_2 = ___1_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___2_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint8_t*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint64_t*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)(L_6);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, const RuntimeMethod* method) 
{
	{
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t QuaternionCompressor_CompressQuaternion_mD233C59AA28D7780F9526AF968906804DA3BCF2C_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	uint32_t G_B19_0 = 0;
	uint32_t G_B14_0 = 0;
	uint32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	uint32_t G_B15_1 = 0;
	uint32_t G_B17_0 = 0;
	uint32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	uint32_t G_B18_1 = 0;
	uint32_t G_B28_0 = 0;
	uint32_t G_B23_0 = 0;
	uint32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	uint32_t G_B24_1 = 0;
	uint32_t G_B26_0 = 0;
	uint32_t G_B25_0 = 0;
	int32_t G_B27_0 = 0;
	uint32_t G_B27_1 = 0;
	uint32_t G_B37_0 = 0;
	uint32_t G_B32_0 = 0;
	uint32_t G_B31_0 = 0;
	int32_t G_B33_0 = 0;
	uint32_t G_B33_1 = 0;
	uint32_t G_B35_0 = 0;
	uint32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	uint32_t G_B36_1 = 0;
	uint32_t G_B46_0 = 0;
	uint32_t G_B41_0 = 0;
	uint32_t G_B40_0 = 0;
	int32_t G_B42_0 = 0;
	uint32_t G_B42_1 = 0;
	uint32_t G_B44_0 = 0;
	uint32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	uint32_t G_B45_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_quaternion;
		float L_1;
		L_1 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_0, 0, NULL);
		float L_2;
		L_2 = fabsf(L_1);
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 0, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___0_quaternion;
		float L_4;
		L_4 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_3, 1, NULL);
		float L_5;
		L_5 = fabsf(L_4);
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 1, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = ___0_quaternion;
		float L_7;
		L_7 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_6, 2, NULL);
		float L_8;
		L_8 = fabsf(L_7);
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 2, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_9 = ___0_quaternion;
		float L_10;
		L_10 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_9, 3, NULL);
		float L_11;
		L_11 = fabsf(L_10);
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 3, L_11, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_12;
		float L_14;
		L_14 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 0, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_13;
		float L_16;
		L_16 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 1, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_16);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_15;
		float L_18;
		L_18 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 2, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_18);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = L_17;
		float L_20;
		L_20 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 3, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_20);
		float L_21;
		L_21 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_19, NULL);
		V_0 = L_21;
		float L_22;
		L_22 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 0, NULL);
		float L_23 = V_0;
		if ((((float)L_22) == ((float)L_23)))
		{
			goto IL_00d3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 1, NULL);
		float L_25 = V_0;
		if ((((float)L_24) == ((float)L_25)))
		{
			goto IL_00d0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		float L_26;
		L_26 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), 2, NULL);
		float L_27 = V_0;
		if ((((float)L_26) == ((float)L_27)))
		{
			goto IL_00cd;
		}
	}
	{
		G_B7_0 = 3;
		goto IL_00d4;
	}

IL_00cd:
	{
		G_B7_0 = 2;
		goto IL_00d4;
	}

IL_00d0:
	{
		G_B7_0 = 1;
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B7_0 = 0;
	}

IL_00d4:
	{
		V_1 = (uint16_t)((int32_t)(uint16_t)G_B7_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_28 = ___0_quaternion;
		uint16_t L_29 = V_1;
		float L_30;
		L_30 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_28, L_29, NULL);
		if ((((float)L_30) < ((float)(0.0f))))
		{
			goto IL_00e7;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B10_0 = 1;
	}

IL_00e8:
	{
		V_2 = (uint16_t)G_B10_0;
		uint16_t L_31 = V_1;
		V_3 = L_31;
		V_4 = 0;
		int32_t L_32 = V_4;
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_34 = V_3;
		G_B19_0 = L_34;
		goto IL_0131;
	}

IL_00f6:
	{
		uint32_t L_35 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_36 = ___0_quaternion;
		int32_t L_37 = V_4;
		float L_38;
		L_38 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_36, L_37, NULL);
		if ((((float)L_38) < ((float)(0.0f))))
		{
			G_B14_0 = ((uint32_t)(((int32_t)((int32_t)L_35<<((int32_t)10)))));
			goto IL_010c;
		}
		G_B13_0 = ((uint32_t)(((int32_t)((int32_t)L_35<<((int32_t)10)))));
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_010d;
	}

IL_010c:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_010d:
	{
		uint16_t L_39 = V_2;
		if ((!(((uint32_t)G_B15_0) == ((uint32_t)L_39))))
		{
			G_B17_0 = G_B15_1;
			goto IL_0113;
		}
		G_B16_0 = G_B15_1;
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_0114;
	}

IL_0113:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_0114:
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		int32_t L_40 = V_4;
		float L_41;
		L_41 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), L_40, NULL);
		float L_42;
		L_42 = bankers_roundf(((float)il2cpp_codegen_multiply((722.663147f), L_41)));
		G_B19_0 = ((uint32_t)(((int32_t)(((int32_t)((int32_t)G_B18_1|((int32_t)(G_B18_0<<((int32_t)9)))))|il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_42)))));
	}

IL_0131:
	{
		V_3 = G_B19_0;
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_4;
		uint16_t L_45 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0140;
		}
	}
	{
		uint32_t L_46 = V_3;
		G_B28_0 = L_46;
		goto IL_017b;
	}

IL_0140:
	{
		uint32_t L_47 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_48 = ___0_quaternion;
		int32_t L_49 = V_4;
		float L_50;
		L_50 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_48, L_49, NULL);
		if ((((float)L_50) < ((float)(0.0f))))
		{
			G_B23_0 = ((uint32_t)(((int32_t)((int32_t)L_47<<((int32_t)10)))));
			goto IL_0156;
		}
		G_B22_0 = ((uint32_t)(((int32_t)((int32_t)L_47<<((int32_t)10)))));
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_0157;
	}

IL_0156:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_0157:
	{
		uint16_t L_51 = V_2;
		if ((!(((uint32_t)G_B24_0) == ((uint32_t)L_51))))
		{
			G_B26_0 = G_B24_1;
			goto IL_015d;
		}
		G_B25_0 = G_B24_1;
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_015e;
	}

IL_015d:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
	}

IL_015e:
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		int32_t L_52 = V_4;
		float L_53;
		L_53 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), L_52, NULL);
		float L_54;
		L_54 = bankers_roundf(((float)il2cpp_codegen_multiply((722.663147f), L_53)));
		G_B28_0 = ((uint32_t)(((int32_t)(((int32_t)((int32_t)G_B27_1|((int32_t)(G_B27_0<<((int32_t)9)))))|il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_54)))));
	}

IL_017b:
	{
		V_3 = G_B28_0;
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_4;
		uint16_t L_57 = V_1;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_58 = V_3;
		G_B37_0 = L_58;
		goto IL_01c5;
	}

IL_018a:
	{
		uint32_t L_59 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_60 = ___0_quaternion;
		int32_t L_61 = V_4;
		float L_62;
		L_62 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_60, L_61, NULL);
		if ((((float)L_62) < ((float)(0.0f))))
		{
			G_B32_0 = ((uint32_t)(((int32_t)((int32_t)L_59<<((int32_t)10)))));
			goto IL_01a0;
		}
		G_B31_0 = ((uint32_t)(((int32_t)((int32_t)L_59<<((int32_t)10)))));
	}
	{
		G_B33_0 = 0;
		G_B33_1 = G_B31_0;
		goto IL_01a1;
	}

IL_01a0:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
	}

IL_01a1:
	{
		uint16_t L_63 = V_2;
		if ((!(((uint32_t)G_B33_0) == ((uint32_t)L_63))))
		{
			G_B35_0 = G_B33_1;
			goto IL_01a7;
		}
		G_B34_0 = G_B33_1;
	}
	{
		G_B36_0 = 0;
		G_B36_1 = G_B34_0;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B36_0 = 1;
		G_B36_1 = G_B35_0;
	}

IL_01a8:
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		int32_t L_64 = V_4;
		float L_65;
		L_65 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), L_64, NULL);
		float L_66;
		L_66 = bankers_roundf(((float)il2cpp_codegen_multiply((722.663147f), L_65)));
		G_B37_0 = ((uint32_t)(((int32_t)(((int32_t)((int32_t)G_B36_1|((int32_t)(G_B36_0<<((int32_t)9)))))|il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_66)))));
	}

IL_01c5:
	{
		V_3 = G_B37_0;
		int32_t L_67 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_4;
		uint16_t L_69 = V_1;
		if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
		{
			goto IL_01d4;
		}
	}
	{
		uint32_t L_70 = V_3;
		G_B46_0 = L_70;
		goto IL_020f;
	}

IL_01d4:
	{
		uint32_t L_71 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_72 = ___0_quaternion;
		int32_t L_73 = V_4;
		float L_74;
		L_74 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_72, L_73, NULL);
		if ((((float)L_74) < ((float)(0.0f))))
		{
			G_B41_0 = ((uint32_t)(((int32_t)((int32_t)L_71<<((int32_t)10)))));
			goto IL_01ea;
		}
		G_B40_0 = ((uint32_t)(((int32_t)((int32_t)L_71<<((int32_t)10)))));
	}
	{
		G_B42_0 = 0;
		G_B42_1 = G_B40_0;
		goto IL_01eb;
	}

IL_01ea:
	{
		G_B42_0 = 1;
		G_B42_1 = G_B41_0;
	}

IL_01eb:
	{
		uint16_t L_75 = V_2;
		if ((!(((uint32_t)G_B42_0) == ((uint32_t)L_75))))
		{
			G_B44_0 = G_B42_1;
			goto IL_01f1;
		}
		G_B43_0 = G_B42_1;
	}
	{
		G_B45_0 = 0;
		G_B45_1 = G_B43_0;
		goto IL_01f2;
	}

IL_01f1:
	{
		G_B45_0 = 1;
		G_B45_1 = G_B44_0;
	}

IL_01f2:
	{
		il2cpp_codegen_runtime_class_init_inline(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var);
		int32_t L_76 = V_4;
		float L_77;
		L_77 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline((&((QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_StaticFields*)il2cpp_codegen_static_fields_for(QuaternionCompressor_tA04AED7406D526EEBB63031D4C01C675E8A7DEAE_il2cpp_TypeInfo_var))->___s_QuatAbsValues), L_76, NULL);
		float L_78;
		L_78 = bankers_roundf(((float)il2cpp_codegen_multiply((722.663147f), L_77)));
		G_B46_0 = ((uint32_t)(((int32_t)(((int32_t)((int32_t)G_B45_1|((int32_t)(G_B45_0<<((int32_t)9)))))|il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(L_78)))));
	}

IL_020f:
	{
		V_3 = G_B46_0;
		uint32_t L_79 = V_3;
		return L_79;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuaternionCompressor_DecompressQuaternion_mA1789CE56A285E8D41D2E9115311F795D06C3885_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, uint32_t ___1_compressed, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	int32_t G_B5_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B5_2 = NULL;
	{
		uint32_t L_0 = ___1_compressed;
		V_0 = ((int32_t)((uint32_t)L_0>>((int32_t)30)));
		V_1 = (0.0f);
		V_2 = 3;
		goto IL_005c;
	}

IL_000f:
	{
		int32_t L_1 = V_2;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0058;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___0_quaternion;
		int32_t L_4 = V_2;
		uint32_t L_5 = ___1_compressed;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)512)))) <= ((uint32_t)0))))
		{
			G_B4_0 = L_4;
			G_B4_1 = L_3;
			goto IL_0026;
		}
		G_B3_0 = L_4;
		G_B3_1 = L_3;
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_002b;
	}

IL_0026:
	{
		G_B5_0 = (-1.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_002b:
	{
		uint32_t L_6 = ___1_compressed;
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline(G_B5_2, G_B5_1, ((float)il2cpp_codegen_multiply(G_B5_0, ((float)il2cpp_codegen_multiply(((float)((double)(uint32_t)((int32_t)((int32_t)L_6&((int32_t)511))))), (0.00138377061f))))), NULL);
		float L_7 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_quaternion;
		int32_t L_9 = V_2;
		float L_10;
		L_10 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_8, L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = ___0_quaternion;
		int32_t L_12 = V_2;
		float L_13;
		L_13 = Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline(L_11, L_12, NULL);
		V_1 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_10, L_13))));
		uint32_t L_14 = ___1_compressed;
		___1_compressed = ((int32_t)((uint32_t)L_14>>((int32_t)10)));
	}

IL_0058:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005c:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_17 = ___0_quaternion;
		int32_t L_18 = V_0;
		float L_19 = V_1;
		float L_20;
		L_20 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), L_19)));
		Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline(L_17, L_18, L_20, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HalfVector4_UpdateFrom_m68602A56252D21D669B5DE016C210A221C33F0E5_inline (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_quaternion, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_quaternion;
		float L_1 = L_0->___x;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_2;
		L_2 = math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___0_quaternion;
		float L_4 = L_3->___y;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_5;
		L_5 = math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = ___0_quaternion;
		float L_7 = L_6->___z;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_8;
		L_8 = math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_9 = ___0_quaternion;
		float L_10 = L_9->___w;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_11;
		L_11 = math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline(L_10, NULL);
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_12;
		L_12 = math_half4_m323B80DFCB91F80383F7B7CF9EB0F9D79CB401E4_inline(L_2, L_5, L_8, L_11, NULL);
		__this->___Axis = L_12;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HalfVector4_ToQuaternion_m303E824115C33255DF5C9357F5D6165FFCA8E19F_inline (HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC* __this, const RuntimeMethod* method) 
{
	{
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_0 = __this->___Axis;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1;
		L_1 = float4_op_Implicit_m7821C639FFD50CF1DCED1888EFD19411063E125C_inline(L_0, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2;
		L_2 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HalfVector3_ToVector3_m63872F7A47579197C8D44BAD6C579A1D20DAF53C_inline (HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 L_1 = __this->___Axis;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = math_float3_m51DA9AF48A7A0BEADC7497534BCFEECFB46EF93D_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861* L_4 = (bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861*)(&__this->___AxisToSynchronize);
		int32_t L_5 = V_2;
		bool L_6;
		L_6 = bool3_get_Item_m6DF4E7C6E3F91FA25B3C318DBC2A4D227A5AD05A(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_2;
		float L_9;
		L_9 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_1), L_8, NULL);
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&V_0), L_7, L_9, NULL);
	}

IL_0039:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_001b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsDirty_m576063164F12AF5D862306DB64F057523E9F5AC1_inline (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDirtyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransformState_set_LastSerializedSize_mF360F674AF9FFE8065896E428077836D7C426772_inline (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLastSerializedSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___0_ptr, int32_t* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		int32_t* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral973C45718ACB19FB28D206360A3094F43D27EDED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_get_Item_m0B886A8EF3417F3309FB0C681A67A4150B7AA739_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = ___1_value;
		__this->___x = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = ___1_value;
		__this->___y = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = ___1_value;
		__this->___z = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = ___1_value;
		__this->___w = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral973C45718ACB19FB28D206360A3094F43D27EDED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_set_Item_mFEF628DD58AC71A1E712A6F3F9642D5DA00675CE_RuntimeMethod_var)));
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR half_tE8A6792149696F478D662DD4B736964C0FF018AF math_half_m74E5FCA09BC0979ECB07A270F192B787AD735B3F_inline (float ___0_v, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_1;
		memset((&L_1), 0, sizeof(L_1));
		half__ctor_m8B752133073B9817027C11F1F56CA27206F6DAC3_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 math_half4_m323B80DFCB91F80383F7B7CF9EB0F9D79CB401E4_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_x, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___1_y, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___2_z, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___3_w, const RuntimeMethod* method) 
{
	{
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_0 = ___0_x;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_1 = ___1_y;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_2 = ___2_z;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_3 = ___3_w;
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_4;
		memset((&L_4), 0, sizeof(L_4));
		half4__ctor_m3815024A2EFAEC34F3C5AD76A07ACD1C29347108_inline((&L_4), L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m7821C639FFD50CF1DCED1888EFD19411063E125C_inline (half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___0_v, const RuntimeMethod* method) 
{
	{
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_0 = ___0_v;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float4__ctor_m01CCEB586EAAE29F243B120FB95B6965EA2F1E53_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline((&L_1), L_0, NULL);
		return L_1;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_float3_m51DA9AF48A7A0BEADC7497534BCFEECFB46EF93D_inline (half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___0_v, const RuntimeMethod* method) 
{
	{
		half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 L_0 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_m6D73914615F80887E1AE6439C78716E8348CB8EE_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___1_value;
		__this->___x = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___1_value;
		__this->___y = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___1_value;
		__this->___z = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void half__ctor_m8B752133073B9817027C11F1F56CA27206F6DAC3_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_v;
		uint32_t L_1;
		L_1 = math_f32tof16_m336C5288458B517FFE3A1B1AE1D3B50C349381BD_inline(L_0, NULL);
		__this->___value = (uint16_t)((int32_t)(uint16_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void half4__ctor_m3815024A2EFAEC34F3C5AD76A07ACD1C29347108_inline (half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826* __this, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_x, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___1_y, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___2_z, half_tE8A6792149696F478D662DD4B736964C0FF018AF ___3_w, const RuntimeMethod* method) 
{
	{
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_0 = ___0_x;
		__this->___x = L_0;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_1 = ___1_y;
		__this->___y = L_1;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_2 = ___2_z;
		__this->___z = L_2;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m01CCEB586EAAE29F243B120FB95B6965EA2F1E53_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___0_v, const RuntimeMethod* method) 
{
	{
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_0 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_1 = L_0.___x;
		float L_2;
		L_2 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_1, NULL);
		__this->___x = L_2;
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_3 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_4 = L_3.___y;
		float L_5;
		L_5 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_4, NULL);
		__this->___y = L_5;
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_6 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_7 = L_6.___z;
		float L_8;
		L_8 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_7, NULL);
		__this->___z = L_8;
		half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 L_9 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_10 = L_9.___w;
		float L_11;
		L_11 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_10, NULL);
		__this->___w = L_11;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		__this->___value = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m6D73914615F80887E1AE6439C78716E8348CB8EE_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___0_v, const RuntimeMethod* method) 
{
	{
		half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 L_0 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_1 = L_0.___x;
		float L_2;
		L_2 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_1, NULL);
		__this->___x = L_2;
		half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 L_3 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_4 = L_3.___y;
		float L_5;
		L_5 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_4, NULL);
		__this->___y = L_5;
		half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 L_6 = ___0_v;
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_7 = L_6.___z;
		float L_8;
		L_8 = half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline(L_7, NULL);
		__this->___z = L_8;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_f32tof16_m336C5288458B517FFE3A1B1AE1D3B50C349381BD_inline (float ___0_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		float L_0 = ___0_x;
		uint32_t L_1;
		L_1 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2&((int32_t)2147479552)));
		uint32_t L_3 = V_1;
		float L_4;
		L_4 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(L_3, NULL);
		float L_5;
		L_5 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(((float)il2cpp_codegen_multiply(L_4, (1.92592994E-34f))), (260042752.0f), NULL);
		uint32_t L_6;
		L_6 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(L_5, NULL);
		uint32_t L_7 = V_1;
		uint32_t L_8;
		L_8 = math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline(((int32_t)31744), ((int32_t)32256), (bool)((((int32_t)L_7) > ((int32_t)((int32_t)2139095040)))? 1 : 0), NULL);
		uint32_t L_9 = V_1;
		uint32_t L_10;
		L_10 = math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline(((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)4096)))>>((int32_t)13))), L_8, (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)((int32_t)2139095040)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		uint32_t L_11 = V_0;
		return ((int32_t)((int32_t)L_10|((int32_t)((uint32_t)((int32_t)((int32_t)L_11&((int32_t)-2147479553)))>>((int32_t)16)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float half_op_Implicit_mCF67502DEA255982F0292914D6E06ED5823A9675_inline (half_tE8A6792149696F478D662DD4B736964C0FF018AF ___0_d, const RuntimeMethod* method) 
{
	{
		half_tE8A6792149696F478D662DD4B736964C0FF018AF L_0 = ___0_d;
		uint16_t L_1 = L_0.___value;
		float L_2;
		L_2 = math_f16tof32_m558AB5CFC4B974A267AFB1E799C3F8D7D530B419_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___0_x)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		float L_0 = *((float*)((uintptr_t)(&___0_x)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_y;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___0_x;
		float L_3 = ___1_y;
		if ((((float)L_2) < ((float)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		float L_4 = ___1_y;
		return L_4;
	}

IL_000e:
	{
		float L_5 = ___0_x;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline (uint32_t ___0_falseValue, uint32_t ___1_trueValue, bool ___2_test, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___2_test;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		uint32_t L_1 = ___0_falseValue;
		return L_1;
	}

IL_0005:
	{
		uint32_t L_2 = ___1_trueValue;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_f16tof32_m558AB5CFC4B974A267AFB1E799C3F8D7D530B419_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_x;
		int32_t L_1 = ((int32_t)(((int32_t)((int32_t)L_0&((int32_t)32767)))<<((int32_t)13)));
		V_0 = ((int32_t)(L_1&((int32_t)260046848)));
		uint32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline(0, ((int32_t)939524096), (bool)((((int32_t)L_2) == ((int32_t)((int32_t)260046848)))? 1 : 0), NULL);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)939524096))), (int32_t)L_3));
		float L_5;
		L_5 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(((int32_t)il2cpp_codegen_add(L_4, ((int32_t)8388608))), NULL);
		uint32_t L_6;
		L_6 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(((float)il2cpp_codegen_subtract(L_5, (6.10351562E-05f))), NULL);
		uint32_t L_7 = V_0;
		uint32_t L_8;
		L_8 = math_select_m8BBDC6133225059EE5F0FCA74BA9497AD5496024_inline(L_4, L_6, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		uint32_t L_9 = ___0_x;
		float L_10;
		L_10 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(((int32_t)((int32_t)L_8|((int32_t)(((int32_t)((int32_t)L_9&((int32_t)32768)))<<((int32_t)16))))), NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
