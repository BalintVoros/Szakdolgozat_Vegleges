#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Comparison`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct Comparison_1_tE977BBB4F0CF77771298A262B86AF2AD31187146;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping>
struct Dictionary_2_t7EE155547BF85C4842B48F5187C809B9BD49A286;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>
struct Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>
struct Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>
struct IEnumerable_1_t0FFF98899BD0CCBA938282533A74665546B11C2D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.TableMapping/Column>
struct IEnumerable_1_tBEA6C219B3D53413B77067120604E18CF109DAB1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>
struct List_1_tC97D118E4BF4DED562658508050671CE052C65B9;
// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828;
// System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>
struct List_1_t76F9611073289221FD689EB9CF04C021C23B2186;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// SQLite4Unity3d.SQLiteCommand/Binding[]
struct BindingU5BU5D_t2A94383B4742A53987FF83B6CF5943B683970DED;
// SQLite4Unity3d.SQLiteConnection/IndexedColumn[]
struct IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4;
// SQLite4Unity3d.TableMapping/Column[]
struct ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// SQLite4Unity3d.AutoIncrementAttribute
struct AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F;
// SQLite4Unity3d.BaseTableQuery
struct BaseTableQuery_t28D9E3082475EF8E0FC7E8F87FA0174C247BED7D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// SQLite4Unity3d.CollationAttribute
struct CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C;
// SQLite4Unity3d.ColumnAttribute
struct ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4;
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
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// SQLite4Unity3d.IgnoreAttribute
struct IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2;
// SQLite4Unity3d.IndexedAttribute
struct IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F;
// SQLite4Unity3d.MaxLengthAttribute
struct MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SQLite4Unity3d.NotNullAttribute
struct NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5;
// SQLite4Unity3d.NotNullConstraintViolationException
struct NotNullConstraintViolationException_t879E7832BFBEBCFCE0B1902526231D755FA83456;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// SQLite4Unity3d.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6;
// SQLite4Unity3d.PrimaryKeyAttribute
struct PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// SQLite4Unity3d.SQLiteCommand
struct SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF;
// SQLite4Unity3d.SQLiteConnection
struct SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4;
// SQLite4Unity3d.SQLiteConnectionString
struct SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664;
// SQLite4Unity3d.SQLiteException
struct SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// SQLite4Unity3d.TableAttribute
struct TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534;
// SQLite4Unity3d.TableMapping
struct TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966;
// System.Type
struct Type_t;
// SQLite4Unity3d.UniqueAttribute
struct UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SQLite4Unity3d.BaseTableQuery/Ordering
struct Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826;
// SQLite4Unity3d.SQLiteCommand/Binding
struct Binding_t846C16F3FF76025D82F878E8E00A5894741580FD;
// SQLite4Unity3d.SQLiteConnection/<>c
struct U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81;
// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0
struct U3CU3Ec__DisplayClass105_0_t8E67D00FCA72EDFB9CAB00662760929AAAA2F274;
// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0
struct U3CU3Ec__DisplayClass106_0_tCCA41F62B5EA6FC5618E0CC020ADB2165A043E97;
// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t60206737D176DC76F28DCB8EC7DF4E6C06EE5D8A;
// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0
struct U3CU3Ec__DisplayClass96_0_t527EA7B759880603FA94E43D3EFF38F94C04DC91;
// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t7DD496E8120D85C5BD65C1D718EBC656A5139846;
// SQLite4Unity3d.SQLiteConnection/ColumnInfo
struct ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2;
// SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler
struct TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1;
// SQLite4Unity3d.SQLiteConnection/TraceHandler
struct TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F;
// SQLite4Unity3d.TableMapping/<>c
struct U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A;
// SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96;
// SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278;
// SQLite4Unity3d.TableMapping/Column
struct Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671;

IL2CPP_EXTERN_C RuntimeClass* Binding_t846C16F3FF76025D82F878E8E00A5894741580FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t76F9611073289221FD689EB9CF04C021C23B2186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC97D118E4BF4DED562658508050671CE052C65B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_tBCF6FD0B3965B1AB3130BD1B60A6B937FCD8EED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral087915F54405AD1B7F0E6ADFE8D41FB99BBC5929;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1AA9B29EF545DBB7671B2694E3D4F830F07300;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE7531317059E346E68D5E40F607A6DDDB9FA57;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0F6D9DBC0488BBFF8777F70B454F11D38CAC5F;
IL2CPP_EXTERN_C String_t* _stringLiteral4B2E822D33FB5518E457261FE7AAFA1B172FDF65;
IL2CPP_EXTERN_C String_t* _stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral6791FD228A8829A89802587131C38934CF0E3A9D;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF9629485339439117D5EB2BD0095D32B266B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F129804295CEE0C04CDF4D55A11D7A4ED8A692A;
IL2CPP_EXTERN_C String_t* _stringLiteral80E7F4E6C02B03699F008F88CF100C4A58F4B1CD;
IL2CPP_EXTERN_C String_t* _stringLiteral83E8CA1BC21F4B77911E28ADCD695A986FAAD8F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1604BA2DF7A8D273C546D03C05252552111513B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC314B19DDFC8FCE377B4A8712813CBE720521F28;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD635CA0E4F85CB7F26A62468F86B37AEADB9D184;
IL2CPP_EXTERN_C String_t* _stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBB6EBD9AA582506BA733281AF7A5F5E65A624F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE237EC436581AFB5F89F4E57554E10B20D85C41D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10;
IL2CPP_EXTERN_C String_t* _stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AFDFF8CF4EECA2CEFFAA76CE1B231800822441;
IL2CPP_EXTERN_C String_t* _stringLiteralF57B369204E09200EF1244FE1DC17C91C4CE8B44;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m6325CE9602A98DA4A975472F98C7910DDE3717FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_m437EBE80131A4CD77D4F0924E3E375284C8A074A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_mC71EC946C5A6FCA3956E91CEFEA6AC53497D8F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m57CC70E85C42987C231D56F3D4CA940C9D6EE660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m42628461F47BB2F46D2F0ED015117BCB0A5965EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51B7F6D3686AE2542AB3B31697069DA12D259BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7BF2A509F39D61CA112B7EAD8999D35EE56D6C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m27A3A30821E452F09439851819E7DA5612C828E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA5F09B5DB35D0EDC340F75E2C9CFB2AE65C81F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9E8FCA661D879A24A1C832D63E9254F4375EA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEFA76239AAE09EB0C4E66AB1ED13E2A8C60EAFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Orm_SqlType_mDCE7980C3A660660D6700F7A4413F090E19959AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreparedSqlLiteInsertCommand_ExecuteNonQuery_mB3C230E1C516704102397C40F4755B5B814C621E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLiteCommand_ExecuteNonQuery_m9E1C1980946214E8C0CB50EC26828EC428435F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLiteCommand_ReadCol_mC92CB5B68FD045C70567CB31BA216D163E211E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m88101F47F990EFC0C85013F09E4E590C2994CEC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m9B9E8F68B952A79B9B6AB52EBA05A8B5B489A931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_InsertColumnsU3Eb__30_0_mC65BE356215F8AC4CC235F9BE4C98C4534B8B937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CFindColumnWithPropertyNameU3Eb__0_mEF298136BF9EE46A93578AF27D572E44CE85D73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CFindColumnU3Eb__0_mFB0F28EB947998D4BE1413D0F0FE9341698AF0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960;

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

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>
struct List_1_tC97D118E4BF4DED562658508050671CE052C65B9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BindingU5BU5D_t2A94383B4742A53987FF83B6CF5943B683970DED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>
struct List_1_t76F9611073289221FD689EB9CF04C021C23B2186  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// SQLite4Unity3d.BaseTableQuery
struct BaseTableQuery_t28D9E3082475EF8E0FC7E8F87FA0174C247BED7D  : public RuntimeObject
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// SQLite4Unity3d.Orm
struct Orm_t0CB9CD2E590819A2FF7A7318E4430A7908DBE8B1  : public RuntimeObject
{
};

// SQLite4Unity3d.SQLite3
struct SQLite3_t901F4323097756296B4D20225DDB1659EFA9ABEC  : public RuntimeObject
{
};

// SQLite4Unity3d.SQLiteConnectionString
struct SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664  : public RuntimeObject
{
	// System.String SQLite4Unity3d.SQLiteConnectionString::<ConnectionString>k__BackingField
	String_t* ___U3CConnectionStringU3Ek__BackingField_0;
	// System.String SQLite4Unity3d.SQLiteConnectionString::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_1;
	// System.Boolean SQLite4Unity3d.SQLiteConnectionString::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// SQLite4Unity3d.TableMapping
struct TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966  : public RuntimeObject
{
	// System.Type SQLite4Unity3d.TableMapping::<MappedType>k__BackingField
	Type_t* ___U3CMappedTypeU3Ek__BackingField_0;
	// System.String SQLite4Unity3d.TableMapping::<TableName>k__BackingField
	String_t* ___U3CTableNameU3Ek__BackingField_1;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::<Columns>k__BackingField
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ___U3CColumnsU3Ek__BackingField_2;
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::<PK>k__BackingField
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___U3CPKU3Ek__BackingField_3;
	// System.String SQLite4Unity3d.TableMapping::<GetByPrimaryKeySql>k__BackingField
	String_t* ___U3CGetByPrimaryKeySqlU3Ek__BackingField_4;
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::_autoPk
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ____autoPk_5;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::_insertColumns
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ____insertColumns_6;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::_insertOrReplaceColumns
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ____insertOrReplaceColumns_7;
	// System.Boolean SQLite4Unity3d.TableMapping::<HasAutoIncPK>k__BackingField
	bool ___U3CHasAutoIncPKU3Ek__BackingField_8;
	// SQLite4Unity3d.PreparedSqlLiteInsertCommand SQLite4Unity3d.TableMapping::_insertCommand
	PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* ____insertCommand_9;
	// System.String SQLite4Unity3d.TableMapping::_insertCommandExtra
	String_t* ____insertCommandExtra_10;
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

// SQLite4Unity3d.BaseTableQuery/Ordering
struct Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826  : public RuntimeObject
{
	// System.String SQLite4Unity3d.BaseTableQuery/Ordering::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_0;
	// System.Boolean SQLite4Unity3d.BaseTableQuery/Ordering::<Ascending>k__BackingField
	bool ___U3CAscendingU3Ek__BackingField_1;
};

// SQLite4Unity3d.SQLiteCommand/Binding
struct Binding_t846C16F3FF76025D82F878E8E00A5894741580FD  : public RuntimeObject
{
	// System.String SQLite4Unity3d.SQLiteCommand/Binding::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Object SQLite4Unity3d.SQLiteCommand/Binding::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
	// System.Int32 SQLite4Unity3d.SQLiteCommand/Binding::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_2;
};

// SQLite4Unity3d.SQLiteConnection/<>c
struct U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81  : public RuntimeObject
{
};

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0
struct U3CU3Ec__DisplayClass105_0_t8E67D00FCA72EDFB9CAB00662760929AAAA2F274  : public RuntimeObject
{
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0::pk
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___pk_0;
	// System.Object SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0::obj
	RuntimeObject* ___obj_1;
};

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0
struct U3CU3Ec__DisplayClass106_0_tCCA41F62B5EA6FC5618E0CC020ADB2165A043E97  : public RuntimeObject
{
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0::<>4__this
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___U3CU3E4__this_2;
};

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t60206737D176DC76F28DCB8EC7DF4E6C06EE5D8A  : public RuntimeObject
{
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0::<>4__this
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___U3CU3E4__this_2;
};

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0
struct U3CU3Ec__DisplayClass96_0_t527EA7B759880603FA94E43D3EFF38F94C04DC91  : public RuntimeObject
{
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::<>4__this
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___U3CU3E4__this_2;
	// System.String SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::extra
	String_t* ___extra_3;
};

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t7DD496E8120D85C5BD65C1D718EBC656A5139846  : public RuntimeObject
{
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::<>4__this
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___U3CU3E4__this_2;
	// System.Type SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::objType
	Type_t* ___objType_3;
};

// SQLite4Unity3d.SQLiteConnection/ColumnInfo
struct ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2  : public RuntimeObject
{
	// System.String SQLite4Unity3d.SQLiteConnection/ColumnInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/ColumnInfo::<notnull>k__BackingField
	int32_t ___U3CnotnullU3Ek__BackingField_1;
};

// SQLite4Unity3d.TableMapping/<>c
struct U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A  : public RuntimeObject
{
};

// SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96  : public RuntimeObject
{
	// System.String SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0::propertyName
	String_t* ___propertyName_0;
};

// SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278  : public RuntimeObject
{
	// System.String SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0::columnName
	String_t* ___columnName_0;
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

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>
struct Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC97D118E4BF4DED562658508050671CE052C65B9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* ____current_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// SQLite4Unity3d.AutoIncrementAttribute
struct AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// SQLite4Unity3d.CollationAttribute
struct CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String SQLite4Unity3d.CollationAttribute::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;
};

// SQLite4Unity3d.ColumnAttribute
struct ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String SQLite4Unity3d.ColumnAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// SQLite4Unity3d.IgnoreAttribute
struct IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// SQLite4Unity3d.IndexedAttribute
struct IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String SQLite4Unity3d.IndexedAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite4Unity3d.IndexedAttribute::<Order>k__BackingField
	int32_t ___U3COrderU3Ek__BackingField_1;
	// System.Boolean SQLite4Unity3d.IndexedAttribute::<Unique>k__BackingField
	bool ___U3CUniqueU3Ek__BackingField_2;
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

// SQLite4Unity3d.MaxLengthAttribute
struct MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 SQLite4Unity3d.MaxLengthAttribute::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// SQLite4Unity3d.NotNullAttribute
struct NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// SQLite4Unity3d.PrimaryKeyAttribute
struct PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// SQLite4Unity3d.TableAttribute
struct TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String SQLite4Unity3d.TableAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// SQLite4Unity3d.SQLiteConnection/IndexInfo
struct IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8 
{
	// System.String SQLite4Unity3d.SQLiteConnection/IndexInfo::IndexName
	String_t* ___IndexName_0;
	// System.String SQLite4Unity3d.SQLiteConnection/IndexInfo::TableName
	String_t* ___TableName_1;
	// System.Boolean SQLite4Unity3d.SQLiteConnection/IndexInfo::Unique
	bool ___Unique_2;
	// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn> SQLite4Unity3d.SQLiteConnection/IndexInfo::Columns
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___Columns_3;
};
// Native definition for P/Invoke marshalling of SQLite4Unity3d.SQLiteConnection/IndexInfo
struct IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_pinvoke
{
	char* ___IndexName_0;
	char* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___Columns_3;
};
// Native definition for COM marshalling of SQLite4Unity3d.SQLiteConnection/IndexInfo
struct IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_com
{
	Il2CppChar* ___IndexName_0;
	Il2CppChar* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___Columns_3;
};

// SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 
{
	// System.Int32 SQLite4Unity3d.SQLiteConnection/IndexedColumn::Order
	int32_t ___Order_0;
	// System.String SQLite4Unity3d.SQLiteConnection/IndexedColumn::ColumnName
	String_t* ___ColumnName_1;
};
// Native definition for P/Invoke marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_pinvoke
{
	int32_t ___Order_0;
	char* ___ColumnName_1;
};
// Native definition for COM marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_com
{
	int32_t ___Order_0;
	Il2CppChar* ___ColumnName_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// SQLite4Unity3d.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6  : public RuntimeObject
{
	// System.Boolean SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_0;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Connection>k__BackingField
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___U3CConnectionU3Ek__BackingField_1;
	// System.String SQLite4Unity3d.PreparedSqlLiteInsertCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_2;
	// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Statement>k__BackingField
	intptr_t ___U3CStatementU3Ek__BackingField_3;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// SQLite4Unity3d.SQLiteCommand
struct SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF  : public RuntimeObject
{
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteCommand::_conn
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ____conn_0;
	// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding> SQLite4Unity3d.SQLiteCommand::_bindings
	List_1_tC97D118E4BF4DED562658508050671CE052C65B9* ____bindings_1;
	// System.String SQLite4Unity3d.SQLiteCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_2;
};

// SQLite4Unity3d.SQLiteConnection
struct SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4  : public RuntimeObject
{
	// System.Boolean SQLite4Unity3d.SQLiteConnection::_open
	bool ____open_0;
	// System.TimeSpan SQLite4Unity3d.SQLiteConnection::_busyTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____busyTimeout_1;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping> SQLite4Unity3d.SQLiteConnection::_mappings
	Dictionary_2_t7EE155547BF85C4842B48F5187C809B9BD49A286* ____mappings_2;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping> SQLite4Unity3d.SQLiteConnection::_tables
	Dictionary_2_t7EE155547BF85C4842B48F5187C809B9BD49A286* ____tables_3;
	// System.Diagnostics.Stopwatch SQLite4Unity3d.SQLiteConnection::_sw
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____sw_4;
	// System.TimeSpan SQLite4Unity3d.SQLiteConnection::_elapsed
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____elapsed_5;
	// System.Int32 SQLite4Unity3d.SQLiteConnection::_transactionDepth
	int32_t ____transactionDepth_6;
	// System.Random SQLite4Unity3d.SQLiteConnection::_rand
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____rand_7;
	// System.IntPtr SQLite4Unity3d.SQLiteConnection::<Handle>k__BackingField
	intptr_t ___U3CHandleU3Ek__BackingField_8;
	// System.String SQLite4Unity3d.SQLiteConnection::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_10;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<Trace>k__BackingField
	bool ___U3CTraceU3Ek__BackingField_12;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<TimeExecution>k__BackingField
	bool ___U3CTimeExecutionU3Ek__BackingField_13;
	// SQLite4Unity3d.SQLiteConnection/TraceHandler SQLite4Unity3d.SQLiteConnection::TraceEvent
	TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* ___TraceEvent_14;
	// SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler SQLite4Unity3d.SQLiteConnection::TimeExecutionEvent
	TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* ___TimeExecutionEvent_15;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_16;
};

// SQLite4Unity3d.UniqueAttribute
struct UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089  : public IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F
{
};

// SQLite4Unity3d.TableMapping/Column
struct Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671  : public RuntimeObject
{
	// System.Reflection.PropertyInfo SQLite4Unity3d.TableMapping/Column::_prop
	PropertyInfo_t* ____prop_0;
	// System.String SQLite4Unity3d.TableMapping/Column::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Type SQLite4Unity3d.TableMapping/Column::<ColumnType>k__BackingField
	Type_t* ___U3CColumnTypeU3Ek__BackingField_2;
	// System.String SQLite4Unity3d.TableMapping/Column::<Collation>k__BackingField
	String_t* ___U3CCollationU3Ek__BackingField_3;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsAutoInc>k__BackingField
	bool ___U3CIsAutoIncU3Ek__BackingField_4;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsAutoGuid>k__BackingField
	bool ___U3CIsAutoGuidU3Ek__BackingField_5;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsPK>k__BackingField
	bool ___U3CIsPKU3Ek__BackingField_6;
	// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping/Column::<Indices>k__BackingField
	RuntimeObject* ___U3CIndicesU3Ek__BackingField_7;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsNullable>k__BackingField
	bool ___U3CIsNullableU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping/Column::<MaxStringLength>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMaxStringLengthU3Ek__BackingField_9;
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

// SQLite4Unity3d.SQLiteException
struct SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE  : public Exception_t
{
	// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLiteException::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_18;
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

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>
struct Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0  : public MulticastDelegate_t
{
};

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>
struct Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// SQLite4Unity3d.NotNullConstraintViolationException
struct NotNullConstraintViolationException_t879E7832BFBEBCFCE0B1902526231D755FA83456  : public SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE
{
	// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.TableMapping/Column> SQLite4Unity3d.NotNullConstraintViolationException::<Columns>k__BackingField
	RuntimeObject* ___U3CColumnsU3Ek__BackingField_19;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler
struct TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1  : public MulticastDelegate_t
{
};

// SQLite4Unity3d.SQLiteConnection/TraceHandler
struct TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F  : public MulticastDelegate_t
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>
struct List_1_tC97D118E4BF4DED562658508050671CE052C65B9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BindingU5BU5D_t2A94383B4742A53987FF83B6CF5943B683970DED* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>

// System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>
struct List_1_t76F9611073289221FD689EB9CF04C021C23B2186_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>

// System.Attribute

// System.Attribute

// SQLite4Unity3d.BaseTableQuery

// SQLite4Unity3d.BaseTableQuery

// System.Text.Encoding
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

// System.Text.Encoding

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// SQLite4Unity3d.Orm

// SQLite4Unity3d.Orm

// SQLite4Unity3d.SQLite3

// SQLite4Unity3d.SQLite3

// SQLite4Unity3d.SQLiteConnectionString

// SQLite4Unity3d.SQLiteConnectionString

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// SQLite4Unity3d.TableMapping

// SQLite4Unity3d.TableMapping

// System.ValueType

// System.ValueType

// SQLite4Unity3d.BaseTableQuery/Ordering

// SQLite4Unity3d.BaseTableQuery/Ordering

// SQLite4Unity3d.SQLiteCommand/Binding

// SQLite4Unity3d.SQLiteCommand/Binding

// SQLite4Unity3d.SQLiteConnection/<>c
struct U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_StaticFields
{
	// SQLite4Unity3d.SQLiteConnection/<>c SQLite4Unity3d.SQLiteConnection/<>c::<>9
	U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* ___U3CU3E9_0;
	// System.Comparison`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn> SQLite4Unity3d.SQLiteConnection/<>c::<>9__60_1
	Comparison_1_tE977BBB4F0CF77771298A262B86AF2AD31187146* ___U3CU3E9__60_1_1;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.SQLiteConnection/<>c::<>9__105_2
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* ___U3CU3E9__105_2_2;
};

// SQLite4Unity3d.SQLiteConnection/<>c

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0

// SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0

// SQLite4Unity3d.SQLiteConnection/ColumnInfo

// SQLite4Unity3d.SQLiteConnection/ColumnInfo

// SQLite4Unity3d.TableMapping/<>c
struct U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields
{
	// SQLite4Unity3d.TableMapping/<>c SQLite4Unity3d.TableMapping/<>c::<>9
	U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* ___U3CU3E9_0;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean> SQLite4Unity3d.TableMapping/<>c::<>9__30_0
	Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* ___U3CU3E9__30_0_1;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.TableMapping/<>c::<>9__38_0
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* ___U3CU3E9__38_0_2;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.TableMapping/<>c::<>9__38_1
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* ___U3CU3E9__38_1_3;
};

// SQLite4Unity3d.TableMapping/<>c

// SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0

// SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0

// SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0

// SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// SQLite4Unity3d.AutoIncrementAttribute

// SQLite4Unity3d.AutoIncrementAttribute

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

// SQLite4Unity3d.CollationAttribute

// SQLite4Unity3d.CollationAttribute

// SQLite4Unity3d.ColumnAttribute

// SQLite4Unity3d.ColumnAttribute

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// SQLite4Unity3d.IgnoreAttribute

// SQLite4Unity3d.IgnoreAttribute

// SQLite4Unity3d.IndexedAttribute

// SQLite4Unity3d.IndexedAttribute

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// SQLite4Unity3d.MaxLengthAttribute

// SQLite4Unity3d.MaxLengthAttribute

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// SQLite4Unity3d.NotNullAttribute

// SQLite4Unity3d.NotNullAttribute

// SQLite4Unity3d.PrimaryKeyAttribute

// SQLite4Unity3d.PrimaryKeyAttribute

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.SByte

// System.SByte

// System.Single

// System.Single

// SQLite4Unity3d.TableAttribute

// SQLite4Unity3d.TableAttribute

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// SQLite4Unity3d.SQLiteConnection/IndexInfo

// SQLite4Unity3d.SQLiteConnection/IndexInfo

// SQLite4Unity3d.SQLiteConnection/IndexedColumn

// SQLite4Unity3d.SQLiteConnection/IndexedColumn

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.DateTimeOffset

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// SQLite4Unity3d.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_StaticFields
{
	// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::NullStatement
	intptr_t ___NullStatement_4;
};

// SQLite4Unity3d.PreparedSqlLiteInsertCommand

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// SQLite4Unity3d.SQLiteCommand
struct SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields
{
	// System.IntPtr SQLite4Unity3d.SQLiteCommand::NegativePointer
	intptr_t ___NegativePointer_3;
};

// SQLite4Unity3d.SQLiteCommand

// SQLite4Unity3d.SQLiteConnection
struct SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4_StaticFields
{
	// System.IntPtr SQLite4Unity3d.SQLiteConnection::NullHandle
	intptr_t ___NullHandle_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SQLite4Unity3d.SQLiteConnection::syncObjects
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___syncObjects_11;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::_preserveDuringLinkMagic
	bool ____preserveDuringLinkMagic_17;
};

// SQLite4Unity3d.SQLiteConnection

// SQLite4Unity3d.UniqueAttribute

// SQLite4Unity3d.UniqueAttribute

// SQLite4Unity3d.TableMapping/Column

// SQLite4Unity3d.TableMapping/Column

// System.MulticastDelegate

// System.MulticastDelegate

// SQLite4Unity3d.SQLiteException

// SQLite4Unity3d.SQLiteException

// System.SystemException

// System.SystemException

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

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>

// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>

// System.AsyncCallback

// System.AsyncCallback

// SQLite4Unity3d.NotNullConstraintViolationException

// SQLite4Unity3d.NotNullConstraintViolationException

// System.NotSupportedException

// System.NotSupportedException

// SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler

// SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler

// SQLite4Unity3d.SQLiteConnection/TraceHandler

// SQLite4Unity3d.SQLiteConnection/TraceHandler
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// SQLite4Unity3d.TableMapping/Column[]
struct ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960  : public RuntimeArray
{
	ALIGN_FIELD (8) Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* m_Items[1];

	inline Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
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
// SQLite4Unity3d.IndexedAttribute[]
struct IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76  : public RuntimeArray
{
	ALIGN_FIELD (8) IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* m_Items[1];

	inline IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.String SQLite4Unity3d.SQLiteConnection/ColumnInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnInfo_get_Name_m58406BCC746124ACF825EC2F71A33EC51EA787E2_inline (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m313E56F7E0112B6C9ED9C8E4FEA00A3A5D5C4E80 (U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.TableMapping/Column::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLiteConnection::Insert(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteConnection_Insert_mB63605D430E8D23EC2BA531AE12220491EFB09CD (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLiteConnection::Insert(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteConnection_Insert_mE3483091067DEF6AADCB8DAFAA2C4D3C4AB84C3F (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, RuntimeObject* ___0_obj, String_t* ___1_extra, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLiteConnection::Insert(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteConnection_Insert_m27C8D61DF252C83AF70E8DAF37713A5F5140DAAC (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, RuntimeObject* ___0_obj, Type_t* ___1_objType, const RuntimeMethod* method) ;
// System.Object SQLite4Unity3d.TableMapping/Column::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Column_GetValue_mC41975E43F1AAF075BC3B67C1BADF8B4B7DEB0EF (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLiteConnection::Update(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteConnection_Update_m56A254715412DE09139E61F8AEF503FDEC1E5212 (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_ConnectionString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_ConnectionString_m86572BCB05C4F3AB9ADB3847FAECFB4B55A97876_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_StoreDateTimeAsTicks(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_StoreDateTimeAsTicks_mE61C0DD29C9985A25FBCDEBF7BF43389C5E69C23_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_DatabasePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_DatabasePath_mE625A3627858ECFC73B7F530C066CE3C83716BC0_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m1BE9470AE2BA2E3BAD9694E4E1B78E19E8212984_inline (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.ColumnAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColumnAttribute_set_Name_mE3122C2539DE916052E72CC9E7971B96234FE023_inline (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.IndexedAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndexedAttribute_set_Name_mC9D9DA8C0FD3BD0CFC098D113AD0C38863EAC898_inline (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.IndexedAttribute::set_Order(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndexedAttribute_set_Order_mBB0C74DD1D10DBBBA79A98C9798E3000312E3C57_inline (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_m536933E83B03CE758EFBEE9F11E4B537DE1E75D6 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_mF5A696DB87387DF433EA71AB7F7DD8739BAAC26A (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, String_t* ___0_name, int32_t ___1_order, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.MaxLengthAttribute::set_Value(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaxLengthAttribute_set_Value_m769CB0382163AFC0547A8237C646995EFA1EBC29_inline (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.CollationAttribute::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollationAttribute_set_Value_m879958EE7A8C28BEE1D60FF7F57DF65736377F0A_inline (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping::set_MappedType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_MappedType_mD0220B466756EA9D6E96E80B7DABDC5136638832_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___0_source, method);
}
// System.Type SQLite4Unity3d.TableMapping::get_MappedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* TableMapping_get_MappedType_mEFC30D7C1A5CA7FE335BD3EA01B759170A16B6FA_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.TableAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m28941E0E3D074B4D9AC32C13886B62B9678EB7C1_inline (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping::set_TableName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_TableName_m74BB32CC2B1F03EB818461E7B8B7608E443D05A5_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>::.ctor()
inline void List_1__ctor_mE9E8FCA661D879A24A1C832D63E9254F4375EA0D (List_1_t76F9611073289221FD689EB9CF04C021C23B2186* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76F9611073289221FD689EB9CF04C021C23B2186*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SQLite4Unity3d.TableMapping/Column::.ctor(System.Reflection.PropertyInfo,SQLite4Unity3d.CreateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column__ctor_m8C177984EBE01667C7E935F00904E889933F18B9 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, PropertyInfo_t* ___0_prop, int32_t ___1_createFlags, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>::Add(T)
inline void List_1_Add_m7BF2A509F39D61CA112B7EAD8999D35EE56D6C8F_inline (List_1_t76F9611073289221FD689EB9CF04C021C23B2186* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76F9611073289221FD689EB9CF04C021C23B2186*, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<SQLite4Unity3d.TableMapping/Column>::ToArray()
inline ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* List_1_ToArray_m27A3A30821E452F09439851819E7DA5612C828E3 (List_1_t76F9611073289221FD689EB9CF04C021C23B2186* __this, const RuntimeMethod* method)
{
	return ((  ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* (*) (List_1_t76F9611073289221FD689EB9CF04C021C23B2186*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void SQLite4Unity3d.TableMapping::set_Columns(SQLite4Unity3d.TableMapping/Column[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_Columns_mB809C3C4C606ABECA6A7C39817E85C49E0580871_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ___0_value, const RuntimeMethod* method) ;
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoInc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsPK()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping::set_PK(SQLite4Unity3d.TableMapping/Column)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_PK_m65E0749BAD788A1FE4087774C2EB2DE22E2DD6F7_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping::set_HasAutoIncPK(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_HasAutoIncPK_m11254701AD04373CFD39137AB076C7735E6F1FF0_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, bool ___0_value, const RuntimeMethod* method) ;
// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::get_PK()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* TableMapping_get_PK_m60262F211F1A2F9C31183BBD63849106D0D2A76E_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.TableMapping::get_TableName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping::set_GetByPrimaryKeySql(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_GetByPrimaryKeySql_m2E681BF7B6CC67FDF742C2F8FC721A23C28A8215_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Type SQLite4Unity3d.TableMapping/Column::get_ColumnType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B (RuntimeObject* ___0_value, Type_t* ___1_conversionType, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_SetValue_m2C03ECE0FF590C829C366FEC3BB3007D1804266E (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_val, const RuntimeMethod* method) ;
// System.Void System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7A4C94ED93BA348E3167A682E87E59364CAFA3D3 (Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<SQLite4Unity3d.TableMapping/Column>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m42628461F47BB2F46D2F0ED015117BCB0A5965EC (RuntimeObject* ___0_source, Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// TSource[] System.Linq.Enumerable::ToArray<SQLite4Unity3d.TableMapping/Column>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m6F38599845F7D4E3276601029322FA31C0665A45 (U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<SQLite4Unity3d.TableMapping/Column>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF (RuntimeObject* ___0_source, Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* ___1_predicate, const RuntimeMethod* method)
{
	return ((  Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* (*) (RuntimeObject*, Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___0_source, ___1_predicate, method);
}
// System.Void SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mC801859216DF994C8CC531ABE5F96D3ED1B322E5 (U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* __this, const RuntimeMethod* method) ;
// SQLite4Unity3d.PreparedSqlLiteInsertCommand SQLite4Unity3d.TableMapping::CreateInsertCommand(SQLite4Unity3d.SQLiteConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* TableMapping_CreateInsertCommand_mD08CD90FEE995D8FBD71DD35E3E192D4A9308BAE (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, String_t* ___1_extra, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_Dispose_mCA54621740609D3A5DC1952524DFCB280474E8C7 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) ;
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_InsertColumns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_InsertColumns_mD397D5E0041FCB77305768E1F09F667CBC8F8195 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<SQLite4Unity3d.TableMapping/Column>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m6325CE9602A98DA4A975472F98C7910DDE3717FF (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.Int32 System.Linq.Enumerable::Count<SQLite4Unity3d.TableMapping/Column>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m57CC70E85C42987C231D56F3D4CA940C9D6EE660 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___0_source, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009 (String_t* ___0_strA, String_t* ___1_strB, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_InsertOrReplaceColumns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_InsertOrReplaceColumns_m475DA34A95A499529056F13599F15A580F187377 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0B92B23BC9DF6F76137D05B5B9ED715E2C576C95 (Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<SQLite4Unity3d.TableMapping/Column,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF (RuntimeObject* ___0_source, Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::.ctor(SQLite4Unity3d.SQLiteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand__ctor_mAC78E6F9CAB8A87FD6340F01B89E74B2303A439D (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_CommandText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_CommandText_mF815B54C9CC7655C4EFD985B018A7F2BCB801D25_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.ColumnAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_Name_m77A6DCA8A8508839AAF308D8A8FAFB0AE02E56B6_inline (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Name_mD882DC58740CE81E425CB2A31F3DCA0F0E50894D_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_ColumnType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_ColumnType_m7CC823907CE0417707286D87E8B09356F56B3684_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.Orm::Collation(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_Collation_mDB9DE76216C8D86506F69A62B055D575FA8AC1B6 (MemberInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_Collation(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Collation_m38950A7B621B26E1445DD71BA8EB25310A9625E2_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.Orm::IsPK(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsPK_mBF1730A4E7ED323706C717DFBC85CE53C37275AC (MemberInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsPK(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsPK_mF1E6B6A586CB5A6C00E2AC6E9BB2C6B431F1BC2C_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.Orm::IsAutoInc(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsAutoInc_m126F84B8548B4EFF57C48A1C31AC1E17748F3185 (MemberInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoGuid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsAutoGuid_mCC042141DA8E2AC6540F48E80C5A56F8E4A9BD3A_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoGuid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsAutoGuid_m57F6E41749A0EA41B0045EAAEA737420D91BFDD6_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoInc(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsAutoInc_mB5E9C07D162A67B47AA22CAD5377FA88FB539957_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.Orm::GetIndices(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Orm_GetIndices_m4296DBD5B13F476E7DB224DFB73E510E0DD9D750 (MemberInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_Indices(System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Indices_m3CE76E6C2C8921D734C9A02DEBE747C2F46675A7_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping/Column::get_Indices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Column_get_Indices_m7031A7B3593A288E9B314065A906D1358FF0580E_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<SQLite4Unity3d.IndexedAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_m437EBE80131A4CD77D4F0924E3E375284C8A074A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.Orm::IsMarkedNotNull(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsMarkedNotNull_m2555E838D4C3CB82B522556F01B44449E6368CF0 (MemberInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsNullable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsNullable_mFFD923C501D7848B8DC14A9B40FB52D729DF8305_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> SQLite4Unity3d.Orm::MaxStringLength(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Orm_MaxStringLength_m6EB8E9A029C0454AA62C8B9FA1B61022A9CDC698 (PropertyInfo_t* ___0_p, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/Column::set_MaxStringLength(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_MaxStringLength_mDFCF47180CF9CB10CFEF5532AF58957C487C4FA1_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.TableMapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC12E53D77D3E4A11ABAAB6191DFDA2079F7E4075 (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.TableMapping/Column::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_PropertyName_mA027B508D4E518B622B97A7AE61B26DDAB5185A4 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.Orm::SqlType(SQLite4Unity3d.TableMapping/Column,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_SqlType_mDCE7980C3A660660D6700F7A4413F090E19959AE (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_p, bool ___1_storeDateTimeAsTicks, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsNullable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsNullable_mBA3EFE8EE8CEB4F11EA0AE63AE30E8E27BF3DF7F_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.TableMapping/Column::get_Collation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Column_get_Collation_mFCB25D7DEC4A917028AD1119B960797354754FE4_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping/Column::get_MaxStringLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Column_get_MaxStringLength_mAAA93C02B5F68450E5EC2E9106BF6EDBEE367FD1_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.CollationAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CollationAttribute_get_Value_m8BBDF28DFA2375F6E36CD0CA758954F6E261DC4D_inline (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<SQLite4Unity3d.IndexedAttribute>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_mC71EC946C5A6FCA3956E91CEFEA6AC53497D8F39 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___0_source, method);
}
// System.Int32 SQLite4Unity3d.MaxLengthAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MaxLengthAttribute_get_Value_m41D0EE4D437B205AAAA56902DB7EFC0176397851_inline (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.Void System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>::.ctor()
inline void List_1__ctor_mA5F09B5DB35D0EDC340F75E2C9CFB2AE65C81F0F (List_1_tC97D118E4BF4DED562658508050671CE052C65B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC97D118E4BF4DED562658508050671CE052C65B9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SQLite4Unity3d.SQLiteCommand::set_CommandText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteCommand_set_CommandText_mE6FE06C0BEFC9971431441AB6A99E7DDFD0F5203_inline (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.SQLiteConnection::get_Trace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SQLiteConnection_get_Trace_mFF9F2DB848A04CF036DD487904E7DF71837855E2_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteConnection::InvokeTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteConnection_InvokeTrace_mC117DE5AF32471170B169B09E3D991B952427E49 (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Object SQLite4Unity3d.SQLiteConnection::get_SyncObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SQLiteConnection_get_SyncObject_mE82D7F8069DEC72A0CDC7119C14222C6D665FED5 (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLiteCommand::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLiteCommand_Prepare_mA2043FB66DB03F52E32B297539A6CE6B11896015 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Step(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Step_m47764101C949500F2E1E61DDAF4BCC215C342950 (intptr_t ___0_stmt, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand::Finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_Finalize_mBB9D4342B1DBFB4D31F6840B8CC48EC596343900 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, intptr_t ___0_stmt, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLiteConnection::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::Changes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Changes_m0CA6C84B391B75B9B89D5115175F51D4B81BCEAC (intptr_t ___0_db, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.SQLite3::GetErrmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5 (intptr_t ___0_db, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLiteException SQLite4Unity3d.SQLiteException::New(SQLite4Unity3d.SQLite3/Result,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920 (int32_t ___0_r, String_t* ___1_message, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLite3/ExtendedResult SQLite4Unity3d.SQLite3::ExtendedErrCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ExtendedErrCode_mE53EAE79412B17719370EA83EF845896409E4E68 (intptr_t ___0_db, const RuntimeMethod* method) ;
// SQLite4Unity3d.NotNullConstraintViolationException SQLite4Unity3d.NotNullConstraintViolationException::New(SQLite4Unity3d.SQLite3/Result,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotNullConstraintViolationException_t879E7832BFBEBCFCE0B1902526231D755FA83456* NotNullConstraintViolationException_New_mCBE6743A22BAE37F13BC97069BD90D5A197E9128 (int32_t ___0_r, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding__ctor_m13CB4B80C3F97D812D6E871A671E2EADC50DDEDB (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Name_m6605B567612DDFD3FA9FC4557DD0F03ABE7698F8_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Value_m63DB4E8880807D0480D3ED195430FE33717FBAD0_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>::Add(T)
inline void List_1_Add_m51B7F6D3686AE2542AB3B31697069DA12D259BA4_inline (List_1_tC97D118E4BF4DED562658508050671CE052C65B9* __this, Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC97D118E4BF4DED562658508050671CE052C65B9*, Binding_t846C16F3FF76025D82F878E8E00A5894741580FD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void SQLite4Unity3d.SQLiteCommand::Bind(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_Bind_mCA6324D7AC057A0934CB8FFA830AD6946E08456E (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, String_t* ___0_name, RuntimeObject* ___1_val, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>::get_Count()
inline int32_t List_1_get_Count_mEFA76239AAE09EB0C4E66AB1ED13E2A8C60EAFC2_inline (List_1_tC97D118E4BF4DED562658508050671CE052C65B9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC97D118E4BF4DED562658508050671CE052C65B9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String SQLite4Unity3d.SQLiteCommand::get_CommandText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SQLiteCommand_get_CommandText_mC5B929462D924D4197466FFF1EFBA48B06A6EE12_inline (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>::GetEnumerator()
inline Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F (List_1_tC97D118E4BF4DED562658508050671CE052C65B9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 (*) (List_1_tC97D118E4BF4DED562658508050671CE052C65B9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>::Dispose()
inline void Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>::get_Current()
inline Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_inline (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702* __this, const RuntimeMethod* method)
{
	return ((  Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* (*) (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Object SQLite4Unity3d.SQLiteCommand/Binding::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Binding_get_Value_mC2E67931562F6A62D66038EBEA50BA9395C77785_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteCommand/Binding>::MoveNext()
inline bool Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344 (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLite3::Prepare2(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2 (intptr_t ___0_db, String_t* ___1_query, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand::BindAll(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_BindAll_m611A3B2A51B3D4F0FC695575AC92570671DCE270 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, intptr_t ___0_stmt, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Finalize_m109856BC23FA51D5AE62948F98C9381A9EA08CAC (intptr_t ___0_stmt, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.SQLiteCommand/Binding::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Binding_get_Name_m36460244708DECF7462EC96985049395A01BEE4F_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindParameterIndex(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindParameterIndex_m7E9EAA9E6291ADD9991140E8B9DD82A3AEBCA572 (intptr_t ___0_stmt, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Index_mD5F67E97A91ED368AF1055F65734E8FA474C3AB1_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLiteCommand/Binding::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_Index_m5456E8E974EFC63C021CCF2AD8FC8036E8AA2C91_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.SQLiteConnection::get_StoreDateTimeAsTicks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SQLiteConnection_get_StoreDateTimeAsTicks_m4F0D2FE9AD61981FA554273C956E335B1C1F9929_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.SQLiteCommand::BindParameter(System.IntPtr,System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB (intptr_t ___0_stmt, int32_t ___1_index, RuntimeObject* ___2_value, bool ___3_storeDateTimeAsTicks, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindNull(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindNull_m9C7AB23E02A0AF38C0ECEE46561509A7BD54862F (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindInt(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3 (intptr_t ___0_stmt, int32_t ___1_index, int32_t ___2_val, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindText(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindText_mEDC93F5CA420D62CE61DC2624453A3C76670056A (intptr_t ___0_stmt, int32_t ___1_index, String_t* ___2_val, int32_t ___3_n, intptr_t ___4_free, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindInt64(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E (intptr_t ___0_stmt, int32_t ___1_index, int64_t ___2_val, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindDouble(System.IntPtr,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindDouble_mEDD937BE65B3E374F9AFCDA8D482F9F1292C4290 (intptr_t ___0_stmt, int32_t ___1_index, double ___2_val, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Int64 System.DateTimeOffset::get_UtcTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeOffset_get_UtcTicks_mADA0A7B073B9AD2DC81ABC3343382567119D4705 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::BindBlob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindBlob_mECFD37EFD7AE1CE6A7B5A63D630CC1E15CF1206A (intptr_t ___0_stmt, int32_t ___1_index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_val, int32_t ___3_n, intptr_t ___4_free, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.SQLite3::ColumnString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_ColumnString_mC7495ED684AF170F31724D26EF5BB4EBA78E0E94 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::ColumnInt(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Double SQLite4Unity3d.SQLite3::ColumnDouble(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SQLite3_ColumnDouble_mE4F9CDF44BEF62E61DB8EDB332865923E7B17A7B (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int64 SQLite4Unity3d.SQLite3::ColumnInt64(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___0_ticks, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_m81DCBFF0B9D7029AD6B8B80EA4CB8846387DFB9A (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, int64_t ___0_ticks, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Explicit_mC97457D67812EF62FBEC4E9C07E5DCFACAA1FE66 (double ___0_value, const RuntimeMethod* method) ;
// System.Byte[] SQLite4Unity3d.SQLite3::ColumnByteArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SQLite3_ColumnByteArray_m09025DD6AB983E61366EFCB4F1500F7EA24CEC5E (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___0_g, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Connection(SQLite4Unity3d.SQLiteConnection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Connection_mCCBE4206E6F940C3762DDF7EC4E7C75174145E23_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_value, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Connection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) ;
// System.String SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_CommandText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PreparedSqlLiteInsertCommand_get_CommandText_m1774FAC339AF3EE7649470C4F02912EFED8E9214_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) ;
// System.Boolean SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PreparedSqlLiteInsertCommand_get_Initialized_mCA24A887ADAD977158DC4E161DC05D6A0041703B_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Statement(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Statement_mC87A23AD8B6856E34DC7B2020EA0188AFA737D07_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Initialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Initialized_mEE003DDBDE4E99119A83428683D170BBB556ADAB_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Statement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E (intptr_t ___0_stmt, const RuntimeMethod* method) ;
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_Dispose_m520FE32389F4CCEFB755F387EEDD744E73B3CC6D (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Prepare2(System.IntPtr,System.String,System.Int32,System.IntPtr&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Prepare2_m5531D11AAAEFE4C51DB0CF750D4D073930A58019 (intptr_t ___0_db, String_t* ___1_sql, int32_t ___2_numBytes, intptr_t* ___3_stmt, intptr_t ___4_pzTail, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLite3::Errmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_Errmsg_m6FE2B877839224BC999C20A5D835A6B1103EBD2A (intptr_t ___0_db, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnName16Internal(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnName16Internal_m296D10EEB4C133C71292AD9AD27E6032C9E5D760 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnText16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnText16_m17C0B6B852576E3369DBF3C8C8F1BA3D7C002254 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 SQLite4Unity3d.SQLite3::ColumnBytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnBytes_m79D6917064332E241C14666AC5E17E07782A554B (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnBlob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnBlob_mB0E992DF4C8C119993796A69B160153D91688D35 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open(char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open_v2(char*, intptr_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open16(Il2CppChar*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_enable_load_extension(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_shutdown();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_config(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_win32_set_directory(uint32_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_busy_timeout(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_changes(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_prepare_v2(intptr_t, char*, int32_t, intptr_t*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_step(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_reset(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_finalize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_last_insert_rowid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_errmsg16(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_parameter_index(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_null(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int64(intptr_t, int32_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_double(intptr_t, int32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text16(intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_blob(intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_type(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_int(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_column_int64(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_column_double(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_blob(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_bytes(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_extended_errcode(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_libversion_number();
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_Multicast(TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* currentDelegate = reinterpret_cast<TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenInst(TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenStatic(TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenStaticInvoker(TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_ClosedStaticInvoker(TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F (TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void SQLite4Unity3d.SQLiteConnection/TraceHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceHandler__ctor_mB5AD602EF2E69BA74DA2B3231271A978628B2CE4 (TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316_Multicast;
}
// System.Void SQLite4Unity3d.SQLiteConnection/TraceHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceHandler_Invoke_m8E86FA4E2BD373DEECB483F6D9414BDA8467D316 (TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLite4Unity3d.SQLiteConnection/TraceHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TraceHandler_BeginInvoke_m79AF874B596A36E880B2AA5E1151F7119EC88157 (TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void SQLite4Unity3d.SQLiteConnection/TraceHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceHandler_EndInvoke_m65DF6EDB5346805320752D78FE5B0594B62711B0 (TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_Multicast(TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* currentDelegate = reinterpret_cast<TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_executionTime, ___1_totalExecutionTime, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_OpenInst(TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_executionTime, ___1_totalExecutionTime, method);
}
void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_OpenStatic(TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_executionTime, ___1_totalExecutionTime, method);
}
void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_OpenStaticInvoker(TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	InvokerActionInvoker2< TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(__this->___method_ptr_0, method, NULL, ___0_executionTime, ___1_totalExecutionTime);
}
void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_ClosedStaticInvoker(TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_executionTime, ___1_totalExecutionTime);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1 (TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_executionTime, ___1_totalExecutionTime);

}
// System.Void SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeExecutionHandler__ctor_m4B1EBC347B6CB67A35A4B3FB27048E9E55D4B3FA (TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977_Multicast;
}
// System.Void SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler::Invoke(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeExecutionHandler_Invoke_m850DD21DF5D0F96F054397CA0DE3399C46C88977 (TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_executionTime, ___1_totalExecutionTime, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler::BeginInvoke(System.TimeSpan,System.TimeSpan,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeExecutionHandler_BeginInvoke_m58F1992D8E71C4390C1D82B5C2F6666E9325DCC3 (TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_executionTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_totalExecutionTime, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &___0_executionTime);
	__d_args[1] = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &___1_totalExecutionTime);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void SQLite4Unity3d.SQLiteConnection/TimeExecutionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeExecutionHandler_EndInvoke_m4ECC9C0308AFCDBC005E27480D7F69590FA6CB87 (TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SQLite4Unity3d.SQLiteConnection/IndexedColumn
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke(const IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813& unmarshaled, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_pinvoke& marshaled)
{
	marshaled.___Order_0 = unmarshaled.___Order_0;
	marshaled.___ColumnName_1 = il2cpp_codegen_marshal_string(unmarshaled.___ColumnName_1);
}
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_back(const IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_pinvoke& marshaled, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813& unmarshaled)
{
	int32_t unmarshaledOrder_temp_0 = 0;
	unmarshaledOrder_temp_0 = marshaled.___Order_0;
	unmarshaled.___Order_0 = unmarshaledOrder_temp_0;
	unmarshaled.___ColumnName_1 = il2cpp_codegen_marshal_string_result(marshaled.___ColumnName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ColumnName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ColumnName_1));
}
// Conversion method for clean up from marshalling of: SQLite4Unity3d.SQLiteConnection/IndexedColumn
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_cleanup(IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ColumnName_1);
	marshaled.___ColumnName_1 = NULL;
}
// Conversion methods for marshalling of: SQLite4Unity3d.SQLiteConnection/IndexedColumn
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_com(const IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813& unmarshaled, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_com& marshaled)
{
	marshaled.___Order_0 = unmarshaled.___Order_0;
	marshaled.___ColumnName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ColumnName_1);
}
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_com_back(const IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_com& marshaled, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813& unmarshaled)
{
	int32_t unmarshaledOrder_temp_0 = 0;
	unmarshaledOrder_temp_0 = marshaled.___Order_0;
	unmarshaled.___Order_0 = unmarshaledOrder_temp_0;
	unmarshaled.___ColumnName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ColumnName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ColumnName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ColumnName_1));
}
// Conversion method for clean up from marshalling of: SQLite4Unity3d.SQLiteConnection/IndexedColumn
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_com_cleanup(IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ColumnName_1);
	marshaled.___ColumnName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SQLite4Unity3d.SQLiteConnection/IndexInfo
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke(const IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8& unmarshaled, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Columns_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Columns' of type 'IndexInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Columns_3Exception, NULL);
}
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_back(const IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_pinvoke& marshaled, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8& unmarshaled)
{
	Exception_t* ___Columns_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Columns' of type 'IndexInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Columns_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: SQLite4Unity3d.SQLiteConnection/IndexInfo
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_cleanup(IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SQLite4Unity3d.SQLiteConnection/IndexInfo
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_com(const IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8& unmarshaled, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_com& marshaled)
{
	Exception_t* ___Columns_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Columns' of type 'IndexInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Columns_3Exception, NULL);
}
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_com_back(const IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_com& marshaled, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8& unmarshaled)
{
	Exception_t* ___Columns_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Columns' of type 'IndexInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Columns_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: SQLite4Unity3d.SQLiteConnection/IndexInfo
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_com_cleanup(IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshaled_com& marshaled)
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
// System.String SQLite4Unity3d.SQLiteConnection/ColumnInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColumnInfo_get_Name_m58406BCC746124ACF825EC2F71A33EC51EA787E2 (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/ColumnInfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnInfo_set_Name_mEAB01B2C4036920F552D161024D39EA8ABEC4E30 (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 SQLite4Unity3d.SQLiteConnection/ColumnInfo::get_notnull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColumnInfo_get_notnull_m9235EC7BCF9972BE205E6DBDDD779F5D9F57793E (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) 
{
	{
		// public int notnull { get; set; }
		int32_t L_0 = __this->___U3CnotnullU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/ColumnInfo::set_notnull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnInfo_set_notnull_m8F12A793A394E9CC6C60DC0C801B206B997C4320 (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int notnull { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CnotnullU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String SQLite4Unity3d.SQLiteConnection/ColumnInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColumnInfo_ToString_m0B6AAD03107CA9A6F833FD859BC952844596A73B (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Name;
		String_t* L_0;
		L_0 = ColumnInfo_get_Name_m58406BCC746124ACF825EC2F71A33EC51EA787E2_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/ColumnInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnInfo__ctor_mBC11D4A3290354C03D77431E67ABDD6653799516 (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) 
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB93FF7EEAFA85240352AD7F57D4DA2A9C13590D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* L_0 = (U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81*)il2cpp_codegen_object_new(U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m313E56F7E0112B6C9ED9C8E4FEA00A3A5D5C4E80(L_0, NULL);
		((U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m313E56F7E0112B6C9ED9C8E4FEA00A3A5D5C4E80 (U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SQLite4Unity3d.SQLiteConnection/<>c::<CreateTable>b__60_1(SQLite4Unity3d.SQLiteConnection/IndexedColumn,SQLite4Unity3d.SQLiteConnection/IndexedColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreateTableU3Eb__60_1_m3F48E90E5E0CE5941E5D1896D9C0D6440C62B139 (U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* __this, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 ___0_lhs, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return lhs.Order - rhs.Order;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_0 = ___0_lhs;
		int32_t L_1 = L_0.___Order_0;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_2 = ___1_rhs;
		int32_t L_3 = L_2.___Order_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		goto IL_0011;
	}

IL_0011:
	{
		// });
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String SQLite4Unity3d.SQLiteConnection/<>c::<Update>b__105_2(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUpdateU3Eb__105_2_mA2CB6A7DAAD2ECE5C417869FFF2652D2379A1B6C (U3CU3Ec_t3003A0284D9289722D32F9D0189CACFC3CF56B81* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral087915F54405AD1B7F0E6ADFE8D41FB99BBC5929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select "\"" + c.Name + "\" = ? ").ToArray ()), pk.Name);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_1, _stringLiteral087915F54405AD1B7F0E6ADFE8D41FB99BBC5929, NULL);
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0__ctor_m175301C3C2F61E851B1E1689A82C28F12A3F801F (U3CU3Ec__DisplayClass95_0_t60206737D176DC76F28DCB8EC7DF4E6C06EE5D8A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass95_0::<InsertAll>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0_U3CInsertAllU3Eb__0_m1C426B4058363C24150D1167440BC7D06D54E563 (U3CU3Ec__DisplayClass95_0_t60206737D176DC76F28DCB8EC7DF4E6C06EE5D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (var r in objects) {
		RuntimeObject* L_0 = __this->___objects_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0010_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// c += Insert (r);
				int32_t L_7 = __this->___c_1;
				SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_8 = __this->___U3CU3E4__this_2;
				RuntimeObject* L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10;
				L_10 = SQLiteConnection_Insert_mB63605D430E8D23EC2BA531AE12220491EFB09CD(L_8, L_9, NULL);
				__this->___c_1 = ((int32_t)il2cpp_codegen_add(L_7, L_10));
			}

IL_0032_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// });
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0__ctor_m945A63A7A70654D3F0270FBBF7C9992A6D4A89F4 (U3CU3Ec__DisplayClass96_0_t527EA7B759880603FA94E43D3EFF38F94C04DC91* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass96_0::<InsertAll>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0_U3CInsertAllU3Eb__0_mC82BF8711EBC5CF454AE2DA81AB28E71964801DB (U3CU3Ec__DisplayClass96_0_t527EA7B759880603FA94E43D3EFF38F94C04DC91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (var r in objects) {
		RuntimeObject* L_0 = __this->___objects_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0010_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// c += Insert (r, extra);
				int32_t L_7 = __this->___c_1;
				SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_8 = __this->___U3CU3E4__this_2;
				RuntimeObject* L_9 = V_1;
				String_t* L_10 = __this->___extra_3;
				NullCheck(L_8);
				int32_t L_11;
				L_11 = SQLiteConnection_Insert_mE3483091067DEF6AADCB8DAFAA2C4D3C4AB84C3F(L_8, L_9, L_10, NULL);
				__this->___c_1 = ((int32_t)il2cpp_codegen_add(L_7, L_11));
			}

IL_0038_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// });
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0__ctor_m211A9713964056959F85ADDB01B686417AE00C98 (U3CU3Ec__DisplayClass97_0_t7DD496E8120D85C5BD65C1D718EBC656A5139846* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass97_0::<InsertAll>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0_U3CInsertAllU3Eb__0_mB6AADEDB828DE54812679E3B2080B28F149045D8 (U3CU3Ec__DisplayClass97_0_t7DD496E8120D85C5BD65C1D718EBC656A5139846* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (var r in objects) {
		RuntimeObject* L_0 = __this->___objects_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0010_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// c += Insert (r, objType);
				int32_t L_7 = __this->___c_1;
				SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_8 = __this->___U3CU3E4__this_2;
				RuntimeObject* L_9 = V_1;
				Type_t* L_10 = __this->___objType_3;
				NullCheck(L_8);
				int32_t L_11;
				L_11 = SQLiteConnection_Insert_m27C8D61DF252C83AF70E8DAF37713A5F5140DAAC(L_8, L_9, L_10, NULL);
				__this->___c_1 = ((int32_t)il2cpp_codegen_add(L_7, L_11));
			}

IL_0038_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// });
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass105_0__ctor_mFA3AF3418D81955B1925B5A11011D8330BC73426 (U3CU3Ec__DisplayClass105_0_t8E67D00FCA72EDFB9CAB00662760929AAAA2F274* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0::<Update>b__0(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass105_0_U3CUpdateU3Eb__0_m9B8590A6566FDA98D2730B17A5E79D4CDCBA0EB6 (U3CU3Ec__DisplayClass105_0_t8E67D00FCA72EDFB9CAB00662760929AAAA2F274* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_p, const RuntimeMethod* method) 
{
	{
		// where p != pk
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_p;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_1 = __this->___pk_0;
		return (bool)((((int32_t)((((RuntimeObject*)(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)L_0) == ((RuntimeObject*)(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass105_0::<Update>b__1(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass105_0_U3CUpdateU3Eb__1_m93B1377F565A7DEECE77B4E10C2D25DFD66DABD8 (U3CU3Ec__DisplayClass105_0_t8E67D00FCA72EDFB9CAB00662760929AAAA2F274* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	{
		// select c.GetValue (obj);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		RuntimeObject* L_1 = __this->___obj_1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Column_GetValue_mC41975E43F1AAF075BC3B67C1BADF8B4B7DEB0EF(L_0, L_1, NULL);
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
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass106_0__ctor_mDC49846B1FB1F2C29A65448AE311F0D9B50F0256 (U3CU3Ec__DisplayClass106_0_tCCA41F62B5EA6FC5618E0CC020ADB2165A043E97* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnection/<>c__DisplayClass106_0::<UpdateAll>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass106_0_U3CUpdateAllU3Eb__0_m619957A15739A6DE1D4D53156221EEFEE5D5011B (U3CU3Ec__DisplayClass106_0_tCCA41F62B5EA6FC5618E0CC020ADB2165A043E97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (var r in objects) {
		RuntimeObject* L_0 = __this->___objects_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0010_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// c += Update (r);
				int32_t L_7 = __this->___c_1;
				SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_8 = __this->___U3CU3E4__this_2;
				RuntimeObject* L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10;
				L_10 = SQLiteConnection_Update_m56A254715412DE09139E61F8AEF503FDEC1E5212(L_8, L_9, NULL);
				__this->___c_1 = ((int32_t)il2cpp_codegen_add(L_7, L_10));
			}

IL_0032_1:
			{
				// foreach (var r in objects) {
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// });
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
// System.String SQLite4Unity3d.SQLiteConnectionString::get_ConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteConnectionString_get_ConnectionString_m2EA2380E5D4DFE0202BA63DC16075E330925BC6B (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, const RuntimeMethod* method) 
{
	{
		// public string ConnectionString { get; private set; }
		String_t* L_0 = __this->___U3CConnectionStringU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_ConnectionString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_ConnectionString_m86572BCB05C4F3AB9ADB3847FAECFB4B55A97876 (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ConnectionString { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CConnectionStringU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConnectionStringU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.SQLiteConnectionString::get_DatabasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteConnectionString_get_DatabasePath_m2D747D91AD882B1B0AFD68D6C6D27CA8741560C3 (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, const RuntimeMethod* method) 
{
	{
		// public string DatabasePath { get; private set; }
		String_t* L_0 = __this->___U3CDatabasePathU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_DatabasePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_DatabasePath_mE625A3627858ECFC73B7F530C066CE3C83716BC0 (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DatabasePath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDatabasePathU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabasePathU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.SQLiteConnectionString::get_StoreDateTimeAsTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteConnectionString_get_StoreDateTimeAsTicks_m7AEE221792DEC2B3BC981FDEE516B58E2410CE9D (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, const RuntimeMethod* method) 
{
	{
		// public bool StoreDateTimeAsTicks { get; private set; }
		bool L_0 = __this->___U3CStoreDateTimeAsTicksU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnectionString::set_StoreDateTimeAsTicks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_StoreDateTimeAsTicks_mE61C0DD29C9985A25FBCDEBF7BF43389C5E69C23 (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool StoreDateTimeAsTicks { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CStoreDateTimeAsTicksU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteConnectionString::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteConnectionString__ctor_m6F801F49429561BA08DF50ED0963E55A09ECF740 (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_databasePath, bool ___1_storeDateTimeAsTicks, const RuntimeMethod* method) 
{
	{
		// public SQLiteConnectionString (string databasePath, bool storeDateTimeAsTicks)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ConnectionString = databasePath;
		String_t* L_0 = ___0_databasePath;
		SQLiteConnectionString_set_ConnectionString_m86572BCB05C4F3AB9ADB3847FAECFB4B55A97876_inline(__this, L_0, NULL);
		// StoreDateTimeAsTicks = storeDateTimeAsTicks;
		bool L_1 = ___1_storeDateTimeAsTicks;
		SQLiteConnectionString_set_StoreDateTimeAsTicks_mE61C0DD29C9985A25FBCDEBF7BF43389C5E69C23_inline(__this, L_1, NULL);
		// DatabasePath = databasePath;
		String_t* L_2 = ___0_databasePath;
		SQLiteConnectionString_set_DatabasePath_mE625A3627858ECFC73B7F530C066CE3C83716BC0_inline(__this, L_2, NULL);
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
// System.String SQLite4Unity3d.TableAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m28941E0E3D074B4D9AC32C13886B62B9678EB7C1 (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m1BE9470AE2BA2E3BAD9694E4E1B78E19E8212984 (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.TableAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAttribute__ctor_m7F0937483FE57EAFC6551F053052D3884C894DA4 (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public TableAttribute (string name)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		TableAttribute_set_Name_m1BE9470AE2BA2E3BAD9694E4E1B78E19E8212984_inline(__this, L_0, NULL);
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
// System.String SQLite4Unity3d.ColumnAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_Name_m77A6DCA8A8508839AAF308D8A8FAFB0AE02E56B6 (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.ColumnAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnAttribute_set_Name_mE3122C2539DE916052E72CC9E7971B96234FE023 (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.ColumnAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnAttribute__ctor_m8F096173B17D0873E1F18AEB03159F1AC70D6D73 (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public ColumnAttribute (string name)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		ColumnAttribute_set_Name_mE3122C2539DE916052E72CC9E7971B96234FE023_inline(__this, L_0, NULL);
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
// System.Void SQLite4Unity3d.PrimaryKeyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryKeyAttribute__ctor_m1B5ABDB6CFD05EE382AE4FECBC285A685A322FCE (PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void SQLite4Unity3d.AutoIncrementAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoIncrementAttribute__ctor_mD3B084DE7A762DCB582705486B57A39F1CFDFC38 (AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.String SQLite4Unity3d.IndexedAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IndexedAttribute_get_Name_m0502FBE35D490AD806F760DBBBCD7BD6EF916267 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.IndexedAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute_set_Name_mC9D9DA8C0FD3BD0CFC098D113AD0C38863EAC898 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 SQLite4Unity3d.IndexedAttribute::get_Order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedAttribute_get_Order_m629769800888BE772C43501B9C7C82B62804A85B (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, const RuntimeMethod* method) 
{
	{
		// public int Order { get; set; }
		int32_t L_0 = __this->___U3COrderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.IndexedAttribute::set_Order(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute_set_Order_mBB0C74DD1D10DBBBA79A98C9798E3000312E3C57 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Order { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3COrderU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean SQLite4Unity3d.IndexedAttribute::get_Unique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedAttribute_get_Unique_m25A846BC2B302CA9A0376B11618C700AA1727034 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool Unique { get; set; }
		bool L_0 = __this->___U3CUniqueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.IndexedAttribute::set_Unique(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute_set_Unique_m30827EC5B7FCDF41A08A91BE3DBB9D809690B031 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public virtual bool Unique { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CUniqueU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_m536933E83B03CE758EFBEE9F11E4B537DE1E75D6 (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, const RuntimeMethod* method) 
{
	{
		// public IndexedAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.IndexedAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedAttribute__ctor_mF5A696DB87387DF433EA71AB7F7DD8739BAAC26A (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, String_t* ___0_name, int32_t ___1_order, const RuntimeMethod* method) 
{
	{
		// public IndexedAttribute(string name, int order)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		IndexedAttribute_set_Name_mC9D9DA8C0FD3BD0CFC098D113AD0C38863EAC898_inline(__this, L_0, NULL);
		// Order = order;
		int32_t L_1 = ___1_order;
		IndexedAttribute_set_Order_mBB0C74DD1D10DBBBA79A98C9798E3000312E3C57_inline(__this, L_1, NULL);
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
// System.Void SQLite4Unity3d.IgnoreAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreAttribute__ctor_mF4FF4FF58C8107CE9A844DEEE162D2CE37258AC7 (IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Boolean SQLite4Unity3d.UniqueAttribute::get_Unique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniqueAttribute_get_Unique_m9C26295FB4E84575B879D5489109E85F8F7EE785 (UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::set_Unique(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute_set_Unique_m1F08B2771DCA98A680A5753B5A63420F0D081DFD (UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { /* throw?  */ }
		return;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute__ctor_mCDAB270D9BDBE539F1DE0D8CE2527E94ECB34068 (UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089* __this, const RuntimeMethod* method) 
{
	{
		// public UniqueAttribute() : base()
		IndexedAttribute__ctor_m536933E83B03CE758EFBEE9F11E4B537DE1E75D6(__this, NULL);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.UniqueAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAttribute__ctor_mA53BC4F63B71FABD52A2B01665505E3EC57D598B (UniqueAttribute_t07585A11D474DA2B91085A538967C34503D33089* __this, String_t* ___0_name, int32_t ___1_order, const RuntimeMethod* method) 
{
	{
		// public UniqueAttribute(string name, int order) : base(name, order)
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_order;
		IndexedAttribute__ctor_mF5A696DB87387DF433EA71AB7F7DD8739BAAC26A(__this, L_0, L_1, NULL);
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
// System.Int32 SQLite4Unity3d.MaxLengthAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaxLengthAttribute_get_Value_m41D0EE4D437B205AAAA56902DB7EFC0176397851 (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, const RuntimeMethod* method) 
{
	{
		// public int Value { get; private set; }
		int32_t L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.MaxLengthAttribute::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxLengthAttribute_set_Value_m769CB0382163AFC0547A8237C646995EFA1EBC29 (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Value { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.MaxLengthAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxLengthAttribute__ctor_mE4E0A4268B04BC5A66A380D893411D7D78514FD1 (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		// public MaxLengthAttribute (int length)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Value = length;
		int32_t L_0 = ___0_length;
		MaxLengthAttribute_set_Value_m769CB0382163AFC0547A8237C646995EFA1EBC29_inline(__this, L_0, NULL);
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
// System.String SQLite4Unity3d.CollationAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollationAttribute_get_Value_m8BBDF28DFA2375F6E36CD0CA758954F6E261DC4D (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, const RuntimeMethod* method) 
{
	{
		// public string Value { get; private set; }
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.CollationAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollationAttribute_set_Value_m879958EE7A8C28BEE1D60FF7F57DF65736377F0A (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Value { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.CollationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollationAttribute__ctor_m74171777F23B90780F7779918B268060020CF7C9 (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, String_t* ___0_collation, const RuntimeMethod* method) 
{
	{
		// public CollationAttribute (string collation)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Value = collation;
		String_t* L_0 = ___0_collation;
		CollationAttribute_set_Value_m879958EE7A8C28BEE1D60FF7F57DF65736377F0A_inline(__this, L_0, NULL);
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
// System.Void SQLite4Unity3d.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m44569D9884F78B44899997D60465826DF8837527 (NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Type SQLite4Unity3d.TableMapping::get_MappedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TableMapping_get_MappedType_mEFC30D7C1A5CA7FE335BD3EA01B759170A16B6FA (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Type MappedType { get; private set; }
		Type_t* L_0 = __this->___U3CMappedTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_MappedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_MappedType_mD0220B466756EA9D6E96E80B7DABDC5136638832 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type MappedType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CMappedTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMappedTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping::get_TableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public string TableName { get; private set; }
		String_t* L_0 = __this->___U3CTableNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_TableName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_TableName_m74BB32CC2B1F03EB818461E7B8B7608E443D05A5 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string TableName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTableNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTableNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_Columns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Column[] Columns { get; private set; }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = __this->___U3CColumnsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_Columns(SQLite4Unity3d.TableMapping/Column[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_Columns_mB809C3C4C606ABECA6A7C39817E85C49E0580871 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Column[] Columns { get; private set; }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = ___0_value;
		__this->___U3CColumnsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::get_PK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* TableMapping_get_PK_m60262F211F1A2F9C31183BBD63849106D0D2A76E (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Column PK { get; private set; }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = __this->___U3CPKU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_PK(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_PK_m65E0749BAD788A1FE4087774C2EB2DE22E2DD6F7 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Column PK { get; private set; }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_value;
		__this->___U3CPKU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPKU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping::get_GetByPrimaryKeySql()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableMapping_get_GetByPrimaryKeySql_m6F97EEA5C4CE0564FA1C4DA9C81CCFD85CD4CEF5 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public string GetByPrimaryKeySql { get; private set; }
		String_t* L_0 = __this->___U3CGetByPrimaryKeySqlU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_GetByPrimaryKeySql(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_GetByPrimaryKeySql_m2E681BF7B6CC67FDF742C2F8FC721A23C28A8215 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string GetByPrimaryKeySql { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGetByPrimaryKeySqlU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetByPrimaryKeySqlU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping::.ctor(System.Type,SQLite4Unity3d.CreateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping__ctor_m0906A126548666E53A39E4599DD45B87A7B0A622 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Type_t* ___0_type, int32_t ___1_createFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7BF2A509F39D61CA112B7EAD8999D35EE56D6C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m27A3A30821E452F09439851819E7DA5612C828E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE9E8FCA661D879A24A1C832D63E9254F4375EA0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t76F9611073289221FD689EB9CF04C021C23B2186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1AA9B29EF545DBB7671B2694E3D4F830F07300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57B369204E09200EF1244FE1DC17C91C4CE8B44);
		s_Il2CppMethodInitialized = true;
	}
	TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	List_1_t76F9611073289221FD689EB9CF04C021C23B2186* V_2 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* V_8 = NULL;
	int32_t V_9 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* G_B2_0 = NULL;
	TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* G_B3_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// public TableMapping(Type type, CreateFlags createFlags = CreateFlags.None)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MappedType = type;
		Type_t* L_0 = ___0_type;
		TableMapping_set_MappedType_mD0220B466756EA9D6E96E80B7DABDC5136638832_inline(__this, L_0, NULL);
		// var tableAttr = (TableAttribute)type.GetCustomAttributes (typeof (TableAttribute), true).FirstOrDefault ();
		Type_t* L_1 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_1, L_3, (bool)1);
		RuntimeObject* L_5;
		L_5 = Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD((RuntimeObject*)L_4, Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_RuntimeMethod_var);
		V_0 = ((TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534*)CastclassClass((RuntimeObject*)L_5, TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534_il2cpp_TypeInfo_var));
		// TableName = tableAttr != null ? tableAttr.Name : MappedType.Name;
		TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* L_6 = V_0;
		G_B1_0 = __this;
		if (L_6)
		{
			G_B2_0 = __this;
			goto IL_003d;
		}
	}
	{
		Type_t* L_7;
		L_7 = TableMapping_get_MappedType_mEFC30D7C1A5CA7FE335BD3EA01B759170A16B6FA_inline(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0043;
	}

IL_003d:
	{
		TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = TableAttribute_get_Name_m28941E0E3D074B4D9AC32C13886B62B9678EB7C1_inline(L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_0043:
	{
		NullCheck(G_B3_1);
		TableMapping_set_TableName_m74BB32CC2B1F03EB818461E7B8B7608E443D05A5_inline(G_B3_1, G_B3_0, NULL);
		// var props = MappedType.GetProperties (BindingFlags.Public | BindingFlags.Instance | BindingFlags.SetProperty);
		Type_t* L_11;
		L_11 = TableMapping_get_MappedType_mEFC30D7C1A5CA7FE335BD3EA01B759170A16B6FA_inline(__this, NULL);
		NullCheck(L_11);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_12;
		L_12 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(106 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_11, ((int32_t)8212));
		V_1 = L_12;
		// var cols = new List<Column> ();
		List_1_t76F9611073289221FD689EB9CF04C021C23B2186* L_13 = (List_1_t76F9611073289221FD689EB9CF04C021C23B2186*)il2cpp_codegen_object_new(List_1_t76F9611073289221FD689EB9CF04C021C23B2186_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_mE9E8FCA661D879A24A1C832D63E9254F4375EA0D(L_13, List_1__ctor_mE9E8FCA661D879A24A1C832D63E9254F4375EA0D_RuntimeMethod_var);
		V_2 = L_13;
		// foreach (var p in props) {
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_14 = V_1;
		V_3 = L_14;
		V_4 = 0;
		goto IL_00b6;
	}

IL_0068:
	{
		// foreach (var p in props) {
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		PropertyInfo_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// var ignore = p.GetCustomAttributes (typeof(IgnoreAttribute), true).Length > 0;
		PropertyInfo_t* L_19 = V_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (IgnoreAttribute_tA2AB36495CD8F5A5828E6F023AD78A693D0694A2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22;
		L_22 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_19, L_21, (bool)1);
		NullCheck(L_22);
		V_6 = (bool)((!(((uint32_t)(((RuntimeArray*)L_22)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		// if (p.CanWrite && !ignore) {
		PropertyInfo_t* L_23 = V_5;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_23);
		if (!L_24)
		{
			goto IL_0097;
		}
	}
	{
		bool L_25 = V_6;
		G_B7_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B7_0 = 0;
	}

IL_0098:
	{
		V_7 = (bool)G_B7_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00af;
		}
	}
	{
		// cols.Add (new Column (p, createFlags));
		List_1_t76F9611073289221FD689EB9CF04C021C23B2186* L_27 = V_2;
		PropertyInfo_t* L_28 = V_5;
		int32_t L_29 = ___1_createFlags;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_30 = (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)il2cpp_codegen_object_new(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Column__ctor_m8C177984EBE01667C7E935F00904E889933F18B9(L_30, L_28, L_29, NULL);
		NullCheck(L_27);
		List_1_Add_m7BF2A509F39D61CA112B7EAD8999D35EE56D6C8F_inline(L_27, L_30, List_1_Add_m7BF2A509F39D61CA112B7EAD8999D35EE56D6C8F_RuntimeMethod_var);
	}

IL_00af:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b6:
	{
		// foreach (var p in props) {
		int32_t L_32 = V_4;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_33 = V_3;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0068;
		}
	}
	{
		// Columns = cols.ToArray ();
		List_1_t76F9611073289221FD689EB9CF04C021C23B2186* L_34 = V_2;
		NullCheck(L_34);
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_35;
		L_35 = List_1_ToArray_m27A3A30821E452F09439851819E7DA5612C828E3(L_34, List_1_ToArray_m27A3A30821E452F09439851819E7DA5612C828E3_RuntimeMethod_var);
		TableMapping_set_Columns_mB809C3C4C606ABECA6A7C39817E85C49E0580871_inline(__this, L_35, NULL);
		// foreach (var c in Columns) {
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_36;
		L_36 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		V_8 = L_36;
		V_9 = 0;
		goto IL_0122;
	}

IL_00d8:
	{
		// foreach (var c in Columns) {
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_37 = V_8;
		int32_t L_38 = V_9;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_10 = L_40;
		// if (c.IsAutoInc && c.IsPK) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_41 = V_10;
		NullCheck(L_41);
		bool L_42;
		L_42 = Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline(L_41, NULL);
		if (!L_42)
		{
			goto IL_00f2;
		}
	}
	{
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_43 = V_10;
		NullCheck(L_43);
		bool L_44;
		L_44 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(L_43, NULL);
		G_B15_0 = ((int32_t)(L_44));
		goto IL_00f3;
	}

IL_00f2:
	{
		G_B15_0 = 0;
	}

IL_00f3:
	{
		V_11 = (bool)G_B15_0;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_0103;
		}
	}
	{
		// _autoPk = c;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_46 = V_10;
		__this->____autoPk_5 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____autoPk_5), (void*)L_46);
	}

IL_0103:
	{
		// if (c.IsPK) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_47 = V_10;
		NullCheck(L_47);
		bool L_48;
		L_48 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(L_47, NULL);
		V_12 = L_48;
		bool L_49 = V_12;
		if (!L_49)
		{
			goto IL_011b;
		}
	}
	{
		// PK = c;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_50 = V_10;
		TableMapping_set_PK_m65E0749BAD788A1FE4087774C2EB2DE22E2DD6F7_inline(__this, L_50, NULL);
	}

IL_011b:
	{
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0122:
	{
		// foreach (var c in Columns) {
		int32_t L_52 = V_9;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_53 = V_8;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00d8;
		}
	}
	{
		// HasAutoIncPK = _autoPk != null;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_54 = __this->____autoPk_5;
		TableMapping_set_HasAutoIncPK_m11254701AD04373CFD39137AB076C7735E6F1FF0_inline(__this, (bool)((!(((RuntimeObject*)(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)L_54) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		// if (PK != null) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_55;
		L_55 = TableMapping_get_PK_m60262F211F1A2F9C31183BBD63849106D0D2A76E_inline(__this, NULL);
		V_13 = (bool)((!(((RuntimeObject*)(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)L_55) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_56 = V_13;
		if (!L_56)
		{
			goto IL_016f;
		}
	}
	{
		// GetByPrimaryKeySql = string.Format ("select * from \"{0}\" where \"{1}\" = ?", TableName, PK.Name);
		String_t* L_57;
		L_57 = TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline(__this, NULL);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_58;
		L_58 = TableMapping_get_PK_m60262F211F1A2F9C31183BBD63849106D0D2A76E_inline(__this, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(L_58, NULL);
		String_t* L_60;
		L_60 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0B1AA9B29EF545DBB7671B2694E3D4F830F07300, L_57, L_59, NULL);
		TableMapping_set_GetByPrimaryKeySql_m2E681BF7B6CC67FDF742C2F8FC721A23C28A8215_inline(__this, L_60, NULL);
		goto IL_0188;
	}

IL_016f:
	{
		// GetByPrimaryKeySql = string.Format ("select * from \"{0}\" limit 1", TableName);
		String_t* L_61;
		L_61 = TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline(__this, NULL);
		String_t* L_62;
		L_62 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF57B369204E09200EF1244FE1DC17C91C4CE8B44, L_61, NULL);
		TableMapping_set_GetByPrimaryKeySql_m2E681BF7B6CC67FDF742C2F8FC721A23C28A8215_inline(__this, L_62, NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping::get_HasAutoIncPK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableMapping_get_HasAutoIncPK_mA730845D302D410182560567262D34419FDBDA65 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasAutoIncPK { get; private set; }
		bool L_0 = __this->___U3CHasAutoIncPKU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping::set_HasAutoIncPK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_set_HasAutoIncPK_m11254701AD04373CFD39137AB076C7735E6F1FF0 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasAutoIncPK { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CHasAutoIncPKU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping::SetAutoIncPK(System.Object,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_SetAutoIncPK_mACCEE4F1548ACC3E6FCB24611E891BE9E03EB468 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, RuntimeObject* ___0_obj, int64_t ___1_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_autoPk != null) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = __this->____autoPk_5;
		V_0 = (bool)((!(((RuntimeObject*)(Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// _autoPk.SetValue (obj, Convert.ChangeType (id, _autoPk.ColumnType, null));
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_2 = __this->____autoPk_5;
		RuntimeObject* L_3 = ___0_obj;
		int64_t L_4 = ___1_id;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_5);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_7 = __this->____autoPk_5;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Convert_ChangeType_m2AA053891B5D1BD5CA7689B72EE5ADC95CD3E14B(L_6, L_8, (RuntimeObject*)NULL, NULL);
		NullCheck(L_2);
		Column_SetValue_m2C03ECE0FF590C829C366FEC3BB3007D1804266E(L_2, L_3, L_9, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_InsertColumns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_InsertColumns_mD397D5E0041FCB77305768E1F09F667CBC8F8195 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m42628461F47BB2F46D2F0ED015117BCB0A5965EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_InsertColumnsU3Eb__30_0_mC65BE356215F8AC4CC235F9BE4C98C4534B8B937_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* V_1 = NULL;
	Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* G_B3_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B3_1 = NULL;
	TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* G_B3_2 = NULL;
	Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* G_B2_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B2_1 = NULL;
	TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* G_B2_2 = NULL;
	{
		// if (_insertColumns == null) {
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = __this->____insertColumns_6;
		V_0 = (bool)((((RuntimeObject*)(ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// _insertColumns = Columns.Where (c => !c.IsAutoInc).ToArray ();
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_2;
		L_2 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_3 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1;
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		G_B2_2 = __this;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			G_B3_2 = __this;
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* L_5 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_6 = (Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*)il2cpp_codegen_object_new(Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m7A4C94ED93BA348E3167A682E87E59364CAFA3D3(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3Cget_InsertColumnsU3Eb__30_0_mC65BE356215F8AC4CC235F9BE4C98C4534B8B937_RuntimeMethod_var), NULL);
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_7 = L_6;
		((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0035:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m42628461F47BB2F46D2F0ED015117BCB0A5965EC((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_Where_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m42628461F47BB2F46D2F0ED015117BCB0A5965EC_RuntimeMethod_var);
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_9;
		L_9 = Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D(L_8, Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D_RuntimeMethod_var);
		NullCheck(G_B3_2);
		G_B3_2->____insertColumns_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_2->____insertColumns_6), (void*)L_9);
	}

IL_0045:
	{
		// return _insertColumns;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_10 = __this->____insertColumns_6;
		V_1 = L_10;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_11 = V_1;
		return L_11;
	}
}
// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::get_InsertOrReplaceColumns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_InsertOrReplaceColumns_m475DA34A95A499529056F13599F15A580F187377 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* V_1 = NULL;
	{
		// if (_insertOrReplaceColumns == null) {
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = __this->____insertOrReplaceColumns_7;
		V_0 = (bool)((((RuntimeObject*)(ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _insertOrReplaceColumns = Columns.ToArray ();
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_2;
		L_2 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_3;
		L_3 = Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D((RuntimeObject*)L_2, Enumerable_ToArray_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m149B3F63C2980C8A6FD61A3621AF4D8FCC34655D_RuntimeMethod_var);
		__this->____insertOrReplaceColumns_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertOrReplaceColumns_7), (void*)L_3);
	}

IL_0021:
	{
		// return _insertOrReplaceColumns;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_4 = __this->____insertOrReplaceColumns_7;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_5 = V_1;
		return L_5;
	}
}
// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::FindColumnWithPropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* TableMapping_FindColumnWithPropertyName_mF4C267C9812693ACA7A48F8FF035932693EFE9F7 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CFindColumnWithPropertyNameU3Eb__0_mEF298136BF9EE46A93578AF27D572E44CE85D73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* V_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* V_1 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* L_0 = (U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_m6F38599845F7D4E3276601029322FA31C0665A45(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* L_1 = V_0;
		String_t* L_2 = ___0_propertyName;
		NullCheck(L_1);
		L_1->___propertyName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyName_0), (void*)L_2);
		// var exact = Columns.FirstOrDefault (c => c.PropertyName == propertyName);
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_3;
		L_3 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* L_4 = V_0;
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_5 = (Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*)il2cpp_codegen_object_new(Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m7A4C94ED93BA348E3167A682E87E59364CAFA3D3(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CFindColumnWithPropertyNameU3Eb__0_mEF298136BF9EE46A93578AF27D572E44CE85D73B_RuntimeMethod_var), NULL);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_6;
		L_6 = Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF((RuntimeObject*)L_3, L_5, Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF_RuntimeMethod_var);
		V_1 = L_6;
		// return exact;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_7 = V_1;
		V_2 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_8 = V_2;
		return L_8;
	}
}
// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::FindColumn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* TableMapping_FindColumn_m5A402637E9E85B65364E7D124D8990966B249A5A (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_columnName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CFindColumnU3Eb__0_mFB0F28EB947998D4BE1413D0F0FE9341698AF0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* V_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* V_1 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* L_0 = (U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_mC801859216DF994C8CC531ABE5F96D3ED1B322E5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* L_1 = V_0;
		String_t* L_2 = ___0_columnName;
		NullCheck(L_1);
		L_1->___columnName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___columnName_0), (void*)L_2);
		// var exact = Columns.FirstOrDefault (c => c.Name == columnName);
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_3;
		L_3 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* L_4 = V_0;
		Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0* L_5 = (Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0*)il2cpp_codegen_object_new(Func_2_t0888294D314FCB3F6B77C82DE782085116AB55E0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m7A4C94ED93BA348E3167A682E87E59364CAFA3D3(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CFindColumnU3Eb__0_mFB0F28EB947998D4BE1413D0F0FE9341698AF0E0_RuntimeMethod_var), NULL);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_6;
		L_6 = Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF((RuntimeObject*)L_3, L_5, Enumerable_FirstOrDefault_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m1EFEE48E19323896E49631EB6B7CE6F197093ADF_RuntimeMethod_var);
		V_1 = L_6;
		// return exact;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_7 = V_1;
		V_2 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_8 = V_2;
		return L_8;
	}
}
// SQLite4Unity3d.PreparedSqlLiteInsertCommand SQLite4Unity3d.TableMapping::GetInsertCommand(SQLite4Unity3d.SQLiteConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* TableMapping_GetInsertCommand_mE2B7EAC929E051BB524A2F1E91E790E03368F385 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, String_t* ___1_extra, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* V_2 = NULL;
	{
		// if (_insertCommand == null) {
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_0 = __this->____insertCommand_9;
		V_0 = (bool)((((RuntimeObject*)(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _insertCommand = CreateInsertCommand(conn, extra);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_2 = ___0_conn;
		String_t* L_3 = ___1_extra;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_4;
		L_4 = TableMapping_CreateInsertCommand_mD08CD90FEE995D8FBD71DD35E3E192D4A9308BAE(__this, L_2, L_3, NULL);
		__this->____insertCommand_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertCommand_9), (void*)L_4);
		// _insertCommandExtra = extra;
		String_t* L_5 = ___1_extra;
		__this->____insertCommandExtra_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertCommandExtra_10), (void*)L_5);
		goto IL_005a;
	}

IL_0027:
	{
		// else if (_insertCommandExtra != extra) {
		String_t* L_6 = __this->____insertCommandExtra_10;
		String_t* L_7 = ___1_extra;
		bool L_8;
		L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// _insertCommand.Dispose();
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_10 = __this->____insertCommand_9;
		NullCheck(L_10);
		PreparedSqlLiteInsertCommand_Dispose_mCA54621740609D3A5DC1952524DFCB280474E8C7(L_10, NULL);
		// _insertCommand = CreateInsertCommand(conn, extra);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_11 = ___0_conn;
		String_t* L_12 = ___1_extra;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_13;
		L_13 = TableMapping_CreateInsertCommand_mD08CD90FEE995D8FBD71DD35E3E192D4A9308BAE(__this, L_11, L_12, NULL);
		__this->____insertCommand_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertCommand_9), (void*)L_13);
		// _insertCommandExtra = extra;
		String_t* L_14 = ___1_extra;
		__this->____insertCommandExtra_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertCommandExtra_10), (void*)L_14);
	}

IL_005a:
	{
		// return _insertCommand;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_15 = __this->____insertCommand_9;
		V_2 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_16 = V_2;
		return L_16;
	}
}
// SQLite4Unity3d.PreparedSqlLiteInsertCommand SQLite4Unity3d.TableMapping::CreateInsertCommand(SQLite4Unity3d.SQLiteConnection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* TableMapping_CreateInsertCommand_mD08CD90FEE995D8FBD71DD35E3E192D4A9308BAE (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, String_t* ___1_extra, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m6325CE9602A98DA4A975472F98C7910DDE3717FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m57CC70E85C42987C231D56F3D4CA940C9D6EE660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m88101F47F990EFC0C85013F09E4E590C2994CEC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m9B9E8F68B952A79B9B6AB52EBA05A8B5B489A931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF9629485339439117D5EB2BD0095D32B266B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E7F4E6C02B03699F008F88CF100C4A58F4B1CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3AFDFF8CF4EECA2CEFFAA76CE1B231800822441);
		s_Il2CppMethodInitialized = true;
	}
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* V_0 = NULL;
	String_t* V_1 = NULL;
	PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* V_6 = NULL;
	int32_t G_B4_0 = 0;
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* G_B10_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	int32_t G_B10_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_5 = NULL;
	String_t* G_B10_6 = NULL;
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* G_B9_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	int32_t G_B9_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_5 = NULL;
	String_t* G_B9_6 = NULL;
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* G_B12_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	int32_t G_B12_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_5 = NULL;
	String_t* G_B12_6 = NULL;
	Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* G_B11_0 = NULL;
	ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	int32_t G_B11_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_5 = NULL;
	String_t* G_B11_6 = NULL;
	{
		// var cols = InsertColumns;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0;
		L_0 = TableMapping_get_InsertColumns_mD397D5E0041FCB77305768E1F09F667CBC8F8195(__this, NULL);
		V_0 = L_0;
		// if (!cols.Any() && Columns.Count() == 1 && Columns[0].IsAutoInc)
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_1 = V_0;
		bool L_2;
		L_2 = Enumerable_Any_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m6325CE9602A98DA4A975472F98C7910DDE3717FF((RuntimeObject*)L_1, Enumerable_Any_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m6325CE9602A98DA4A975472F98C7910DDE3717FF_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_3;
		L_3 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		int32_t L_4;
		L_4 = Enumerable_Count_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m57CC70E85C42987C231D56F3D4CA940C9D6EE660((RuntimeObject*)L_3, Enumerable_Count_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_m57CC70E85C42987C231D56F3D4CA940C9D6EE660_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_5;
		L_5 = TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		bool L_8;
		L_8 = Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline(L_7, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_3 = (bool)G_B4_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// insertSql = string.Format("insert {1} into \"{0}\" default values", TableName, extra);
		String_t* L_10;
		L_10 = TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline(__this, NULL);
		String_t* L_11 = ___1_extra;
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7EF9629485339439117D5EB2BD0095D32B266B7B, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_00fb;
	}

IL_004b:
	{
		// var replacing = string.Compare (extra, "OR REPLACE", StringComparison.OrdinalIgnoreCase) == 0;
		String_t* L_13 = ___1_extra;
		int32_t L_14;
		L_14 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_13, _stringLiteral80E7F4E6C02B03699F008F88CF100C4A58F4B1CD, 5, NULL);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		// if (replacing) {
		bool L_15 = V_4;
		V_5 = L_15;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		// cols = InsertOrReplaceColumns;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_17;
		L_17 = TableMapping_get_InsertOrReplaceColumns_m475DA34A95A499529056F13599F15A580F187377(__this, NULL);
		V_0 = L_17;
	}

IL_006e:
	{
		// insertSql = string.Format("insert {3} into \"{0}\"({1}) values ({2})", TableName,
		//                    string.Join(",", (from c in cols
		//                                      select "\"" + c.Name + "\"").ToArray()),
		//                    string.Join(",", (from c in cols
		//                                      select "?").ToArray()), extra);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		String_t* L_20;
		L_20 = TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline(__this, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_23 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_2;
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_24 = L_23;
		G_B9_0 = L_24;
		G_B9_1 = L_22;
		G_B9_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B9_3 = 1;
		G_B9_4 = L_21;
		G_B9_5 = L_21;
		G_B9_6 = _stringLiteralF3AFDFF8CF4EECA2CEFFAA76CE1B231800822441;
		if (L_24)
		{
			G_B10_0 = L_24;
			G_B10_1 = L_22;
			G_B10_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B10_3 = 1;
			G_B10_4 = L_21;
			G_B10_5 = L_21;
			G_B10_6 = _stringLiteralF3AFDFF8CF4EECA2CEFFAA76CE1B231800822441;
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* L_25 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_26 = (Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF*)il2cpp_codegen_object_new(Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_2__ctor_m0B92B23BC9DF6F76137D05B5B9ED715E2C576C95(L_26, L_25, (intptr_t)((void*)U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m88101F47F990EFC0C85013F09E4E590C2994CEC6_RuntimeMethod_var), NULL);
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_27 = L_26;
		((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_2), (void*)L_27);
		G_B10_0 = L_27;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
		G_B10_6 = G_B9_6;
	}

IL_00a9:
	{
		RuntimeObject* L_28;
		L_28 = Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF((RuntimeObject*)G_B10_1, G_B10_0, Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29;
		L_29 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_28, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_30;
		L_30 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B10_2, L_29, NULL);
		NullCheck(G_B10_4);
		ArrayElementTypeCheck (G_B10_4, L_30);
		(G_B10_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_3), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = G_B10_5;
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_33 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_1_3;
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_34 = L_33;
		G_B11_0 = L_34;
		G_B11_1 = L_32;
		G_B11_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B11_3 = 2;
		G_B11_4 = L_31;
		G_B11_5 = L_31;
		G_B11_6 = G_B10_6;
		if (L_34)
		{
			G_B12_0 = L_34;
			G_B12_1 = L_32;
			G_B12_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B12_3 = 2;
			G_B12_4 = L_31;
			G_B12_5 = L_31;
			G_B12_6 = G_B10_6;
			goto IL_00e0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* L_35 = ((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_36 = (Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF*)il2cpp_codegen_object_new(Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Func_2__ctor_m0B92B23BC9DF6F76137D05B5B9ED715E2C576C95(L_36, L_35, (intptr_t)((void*)U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m9B9E8F68B952A79B9B6AB52EBA05A8B5B489A931_RuntimeMethod_var), NULL);
		Func_2_tC2C8F7DF19D51C9E5D238CD9FA2A496D0402AAAF* L_37 = L_36;
		((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_1_3 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9__38_1_3), (void*)L_37);
		G_B12_0 = L_37;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
		G_B12_5 = G_B11_5;
		G_B12_6 = G_B11_6;
	}

IL_00e0:
	{
		RuntimeObject* L_38;
		L_38 = Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF((RuntimeObject*)G_B12_1, G_B12_0, Enumerable_Select_TisColumn_t564DF88EC1682FE8BFF942CEA00230032EF3D671_TisString_t_mE4568176DBB3B39197A61EDC625575525BBB04FF_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_38, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_40;
		L_40 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B12_2, L_39, NULL);
		NullCheck(G_B12_4);
		ArrayElementTypeCheck (G_B12_4, L_40);
		(G_B12_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_3), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = G_B12_5;
		String_t* L_42 = ___1_extra;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_42);
		String_t* L_43;
		L_43 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B12_6, L_41, NULL);
		V_1 = L_43;
	}

IL_00fb:
	{
		// var insertCommand = new PreparedSqlLiteInsertCommand(conn);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_44 = ___0_conn;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_45 = (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6*)il2cpp_codegen_object_new(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		PreparedSqlLiteInsertCommand__ctor_mAC78E6F9CAB8A87FD6340F01B89E74B2303A439D(L_45, L_44, NULL);
		V_2 = L_45;
		// insertCommand.CommandText = insertSql;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_46 = V_2;
		String_t* L_47 = V_1;
		NullCheck(L_46);
		PreparedSqlLiteInsertCommand_set_CommandText_mF815B54C9CC7655C4EFD985B018A7F2BCB801D25_inline(L_46, L_47, NULL);
		// return insertCommand;
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_48 = V_2;
		V_6 = L_48;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_49 = V_6;
		return L_49;
	}
}
// System.Void SQLite4Unity3d.TableMapping::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMapping_Dispose_m7CB62DC02436FF13F3F28B49836AC0DDA437AFE1 (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_insertCommand != null) {
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_0 = __this->____insertCommand_9;
		V_0 = (bool)((!(((RuntimeObject*)(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _insertCommand.Dispose();
		PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* L_2 = __this->____insertCommand_9;
		NullCheck(L_2);
		PreparedSqlLiteInsertCommand_Dispose_mCA54621740609D3A5DC1952524DFCB280474E8C7(L_2, NULL);
		// _insertCommand = null;
		__this->____insertCommand_9 = (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____insertCommand_9), (void*)(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6*)NULL);
	}

IL_0023:
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
// System.String SQLite4Unity3d.TableMapping/Column::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Name_mD882DC58740CE81E425CB2A31F3DCA0F0E50894D (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping/Column::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_PropertyName_mA027B508D4E518B622B97A7AE61B26DDAB5185A4 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string PropertyName { get { return _prop.Name; } }
		PropertyInfo_t* L_0 = __this->____prop_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public string PropertyName { get { return _prop.Name; } }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Type SQLite4Unity3d.TableMapping/Column::get_ColumnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public Type ColumnType { get; private set; }
		Type_t* L_0 = __this->___U3CColumnTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_ColumnType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_ColumnType_m7CC823907CE0417707286D87E8B09356F56B3684 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ColumnType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CColumnTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.TableMapping/Column::get_Collation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Column_get_Collation_mFCB25D7DEC4A917028AD1119B960797354754FE4 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public string Collation { get; private set; }
		String_t* L_0 = __this->___U3CCollationU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_Collation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Collation_m38950A7B621B26E1445DD71BA8EB25310A9625E2 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Collation { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCollationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCollationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoInc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoInc { get; private set; }
		bool L_0 = __this->___U3CIsAutoIncU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoInc(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoInc_mB5E9C07D162A67B47AA22CAD5377FA88FB539957 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoInc { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsAutoIncU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsAutoGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsAutoGuid_m57F6E41749A0EA41B0045EAAEA737420D91BFDD6 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoGuid { get; private set; }
		bool L_0 = __this->___U3CIsAutoGuidU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsAutoGuid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsAutoGuid_mCC042141DA8E2AC6540F48E80C5A56F8E4A9BD3A (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoGuid { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsAutoGuidU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsPK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPK { get; private set; }
		bool L_0 = __this->___U3CIsPKU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsPK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsPK_mF1E6B6A586CB5A6C00E2AC6E9BB2C6B431F1BC2C (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPK { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsPKU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping/Column::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Column_get_Indices_m7031A7B3593A288E9B314065A906D1358FF0580E (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<IndexedAttribute> Indices { get; set; }
		RuntimeObject* L_0 = __this->___U3CIndicesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_Indices(System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_Indices_m3CE76E6C2C8921D734C9A02DEBE747C2F46675A7 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<IndexedAttribute> Indices { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CIndicesU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIndicesU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/Column::get_IsNullable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Column_get_IsNullable_mBA3EFE8EE8CEB4F11EA0AE63AE30E8E27BF3DF7F (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNullable { get; private set; }
		bool L_0 = __this->___U3CIsNullableU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_IsNullable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_IsNullable_mFFD923C501D7848B8DC14A9B40FB52D729DF8305 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsNullable { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsNullableU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping/Column::get_MaxStringLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Column_get_MaxStringLength_mAAA93C02B5F68450E5EC2E9106BF6EDBEE367FD1 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public int? MaxStringLength { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMaxStringLengthU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::set_MaxStringLength(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_set_MaxStringLength_mDFCF47180CF9CB10CFEF5532AF58957C487C4FA1 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		// public int? MaxStringLength { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CMaxStringLengthU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::.ctor(System.Reflection.PropertyInfo,SQLite4Unity3d.CreateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column__ctor_m8C177984EBE01667C7E935F00904E889933F18B9 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, PropertyInfo_t* ___0_prop, int32_t ___1_createFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_m437EBE80131A4CD77D4F0924E3E375284C8A074A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B2_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B3_1 = NULL;
	Type_t* G_B5_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B5_1 = NULL;
	Type_t* G_B4_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B4_1 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B10_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B6_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B8_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B11_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B19_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B20_1 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B22_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B23_1 = NULL;
	int32_t G_B28_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B32_0 = NULL;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* G_B33_1 = NULL;
	{
		// public Column(PropertyInfo prop, CreateFlags createFlags = CreateFlags.None)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var colAttr = (ColumnAttribute)prop.GetCustomAttributes(typeof(ColumnAttribute), true).FirstOrDefault();
		PropertyInfo_t* L_0 = ___0_prop;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		RuntimeObject* L_4;
		L_4 = Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD((RuntimeObject*)L_3, Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_RuntimeMethod_var);
		V_0 = ((ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4*)CastclassClass((RuntimeObject*)L_4, ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4_il2cpp_TypeInfo_var));
		// _prop = prop;
		PropertyInfo_t* L_5 = ___0_prop;
		__this->____prop_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prop_0), (void*)L_5);
		// Name = colAttr == null ? prop.Name : colAttr.Name;
		ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* L_6 = V_0;
		G_B1_0 = __this;
		if (!L_6)
		{
			G_B2_0 = __this;
			goto IL_0037;
		}
	}
	{
		ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ColumnAttribute_get_Name_m77A6DCA8A8508839AAF308D8A8FAFB0AE02E56B6_inline(L_7, NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_003d;
	}

IL_0037:
	{
		PropertyInfo_t* L_9 = ___0_prop;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_003d:
	{
		NullCheck(G_B3_1);
		Column_set_Name_mD882DC58740CE81E425CB2A31F3DCA0F0E50894D_inline(G_B3_1, G_B3_0, NULL);
		// ColumnType = Nullable.GetUnderlyingType(prop.PropertyType) ?? prop.PropertyType;
		PropertyInfo_t* L_11 = ___0_prop;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_11);
		Type_t* L_13;
		L_13 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_12, NULL);
		Type_t* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = __this;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = __this;
			goto IL_0059;
		}
	}
	{
		PropertyInfo_t* L_15 = ___0_prop;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_15);
		G_B5_0 = L_16;
		G_B5_1 = G_B4_1;
	}

IL_0059:
	{
		NullCheck(G_B5_1);
		Column_set_ColumnType_m7CC823907CE0417707286D87E8B09356F56B3684_inline(G_B5_1, G_B5_0, NULL);
		// Collation = Orm.Collation(prop);
		PropertyInfo_t* L_17 = ___0_prop;
		String_t* L_18;
		L_18 = Orm_Collation_mDB9DE76216C8D86506F69A62B055D575FA8AC1B6(L_17, NULL);
		Column_set_Collation_m38950A7B621B26E1445DD71BA8EB25310A9625E2_inline(__this, L_18, NULL);
		// IsPK = Orm.IsPK(prop) ||
		//     (((createFlags & CreateFlags.ImplicitPK) == CreateFlags.ImplicitPK) &&
		//         string.Compare (prop.Name, Orm.ImplicitPkName, StringComparison.OrdinalIgnoreCase) == 0);
		PropertyInfo_t* L_19 = ___0_prop;
		bool L_20;
		L_20 = Orm_IsPK_mBF1730A4E7ED323706C717DFBC85CE53C37275AC(L_19, NULL);
		G_B6_0 = __this;
		if (L_20)
		{
			G_B10_0 = __this;
			goto IL_0094;
		}
	}
	{
		int32_t L_21 = ___1_createFlags;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&1))) == ((uint32_t)1))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0091;
		}
	}
	{
		PropertyInfo_t* L_22 = ___0_prop;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		int32_t L_24;
		L_24 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_23, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, 5, NULL);
		G_B9_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0092;
	}

IL_0091:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0092:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_0095;
	}

IL_0094:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0095:
	{
		NullCheck(G_B11_1);
		Column_set_IsPK_mF1E6B6A586CB5A6C00E2AC6E9BB2C6B431F1BC2C_inline(G_B11_1, (bool)G_B11_0, NULL);
		// var isAuto = Orm.IsAutoInc(prop) || (IsPK && ((createFlags & CreateFlags.AutoIncPK) == CreateFlags.AutoIncPK));
		PropertyInfo_t* L_25 = ___0_prop;
		bool L_26;
		L_26 = Orm_IsAutoInc_m126F84B8548B4EFF57C48A1C31AC1E17748F3185(L_25, NULL);
		if (L_26)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_27;
		L_27 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_28 = ___1_createFlags;
		G_B15_0 = ((((int32_t)((int32_t)((int32_t)L_28&4))) == ((int32_t)4))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B15_0 = 0;
	}

IL_00b4:
	{
		G_B17_0 = G_B15_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B17_0 = 1;
	}

IL_00b7:
	{
		V_1 = (bool)G_B17_0;
		// IsAutoGuid = isAuto && ColumnType == typeof(Guid);
		bool L_29 = V_1;
		G_B18_0 = __this;
		if (!L_29)
		{
			G_B19_0 = __this;
			goto IL_00d3;
		}
	}
	{
		Type_t* L_30;
		L_30 = Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39_inline(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		G_B20_0 = ((int32_t)(L_33));
		G_B20_1 = G_B18_0;
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B20_0 = 0;
		G_B20_1 = G_B19_0;
	}

IL_00d4:
	{
		NullCheck(G_B20_1);
		Column_set_IsAutoGuid_mCC042141DA8E2AC6540F48E80C5A56F8E4A9BD3A_inline(G_B20_1, (bool)G_B20_0, NULL);
		// IsAutoInc = isAuto && !IsAutoGuid;
		bool L_34 = V_1;
		G_B21_0 = __this;
		if (!L_34)
		{
			G_B22_0 = __this;
			goto IL_00e9;
		}
	}
	{
		bool L_35;
		L_35 = Column_get_IsAutoGuid_m57F6E41749A0EA41B0045EAAEA737420D91BFDD6_inline(__this, NULL);
		G_B23_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		G_B23_1 = G_B21_0;
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
	}

IL_00ea:
	{
		NullCheck(G_B23_1);
		Column_set_IsAutoInc_mB5E9C07D162A67B47AA22CAD5377FA88FB539957_inline(G_B23_1, (bool)G_B23_0, NULL);
		// Indices = Orm.GetIndices(prop);
		PropertyInfo_t* L_36 = ___0_prop;
		RuntimeObject* L_37;
		L_37 = Orm_GetIndices_m4296DBD5B13F476E7DB224DFB73E510E0DD9D750(L_36, NULL);
		Column_set_Indices_m3CE76E6C2C8921D734C9A02DEBE747C2F46675A7_inline(__this, L_37, NULL);
		// if (!Indices.Any()
		//     && !IsPK
		//     && ((createFlags & CreateFlags.ImplicitIndex) == CreateFlags.ImplicitIndex)
		//     && Name.EndsWith (Orm.ImplicitIndexSuffix, StringComparison.OrdinalIgnoreCase)
		//     )
		RuntimeObject* L_38;
		L_38 = Column_get_Indices_m7031A7B3593A288E9B314065A906D1358FF0580E_inline(__this, NULL);
		bool L_39;
		L_39 = Enumerable_Any_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_m437EBE80131A4CD77D4F0924E3E375284C8A074A(L_38, Enumerable_Any_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_m437EBE80131A4CD77D4F0924E3E375284C8A074A_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_012b;
		}
	}
	{
		bool L_40;
		L_40 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(__this, NULL);
		if (L_40)
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_41 = ___1_createFlags;
		if ((!(((uint32_t)((int32_t)((int32_t)L_41&2))) == ((uint32_t)2))))
		{
			goto IL_012b;
		}
	}
	{
		String_t* L_42;
		L_42 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(__this, NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_42, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, 5, NULL);
		G_B28_0 = ((int32_t)(L_43));
		goto IL_012c;
	}

IL_012b:
	{
		G_B28_0 = 0;
	}

IL_012c:
	{
		V_2 = (bool)G_B28_0;
		bool L_44 = V_2;
		if (!L_44)
		{
			goto IL_0147;
		}
	}
	{
		// Indices = new IndexedAttribute[] { new IndexedAttribute() };
		IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76* L_45 = (IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76*)(IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76*)SZArrayNew(IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76_il2cpp_TypeInfo_var, (uint32_t)1);
		IndexedAttributeU5BU5D_tECC9B39A2DA79012572DCCC1AAABAD39250DBA76* L_46 = L_45;
		IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* L_47 = (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F*)il2cpp_codegen_object_new(IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		IndexedAttribute__ctor_m536933E83B03CE758EFBEE9F11E4B537DE1E75D6(L_47, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F*)L_47);
		Column_set_Indices_m3CE76E6C2C8921D734C9A02DEBE747C2F46675A7_inline(__this, (RuntimeObject*)L_46, NULL);
	}

IL_0147:
	{
		// IsNullable = !(IsPK || Orm.IsMarkedNotNull(prop));
		bool L_48;
		L_48 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(__this, NULL);
		G_B31_0 = __this;
		if (L_48)
		{
			G_B32_0 = __this;
			goto IL_015b;
		}
	}
	{
		PropertyInfo_t* L_49 = ___0_prop;
		bool L_50;
		L_50 = Orm_IsMarkedNotNull_m2555E838D4C3CB82B522556F01B44449E6368CF0(L_49, NULL);
		G_B33_0 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		G_B33_1 = G_B31_0;
		goto IL_015c;
	}

IL_015b:
	{
		G_B33_0 = 0;
		G_B33_1 = G_B32_0;
	}

IL_015c:
	{
		NullCheck(G_B33_1);
		Column_set_IsNullable_mFFD923C501D7848B8DC14A9B40FB52D729DF8305_inline(G_B33_1, (bool)G_B33_0, NULL);
		// MaxStringLength = Orm.MaxStringLength(prop);
		PropertyInfo_t* L_51 = ___0_prop;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_52;
		L_52 = Orm_MaxStringLength_m6EB8E9A029C0454AA62C8B9FA1B61022A9CDC698(L_51, NULL);
		Column_set_MaxStringLength_mDFCF47180CF9CB10CFEF5532AF58957C487C4FA1_inline(__this, L_52, NULL);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping/Column::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Column_SetValue_m2C03ECE0FF590C829C366FEC3BB3007D1804266E (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_val, const RuntimeMethod* method) 
{
	{
		// _prop.SetValue (obj, val, null);
		PropertyInfo_t* L_0 = __this->____prop_0;
		RuntimeObject* L_1 = ___0_obj;
		RuntimeObject* L_2 = ___1_val;
		NullCheck(L_0);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_1, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		// }
		return;
	}
}
// System.Object SQLite4Unity3d.TableMapping/Column::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Column_GetValue_mC41975E43F1AAF075BC3B67C1BADF8B4B7DEB0EF (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _prop.GetGetMethod().Invoke(obj, null);
		PropertyInfo_t* L_0 = __this->____prop_0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_0, NULL);
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_1, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
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
// System.Void SQLite4Unity3d.TableMapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7A2152DD5B61C0A9D8DBF6215D0A008037F118EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* L_0 = (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A*)il2cpp_codegen_object_new(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC12E53D77D3E4A11ABAAB6191DFDA2079F7E4075(L_0, NULL);
		((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.TableMapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC12E53D77D3E4A11ABAAB6191DFDA2079F7E4075 (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/<>c::<get_InsertColumns>b__30_0(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_InsertColumnsU3Eb__30_0_mC65BE356215F8AC4CC235F9BE4C98C4534B8B937 (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	{
		// _insertColumns = Columns.Where (c => !c.IsAutoInc).ToArray ();
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		NullCheck(L_0);
		bool L_1;
		L_1 = Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String SQLite4Unity3d.TableMapping/<>c::<CreateInsertCommand>b__38_0(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_0_m88101F47F990EFC0C85013F09E4E590C2994CEC6 (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select "\"" + c.Name + "\"").ToArray()),
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		return L_2;
	}
}
// System.String SQLite4Unity3d.TableMapping/<>c::<CreateInsertCommand>b__38_1(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateInsertCommandU3Eb__38_1_m9B9E8F68B952A79B9B6AB52EBA05A8B5B489A931 (U3CU3Ec_tF8D922861A9A33A83BEA5B875685C233FE85C65A* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select "?").ToArray()), extra);
		return _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
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
// System.Void SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m6F38599845F7D4E3276601029322FA31C0665A45 (U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/<>c__DisplayClass33_0::<FindColumnWithPropertyName>b__0(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CFindColumnWithPropertyNameU3Eb__0_mEF298136BF9EE46A93578AF27D572E44CE85D73B (U3CU3Ec__DisplayClass33_0_t2F8E87B666FA82327E80E705F1377B388ABA9D96* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	{
		// var exact = Columns.FirstOrDefault (c => c.PropertyName == propertyName);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Column_get_PropertyName_mA027B508D4E518B622B97A7AE61B26DDAB5185A4(L_0, NULL);
		String_t* L_2 = __this->___propertyName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mC801859216DF994C8CC531ABE5F96D3ED1B322E5 (U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SQLite4Unity3d.TableMapping/<>c__DisplayClass34_0::<FindColumn>b__0(SQLite4Unity3d.TableMapping/Column)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CFindColumnU3Eb__0_mFB0F28EB947998D4BE1413D0F0FE9341698AF0E0 (U3CU3Ec__DisplayClass34_0_t02941BAB55DF62B19025E064B73697317229C278* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_c, const RuntimeMethod* method) 
{
	{
		// var exact = Columns.FirstOrDefault (c => c.Name == columnName);
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_c;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(L_0, NULL);
		String_t* L_2 = __this->___columnName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.String SQLite4Unity3d.Orm::SqlDecl(SQLite4Unity3d.TableMapping/Column,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_SqlDecl_m109EAD098868DD1BB57BB219504A2676D6BCAE84 (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_p, bool ___1_storeDateTimeAsTicks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B2E822D33FB5518E457261FE7AAFA1B172FDF65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F129804295CEE0C04CDF4D55A11D7A4ED8A692A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E8CA1BC21F4B77911E28ADCD695A986FAAD8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC314B19DDFC8FCE377B4A8712813CBE720521F28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		// string decl = "\"" + p.Name + "\" " + SqlType (p, storeDateTimeAsTicks) + " ";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_3 = ___0_p;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_7 = ___0_p;
		bool L_8 = ___1_storeDateTimeAsTicks;
		String_t* L_9;
		L_9 = Orm_SqlType_mDCE7980C3A660660D6700F7A4413F090E19959AE(L_7, L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		V_0 = L_11;
		// if (p.IsPK) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_12 = ___0_p;
		NullCheck(L_12);
		bool L_13;
		L_13 = Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline(L_12, NULL);
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// decl += "primary key ";
		String_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteralC314B19DDFC8FCE377B4A8712813CBE720521F28, NULL);
		V_0 = L_16;
	}

IL_0050:
	{
		// if (p.IsAutoInc) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_17 = ___0_p;
		NullCheck(L_17);
		bool L_18;
		L_18 = Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline(L_17, NULL);
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0068;
		}
	}
	{
		// decl += "autoincrement ";
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, _stringLiteral7F129804295CEE0C04CDF4D55A11D7A4ED8A692A, NULL);
		V_0 = L_21;
	}

IL_0068:
	{
		// if (!p.IsNullable) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_22 = ___0_p;
		NullCheck(L_22);
		bool L_23;
		L_23 = Column_get_IsNullable_mBA3EFE8EE8CEB4F11EA0AE63AE30E8E27BF3DF7F_inline(L_22, NULL);
		V_3 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		// decl += "not null ";
		String_t* L_25 = V_0;
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, _stringLiteral4B2E822D33FB5518E457261FE7AAFA1B172FDF65, NULL);
		V_0 = L_26;
	}

IL_0083:
	{
		// if (!string.IsNullOrEmpty (p.Collation)) {
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_27 = ___0_p;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Column_get_Collation_mFCB25D7DEC4A917028AD1119B960797354754FE4_inline(L_27, NULL);
		bool L_29;
		L_29 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_28, NULL);
		V_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00b0;
		}
	}
	{
		// decl += "collate " + p.Collation + " ";
		String_t* L_31 = V_0;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_32 = ___0_p;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Column_get_Collation_mFCB25D7DEC4A917028AD1119B960797354754FE4_inline(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_31, _stringLiteral83E8CA1BC21F4B77911E28ADCD695A986FAAD8F8, L_33, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_34;
	}

IL_00b0:
	{
		// return decl;
		String_t* L_35 = V_0;
		V_5 = L_35;
		goto IL_00b5;
	}

IL_00b5:
	{
		// }
		String_t* L_36 = V_5;
		return L_36;
	}
}
// System.String SQLite4Unity3d.Orm::SqlType(SQLite4Unity3d.TableMapping/Column,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_SqlType_mDCE7980C3A660660D6700F7A4413F090E19959AE (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_p, bool ___1_storeDateTimeAsTicks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE7531317059E346E68D5E40F607A6DDDB9FA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0F6D9DBC0488BBFF8777F70B454F11D38CAC5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBB6EBD9AA582506BA733281AF7A5F5E65A624F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	String_t* G_B30_0 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	String_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	{
		// var clrType = p.ColumnType;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_p;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39_inline(L_0, NULL);
		V_0 = L_1;
		// if (clrType == typeof(Boolean) || clrType == typeof(Byte) || clrType == typeof(UInt16) || clrType == typeof(SByte) || clrType == typeof(Int16) || clrType == typeof(Int32)) {
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		Type_t* L_10 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_0074;
		}
	}
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (L_17)
		{
			goto IL_0074;
		}
	}
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (L_21)
		{
			goto IL_0074;
		}
	}
	{
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		G_B7_0 = ((int32_t)(L_25));
		goto IL_0075;
	}

IL_0074:
	{
		G_B7_0 = 1;
	}

IL_0075:
	{
		V_1 = (bool)G_B7_0;
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_0085;
		}
	}
	{
		// return "integer";
		V_2 = _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F;
		goto IL_023d;
	}

IL_0085:
	{
		// } else if (clrType == typeof(UInt32) || clrType == typeof(Int64)) {
		Type_t* L_27 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (L_30)
		{
			goto IL_00a9;
		}
	}
	{
		Type_t* L_31 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		G_B12_0 = ((int32_t)(L_34));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B12_0 = 1;
	}

IL_00aa:
	{
		V_3 = (bool)G_B12_0;
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_00ba;
		}
	}
	{
		// return "bigint";
		V_2 = _stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9;
		goto IL_023d;
	}

IL_00ba:
	{
		// } else if (clrType == typeof(Single) || clrType == typeof(Double) || clrType == typeof(Decimal)) {
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_00f0;
		}
	}
	{
		Type_t* L_40 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		if (L_43)
		{
			goto IL_00f0;
		}
	}
	{
		Type_t* L_44 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		G_B18_0 = ((int32_t)(L_47));
		goto IL_00f1;
	}

IL_00f0:
	{
		G_B18_0 = 1;
	}

IL_00f1:
	{
		V_4 = (bool)G_B18_0;
		bool L_48 = V_4;
		if (!L_48)
		{
			goto IL_0103;
		}
	}
	{
		// return "float";
		V_2 = _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
		goto IL_023d;
	}

IL_0103:
	{
		// } else if (clrType == typeof(String)) {
		Type_t* L_49 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		V_5 = L_52;
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_015f;
		}
	}
	{
		// int? len = p.MaxStringLength;
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_54 = ___0_p;
		NullCheck(L_54);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_55;
		L_55 = Column_get_MaxStringLength_mAAA93C02B5F68450E5EC2E9106BF6EDBEE367FD1_inline(L_54, NULL);
		V_6 = L_55;
		// if (len.HasValue)
		bool L_56;
		L_56 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_7 = L_56;
		bool L_57 = V_7;
		if (!L_57)
		{
			goto IL_0154;
		}
	}
	{
		// return "varchar(" + len.Value + ")";
		int32_t L_58;
		L_58 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_6), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		V_8 = L_58;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
		String_t* L_60;
		L_60 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3A0F6D9DBC0488BBFF8777F70B454F11D38CAC5F, L_59, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		V_2 = L_60;
		goto IL_023d;
	}

IL_0154:
	{
		// return "varchar";
		V_2 = _stringLiteralDBB6EBD9AA582506BA733281AF7A5F5E65A624F1;
		goto IL_023d;
	}

IL_015f:
	{
		// } else if (clrType == typeof(TimeSpan)) {
		Type_t* L_61 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_9 = L_64;
		bool L_65 = V_9;
		if (!L_65)
		{
			goto IL_0181;
		}
	}
	{
		// return "bigint";
		V_2 = _stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9;
		goto IL_023d;
	}

IL_0181:
	{
		// } else if (clrType == typeof(DateTime)) {
		Type_t* L_66 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
		V_10 = L_69;
		bool L_70 = V_10;
		if (!L_70)
		{
			goto IL_01ad;
		}
	}
	{
		// return storeDateTimeAsTicks ? "bigint" : "datetime";
		bool L_71 = ___1_storeDateTimeAsTicks;
		if (L_71)
		{
			goto IL_01a2;
		}
	}
	{
		G_B30_0 = _stringLiteralE7650EB4C8EF6F4B045B8E8747677ECDDEF6AA10;
		goto IL_01a7;
	}

IL_01a2:
	{
		G_B30_0 = _stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9;
	}

IL_01a7:
	{
		V_2 = G_B30_0;
		goto IL_023d;
	}

IL_01ad:
	{
		// } else if (clrType == typeof(DateTimeOffset)) {
		Type_t* L_72 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
		bool L_75;
		L_75 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_72, L_74, NULL);
		V_11 = L_75;
		bool L_76 = V_11;
		if (!L_76)
		{
			goto IL_01cc;
		}
	}
	{
		// return "bigint";
		V_2 = _stringLiteralAB9DEBF202DC049083374F77D2854679064EF4A9;
		goto IL_023d;
	}

IL_01cc:
	{
		// } else if (clrType.IsEnum) {
		Type_t* L_77 = V_0;
		NullCheck(L_77);
		bool L_78;
		L_78 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_77);
		V_12 = L_78;
		bool L_79 = V_12;
		if (!L_79)
		{
			goto IL_01e1;
		}
	}
	{
		// return "integer";
		V_2 = _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F;
		goto IL_023d;
	}

IL_01e1:
	{
		// } else if (clrType == typeof(byte[])) {
		Type_t* L_80 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		V_13 = L_83;
		bool L_84 = V_13;
		if (!L_84)
		{
			goto IL_0200;
		}
	}
	{
		// return "blob";
		V_2 = _stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118;
		goto IL_023d;
	}

IL_0200:
	{
		// } else if (clrType == typeof(Guid)) {
		Type_t* L_85 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		bool L_88;
		L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
		V_14 = L_88;
		bool L_89 = V_14;
		if (!L_89)
		{
			goto IL_021f;
		}
	}
	{
		// return "varchar(36)";
		V_2 = _stringLiteral2BE7531317059E346E68D5E40F607A6DDDB9FA57;
		goto IL_023d;
	}

IL_021f:
	{
		// throw new NotSupportedException ("Don't know about " + clrType);
		Type_t* L_90 = V_0;
		Type_t* L_91 = L_90;
		G_B40_0 = L_91;
		G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6791FD228A8829A89802587131C38934CF0E3A9D));
		if (L_91)
		{
			G_B41_0 = L_91;
			G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6791FD228A8829A89802587131C38934CF0E3A9D));
			goto IL_022d;
		}
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		goto IL_0232;
	}

IL_022d:
	{
		NullCheck(G_B41_0);
		String_t* L_92;
		L_92 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B41_0);
		G_B42_0 = L_92;
		G_B42_1 = G_B41_1;
	}

IL_0232:
	{
		String_t* L_93;
		L_93 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B42_1, G_B42_0, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_94 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_94);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_94, L_93, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Orm_SqlType_mDCE7980C3A660660D6700F7A4413F090E19959AE_RuntimeMethod_var)));
	}

IL_023d:
	{
		// }
		String_t* L_95 = V_2;
		return L_95;
	}
}
// System.Boolean SQLite4Unity3d.Orm::IsPK(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsPK_mBF1730A4E7ED323706C717DFBC85CE53C37275AC (MemberInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	{
		// var attrs = p.GetCustomAttributes (typeof(PrimaryKeyAttribute), true);
		MemberInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (PrimaryKeyAttribute_tF4FB3F5CF631D71780EBC70306F86FAAEC9757C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// return attrs.Length > 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.String SQLite4Unity3d.Orm::Collation(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Orm_Collation_mDB9DE76216C8D86506F69A62B055D575FA8AC1B6 (MemberInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// var attrs = p.GetCustomAttributes (typeof(CollationAttribute), true);
		MemberInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// if (attrs.Length > 0) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return ((CollationAttribute)attrs [0]).Value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		RuntimeObject* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(((CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C*)CastclassClass((RuntimeObject*)L_8, CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = CollationAttribute_get_Value_m8BBDF28DFA2375F6E36CD0CA758954F6E261DC4D_inline(((CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C*)CastclassClass((RuntimeObject*)L_8, CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_9;
		goto IL_0036;
	}

IL_002d:
	{
		// return string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_10;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_11 = V_2;
		return L_11;
	}
}
// System.Boolean SQLite4Unity3d.Orm::IsAutoInc(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsAutoInc_m126F84B8548B4EFF57C48A1C31AC1E17748F3185 (MemberInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	{
		// var attrs = p.GetCustomAttributes (typeof(AutoIncrementAttribute), true);
		MemberInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (AutoIncrementAttribute_t2D7AA9C540978AB8836CFE73E38C3AE28F72E59F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// return attrs.Length > 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.Orm::GetIndices(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Orm_GetIndices_m4296DBD5B13F476E7DB224DFB73E510E0DD9D750 (MemberInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_mC71EC946C5A6FCA3956E91CEFEA6AC53497D8F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var attrs = p.GetCustomAttributes(typeof(IndexedAttribute), true);
		MemberInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// return attrs.Cast<IndexedAttribute>();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = Enumerable_Cast_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_mC71EC946C5A6FCA3956E91CEFEA6AC53497D8F39((RuntimeObject*)L_4, Enumerable_Cast_TisIndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F_mC71EC946C5A6FCA3956E91CEFEA6AC53497D8F39_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Nullable`1<System.Int32> SQLite4Unity3d.Orm::MaxStringLength(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Orm_MaxStringLength_m6EB8E9A029C0454AA62C8B9FA1B61022A9CDC698 (PropertyInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var attrs = p.GetCustomAttributes (typeof(MaxLengthAttribute), true);
		PropertyInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// if (attrs.Length > 0)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// return ((MaxLengthAttribute)attrs [0]).Value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		RuntimeObject* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(((MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0*)CastclassClass((RuntimeObject*)L_8, MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_il2cpp_TypeInfo_var)));
		int32_t L_9;
		L_9 = MaxLengthAttribute_get_Value_m41D0EE4D437B205AAAA56902DB7EFC0176397851_inline(((MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0*)CastclassClass((RuntimeObject*)L_8, MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0_il2cpp_TypeInfo_var)), NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_10), L_9, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		V_2 = L_10;
		goto IL_003d;
	}

IL_0031:
	{
		// return null;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11 = V_3;
		V_2 = L_11;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12 = V_2;
		return L_12;
	}
}
// System.Boolean SQLite4Unity3d.Orm::IsMarkedNotNull(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orm_IsMarkedNotNull_m2555E838D4C3CB82B522556F01B44449E6368CF0 (MemberInfo_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	{
		// var attrs = p.GetCustomAttributes (typeof (NotNullAttribute), true);
		MemberInfo_t* L_0 = ___0_p;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (NotNullAttribute_t38D2E134AB642408531BA39184945039941CCFF5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		V_0 = L_3;
		// return attrs.Length > 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_5 = V_1;
		return L_5;
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
// System.String SQLite4Unity3d.SQLiteCommand::get_CommandText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteCommand_get_CommandText_mC5B929462D924D4197466FFF1EFBA48B06A6EE12 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = __this->___U3CCommandTextU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::set_CommandText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_set_CommandText_mE6FE06C0BEFC9971431441AB6A99E7DDFD0F5203 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCommandTextU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommandTextU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::.ctor(SQLite4Unity3d.SQLiteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand__ctor_m858549E5C58B4AF2515BA1C5B6BBE33AE1B82DBF (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA5F09B5DB35D0EDC340F75E2C9CFB2AE65C81F0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC97D118E4BF4DED562658508050671CE052C65B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SQLiteCommand (SQLiteConnection conn)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _conn = conn;
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = ___0_conn;
		__this->____conn_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____conn_0), (void*)L_0);
		// _bindings = new List<Binding> ();
		List_1_tC97D118E4BF4DED562658508050671CE052C65B9* L_1 = (List_1_tC97D118E4BF4DED562658508050671CE052C65B9*)il2cpp_codegen_object_new(List_1_tC97D118E4BF4DED562658508050671CE052C65B9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA5F09B5DB35D0EDC340F75E2C9CFB2AE65C81F0F(L_1, List_1__ctor_mA5F09B5DB35D0EDC340F75E2C9CFB2AE65C81F0F_RuntimeMethod_var);
		__this->____bindings_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bindings_1), (void*)L_1);
		// CommandText = "";
		SQLiteCommand_set_CommandText_mE6FE06C0BEFC9971431441AB6A99E7DDFD0F5203_inline(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Int32 SQLite4Unity3d.SQLiteCommand::ExecuteNonQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteCommand_ExecuteNonQuery_m9E1C1980946214E8C0CB50EC26828EC428435F5B (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* G_B3_2 = NULL;
	SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* G_B4_2 = NULL;
	{
		// if (_conn.Trace) {
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = __this->____conn_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SQLiteConnection_get_Trace_mFF9F2DB848A04CF036DD487904E7DF71837855E2_inline(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// _conn.InvokeTrace ("Executing: " + this);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_3 = __this->____conn_0;
		G_B2_0 = __this;
		G_B2_1 = _stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C;
		G_B2_2 = L_3;
		if (__this)
		{
			G_B3_0 = __this;
			G_B3_1 = _stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C;
			G_B3_2 = L_3;
			goto IL_0024;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0029:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		SQLiteConnection_InvokeTrace_mC117DE5AF32471170B169B09E3D991B952427E49(G_B4_2, L_5, NULL);
	}

IL_0035:
	{
		// var r = SQLite3.Result.OK;
		V_0 = 0;
		// lock (_conn.SyncObject) {
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_6 = __this->____conn_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = SQLiteConnection_get_SyncObject_mE82D7F8069DEC72A0CDC7119C14222C6D665FED5(L_6, NULL);
		V_2 = L_7;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_3;
					if (!L_8)
					{
						goto IL_0075;
					}
				}
				{
					RuntimeObject* L_9 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_9, NULL);
				}

IL_0075:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_10 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_10, (&V_3), NULL);
			// var stmt = Prepare ();
			intptr_t L_11;
			L_11 = SQLiteCommand_Prepare_mA2043FB66DB03F52E32B297539A6CE6B11896015(__this, NULL);
			V_4 = L_11;
			// r = SQLite3.Step (stmt);
			intptr_t L_12 = V_4;
			int32_t L_13;
			L_13 = SQLite3_Step_m47764101C949500F2E1E61DDAF4BCC215C342950(L_12, NULL);
			V_0 = L_13;
			// Finalize(stmt);
			intptr_t L_14 = V_4;
			SQLiteCommand_Finalize_mBB9D4342B1DBFB4D31F6840B8CC48EC596343900(__this, L_14, NULL);
			goto IL_0076;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// if (r == SQLite3.Result.Done) {
		int32_t L_15 = V_0;
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)((int32_t)101)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// int rowsAffected = SQLite3.Changes (_conn.Handle);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_17 = __this->____conn_0;
		NullCheck(L_17);
		intptr_t L_18;
		L_18 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_17, NULL);
		int32_t L_19;
		L_19 = SQLite3_Changes_m0CA6C84B391B75B9B89D5115175F51D4B81BCEAC(L_18, NULL);
		V_6 = L_19;
		// return rowsAffected;
		int32_t L_20 = V_6;
		V_7 = L_20;
		goto IL_0116;
	}

IL_009a:
	{
		// } else if (r == SQLite3.Result.Error) {
		int32_t L_21 = V_0;
		V_8 = (bool)((((int32_t)L_21) == ((int32_t)1))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// string msg = SQLite3.GetErrmsg (_conn.Handle);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_23 = __this->____conn_0;
		NullCheck(L_23);
		intptr_t L_24;
		L_24 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_23, NULL);
		String_t* L_25;
		L_25 = SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5(L_24, NULL);
		V_9 = L_25;
		// throw SQLiteException.New (r, msg);
		int32_t L_26 = V_0;
		String_t* L_27 = V_9;
		SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* L_28;
		L_28 = SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920(L_26, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteCommand_ExecuteNonQuery_m9E1C1980946214E8C0CB50EC26828EC428435F5B_RuntimeMethod_var)));
	}

IL_00c0:
	{
		// else if (r == SQLite3.Result.Constraint) {
		int32_t L_29 = V_0;
		V_10 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)19)))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_0102;
		}
	}
	{
		// if (SQLite3.ExtendedErrCode (_conn.Handle) == SQLite3.ExtendedResult.ConstraintNotNull) {
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_31 = __this->____conn_0;
		NullCheck(L_31);
		intptr_t L_32;
		L_32 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_31, NULL);
		int32_t L_33;
		L_33 = SQLite3_ExtendedErrCode_mE53EAE79412B17719370EA83EF845896409E4E68(L_32, NULL);
		V_11 = (bool)((((int32_t)L_33) == ((int32_t)((int32_t)1299)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0101;
		}
	}
	{
		// throw NotNullConstraintViolationException.New (r, SQLite3.GetErrmsg (_conn.Handle));
		int32_t L_35 = V_0;
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_36 = __this->____conn_0;
		NullCheck(L_36);
		intptr_t L_37;
		L_37 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_36, NULL);
		String_t* L_38;
		L_38 = SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5(L_37, NULL);
		NotNullConstraintViolationException_t879E7832BFBEBCFCE0B1902526231D755FA83456* L_39;
		L_39 = NotNullConstraintViolationException_New_mCBE6743A22BAE37F13BC97069BD90D5A197E9128(L_35, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteCommand_ExecuteNonQuery_m9E1C1980946214E8C0CB50EC26828EC428435F5B_RuntimeMethod_var)));
	}

IL_0101:
	{
	}

IL_0102:
	{
		// throw SQLiteException.New(r, r.ToString());
		int32_t L_40 = V_0;
		Il2CppFakeBox<int32_t> L_41(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Result_tBCF6FD0B3965B1AB3130BD1B60A6B937FCD8EED4_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_42;
		L_42 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_41), NULL);
		SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* L_43;
		L_43 = SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920(L_40, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteCommand_ExecuteNonQuery_m9E1C1980946214E8C0CB50EC26828EC428435F5B_RuntimeMethod_var)));
	}

IL_0116:
	{
		// }
		int32_t L_44 = V_7;
		return L_44;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::OnInstanceCreated(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_OnInstanceCreated_m997D7BF1C22243343758FDDDCB7C225B9B0E8F8B (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::Bind(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_Bind_mCA6324D7AC057A0934CB8FFA830AD6946E08456E (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, String_t* ___0_name, RuntimeObject* ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Binding_t846C16F3FF76025D82F878E8E00A5894741580FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51B7F6D3686AE2542AB3B31697069DA12D259BA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bindings.Add (new Binding {
		//     Name = name,
		//     Value = val
		// });
		List_1_tC97D118E4BF4DED562658508050671CE052C65B9* L_0 = __this->____bindings_1;
		Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_1 = (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD*)il2cpp_codegen_object_new(Binding_t846C16F3FF76025D82F878E8E00A5894741580FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Binding__ctor_m13CB4B80C3F97D812D6E871A671E2EADC50DDEDB(L_1, NULL);
		Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		Binding_set_Name_m6605B567612DDFD3FA9FC4557DD0F03ABE7698F8_inline(L_2, L_3, NULL);
		Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_4 = L_2;
		RuntimeObject* L_5 = ___1_val;
		NullCheck(L_4);
		Binding_set_Value_m63DB4E8880807D0480D3ED195430FE33717FBAD0_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		List_1_Add_m51B7F6D3686AE2542AB3B31697069DA12D259BA4_inline(L_0, L_4, List_1_Add_m51B7F6D3686AE2542AB3B31697069DA12D259BA4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::Bind(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_Bind_mBB710DAA5C5A4204949977D982E8FDC4BC7922ED (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, RuntimeObject* ___0_val, const RuntimeMethod* method) 
{
	{
		// Bind (null, val);
		RuntimeObject* L_0 = ___0_val;
		SQLiteCommand_Bind_mCA6324D7AC057A0934CB8FFA830AD6946E08456E(__this, (String_t*)NULL, L_0, NULL);
		// }
		return;
	}
}
// System.String SQLite4Unity3d.SQLiteCommand::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteCommand_ToString_mE12357628AC0B63EE531FF0CCE50EDE804E5C90B (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEFA76239AAE09EB0C4E66AB1ED13E2A8C60EAFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1604BA2DF7A8D273C546D03C05252552111513B);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// var parts = new string[1 + _bindings.Count];
		List_1_tC97D118E4BF4DED562658508050671CE052C65B9* L_0 = __this->____bindings_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEFA76239AAE09EB0C4E66AB1ED13E2A8C60EAFC2_inline(L_0, List_1_get_Count_mEFA76239AAE09EB0C4E66AB1ED13E2A8C60EAFC2_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(1, L_1)));
		V_0 = L_2;
		// parts [0] = CommandText;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		String_t* L_4;
		L_4 = SQLiteCommand_get_CommandText_mC5B929462D924D4197466FFF1EFBA48B06A6EE12_inline(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		// var i = 1;
		V_1 = 1;
		// foreach (var b in _bindings) {
		List_1_tC97D118E4BF4DED562658508050671CE052C65B9* L_5 = __this->____bindings_1;
		NullCheck(L_5);
		Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 L_6;
		L_6 = List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F(L_5, List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD((&V_2), Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_002e_1:
			{
				// foreach (var b in _bindings) {
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_7;
				L_7 = Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_inline((&V_2), Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_RuntimeMethod_var);
				V_3 = L_7;
				// parts [i] = string.Format ("  {0}: {1}", i - 1, b.Value);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
				int32_t L_9 = V_1;
				int32_t L_10 = V_1;
				int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
				RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_13 = V_3;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = Binding_get_Value_mC2E67931562F6A62D66038EBEA50BA9395C77785_inline(L_13, NULL);
				String_t* L_15;
				L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA1604BA2DF7A8D273C546D03C05252552111513B, L_12, L_14, NULL);
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_15);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_15);
				// i++;
				int32_t L_16 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0057_1:
			{
				// foreach (var b in _bindings) {
				bool L_17;
				L_17 = Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344((&V_2), Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// return string.Join (Environment.NewLine, parts);
		String_t* L_18;
		L_18 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(L_18, L_19, NULL);
		V_4 = L_20;
		goto IL_0080;
	}

IL_0080:
	{
		// }
		String_t* L_21 = V_4;
		return L_21;
	}
}
// System.IntPtr SQLite4Unity3d.SQLiteCommand::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLiteCommand_Prepare_mA2043FB66DB03F52E32B297539A6CE6B11896015 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var stmt = SQLite3.Prepare2 (_conn.Handle, CommandText);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = __this->____conn_0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = SQLiteCommand_get_CommandText_mC5B929462D924D4197466FFF1EFBA48B06A6EE12_inline(__this, NULL);
		intptr_t L_3;
		L_3 = SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2(L_1, L_2, NULL);
		V_0 = L_3;
		// BindAll (stmt);
		intptr_t L_4 = V_0;
		SQLiteCommand_BindAll_m611A3B2A51B3D4F0FC695575AC92570671DCE270(__this, L_4, NULL);
		// return stmt;
		intptr_t L_5 = V_0;
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		intptr_t L_6 = V_1;
		return L_6;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::Finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_Finalize_mBB9D4342B1DBFB4D31F6840B8CC48EC596343900 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	{
		// SQLite3.Finalize (stmt);
		intptr_t L_0 = ___0_stmt;
		int32_t L_1;
		L_1 = SQLite3_Finalize_m109856BC23FA51D5AE62948F98C9381A9EA08CAC(L_0, NULL);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::BindAll(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_BindAll_m611A3B2A51B3D4F0FC695575AC92570671DCE270 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* V_2 = NULL;
	bool V_3 = false;
	{
		// int nextIdx = 1;
		V_0 = 1;
		// foreach (var b in _bindings) {
		List_1_tC97D118E4BF4DED562658508050671CE052C65B9* L_0 = __this->____bindings_1;
		NullCheck(L_0);
		Enumerator_t3BBF49A3816C05E1521FC8EF37E78A2F3BCD0702 L_1;
		L_1 = List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F(L_0, List_1_GetEnumerator_m0F356F282C77367D18E9BDCC9CB9D62220101A1F_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD((&V_1), Enumerator_Dispose_mDC29B22F2ED60EAC3F59166FF626FFF1318341AD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0012_1:
			{
				// foreach (var b in _bindings) {
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_2;
				L_2 = Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_inline((&V_1), Enumerator_get_Current_m344E87A561BE8216DB114365861DC31DD5028241_RuntimeMethod_var);
				V_2 = L_2;
				// if (b.Name != null) {
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_3 = V_2;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = Binding_get_Name_m36460244708DECF7462EC96985049395A01BEE4F_inline(L_3, NULL);
				V_3 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_003f_1;
				}
			}
			{
				// b.Index = SQLite3.BindParameterIndex (stmt, b.Name);
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_6 = V_2;
				intptr_t L_7 = ___0_stmt;
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = Binding_get_Name_m36460244708DECF7462EC96985049395A01BEE4F_inline(L_8, NULL);
				int32_t L_10;
				L_10 = SQLite3_BindParameterIndex_m7E9EAA9E6291ADD9991140E8B9DD82A3AEBCA572(L_7, L_9, NULL);
				NullCheck(L_6);
				Binding_set_Index_mD5F67E97A91ED368AF1055F65734E8FA474C3AB1_inline(L_6, L_10, NULL);
				goto IL_004d_1;
			}

IL_003f_1:
			{
				// b.Index = nextIdx++;
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_11 = V_2;
				int32_t L_12 = V_0;
				int32_t L_13 = L_12;
				V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
				NullCheck(L_11);
				Binding_set_Index_mD5F67E97A91ED368AF1055F65734E8FA474C3AB1_inline(L_11, L_13, NULL);
			}

IL_004d_1:
			{
				// BindParameter (stmt, b.Index, b.Value, _conn.StoreDateTimeAsTicks);
				intptr_t L_14 = ___0_stmt;
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_15 = V_2;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = Binding_get_Index_m5456E8E974EFC63C021CCF2AD8FC8036E8AA2C91_inline(L_15, NULL);
				Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* L_17 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = Binding_get_Value_mC2E67931562F6A62D66038EBEA50BA9395C77785_inline(L_17, NULL);
				SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_19 = __this->____conn_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = SQLiteConnection_get_StoreDateTimeAsTicks_m4F0D2FE9AD61981FA554273C956E335B1C1F9929_inline(L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
				SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB(L_14, L_16, L_18, L_20, NULL);
			}

IL_006c_1:
			{
				// foreach (var b in _bindings) {
				bool L_21;
				L_21 = Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344((&V_1), Enumerator_MoveNext_m453CB9C9E8A7EBFA5A4521BBA5D01957A8E48344_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::BindParameter(System.IntPtr,System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB (intptr_t ___0_stmt, int32_t ___1_index, RuntimeObject* ___2_value, bool ___3_storeDateTimeAsTicks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	intptr_t G_B16_1;
	memset((&G_B16_1), 0, sizeof(G_B16_1));
	int32_t G_B15_0 = 0;
	intptr_t G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	intptr_t G_B17_2;
	memset((&G_B17_2), 0, sizeof(G_B17_2));
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	Type_t* G_B46_0 = NULL;
	String_t* G_B46_1 = NULL;
	Type_t* G_B45_0 = NULL;
	String_t* G_B45_1 = NULL;
	String_t* G_B47_0 = NULL;
	String_t* G_B47_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject* L_0 = ___2_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// SQLite3.BindNull (stmt, index);
		intptr_t L_2 = ___0_stmt;
		int32_t L_3 = ___1_index;
		int32_t L_4;
		L_4 = SQLite3_BindNull_m9C7AB23E02A0AF38C0ECEE46561509A7BD54862F(L_2, L_3, NULL);
		goto IL_0295;
	}

IL_0018:
	{
		// if (value is Int32) {
		RuntimeObject* L_5 = ___2_value;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// SQLite3.BindInt (stmt, index, (int)value);
		intptr_t L_7 = ___0_stmt;
		int32_t L_8 = ___1_index;
		RuntimeObject* L_9 = ___2_value;
		int32_t L_10;
		L_10 = SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3(L_7, L_8, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		goto IL_0294;
	}

IL_003b:
	{
		// } else if (value is String) {
		RuntimeObject* L_11 = ___2_value;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// SQLite3.BindText (stmt, index, (string)value, -1, NegativePointer);
		intptr_t L_13 = ___0_stmt;
		int32_t L_14 = ___1_index;
		RuntimeObject* L_15 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		intptr_t L_16 = ((SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var))->___NegativePointer_3;
		int32_t L_17;
		L_17 = SQLite3_BindText_mEDC93F5CA420D62CE61DC2624453A3C76670056A(L_13, L_14, ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), (-1), L_16, NULL);
		goto IL_0294;
	}

IL_0063:
	{
		// } else if (value is Byte || value is UInt16 || value is SByte || value is Int16) {
		RuntimeObject* L_18 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_19 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_20 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_20, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_21 = ___2_value;
		G_B11_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_21, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0087;
	}

IL_0086:
	{
		G_B11_0 = 1;
	}

IL_0087:
	{
		V_3 = (bool)G_B11_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		// SQLite3.BindInt (stmt, index, Convert.ToInt32 (value));
		intptr_t L_23 = ___0_stmt;
		int32_t L_24 = ___1_index;
		RuntimeObject* L_25 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_25, NULL);
		int32_t L_27;
		L_27 = SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3(L_23, L_24, L_26, NULL);
		goto IL_0294;
	}

IL_00a0:
	{
		// } else if (value is Boolean) {
		RuntimeObject* L_28 = ___2_value;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_28, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		// SQLite3.BindInt (stmt, index, (bool)value ? 1 : 0);
		intptr_t L_30 = ___0_stmt;
		int32_t L_31 = ___1_index;
		RuntimeObject* L_32 = ___2_value;
		G_B15_0 = L_31;
		G_B15_1 = L_30;
		if (((*(bool*)((bool*)(bool*)UnBox(L_32, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B16_0 = L_31;
			G_B16_1 = L_30;
			goto IL_00bd;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00be:
	{
		int32_t L_33;
		L_33 = SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3(G_B17_2, G_B17_1, G_B17_0, NULL);
		goto IL_0294;
	}

IL_00ca:
	{
		// } else if (value is UInt32 || value is Int64) {
		RuntimeObject* L_34 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_34, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_35 = ___2_value;
		G_B21_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_35, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00de;
	}

IL_00dd:
	{
		G_B21_0 = 1;
	}

IL_00de:
	{
		V_5 = (bool)G_B21_0;
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_00f9;
		}
	}
	{
		// SQLite3.BindInt64 (stmt, index, Convert.ToInt64 (value));
		intptr_t L_37 = ___0_stmt;
		int32_t L_38 = ___1_index;
		RuntimeObject* L_39 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_40;
		L_40 = Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5(L_39, NULL);
		int32_t L_41;
		L_41 = SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E(L_37, L_38, L_40, NULL);
		goto IL_0294;
	}

IL_00f9:
	{
		// } else if (value is Single || value is Double || value is Decimal) {
		RuntimeObject* L_42 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_42, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0114;
		}
	}
	{
		RuntimeObject* L_43 = ___2_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_43, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0114;
		}
	}
	{
		RuntimeObject* L_44 = ___2_value;
		G_B27_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_44, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0115;
	}

IL_0114:
	{
		G_B27_0 = 1;
	}

IL_0115:
	{
		V_6 = (bool)G_B27_0;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_0130;
		}
	}
	{
		// SQLite3.BindDouble (stmt, index, Convert.ToDouble (value));
		intptr_t L_46 = ___0_stmt;
		int32_t L_47 = ___1_index;
		RuntimeObject* L_48 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_49;
		L_49 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_48, NULL);
		int32_t L_50;
		L_50 = SQLite3_BindDouble_mEDD937BE65B3E374F9AFCDA8D482F9F1292C4290(L_46, L_47, L_49, NULL);
		goto IL_0294;
	}

IL_0130:
	{
		// } else if (value is TimeSpan) {
		RuntimeObject* L_51 = ___2_value;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_51, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_015d;
		}
	}
	{
		// SQLite3.BindInt64(stmt, index, ((TimeSpan)value).Ticks);
		intptr_t L_53 = ___0_stmt;
		int32_t L_54 = ___1_index;
		RuntimeObject* L_55 = ___2_value;
		V_8 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_55, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))));
		int64_t L_56;
		L_56 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_8), NULL);
		int32_t L_57;
		L_57 = SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E(L_53, L_54, L_56, NULL);
		goto IL_0294;
	}

IL_015d:
	{
		// } else if (value is DateTime) {
		RuntimeObject* L_58 = ___2_value;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_58, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_9;
		if (!L_59)
		{
			goto IL_01b9;
		}
	}
	{
		// if (storeDateTimeAsTicks) {
		bool L_60 = ___3_storeDateTimeAsTicks;
		V_10 = L_60;
		bool L_61 = V_10;
		if (!L_61)
		{
			goto IL_018f;
		}
	}
	{
		// SQLite3.BindInt64 (stmt, index, ((DateTime)value).Ticks);
		intptr_t L_62 = ___0_stmt;
		int32_t L_63 = ___1_index;
		RuntimeObject* L_64 = ___2_value;
		V_11 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_64, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		int64_t L_65;
		L_65 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_11), NULL);
		int32_t L_66;
		L_66 = SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E(L_62, L_63, L_65, NULL);
		goto IL_01b3;
	}

IL_018f:
	{
		// SQLite3.BindText (stmt, index, ((DateTime)value).ToString ("yyyy-MM-dd HH:mm:ss"), -1, NegativePointer);
		intptr_t L_67 = ___0_stmt;
		int32_t L_68 = ___1_index;
		RuntimeObject* L_69 = ___2_value;
		V_11 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_69, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		String_t* L_70;
		L_70 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_11), _stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		intptr_t L_71 = ((SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var))->___NegativePointer_3;
		int32_t L_72;
		L_72 = SQLite3_BindText_mEDC93F5CA420D62CE61DC2624453A3C76670056A(L_67, L_68, L_70, (-1), L_71, NULL);
	}

IL_01b3:
	{
		goto IL_0294;
	}

IL_01b9:
	{
		// } else if (value is DateTimeOffset) {
		RuntimeObject* L_73 = ___2_value;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_73, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_01e6;
		}
	}
	{
		// SQLite3.BindInt64 (stmt, index, ((DateTimeOffset)value).UtcTicks);
		intptr_t L_75 = ___0_stmt;
		int32_t L_76 = ___1_index;
		RuntimeObject* L_77 = ___2_value;
		V_13 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_77, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		int64_t L_78;
		L_78 = DateTimeOffset_get_UtcTicks_mADA0A7B073B9AD2DC81ABC3343382567119D4705((&V_13), NULL);
		int32_t L_79;
		L_79 = SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E(L_75, L_76, L_78, NULL);
		goto IL_0294;
	}

IL_01e6:
	{
		// } else if (value.GetType().IsEnum) {
		RuntimeObject* L_80 = ___2_value;
		NullCheck(L_80);
		Type_t* L_81;
		L_81 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_80, NULL);
		NullCheck(L_81);
		bool L_82;
		L_82 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_81);
		V_14 = L_82;
		bool L_83 = V_14;
		if (!L_83)
		{
			goto IL_020c;
		}
	}
	{
		// SQLite3.BindInt (stmt, index, Convert.ToInt32 (value));
		intptr_t L_84 = ___0_stmt;
		int32_t L_85 = ___1_index;
		RuntimeObject* L_86 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_87;
		L_87 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_86, NULL);
		int32_t L_88;
		L_88 = SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3(L_84, L_85, L_87, NULL);
		goto IL_0294;
	}

IL_020c:
	{
		// } else if (value is byte[]){
		RuntimeObject* L_89 = ___2_value;
		V_15 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_89, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_90 = V_15;
		if (!L_90)
		{
			goto IL_023a;
		}
	}
	{
		// SQLite3.BindBlob(stmt, index, (byte[]) value, ((byte[]) value).Length, NegativePointer);
		intptr_t L_91 = ___0_stmt;
		int32_t L_92 = ___1_index;
		RuntimeObject* L_93 = ___2_value;
		RuntimeObject* L_94 = ___2_value;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_94, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		intptr_t L_95 = ((SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var))->___NegativePointer_3;
		int32_t L_96;
		L_96 = SQLite3_BindBlob_mECFD37EFD7AE1CE6A7B5A63D630CC1E15CF1206A(L_91, L_92, ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_93, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), ((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_94, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length)), L_95, NULL);
		goto IL_0294;
	}

IL_023a:
	{
		// } else if (value is Guid) {
		RuntimeObject* L_97 = ___2_value;
		V_16 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_97, Guid_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_98 = V_16;
		if (!L_98)
		{
			goto IL_0271;
		}
	}
	{
		// SQLite3.BindText(stmt, index, ((Guid)value).ToString(), 72, NegativePointer);
		intptr_t L_99 = ___0_stmt;
		int32_t L_100 = ___1_index;
		RuntimeObject* L_101 = ___2_value;
		V_17 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_101, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_102;
		L_102 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_17), NULL);
		il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		intptr_t L_103 = ((SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var))->___NegativePointer_3;
		int32_t L_104;
		L_104 = SQLite3_BindText_mEDC93F5CA420D62CE61DC2624453A3C76670056A(L_99, L_100, L_102, ((int32_t)72), L_103, NULL);
		goto IL_0294;
	}

IL_0271:
	{
		// throw new NotSupportedException("Cannot store type: " + value.GetType());
		RuntimeObject* L_105 = ___2_value;
		NullCheck(L_105);
		Type_t* L_106;
		L_106 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_105, NULL);
		Type_t* L_107 = L_106;
		G_B45_0 = L_107;
		G_B45_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE237EC436581AFB5F89F4E57554E10B20D85C41D));
		if (L_107)
		{
			G_B46_0 = L_107;
			G_B46_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE237EC436581AFB5F89F4E57554E10B20D85C41D));
			goto IL_0284;
		}
	}
	{
		G_B47_0 = ((String_t*)(NULL));
		G_B47_1 = G_B45_1;
		goto IL_0289;
	}

IL_0284:
	{
		NullCheck(G_B46_0);
		String_t* L_108;
		L_108 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B46_0);
		G_B47_0 = L_108;
		G_B47_1 = G_B46_1;
	}

IL_0289:
	{
		String_t* L_109;
		L_109 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B47_1, G_B47_0, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_110);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, L_109, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB_RuntimeMethod_var)));
	}

IL_0294:
	{
	}

IL_0295:
	{
		// }
		return;
	}
}
// System.Object SQLite4Unity3d.SQLiteCommand::ReadCol(System.IntPtr,System.Int32,SQLite4Unity3d.SQLite3/ColType,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SQLiteCommand_ReadCol_mC92CB5B68FD045C70567CB31BA216D163E211E03 (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, intptr_t ___0_stmt, int32_t ___1_index, int32_t ___2_type, Type_t* ___3_clrType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	String_t* V_22 = NULL;
	Type_t* G_B42_0 = NULL;
	String_t* G_B42_1 = NULL;
	Type_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	String_t* G_B43_0 = NULL;
	String_t* G_B43_1 = NULL;
	{
		// if (type == SQLite3.ColType.Null) {
		int32_t L_0 = ___2_type;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		V_1 = NULL;
		goto IL_035d;
	}

IL_0011:
	{
		// if (clrType == typeof(String)) {
		Type_t* L_2 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// return SQLite3.ColumnString (stmt, index);
		intptr_t L_7 = ___0_stmt;
		int32_t L_8 = ___1_index;
		String_t* L_9;
		L_9 = SQLite3_ColumnString_mC7495ED684AF170F31724D26EF5BB4EBA78E0E94(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_035d;
	}

IL_0035:
	{
		// } else if (clrType == typeof(Int32)) {
		Type_t* L_10 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// return (int)SQLite3.ColumnInt (stmt, index);
		intptr_t L_15 = ___0_stmt;
		int32_t L_16 = ___1_index;
		int32_t L_17;
		L_17 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_15, L_16, NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		V_1 = L_19;
		goto IL_035d;
	}

IL_005d:
	{
		// } else if (clrType == typeof(Boolean)) {
		Type_t* L_20 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_008a;
		}
	}
	{
		// return SQLite3.ColumnInt (stmt, index) == 1;
		intptr_t L_25 = ___0_stmt;
		int32_t L_26 = ___1_index;
		int32_t L_27;
		L_27 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_25, L_26, NULL);
		bool L_28 = ((bool)((((int32_t)L_27) == ((int32_t)1))? 1 : 0));
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		V_1 = L_29;
		goto IL_035d;
	}

IL_008a:
	{
		// } else if (clrType == typeof(double)) {
		Type_t* L_30 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_00b4;
		}
	}
	{
		// return SQLite3.ColumnDouble (stmt, index);
		intptr_t L_35 = ___0_stmt;
		int32_t L_36 = ___1_index;
		double L_37;
		L_37 = SQLite3_ColumnDouble_mE4F9CDF44BEF62E61DB8EDB332865923E7B17A7B(L_35, L_36, NULL);
		double L_38 = L_37;
		RuntimeObject* L_39 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_38);
		V_1 = L_39;
		goto IL_035d;
	}

IL_00b4:
	{
		// } else if (clrType == typeof(float)) {
		Type_t* L_40 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		V_6 = L_43;
		bool L_44 = V_6;
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		// return (float)SQLite3.ColumnDouble (stmt, index);
		intptr_t L_45 = ___0_stmt;
		int32_t L_46 = ___1_index;
		double L_47;
		L_47 = SQLite3_ColumnDouble_mE4F9CDF44BEF62E61DB8EDB332865923E7B17A7B(L_45, L_46, NULL);
		float L_48 = ((float)L_47);
		RuntimeObject* L_49 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_48);
		V_1 = L_49;
		goto IL_035d;
	}

IL_00df:
	{
		// } else if (clrType == typeof(TimeSpan)) {
		Type_t* L_50 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		V_7 = L_53;
		bool L_54 = V_7;
		if (!L_54)
		{
			goto IL_010e;
		}
	}
	{
		// return new TimeSpan(SQLite3.ColumnInt64(stmt, index));
		intptr_t L_55 = ___0_stmt;
		int32_t L_56 = ___1_index;
		int64_t L_57;
		L_57 = SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08(L_55, L_56, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_58;
		memset((&L_58), 0, sizeof(L_58));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_58), L_57, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_59 = L_58;
		RuntimeObject* L_60 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_59);
		V_1 = L_60;
		goto IL_035d;
	}

IL_010e:
	{
		// } else if (clrType == typeof(DateTime)) {
		Type_t* L_61 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		V_8 = L_64;
		bool L_65 = V_8;
		if (!L_65)
		{
			goto IL_016b;
		}
	}
	{
		// if (_conn.StoreDateTimeAsTicks) {
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_66 = __this->____conn_0;
		NullCheck(L_66);
		bool L_67;
		L_67 = SQLiteConnection_get_StoreDateTimeAsTicks_m4F0D2FE9AD61981FA554273C956E335B1C1F9929_inline(L_66, NULL);
		V_9 = L_67;
		bool L_68 = V_9;
		if (!L_68)
		{
			goto IL_014f;
		}
	}
	{
		// return new DateTime (SQLite3.ColumnInt64 (stmt, index));
		intptr_t L_69 = ___0_stmt;
		int32_t L_70 = ___1_index;
		int64_t L_71;
		L_71 = SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08(L_69, L_70, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_72;
		memset((&L_72), 0, sizeof(L_72));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_72), L_71, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_73 = L_72;
		RuntimeObject* L_74 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_73);
		V_1 = L_74;
		goto IL_035d;
	}

IL_014f:
	{
		// var text = SQLite3.ColumnString (stmt, index);
		intptr_t L_75 = ___0_stmt;
		int32_t L_76 = ___1_index;
		String_t* L_77;
		L_77 = SQLite3_ColumnString_mC7495ED684AF170F31724D26EF5BB4EBA78E0E94(L_75, L_76, NULL);
		V_10 = L_77;
		// return DateTime.Parse (text);
		String_t* L_78 = V_10;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_79;
		L_79 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(L_78, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_80 = L_79;
		RuntimeObject* L_81 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_80);
		V_1 = L_81;
		goto IL_035d;
	}

IL_016b:
	{
		// } else if (clrType == typeof(DateTimeOffset)) {
		Type_t* L_82 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		V_11 = L_85;
		bool L_86 = V_11;
		if (!L_86)
		{
			goto IL_019f;
		}
	}
	{
		// return new DateTimeOffset(SQLite3.ColumnInt64 (stmt, index),TimeSpan.Zero);
		intptr_t L_87 = ___0_stmt;
		int32_t L_88 = ___1_index;
		int64_t L_89;
		L_89 = SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08(L_87, L_88, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_90 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_91;
		memset((&L_91), 0, sizeof(L_91));
		DateTimeOffset__ctor_m81DCBFF0B9D7029AD6B8B80EA4CB8846387DFB9A((&L_91), L_89, L_90, /*hidden argument*/NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_92 = L_91;
		RuntimeObject* L_93 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_92);
		V_1 = L_93;
		goto IL_035d;
	}

IL_019f:
	{
		// } else if (clrType.IsEnum) {
		Type_t* L_94 = ___3_clrType;
		NullCheck(L_94);
		bool L_95;
		L_95 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_94);
		V_12 = L_95;
		bool L_96 = V_12;
		if (!L_96)
		{
			goto IL_01bf;
		}
	}
	{
		// return SQLite3.ColumnInt (stmt, index);
		intptr_t L_97 = ___0_stmt;
		int32_t L_98 = ___1_index;
		int32_t L_99;
		L_99 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_97, L_98, NULL);
		int32_t L_100 = L_99;
		RuntimeObject* L_101 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_100);
		V_1 = L_101;
		goto IL_035d;
	}

IL_01bf:
	{
		// } else if (clrType == typeof(Int64)) {
		Type_t* L_102 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		V_13 = L_105;
		bool L_106 = V_13;
		if (!L_106)
		{
			goto IL_01e9;
		}
	}
	{
		// return SQLite3.ColumnInt64 (stmt, index);
		intptr_t L_107 = ___0_stmt;
		int32_t L_108 = ___1_index;
		int64_t L_109;
		L_109 = SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08(L_107, L_108, NULL);
		int64_t L_110 = L_109;
		RuntimeObject* L_111 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_110);
		V_1 = L_111;
		goto IL_035d;
	}

IL_01e9:
	{
		// } else if (clrType == typeof(UInt32)) {
		Type_t* L_112 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_112, L_114, NULL);
		V_14 = L_115;
		bool L_116 = V_14;
		if (!L_116)
		{
			goto IL_0214;
		}
	}
	{
		// return (uint)SQLite3.ColumnInt64 (stmt, index);
		intptr_t L_117 = ___0_stmt;
		int32_t L_118 = ___1_index;
		int64_t L_119;
		L_119 = SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08(L_117, L_118, NULL);
		uint32_t L_120 = ((uint32_t)((int32_t)(uint32_t)L_119));
		RuntimeObject* L_121 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_120);
		V_1 = L_121;
		goto IL_035d;
	}

IL_0214:
	{
		// } else if (clrType == typeof(decimal)) {
		Type_t* L_122 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		V_15 = L_125;
		bool L_126 = V_15;
		if (!L_126)
		{
			goto IL_0243;
		}
	}
	{
		// return (decimal)SQLite3.ColumnDouble (stmt, index);
		intptr_t L_127 = ___0_stmt;
		int32_t L_128 = ___1_index;
		double L_129;
		L_129 = SQLite3_ColumnDouble_mE4F9CDF44BEF62E61DB8EDB332865923E7B17A7B(L_127, L_128, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_130;
		L_130 = Decimal_op_Explicit_mC97457D67812EF62FBEC4E9C07E5DCFACAA1FE66(L_129, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_131 = L_130;
		RuntimeObject* L_132 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_131);
		V_1 = L_132;
		goto IL_035d;
	}

IL_0243:
	{
		// } else if (clrType == typeof(Byte)) {
		Type_t* L_133 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_134 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_135;
		L_135 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_134, NULL);
		bool L_136;
		L_136 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_133, L_135, NULL);
		V_16 = L_136;
		bool L_137 = V_16;
		if (!L_137)
		{
			goto IL_026e;
		}
	}
	{
		// return (byte)SQLite3.ColumnInt (stmt, index);
		intptr_t L_138 = ___0_stmt;
		int32_t L_139 = ___1_index;
		int32_t L_140;
		L_140 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_138, L_139, NULL);
		uint8_t L_141 = ((uint8_t)((int32_t)(uint8_t)L_140));
		RuntimeObject* L_142 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_141);
		V_1 = L_142;
		goto IL_035d;
	}

IL_026e:
	{
		// } else if (clrType == typeof(UInt16)) {
		Type_t* L_143 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		bool L_146;
		L_146 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_145, NULL);
		V_17 = L_146;
		bool L_147 = V_17;
		if (!L_147)
		{
			goto IL_0299;
		}
	}
	{
		// return (ushort)SQLite3.ColumnInt (stmt, index);
		intptr_t L_148 = ___0_stmt;
		int32_t L_149 = ___1_index;
		int32_t L_150;
		L_150 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_148, L_149, NULL);
		uint16_t L_151 = ((uint16_t)((int32_t)(uint16_t)L_150));
		RuntimeObject* L_152 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_151);
		V_1 = L_152;
		goto IL_035d;
	}

IL_0299:
	{
		// } else if (clrType == typeof(Int16)) {
		Type_t* L_153 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		V_18 = L_156;
		bool L_157 = V_18;
		if (!L_157)
		{
			goto IL_02c4;
		}
	}
	{
		// return (short)SQLite3.ColumnInt (stmt, index);
		intptr_t L_158 = ___0_stmt;
		int32_t L_159 = ___1_index;
		int32_t L_160;
		L_160 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_158, L_159, NULL);
		int16_t L_161 = ((int16_t)L_160);
		RuntimeObject* L_162 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_161);
		V_1 = L_162;
		goto IL_035d;
	}

IL_02c4:
	{
		// } else if (clrType == typeof(sbyte)) {
		Type_t* L_163 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		bool L_166;
		L_166 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_163, L_165, NULL);
		V_19 = L_166;
		bool L_167 = V_19;
		if (!L_167)
		{
			goto IL_02ec;
		}
	}
	{
		// return (sbyte)SQLite3.ColumnInt (stmt, index);
		intptr_t L_168 = ___0_stmt;
		int32_t L_169 = ___1_index;
		int32_t L_170;
		L_170 = SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF(L_168, L_169, NULL);
		int8_t L_171 = ((int8_t)L_170);
		RuntimeObject* L_172 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_171);
		V_1 = L_172;
		goto IL_035d;
	}

IL_02ec:
	{
		// } else if (clrType == typeof(byte[])) {
		Type_t* L_173 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_174 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_175;
		L_175 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_174, NULL);
		bool L_176;
		L_176 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_173, L_175, NULL);
		V_20 = L_176;
		bool L_177 = V_20;
		if (!L_177)
		{
			goto IL_030e;
		}
	}
	{
		// return SQLite3.ColumnByteArray (stmt, index);
		intptr_t L_178 = ___0_stmt;
		int32_t L_179 = ___1_index;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_180;
		L_180 = SQLite3_ColumnByteArray_m09025DD6AB983E61366EFCB4F1500F7EA24CEC5E(L_178, L_179, NULL);
		V_1 = (RuntimeObject*)L_180;
		goto IL_035d;
	}

IL_030e:
	{
		// } else if (clrType == typeof(Guid)) {
		Type_t* L_181 = ___3_clrType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_183;
		L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
		bool L_184;
		L_184 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_181, L_183, NULL);
		V_21 = L_184;
		bool L_185 = V_21;
		if (!L_185)
		{
			goto IL_033e;
		}
	}
	{
		// var text = SQLite3.ColumnString(stmt, index);
		intptr_t L_186 = ___0_stmt;
		int32_t L_187 = ___1_index;
		String_t* L_188;
		L_188 = SQLite3_ColumnString_mC7495ED684AF170F31724D26EF5BB4EBA78E0E94(L_186, L_187, NULL);
		V_22 = L_188;
		// return new Guid(text);
		String_t* L_189 = V_22;
		Guid_t L_190;
		memset((&L_190), 0, sizeof(L_190));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_190), L_189, /*hidden argument*/NULL);
		Guid_t L_191 = L_190;
		RuntimeObject* L_192 = Box(Guid_t_il2cpp_TypeInfo_var, &L_191);
		V_1 = L_192;
		goto IL_035d;
	}

IL_033e:
	{
		// throw new NotSupportedException ("Don't know how to read " + clrType);
		Type_t* L_193 = ___3_clrType;
		Type_t* L_194 = L_193;
		G_B41_0 = L_194;
		G_B41_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD635CA0E4F85CB7F26A62468F86B37AEADB9D184));
		if (L_194)
		{
			G_B42_0 = L_194;
			G_B42_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD635CA0E4F85CB7F26A62468F86B37AEADB9D184));
			goto IL_034d;
		}
	}
	{
		G_B43_0 = ((String_t*)(NULL));
		G_B43_1 = G_B41_1;
		goto IL_0352;
	}

IL_034d:
	{
		NullCheck(G_B42_0);
		String_t* L_195;
		L_195 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B42_0);
		G_B43_0 = L_195;
		G_B43_1 = G_B42_1;
	}

IL_0352:
	{
		String_t* L_196;
		L_196 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B43_1, G_B43_0, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_197 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_197);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_197, L_196, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteCommand_ReadCol_mC92CB5B68FD045C70567CB31BA216D163E211E03_RuntimeMethod_var)));
	}

IL_035d:
	{
		// }
		RuntimeObject* L_198 = V_1;
		return L_198;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommand__cctor_m01D3275406153635494959164180D16C0A3F3E6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IntPtr NegativePointer = new IntPtr (-1);
		intptr_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_0), (-1), /*hidden argument*/NULL);
		((SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var))->___NegativePointer_3 = L_0;
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
// System.String SQLite4Unity3d.SQLiteCommand/Binding::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Binding_get_Name_m36460244708DECF7462EC96985049395A01BEE4F (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_set_Name_m6605B567612DDFD3FA9FC4557DD0F03ABE7698F8 (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object SQLite4Unity3d.SQLiteCommand/Binding::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Binding_get_Value_mC2E67931562F6A62D66038EBEA50BA9395C77785 (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_set_Value_m63DB4E8880807D0480D3ED195430FE33717FBAD0 (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SQLite4Unity3d.SQLiteCommand/Binding::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_get_Index_m5456E8E974EFC63C021CCF2AD8FC8036E8AA2C91 (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public int Index { get; set; }
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_set_Index_mD5F67E97A91ED368AF1055F65734E8FA474C3AB1 (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Index { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIndexU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.SQLiteCommand/Binding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding__ctor_m13CB4B80C3F97D812D6E871A671E2EADC50DDEDB (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
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
// System.Boolean SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PreparedSqlLiteInsertCommand_get_Initialized_mCA24A887ADAD977158DC4E161DC05D6A0041703B (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// public bool Initialized { get; set; }
		bool L_0 = __this->___U3CInitializedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Initialized_mEE003DDBDE4E99119A83428683D170BBB556ADAB (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Initialized { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CInitializedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Connection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// protected SQLiteConnection Connection { get; set; }
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = __this->___U3CConnectionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Connection(SQLite4Unity3d.SQLiteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Connection_mCCBE4206E6F940C3762DDF7EC4E7C75174145E23 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected SQLiteConnection Connection { get; set; }
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = ___0_value;
		__this->___U3CConnectionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConnectionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_CommandText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PreparedSqlLiteInsertCommand_get_CommandText_m1774FAC339AF3EE7649470C4F02912EFED8E9214 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = __this->___U3CCommandTextU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_CommandText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_CommandText_mF815B54C9CC7655C4EFD985B018A7F2BCB801D25 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCommandTextU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommandTextU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::get_Statement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// protected Sqlite3Statement Statement { get; set; }
		intptr_t L_0 = __this->___U3CStatementU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::set_Statement(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Statement_mC87A23AD8B6856E34DC7B2020EA0188AFA737D07 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// protected Sqlite3Statement Statement { get; set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CStatementU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::.ctor(SQLite4Unity3d.SQLiteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand__ctor_mAC78E6F9CAB8A87FD6340F01B89E74B2303A439D (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_conn, const RuntimeMethod* method) 
{
	{
		// internal PreparedSqlLiteInsertCommand (SQLiteConnection conn)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Connection = conn;
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = ___0_conn;
		PreparedSqlLiteInsertCommand_set_Connection_mCCBE4206E6F940C3762DDF7EC4E7C75174145E23_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Int32 SQLite4Unity3d.PreparedSqlLiteInsertCommand::ExecuteNonQuery(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreparedSqlLiteInsertCommand_ExecuteNonQuery_mB3C230E1C516704102397C40F4755B5B814C621E (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	int32_t G_B16_0 = 0;
	{
		// if (Connection.Trace) {
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0;
		L_0 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = SQLiteConnection_get_Trace_mFF9F2DB848A04CF036DD487904E7DF71837855E2_inline(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Connection.InvokeTrace ("Executing: " + CommandText);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_3;
		L_3 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		String_t* L_4;
		L_4 = PreparedSqlLiteInsertCommand_get_CommandText_m1774FAC339AF3EE7649470C4F02912EFED8E9214_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5854D35F2CC7D025195818ABD6D4D237EBA08C9C, L_4, NULL);
		NullCheck(L_3);
		SQLiteConnection_InvokeTrace_mC117DE5AF32471170B169B09E3D991B952427E49(L_3, L_5, NULL);
	}

IL_002e:
	{
		// var r = SQLite3.Result.OK;
		V_0 = 0;
		// if (!Initialized) {
		bool L_6;
		L_6 = PreparedSqlLiteInsertCommand_get_Initialized_mCA24A887ADAD977158DC4E161DC05D6A0041703B_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// Statement = Prepare ();
		intptr_t L_8;
		L_8 = VirtualFuncInvoker0< intptr_t >::Invoke(5 /* System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::Prepare() */, __this);
		PreparedSqlLiteInsertCommand_set_Statement_mC87A23AD8B6856E34DC7B2020EA0188AFA737D07_inline(__this, L_8, NULL);
		// Initialized = true;
		PreparedSqlLiteInsertCommand_set_Initialized_mEE003DDBDE4E99119A83428683D170BBB556ADAB_inline(__this, (bool)1, NULL);
	}

IL_0054:
	{
		// if (source != null) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_source;
		V_3 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		// for (int i = 0; i < source.Length; i++) {
		V_4 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		// SQLiteCommand.BindParameter (Statement, i + 1, source [i], Connection.StoreDateTimeAsTicks);
		intptr_t L_11;
		L_11 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_12 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___0_source;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_17;
		L_17 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = SQLiteConnection_get_StoreDateTimeAsTicks_m4F0D2FE9AD61981FA554273C956E335B1C1F9929_inline(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF_il2cpp_TypeInfo_var);
		SQLiteCommand_BindParameter_m629274A079AC37470336026EC2718803CDF47EBB(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_16, L_18, NULL);
		// for (int i = 0; i < source.Length; i++) {
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < source.Length; i++) {
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___0_source;
		NullCheck(L_21);
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_0062;
		}
	}
	{
	}

IL_0097:
	{
		// r = SQLite3.Step (Statement);
		intptr_t L_23;
		L_23 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_24;
		L_24 = SQLite3_Step_m47764101C949500F2E1E61DDAF4BCC215C342950(L_23, NULL);
		V_0 = L_24;
		// if (r == SQLite3.Result.Done) {
		int32_t L_25 = V_0;
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)101)))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00d6;
		}
	}
	{
		// int rowsAffected = SQLite3.Changes (Connection.Handle);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_27;
		L_27 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_27);
		intptr_t L_28;
		L_28 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_27, NULL);
		int32_t L_29;
		L_29 = SQLite3_Changes_m0CA6C84B391B75B9B89D5115175F51D4B81BCEAC(L_28, NULL);
		V_7 = L_29;
		// SQLite3.Reset (Statement);
		intptr_t L_30;
		L_30 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_31;
		L_31 = SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E(L_30, NULL);
		// return rowsAffected;
		int32_t L_32 = V_7;
		V_8 = L_32;
		goto IL_0172;
	}

IL_00d6:
	{
		// } else if (r == SQLite3.Result.Error) {
		int32_t L_33 = V_0;
		V_9 = (bool)((((int32_t)L_33) == ((int32_t)1))? 1 : 0);
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0108;
		}
	}
	{
		// string msg = SQLite3.GetErrmsg (Connection.Handle);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_35;
		L_35 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_35);
		intptr_t L_36;
		L_36 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_35, NULL);
		String_t* L_37;
		L_37 = SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5(L_36, NULL);
		V_10 = L_37;
		// SQLite3.Reset (Statement);
		intptr_t L_38;
		L_38 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_39;
		L_39 = SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E(L_38, NULL);
		// throw SQLiteException.New (r, msg);
		int32_t L_40 = V_0;
		String_t* L_41 = V_10;
		SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* L_42;
		L_42 = SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920(L_40, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PreparedSqlLiteInsertCommand_ExecuteNonQuery_mB3C230E1C516704102397C40F4755B5B814C621E_RuntimeMethod_var)));
	}

IL_0108:
	{
		// } else if (r == SQLite3.Result.Constraint && SQLite3.ExtendedErrCode (Connection.Handle) == SQLite3.ExtendedResult.ConstraintNotNull) {
		int32_t L_43 = V_0;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0126;
		}
	}
	{
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_44;
		L_44 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_44);
		intptr_t L_45;
		L_45 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_44, NULL);
		int32_t L_46;
		L_46 = SQLite3_ExtendedErrCode_mE53EAE79412B17719370EA83EF845896409E4E68(L_45, NULL);
		G_B16_0 = ((((int32_t)L_46) == ((int32_t)((int32_t)1299)))? 1 : 0);
		goto IL_0127;
	}

IL_0126:
	{
		G_B16_0 = 0;
	}

IL_0127:
	{
		V_11 = (bool)G_B16_0;
		bool L_47 = V_11;
		if (!L_47)
		{
			goto IL_0151;
		}
	}
	{
		// SQLite3.Reset (Statement);
		intptr_t L_48;
		L_48 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_49;
		L_49 = SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E(L_48, NULL);
		// throw NotNullConstraintViolationException.New (r, SQLite3.GetErrmsg (Connection.Handle));
		int32_t L_50 = V_0;
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_51;
		L_51 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_51);
		intptr_t L_52;
		L_52 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_51, NULL);
		String_t* L_53;
		L_53 = SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5(L_52, NULL);
		NotNullConstraintViolationException_t879E7832BFBEBCFCE0B1902526231D755FA83456* L_54;
		L_54 = NotNullConstraintViolationException_New_mCBE6743A22BAE37F13BC97069BD90D5A197E9128(L_50, L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PreparedSqlLiteInsertCommand_ExecuteNonQuery_mB3C230E1C516704102397C40F4755B5B814C621E_RuntimeMethod_var)));
	}

IL_0151:
	{
		// SQLite3.Reset (Statement);
		intptr_t L_55;
		L_55 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		int32_t L_56;
		L_56 = SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E(L_55, NULL);
		// throw SQLiteException.New (r, r.ToString ());
		int32_t L_57 = V_0;
		Il2CppFakeBox<int32_t> L_58(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Result_tBCF6FD0B3965B1AB3130BD1B60A6B937FCD8EED4_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_59;
		L_59 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_58), NULL);
		SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* L_60;
		L_60 = SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920(L_57, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PreparedSqlLiteInsertCommand_ExecuteNonQuery_mB3C230E1C516704102397C40F4755B5B814C621E_RuntimeMethod_var)));
	}

IL_0172:
	{
		// }
		int32_t L_61 = V_8;
		return L_61;
	}
}
// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PreparedSqlLiteInsertCommand_Prepare_m6E268A673856876CD0CA204DE8259957F8B02451 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var stmt = SQLite3.Prepare2 (Connection.Handle, CommandText);
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0;
		L_0 = PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline(__this, NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = PreparedSqlLiteInsertCommand_get_CommandText_m1774FAC339AF3EE7649470C4F02912EFED8E9214_inline(__this, NULL);
		intptr_t L_3;
		L_3 = SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2(L_1, L_2, NULL);
		V_0 = L_3;
		// return stmt;
		intptr_t L_4 = V_0;
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		intptr_t L_5 = V_1;
		return L_5;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_Dispose_mCA54621740609D3A5DC1952524DFCB280474E8C7 (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose (true);
		PreparedSqlLiteInsertCommand_Dispose_m520FE32389F4CCEFB755F387EEDD744E73B3CC6D(__this, (bool)1, NULL);
		// GC.SuppressFinalize (this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_Dispose_m520FE32389F4CCEFB755F387EEDD744E73B3CC6D (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Statement != NullStatement) {
		intptr_t L_0;
		L_0 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
		intptr_t L_1 = ((PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_StaticFields*)il2cpp_codegen_static_fields_for(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var))->___NullStatement_4;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				// Statement = NullStatement;
				intptr_t L_4 = ((PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_StaticFields*)il2cpp_codegen_static_fields_for(PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6_il2cpp_TypeInfo_var))->___NullStatement_4;
				PreparedSqlLiteInsertCommand_set_Statement_mC87A23AD8B6856E34DC7B2020EA0188AFA737D07_inline(__this, L_4, NULL);
				// Connection = null;
				PreparedSqlLiteInsertCommand_set_Connection_mCCBE4206E6F940C3762DDF7EC4E7C75174145E23_inline(__this, (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4*)NULL, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SQLite3.Finalize (Statement);
			intptr_t L_5;
			L_5 = PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline(__this, NULL);
			int32_t L_6;
			L_6 = SQLite3_Finalize_m109856BC23FA51D5AE62948F98C9381A9EA08CAC(L_5, NULL);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void SQLite4Unity3d.PreparedSqlLiteInsertCommand::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_Finalize_mFFAC493B286CD66A02BB8F9ACA85A0597B2E7D3A (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose (false);
			PreparedSqlLiteInsertCommand_Dispose_m520FE32389F4CCEFB755F387EEDD744E73B3CC6D(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
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
// System.Void SQLite4Unity3d.BaseTableQuery::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTableQuery__ctor_m1E504A1BD11D864668DCEC1731386EC3AF1E6196 (BaseTableQuery_t28D9E3082475EF8E0FC7E8F87FA0174C247BED7D* __this, const RuntimeMethod* method) 
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
// System.String SQLite4Unity3d.BaseTableQuery/Ordering::get_ColumnName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ordering_get_ColumnName_mC65267E5811EE3F8CE0CAD868BFBCCD226385E95 (Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826* __this, const RuntimeMethod* method) 
{
	{
		// public string ColumnName { get; set; }
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.BaseTableQuery/Ordering::set_ColumnName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ordering_set_ColumnName_m66126D3284499DA6728C00293B9FB4A7F8C04671 (Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ColumnName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CColumnNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean SQLite4Unity3d.BaseTableQuery/Ordering::get_Ascending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ordering_get_Ascending_mF30E94AF04081D605BCFEC595157DF5FAB62E1AF (Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826* __this, const RuntimeMethod* method) 
{
	{
		// public bool Ascending { get; set; }
		bool L_0 = __this->___U3CAscendingU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLite4Unity3d.BaseTableQuery/Ordering::set_Ascending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ordering_set_Ascending_m6270DD4601CFE7194398EAE9556B39F55FBA418D (Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Ascending { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CAscendingU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void SQLite4Unity3d.BaseTableQuery/Ordering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ordering__ctor_mA2CD0E3D3D8AEF7298884B644C1FE3D89CA7B308 (Ordering_t8D3129D3E036EA513954A3A76CC9E1B92E633826* __this, const RuntimeMethod* method) 
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
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Open(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Open_m80808E4C10BC275172A8A7D7FD25787117AB60EF (String_t* ___0_filename, intptr_t* ___1_db, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_filename' to native representation
	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open)(____0_filename_marshaled, ___1_db);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_db);
	#endif

	// Marshaling cleanup of parameter '___0_filename' native representation
	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Open(System.String,System.IntPtr&,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Open_m3B612E922040951B5531825004CC8749B619EC17 (String_t* ___0_filename, intptr_t* ___1_db, int32_t ___2_flags, intptr_t ___3_zvfs, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, intptr_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_filename' to native representation
	char* ____0_filename_marshaled = NULL;
	____0_filename_marshaled = il2cpp_codegen_marshal_string(___0_filename);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open_v2)(____0_filename_marshaled, ___1_db, ___2_flags, ___3_zvfs);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_db, ___2_flags, ___3_zvfs);
	#endif

	// Marshaling cleanup of parameter '___0_filename' native representation
	il2cpp_codegen_marshal_free(____0_filename_marshaled);
	____0_filename_marshaled = NULL;

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Open(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Open_m6CDE6E15A1A94A043FF483B84715932A526DFDD7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_filename, intptr_t* ___1_db, int32_t ___2_flags, intptr_t ___3_zvfs, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_filename' to native representation
	uint8_t* ____0_filename_marshaled = NULL;
	if (___0_filename != NULL)
	{
		____0_filename_marshaled = reinterpret_cast<uint8_t*>((___0_filename)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open_v2)(____0_filename_marshaled, ___1_db, ___2_flags, ___3_zvfs);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_db, ___2_flags, ___3_zvfs);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Open16(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Open16_mC73D15AD3440EF2661F8EFC2A867EE31C9C93E3D (String_t* ___0_filename, intptr_t* ___1_db, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_filename' to native representation
	Il2CppChar* ____0_filename_marshaled = NULL;
	if (___0_filename != NULL)
	{
		____0_filename_marshaled = &___0_filename->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open16)(____0_filename_marshaled, ___1_db);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_filename_marshaled, ___1_db);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::EnableLoadExtension(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_EnableLoadExtension_mAFFAC5F15C09EDBB8C427BBDD27B7252BC672037 (intptr_t ___0_db, int32_t ___1_onoff, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_enable_load_extension", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_enable_load_extension)(___0_db, ___1_onoff);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db, ___1_onoff);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Close_mAAF5375BAD5920E5280ACC6423C639415E7EFA78 (intptr_t ___0_db, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close)(___0_db);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Initialize_m304F435124113B0A8178ABDC44AFD44FACF463D6 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_initialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_initialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Shutdown_m3FD675F1451569EDB62639896490F10C75FABA3C (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_shutdown", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_shutdown)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Config(SQLite4Unity3d.SQLite3/ConfigOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Config_mCAB0267D34E08352FD7C4A4CB222DFD3ABCC5E62 (int32_t ___0_option, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_config)(___0_option);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_option);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::SetDirectory(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_SetDirectory_m3B30799E1F40465A1676B6A05C9972313DC768D3 (uint32_t ___0_directoryType, String_t* ___1_directoryPath, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint32_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_win32_set_directory", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_directoryPath' to native representation
	Il2CppChar* ____1_directoryPath_marshaled = NULL;
	if (___1_directoryPath != NULL)
	{
		____1_directoryPath_marshaled = &___1_directoryPath->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_win32_set_directory)(___0_directoryType, ____1_directoryPath_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_directoryType, ____1_directoryPath_marshaled);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::BusyTimeout(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BusyTimeout_m66EA8D13E5A32D6BCA1E16FE7D8AAED356CE2FF5 (intptr_t ___0_db, int32_t ___1_milliseconds, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_busy_timeout)(___0_db, ___1_milliseconds);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db, ___1_milliseconds);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::Changes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Changes_m0CA6C84B391B75B9B89D5115175F51D4B81BCEAC (intptr_t ___0_db, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_changes)(___0_db);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Prepare2(System.IntPtr,System.String,System.Int32,System.IntPtr&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Prepare2_m5531D11AAAEFE4C51DB0CF750D4D073930A58019 (intptr_t ___0_db, String_t* ___1_sql, int32_t ___2_numBytes, intptr_t* ___3_stmt, intptr_t ___4_pzTail, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*, int32_t, intptr_t*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_sql' to native representation
	char* ____1_sql_marshaled = NULL;
	____1_sql_marshaled = il2cpp_codegen_marshal_string(___1_sql);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_prepare_v2)(___0_db, ____1_sql_marshaled, ___2_numBytes, ___3_stmt, ___4_pzTail);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db, ____1_sql_marshaled, ___2_numBytes, ___3_stmt, ___4_pzTail);
	#endif

	// Marshaling cleanup of parameter '___1_sql' native representation
	il2cpp_codegen_marshal_free(____1_sql_marshaled);
	____1_sql_marshaled = NULL;

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::Prepare2(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2 (intptr_t ___0_db, String_t* ___1_query, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var r = Prepare2 (db, query, System.Text.UTF8Encoding.UTF8.GetByteCount (query), out stmt, IntPtr.Zero);
		intptr_t L_0 = ___0_db;
		String_t* L_1 = ___1_query;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___1_query;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_6;
		L_6 = SQLite3_Prepare2_m5531D11AAAEFE4C51DB0CF750D4D073930A58019(L_0, L_1, L_4, (&V_0), L_5, NULL);
		V_1 = L_6;
		// if (r != Result.OK) {
		int32_t L_7 = V_1;
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// throw SQLiteException.New (r, GetErrmsg (db));
		int32_t L_9 = V_1;
		intptr_t L_10 = ___0_db;
		String_t* L_11;
		L_11 = SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5(L_10, NULL);
		SQLiteException_t7104409E8ADAC97D5B8DD8998E7C10A0DA4437DE* L_12;
		L_12 = SQLiteException_New_mBAA35B1ABD7422D5D62C6C9DE9D8BD61CB5C2920(L_9, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLite3_Prepare2_mBC0448C52B777A3323376C9B59F4903D11B0D9D2_RuntimeMethod_var)));
	}

IL_0031:
	{
		// return stmt;
		intptr_t L_13 = V_0;
		V_3 = L_13;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		intptr_t L_14 = V_3;
		return L_14;
	}
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Step(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Step_m47764101C949500F2E1E61DDAF4BCC215C342950 (intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_step)(___0_stmt);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Reset_mCCF573AD24F220FBAEA8E6C154B7737E9B45AD4E (intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_reset)(___0_stmt);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt);
	#endif

	return returnValue;
}
// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLite3::Finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_Finalize_m109856BC23FA51D5AE62948F98C9381A9EA08CAC (intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_finalize)(___0_stmt);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt);
	#endif

	return returnValue;
}
// System.Int64 SQLite4Unity3d.SQLite3::LastInsertRowid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3_LastInsertRowid_mDD625CFDF511A0167D291F719DB860ED845B82D1 (intptr_t ___0_db, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_last_insert_rowid", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_last_insert_rowid)(___0_db);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___0_db);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::Errmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_Errmsg_m6FE2B877839224BC999C20A5D835A6B1103EBD2A (intptr_t ___0_db, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errmsg16)(___0_db);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_db);
	#endif

	return returnValue;
}
// System.String SQLite4Unity3d.SQLite3::GetErrmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_GetErrmsg_mB88E872BC14EC299C209139E3567210B559F51F5 (intptr_t ___0_db, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Marshal.PtrToStringUni (Errmsg (db));
		intptr_t L_0 = ___0_db;
		intptr_t L_1;
		L_1 = SQLite3_Errmsg_m6FE2B877839224BC999C20A5D835A6B1103EBD2A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 SQLite4Unity3d.SQLite3::BindParameterIndex(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindParameterIndex_m7E9EAA9E6291ADD9991140E8B9DD82A3AEBCA572 (intptr_t ___0_stmt, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_index", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_index)(___0_stmt, ____1_name_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindNull(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindNull_m9C7AB23E02A0AF38C0ECEE46561509A7BD54862F (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_null)(___0_stmt, ___1_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindInt(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindInt_m1F381D218E2410E2CA18A516F1B80CB001226BE3 (intptr_t ___0_stmt, int32_t ___1_index, int32_t ___2_val, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int)(___0_stmt, ___1_index, ___2_val);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index, ___2_val);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindInt64(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindInt64_mE1BEDBBE8D71846441873D76975FDF084497283E (intptr_t ___0_stmt, int32_t ___1_index, int64_t ___2_val, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int64)(___0_stmt, ___1_index, ___2_val);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index, ___2_val);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindDouble(System.IntPtr,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindDouble_mEDD937BE65B3E374F9AFCDA8D482F9F1292C4290 (intptr_t ___0_stmt, int32_t ___1_index, double ___2_val, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_double)(___0_stmt, ___1_index, ___2_val);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index, ___2_val);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindText(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindText_mEDC93F5CA420D62CE61DC2624453A3C76670056A (intptr_t ___0_stmt, int32_t ___1_index, String_t* ___2_val, int32_t ___3_n, intptr_t ___4_free, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_val' to native representation
	Il2CppChar* ____2_val_marshaled = NULL;
	if (___2_val != NULL)
	{
		____2_val_marshaled = &___2_val->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text16)(___0_stmt, ___1_index, ____2_val_marshaled, ___3_n, ___4_free);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index, ____2_val_marshaled, ___3_n, ___4_free);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::BindBlob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_BindBlob_mECFD37EFD7AE1CE6A7B5A63D630CC1E15CF1206A (intptr_t ___0_stmt, int32_t ___1_index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_val, int32_t ___3_n, intptr_t ___4_free, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_val' to native representation
	uint8_t* ____2_val_marshaled = NULL;
	if (___2_val != NULL)
	{
		____2_val_marshaled = reinterpret_cast<uint8_t*>((___2_val)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_blob)(___0_stmt, ___1_index, ____2_val_marshaled, ___3_n, ___4_free);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index, ____2_val_marshaled, ___3_n, ___4_free);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::ColumnCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnCount_m1A6B1056CFC8E099C137988758E46FAF32DBCAE9 (intptr_t ___0_stmt, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_count)(___0_stmt);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnName(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnName_mE48860BBB774B8D30E0B8F628D05DDC85C914F34 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name)(___0_stmt, ___1_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnName16Internal(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnName16Internal_m296D10EEB4C133C71292AD9AD27E6032C9E5D760 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name16)(___0_stmt, ___1_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.String SQLite4Unity3d.SQLite3::ColumnName16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_ColumnName16_mFF172F2610B235D30624EEFC6A10BA7AE6B69844 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Marshal.PtrToStringUni(ColumnName16Internal(stmt, index));
		intptr_t L_0 = ___0_stmt;
		int32_t L_1 = ___1_index;
		intptr_t L_2;
		L_2 = SQLite3_ColumnName16Internal_m296D10EEB4C133C71292AD9AD27E6032C9E5D760(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// SQLite4Unity3d.SQLite3/ColType SQLite4Unity3d.SQLite3::ColumnType(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnType_m4449C0C57377694A1CA0C50EC93C67D5BB2D65BC (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_type)(___0_stmt, ___1_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::ColumnInt(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnInt_m3674CF3E07B2D0127DDA59AE7C154E402A5160EF (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int)(___0_stmt, ___1_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.Int64 SQLite4Unity3d.SQLite3::ColumnInt64(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3_ColumnInt64_m72215BA39F473B24D8442AAA50A12D37024C7A08 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int64)(___0_stmt, ___1_index);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.Double SQLite4Unity3d.SQLite3::ColumnDouble(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SQLite3_ColumnDouble_mE4F9CDF44BEF62E61DB8EDB332865923E7B17A7B (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_double)(___0_stmt, ___1_index);
	#else
	double returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnText(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnText_m2DD2B44A67887C7864DE4A87EB464D618DD962FB (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text)(___0_stmt, ___1_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnText16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnText16_m17C0B6B852576E3369DBF3C8C8F1BA3D7C002254 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text16)(___0_stmt, ___1_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.IntPtr SQLite4Unity3d.SQLite3::ColumnBlob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3_ColumnBlob_mB0E992DF4C8C119993796A69B160153D91688D35 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_blob)(___0_stmt, ___1_index);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::ColumnBytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ColumnBytes_m79D6917064332E241C14666AC5E17E07782A554B (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_bytes)(___0_stmt, ___1_index);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stmt, ___1_index);
	#endif

	return returnValue;
}
// System.String SQLite4Unity3d.SQLite3::ColumnString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_ColumnString_mC7495ED684AF170F31724D26EF5BB4EBA78E0E94 (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Marshal.PtrToStringUni (SQLite3.ColumnText16 (stmt, index));
		intptr_t L_0 = ___0_stmt;
		int32_t L_1 = ___1_index;
		intptr_t L_2;
		L_2 = SQLite3_ColumnText16_m17C0B6B852576E3369DBF3C8C8F1BA3D7C002254(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] SQLite4Unity3d.SQLite3::ColumnByteArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SQLite3_ColumnByteArray_m09025DD6AB983E61366EFCB4F1500F7EA24CEC5E (intptr_t ___0_stmt, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// int length = ColumnBytes (stmt, index);
		intptr_t L_0 = ___0_stmt;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = SQLite3_ColumnBytes_m79D6917064332E241C14666AC5E17E07782A554B(L_0, L_1, NULL);
		V_0 = L_2;
		// var result = new byte[length];
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// if (length > 0)
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// Marshal.Copy (ColumnBlob (stmt, index), result, 0, length);
		intptr_t L_7 = ___0_stmt;
		int32_t L_8 = ___1_index;
		intptr_t L_9;
		L_9 = SQLite3_ColumnBlob_mB0E992DF4C8C119993796A69B160153D91688D35(L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, 0, L_11, NULL);
	}

IL_0028:
	{
		// return result;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		V_3 = L_12;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		return L_13;
	}
}
// SQLite4Unity3d.SQLite3/ExtendedResult SQLite4Unity3d.SQLite3::ExtendedErrCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_ExtendedErrCode_mE53EAE79412B17719370EA83EF845896409E4E68 (intptr_t ___0_db, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_extended_errcode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_extended_errcode)(___0_db);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_db);
	#endif

	return returnValue;
}
// System.Int32 SQLite4Unity3d.SQLite3::LibVersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3_LibVersionNumber_m2C388472E0DC6C13BA5F5A2DD8BB226EA30D52C5 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion_number", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion_number)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnInfo_get_Name_m58406BCC746124ACF825EC2F71A33EC51EA787E2_inline (ColumnInfo_tADDAD99ABAC001A3A2EADFD5DBF7DAB0BA99A4B2* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Column_get_Name_mCD04FF5441F38141B4208B04398DA68BB9FBD959_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_ConnectionString_m86572BCB05C4F3AB9ADB3847FAECFB4B55A97876_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ConnectionString { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CConnectionStringU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConnectionStringU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_StoreDateTimeAsTicks_mE61C0DD29C9985A25FBCDEBF7BF43389C5E69C23_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool StoreDateTimeAsTicks { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CStoreDateTimeAsTicksU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteConnectionString_set_DatabasePath_mE625A3627858ECFC73B7F530C066CE3C83716BC0_inline (SQLiteConnectionString_tAB6A6F83E42333E01C348CBA36550FDCE1460664* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DatabasePath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDatabasePathU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabasePathU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m1BE9470AE2BA2E3BAD9694E4E1B78E19E8212984_inline (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColumnAttribute_set_Name_mE3122C2539DE916052E72CC9E7971B96234FE023_inline (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndexedAttribute_set_Name_mC9D9DA8C0FD3BD0CFC098D113AD0C38863EAC898_inline (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IndexedAttribute_set_Order_mBB0C74DD1D10DBBBA79A98C9798E3000312E3C57_inline (IndexedAttribute_t70A306085BCBFF1F5D7B0FCED8232D45378E863F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Order { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3COrderU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaxLengthAttribute_set_Value_m769CB0382163AFC0547A8237C646995EFA1EBC29_inline (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Value { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollationAttribute_set_Value_m879958EE7A8C28BEE1D60FF7F57DF65736377F0A_inline (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Value { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_MappedType_mD0220B466756EA9D6E96E80B7DABDC5136638832_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type MappedType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CMappedTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMappedTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* TableMapping_get_MappedType_mEFC30D7C1A5CA7FE335BD3EA01B759170A16B6FA_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Type MappedType { get; private set; }
		Type_t* L_0 = __this->___U3CMappedTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m28941E0E3D074B4D9AC32C13886B62B9678EB7C1_inline (TableAttribute_tC017BC787AD8FFE91E277918E16897BCBEE8A534* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_TableName_m74BB32CC2B1F03EB818461E7B8B7608E443D05A5_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string TableName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTableNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTableNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_Columns_mB809C3C4C606ABECA6A7C39817E85C49E0580871_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Column[] Columns { get; private set; }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = ___0_value;
		__this->___U3CColumnsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* TableMapping_get_Columns_m154A3DA448447050159EFFE005D97A4FB0B6C579_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Column[] Columns { get; private set; }
		ColumnU5BU5D_t13AFD0F4FD82CE35383F87FEE2A9207E5D975960* L_0 = __this->___U3CColumnsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsAutoInc_m0450ED22AB791989655C7FD559763909340463A9_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoInc { get; private set; }
		bool L_0 = __this->___U3CIsAutoIncU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsPK_m93BA49BEDF4C9040B9D88F13F2FFEE11D4FD97C7_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPK { get; private set; }
		bool L_0 = __this->___U3CIsPKU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_PK_m65E0749BAD788A1FE4087774C2EB2DE22E2DD6F7_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Column PK { get; private set; }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = ___0_value;
		__this->___U3CPKU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPKU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_HasAutoIncPK_m11254701AD04373CFD39137AB076C7735E6F1FF0_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasAutoIncPK { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CHasAutoIncPKU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* TableMapping_get_PK_m60262F211F1A2F9C31183BBD63849106D0D2A76E_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public Column PK { get; private set; }
		Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* L_0 = __this->___U3CPKU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableMapping_get_TableName_m8CA81DD62C564FC45C20182A70BE57CBAD16356C_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, const RuntimeMethod* method) 
{
	{
		// public string TableName { get; private set; }
		String_t* L_0 = __this->___U3CTableNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableMapping_set_GetByPrimaryKeySql_m2E681BF7B6CC67FDF742C2F8FC721A23C28A8215_inline (TableMapping_t5D7779FD498D51EA158D4530D6DE7F3306346966* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string GetByPrimaryKeySql { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGetByPrimaryKeySqlU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetByPrimaryKeySqlU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Column_get_ColumnType_mE2D5ABA4816C0824DA401FB17C8C7C262CD94A39_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public Type ColumnType { get; private set; }
		Type_t* L_0 = __this->___U3CColumnTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_CommandText_mF815B54C9CC7655C4EFD985B018A7F2BCB801D25_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCommandTextU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommandTextU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_Name_m77A6DCA8A8508839AAF308D8A8FAFB0AE02E56B6_inline (ColumnAttribute_t77511FC8753FBCFC199416A63847764E327C45A4* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Name_mD882DC58740CE81E425CB2A31F3DCA0F0E50894D_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_ColumnType_m7CC823907CE0417707286D87E8B09356F56B3684_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ColumnType { get; private set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CColumnTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Collation_m38950A7B621B26E1445DD71BA8EB25310A9625E2_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Collation { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCollationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCollationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsPK_mF1E6B6A586CB5A6C00E2AC6E9BB2C6B431F1BC2C_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPK { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsPKU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsAutoGuid_mCC042141DA8E2AC6540F48E80C5A56F8E4A9BD3A_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoGuid { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsAutoGuidU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsAutoGuid_m57F6E41749A0EA41B0045EAAEA737420D91BFDD6_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoGuid { get; private set; }
		bool L_0 = __this->___U3CIsAutoGuidU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsAutoInc_mB5E9C07D162A67B47AA22CAD5377FA88FB539957_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsAutoInc { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsAutoIncU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_Indices_m3CE76E6C2C8921D734C9A02DEBE747C2F46675A7_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<IndexedAttribute> Indices { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CIndicesU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIndicesU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Column_get_Indices_m7031A7B3593A288E9B314065A906D1358FF0580E_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<IndexedAttribute> Indices { get; set; }
		RuntimeObject* L_0 = __this->___U3CIndicesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_IsNullable_mFFD923C501D7848B8DC14A9B40FB52D729DF8305_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsNullable { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsNullableU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Column_set_MaxStringLength_mDFCF47180CF9CB10CFEF5532AF58957C487C4FA1_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		// public int? MaxStringLength { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CMaxStringLengthU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Column_get_IsNullable_mBA3EFE8EE8CEB4F11EA0AE63AE30E8E27BF3DF7F_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNullable { get; private set; }
		bool L_0 = __this->___U3CIsNullableU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Column_get_Collation_mFCB25D7DEC4A917028AD1119B960797354754FE4_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public string Collation { get; private set; }
		String_t* L_0 = __this->___U3CCollationU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Column_get_MaxStringLength_mAAA93C02B5F68450E5EC2E9106BF6EDBEE367FD1_inline (Column_t564DF88EC1682FE8BFF942CEA00230032EF3D671* __this, const RuntimeMethod* method) 
{
	{
		// public int? MaxStringLength { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMaxStringLengthU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CollationAttribute_get_Value_m8BBDF28DFA2375F6E36CD0CA758954F6E261DC4D_inline (CollationAttribute_tD5A6B879E824B221C55E1526C2EB88FF45F26F4C* __this, const RuntimeMethod* method) 
{
	{
		// public string Value { get; private set; }
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MaxLengthAttribute_get_Value_m41D0EE4D437B205AAAA56902DB7EFC0176397851_inline (MaxLengthAttribute_t9B1ED8C4B24B0AF07C272CCF039E425B6C8B68E0* __this, const RuntimeMethod* method) 
{
	{
		// public int Value { get; private set; }
		int32_t L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SQLiteCommand_set_CommandText_mE6FE06C0BEFC9971431441AB6A99E7DDFD0F5203_inline (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCommandTextU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommandTextU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SQLiteConnection_get_Trace_mFF9F2DB848A04CF036DD487904E7DF71837855E2_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool Trace { get; set; }
		bool L_0 = __this->___U3CTraceU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SQLiteConnection_get_Handle_m5199E6BE8B689983C361CF5766A9E54B867EB1BD_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) 
{
	{
		// public Sqlite3DatabaseHandle Handle { get; private set; }
		intptr_t L_0 = __this->___U3CHandleU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Name_m6605B567612DDFD3FA9FC4557DD0F03ABE7698F8_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Value_m63DB4E8880807D0480D3ED195430FE33717FBAD0_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SQLiteCommand_get_CommandText_mC5B929462D924D4197466FFF1EFBA48B06A6EE12_inline (SQLiteCommand_tE4EAE2C5540D8A3E978930F43369250F5063E8BF* __this, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = __this->___U3CCommandTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Binding_get_Value_mC2E67931562F6A62D66038EBEA50BA9395C77785_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Binding_get_Name_m36460244708DECF7462EC96985049395A01BEE4F_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Binding_set_Index_mD5F67E97A91ED368AF1055F65734E8FA474C3AB1_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Index { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIndexU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_Index_m5456E8E974EFC63C021CCF2AD8FC8036E8AA2C91_inline (Binding_t846C16F3FF76025D82F878E8E00A5894741580FD* __this, const RuntimeMethod* method) 
{
	{
		// public int Index { get; set; }
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SQLiteConnection_get_StoreDateTimeAsTicks_m4F0D2FE9AD61981FA554273C956E335B1C1F9929_inline (SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool StoreDateTimeAsTicks { get; private set; }
		bool L_0 = __this->___U3CStoreDateTimeAsTicksU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_ticks;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Connection_mCCBE4206E6F940C3762DDF7EC4E7C75174145E23_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected SQLiteConnection Connection { get; set; }
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = ___0_value;
		__this->___U3CConnectionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConnectionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* PreparedSqlLiteInsertCommand_get_Connection_mBB8F6B07CDA2CF1A8386A0FBE5C3FD61E15E74CA_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// protected SQLiteConnection Connection { get; set; }
		SQLiteConnection_t7E2BA1E4CC3809FD458BFD2813B706A91189DCC4* L_0 = __this->___U3CConnectionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PreparedSqlLiteInsertCommand_get_CommandText_m1774FAC339AF3EE7649470C4F02912EFED8E9214_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// public string CommandText { get; set; }
		String_t* L_0 = __this->___U3CCommandTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PreparedSqlLiteInsertCommand_get_Initialized_mCA24A887ADAD977158DC4E161DC05D6A0041703B_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// public bool Initialized { get; set; }
		bool L_0 = __this->___U3CInitializedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Statement_mC87A23AD8B6856E34DC7B2020EA0188AFA737D07_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// protected Sqlite3Statement Statement { get; set; }
		intptr_t L_0 = ___0_value;
		__this->___U3CStatementU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PreparedSqlLiteInsertCommand_set_Initialized_mEE003DDBDE4E99119A83428683D170BBB556ADAB_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Initialized { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CInitializedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t PreparedSqlLiteInsertCommand_get_Statement_m29BC704221EF28CEECA30BFE4E52217430CC719D_inline (PreparedSqlLiteInsertCommand_t2E0FDB355A754A9BB3DCC8163BA880F5B8161CC6* __this, const RuntimeMethod* method) 
{
	{
		// protected Sqlite3Statement Statement { get; set; }
		intptr_t L_0 = __this->___U3CStatementU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
