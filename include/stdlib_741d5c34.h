       
#include <corecrt.h>
#include <corecrt_malloc.h>
#include <corecrt_search.h>
#include <corecrt_wstdlib.h>
#include <limits.h>
_CRT_BEGIN_C_HEADER
    #define _countof __crt_countof
_ACRTIMP void __cdecl _swab(
    _Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char* _Buf1,
    _Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char* _Buf2,
    _In_ int _SizeInBytes
    );
_ACRTIMP unsigned int __cdecl _set_abort_behavior(
    _In_ unsigned int _Flags,
    _In_ unsigned int _Mask
    );
    #define _CRT_ONEXIT_T_DEFINED
    typedef int (__CRTDECL* _onexit_t)(void);
        typedef int (__clrcall* _onexit_m_t)(void);
    #pragma warning (push)
    #pragma warning (disable: 4985)
    _Check_return_ int __clrcall _atexit_m_appdomain(_In_opt_ void (__clrcall* _Function)(void));
    _onexit_m_t __clrcall _onexit_m_appdomain(_onexit_m_t _Function);
        [System::Security::SecurityCritical]
        _Check_return_ int __clrcall _atexit_m(_In_opt_ void (__clrcall* _Function)(void));
        _onexit_m_t __clrcall _onexit_m(_onexit_m_t _Function);
    #pragma warning (pop)
    extern "C++"
    {
    [System::Security::SecurityCritical]
    inline int __clrcall atexit(void (__clrcall* _Function)(void))
    {
        return _atexit_m_appdomain(_Function);
    }
    inline _onexit_t __clrcall _onexit(_onexit_t _Function)
    {
        return _onexit_m_appdomain(_Function);
    }
    }
int __cdecl at_quick_exit(void (__cdecl*)(void));
    typedef void (__cdecl* _purecall_handler)(void);
    typedef void (__cdecl* _invalid_parameter_handler)(
        wchar_t const*,
        wchar_t const*,
        wchar_t const*,
        unsigned int,
        uintptr_t
        );
    _VCRTIMP _purecall_handler __cdecl _set_purecall_handler(
        _In_opt_ _purecall_handler _Handler
        );
    _VCRTIMP _purecall_handler __cdecl _get_purecall_handler(void);
    _ACRTIMP _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(
        _In_opt_ _invalid_parameter_handler _Handler
        );
    _ACRTIMP _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);
    _ACRTIMP _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(
        _In_opt_ _invalid_parameter_handler _Handler
        );
    _ACRTIMP _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void);
_Check_return_opt_ _ACRTIMP int __cdecl _set_error_mode(_In_ int _Mode);
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_pgmptr ) _ACRTIMP char** __cdecl __p__pgmptr (void);
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_wpgmptr) _ACRTIMP wchar_t** __cdecl __p__wpgmptr(void);
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_fmode ) _ACRTIMP int* __cdecl __p__fmode (void);
    _CRT_INSECURE_DEPRECATE_GLOBALS(_get_pgmptr ) extern char* _pgmptr;
    _CRT_INSECURE_DEPRECATE_GLOBALS(_get_wpgmptr) extern wchar_t* _wpgmptr;
        _CRT_INSECURE_DEPRECATE_GLOBALS(_get_fmode ) extern int _fmode;
_Success_(return == 0)
_ACRTIMP errno_t __cdecl _get_pgmptr (_Outptr_result_z_ char** _Value);
_Success_(return == 0)
_ACRTIMP errno_t __cdecl _get_wpgmptr(_Outptr_result_z_ wchar_t** _Value);
_ACRTIMP errno_t __cdecl _set_fmode (_In_ int _Mode );
_ACRTIMP errno_t __cdecl _get_fmode (_Out_ int* _PMode);
typedef struct _div_t
{
    int quot;
    int rem;
} div_t;
typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_t;
typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_t;
_Check_return_ int __cdecl abs (_In_ int _Number);
_Check_return_ long __cdecl labs (_In_ long _Number);
_Check_return_ long long __cdecl llabs (_In_ long long _Number);
_Check_return_ __int64 __cdecl _abs64(_In_ __int64 _Number);
_Check_return_ unsigned short __cdecl _byteswap_ushort(_In_ unsigned short _Number);
_Check_return_ unsigned long __cdecl _byteswap_ulong (_In_ unsigned long _Number);
_Check_return_ unsigned __int64 __cdecl _byteswap_uint64(_In_ unsigned __int64 _Number);
_Check_return_ _ACRTIMP div_t __cdecl div (_In_ int _Numerator, _In_ int _Denominator);
_Check_return_ _ACRTIMP ldiv_t __cdecl ldiv (_In_ long _Numerator, _In_ long _Denominator);
_Check_return_ _ACRTIMP lldiv_t __cdecl lldiv(_In_ long long _Numerator, _In_ long long _Denominator);
#pragma warning (push)
#pragma warning (disable:6540)
unsigned int __cdecl _rotl(
    _In_ unsigned int _Value,
    _In_ int _Shift
    );
_Check_return_
unsigned long __cdecl _lrotl(
    _In_ unsigned long _Value,
    _In_ int _Shift
    );
unsigned __int64 __cdecl _rotl64(
    _In_ unsigned __int64 _Value,
    _In_ int _Shift
    );
unsigned int __cdecl _rotr(
    _In_ unsigned int _Value,
    _In_ int _Shift
    );
_Check_return_
unsigned long __cdecl _lrotr(
    _In_ unsigned long _Value,
    _In_ int _Shift
    );
unsigned __int64 __cdecl _rotr64(
    _In_ unsigned __int64 _Value,
    _In_ int _Shift
    );
#pragma warning (pop)
_ACRTIMP void __cdecl srand(_In_ unsigned int _Seed);
_Check_return_ _ACRTIMP int __cdecl rand(void);
extern "C++"
{
    inline long abs(long const _X) throw()
    {
        return labs(_X);
    }
    inline long long abs(long long const _X) throw()
    {
        return llabs(_X);
    }
    inline ldiv_t div(long const _A1, long const _A2) throw()
    {
        return ldiv(_A1, _A2);
    }
    inline lldiv_t div(long long const _A1, long long const _A2) throw()
    {
        return lldiv(_A1, _A2);
    }
}
    #pragma pack(push, 4)
    typedef struct
    {
        unsigned char ld[10];
    } _LDOUBLE;
    #pragma pack(pop)
    #define _PTR_LD(x) ((unsigned char*)(&(x)->ld))
typedef struct
{
    double x;
} _CRT_DOUBLE;
typedef struct
{
    float f;
} _CRT_FLOAT;
       
typedef struct
{
    long double x;
} _LONGDOUBLE;
       
#pragma pack(push, 4)
typedef struct
{
    unsigned char ld12[12];
} _LDBL12;
#pragma pack(pop)
_Check_return_ _ACRTIMP double __cdecl atof (_In_z_ char const* _String);
_Check_return_ _CRT_JIT_INTRINSIC _ACRTIMP int __cdecl atoi (_In_z_ char const* _String);
_Check_return_ _ACRTIMP long __cdecl atol (_In_z_ char const* _String);
_Check_return_ _ACRTIMP long long __cdecl atoll (_In_z_ char const* _String);
_Check_return_ _ACRTIMP __int64 __cdecl _atoi64(_In_z_ char const* _String);
_Check_return_ _ACRTIMP double __cdecl _atof_l (_In_z_ char const* _String, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _atoi_l (_In_z_ char const* _String, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP long __cdecl _atol_l (_In_z_ char const* _String, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP long long __cdecl _atoll_l (_In_z_ char const* _String, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP __int64 __cdecl _atoi64_l(_In_z_ char const* _String, _In_opt_ _locale_t _Locale);
_Check_return_ _ACRTIMP int __cdecl _atoflt (_Out_ _CRT_FLOAT* _Result, _In_z_ char const* _String);
_Check_return_ _ACRTIMP int __cdecl _atodbl (_Out_ _CRT_DOUBLE* _Result, _In_z_ char* _String);
_Check_return_ _ACRTIMP int __cdecl _atoldbl(_Out_ _LDOUBLE* _Result, _In_z_ char* _String);
_Check_return_
_ACRTIMP int __cdecl _atoflt_l(
    _Out_ _CRT_FLOAT* _Result,
    _In_z_ char const* _String,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl _atodbl_l(
    _Out_ _CRT_DOUBLE* _Result,
    _In_z_ char* _String,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP int __cdecl _atoldbl_l(
    _Out_ _LDOUBLE* _Result,
    _In_z_ char* _String,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP float __cdecl strtof(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr
    );
_Check_return_
_ACRTIMP float __cdecl _strtof_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP double __cdecl strtod(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr
    );
_Check_return_
_ACRTIMP double __cdecl _strtod_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP long double __cdecl strtold(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr
    );
_Check_return_
_ACRTIMP long double __cdecl _strtold_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP long __cdecl strtol(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP long __cdecl _strtol_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP long long __cdecl strtoll(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP long long __cdecl _strtoll_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP unsigned long __cdecl strtoul(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP unsigned long __cdecl _strtoul_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP unsigned long long __cdecl strtoull(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP unsigned long long __cdecl _strtoull_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP __int64 __cdecl _strtoi64(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP __int64 __cdecl _strtoi64_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_ACRTIMP unsigned __int64 __cdecl _strtoui64(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix
    );
_Check_return_
_ACRTIMP unsigned __int64 __cdecl _strtoui64_l(
    _In_z_ char const* _String,
    _Out_opt_ _Deref_post_z_ char** _EndPtr,
    _In_ int _Radix,
    _In_opt_ _locale_t _Locale
    );
_Success_(return == 0)
_Check_return_opt_
_ACRTIMP errno_t __cdecl _itoa_s(
    _In_ int _Value,
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ int _Radix
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    _Success_(return == 0)
    errno_t, _itoa_s,
    _In_ int, _Value,
         char, _Buffer,
    _In_ int, _Radix
    )
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    char*, __RETURN_POLICY_DST, _ACRTIMP, _itoa,
    _In_ int, _Value,
    _Pre_notnull_ _Post_z_, char, _Buffer,
    _In_ int, _Radix
    )
#pragma warning(pop)
_Success_(return == 0)
_Check_return_opt_
_ACRTIMP errno_t __cdecl _ltoa_s(
    _In_ long _Value,
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ int _Radix
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    errno_t, _ltoa_s,
    _In_ long, _Value,
         char, _Buffer,
    _In_ int, _Radix
    )
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    char*, __RETURN_POLICY_DST, _ACRTIMP, _ltoa,
    _In_ long, _Value,
    _Pre_notnull_ _Post_z_, char, _Buffer,
    _In_ int, _Radix
    )
_Success_(return == 0)
_Check_return_opt_
_ACRTIMP errno_t __cdecl _ultoa_s(
    _In_ unsigned long _Value,
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ int _Radix
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(
    errno_t, _ultoa_s,
    _In_ unsigned long, _Value,
         char, _Buffer,
    _In_ int, _Radix
    )
#pragma warning(push)
#pragma warning(disable: 28726)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(
    char*, __RETURN_POLICY_DST, _ACRTIMP, _ultoa,
    _In_ unsigned long, _Value,
    _Pre_notnull_ _Post_z_, char, _Buffer,
    _In_ int, _Radix
    )
#pragma warning(pop)
_Success_(return == 0)
_Check_return_opt_
_ACRTIMP errno_t __cdecl _i64toa_s(
    _In_ __int64 _Value,
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ int _Radix
    );
_Success_(return == 0)
_CRT_INSECURE_DEPRECATE(_i64toa_s)
_ACRTIMP char* __cdecl _i64toa(
    _In_ __int64 _Value,
    _Pre_notnull_ _Post_z_ char* _Buffer,
    _In_ int _Radix
    );
_Success_(return == 0)
_Check_return_opt_
_ACRTIMP errno_t __cdecl _ui64toa_s(
    _In_ unsigned __int64 _Value,
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ int _Radix
    );
_CRT_INSECURE_DEPRECATE(_ui64toa_s)
_ACRTIMP char* __cdecl _ui64toa(
    _In_ unsigned __int64 _Value,
    _Pre_notnull_ _Post_z_ char* _Buffer,
    _In_ int _Radix
    );
_Success_(return == 0)
_Check_return_wat_
_ACRTIMP errno_t __cdecl _ecvt_s(
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ double _Value,
    _In_ int _DigitCount,
    _Out_ int* _PtDec,
    _Out_ int* _PtSign
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(
    errno_t, _ecvt_s,
          char, _Buffer,
    _In_ double, _Value,
    _In_ int, _DigitCount,
    _Out_ int*, _PtDec,
    _Out_ int*, _PtSign
    )
_Check_return_ _CRT_INSECURE_DEPRECATE(_ecvt_s)
_ACRTIMP char* __cdecl _ecvt(
    _In_ double _Value,
    _In_ int _DigitCount,
    _Out_ int* _PtDec,
    _Out_ int* _PtSign
    );
_Success_(return == 0)
_Check_return_wat_
_ACRTIMP errno_t __cdecl _fcvt_s(
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ double _Value,
    _In_ int _FractionalDigitCount,
    _Out_ int* _PtDec,
    _Out_ int* _PtSign
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(
    _Success_(return == 0)
    errno_t, _fcvt_s,
          char, _Buffer,
    _In_ double, _Value,
    _In_ int, _FractionalDigitCount,
    _Out_ int*, _PtDec,
    _Out_ int*, _PtSign
    )
_Success_(return == 0)
_Check_return_ _CRT_INSECURE_DEPRECATE(_fcvt_s)
_ACRTIMP char* __cdecl _fcvt(
    _In_ double _Value,
    _In_ int _FractionalDigitCount,
    _Out_ int* _PtDec,
    _Out_ int* _PtSign
    );
_Success_(return == 0)
_ACRTIMP errno_t __cdecl _gcvt_s(
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_ double _Value,
    _In_ int _DigitCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(
    _Success_(return == 0)
    errno_t, _gcvt_s,
         char, _Buffer,
    _In_ double, _Value,
    _In_ int, _DigitCount
    )
_CRT_INSECURE_DEPRECATE(_gcvt_s)
_ACRTIMP char* __cdecl _gcvt(
    _In_ double _Value,
    _In_ int _DigitCount,
    _Pre_notnull_ _Post_z_ char* _Buffer
    );
        #define MB_CUR_MAX ___mb_cur_max_func()
        extern int __mb_cur_max;
    _Post_satisfies_(return > 0 && return < MB_LEN_MAX)
    _ACRTIMP int __cdecl ___mb_cur_max_func(void);
    _Post_satisfies_(return > 0 && return < MB_LEN_MAX)
    _ACRTIMP int __cdecl ___mb_cur_max_l_func(_locale_t _Locale);
_Check_return_
_ACRTIMP int __cdecl mblen(
    _In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ char const* _Ch,
    _In_ size_t _MaxCount
    );
_Check_return_
_ACRTIMP int __cdecl _mblen_l(
    _In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ char const* _Ch,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_Post_satisfies_(return <= _String_length_(_String))
_ACRTIMP size_t __cdecl _mbstrlen(
    _In_z_ char const* _String
    );
_Check_return_
_Post_satisfies_(return <= _String_length_(_String) || return == (size_t)-1)
_ACRTIMP size_t __cdecl _mbstrlen_l(
    _In_z_ char const* _String,
    _In_opt_ _locale_t _Locale
    );
_Check_return_
_Post_satisfies_((return <= _String_length_(_String) && return <= _MaxCount) || return == (size_t)-1)
_ACRTIMP size_t __cdecl _mbstrnlen(
    _In_z_ char const* _String,
    _In_ size_t _MaxCount
    );
_Post_satisfies_((return <= _String_length_(_String) && return <= _MaxCount) || return == (size_t)-1)
_Check_return_
_ACRTIMP size_t __cdecl _mbstrnlen_l(
    _In_z_ char const* _String,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
_Success_(return != -1)
_ACRTIMP int __cdecl mbtowc(
    _Pre_notnull_ _Post_z_ wchar_t* _DstCh,
    _In_reads_or_z_opt_(_SrcSizeInBytes) char const* _SrcCh,
    _In_ size_t _SrcSizeInBytes
    );
_Success_(return != -1)
_ACRTIMP int __cdecl _mbtowc_l(
    _Pre_notnull_ _Post_z_ wchar_t* _DstCh,
    _In_reads_or_z_opt_(_SrcSizeInBytes) char const* _SrcCh,
    _In_ size_t _SrcSizeInBytes,
    _In_opt_ _locale_t _Locale
    );
_Check_return_opt_
_ACRTIMP errno_t __cdecl mbstowcs_s(
    _Out_opt_ size_t* _PtNumOfCharConverted,
    _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t* _DstBuf,
    _In_ size_t _SizeInWords,
    _In_reads_or_z_(_MaxCount) char const* _SrcBuf,
    _In_ size_t _MaxCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(
    errno_t, mbstowcs_s,
    _Out_opt_ size_t*, _PtNumOfCharConverted,
    _Post_z_ wchar_t, _Dest,
    _In_z_ char const*, _Source,
    _In_ size_t, _MaxCount
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(
    _ACRTIMP, mbstowcs,
    _Out_writes_opt_z_(_MaxCount), wchar_t, _Dest,
    _In_z_ char const*, _Source,
    _In_ size_t, _MaxCount
    )
_Check_return_opt_
_ACRTIMP errno_t __cdecl _mbstowcs_s_l(
    _Out_opt_ size_t* _PtNumOfCharConverted,
    _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t* _DstBuf,
    _In_ size_t _SizeInWords,
    _In_reads_or_z_(_MaxCount) char const* _SrcBuf,
    _In_ size_t _MaxCount,
    _In_opt_ _locale_t _Locale
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(
    errno_t, _mbstowcs_s_l,
    _Out_opt_ size_t*, _PtNumOfCharConverted,
    _Post_z_ wchar_t, _Dest,
    _In_z_ char const*, _Source,
    _In_ size_t, _MaxCount,
    _In_opt_ _locale_t, _Locale
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(
    _ACRTIMP, _mbstowcs_l, _mbstowcs_s_l,
    _Out_writes_opt_z_(_Size) wchar_t,
    _Out_writes_z_(_MaxCount), wchar_t, _Dest,
    _In_z_ char const*, _Source,
    _In_ size_t, _MaxCount,
    _In_opt_ _locale_t, _Locale
    )
_CRT_INSECURE_DEPRECATE(wctomb_s)
_ACRTIMP int __cdecl wctomb(
    _Out_writes_opt_z_(MB_LEN_MAX) char* _MbCh,
    _In_ wchar_t _WCh
    );
_CRT_INSECURE_DEPRECATE(_wctomb_s_l)
_ACRTIMP int __cdecl _wctomb_l(
    _Pre_maybenull_ _Post_z_ char* _MbCh,
    _In_ wchar_t _WCh,
    _In_opt_ _locale_t _Locale
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wctomb_s_l(
    _Out_opt_ int* _SizeConverted,
    _Out_writes_opt_z_(_SizeInBytes) char* _MbCh,
    _In_ size_t _SizeInBytes,
    _In_ wchar_t _WCh,
    _In_opt_ _locale_t _Locale);
_Check_return_wat_
_ACRTIMP errno_t __cdecl wcstombs_s(
    _Out_opt_ size_t* _PtNumOfCharConverted,
    _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char* _Dst,
    _In_ size_t _DstSizeInBytes,
    _In_z_ wchar_t const* _Src,
    _In_ size_t _MaxCountInBytes
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(
    errno_t, wcstombs_s,
    _Out_opt_ size_t*, _PtNumOfCharConverted,
    _Out_writes_bytes_opt_(_Size) char, _Dest,
    _In_z_ wchar_t const*, _Source,
    _In_ size_t, _MaxCount
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(
    _ACRTIMP, wcstombs,
    _Out_writes_opt_(_MaxCount), char, _Dest,
    _In_z_ wchar_t const*, _Source,
    _In_ size_t, _MaxCount
    )
_Check_return_wat_
_ACRTIMP errno_t __cdecl _wcstombs_s_l(
    _Out_opt_ size_t* _PtNumOfCharConverted,
    _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char* _Dst,
    _In_ size_t _DstSizeInBytes,
    _In_z_ wchar_t const* _Src,
    _In_ size_t _MaxCountInBytes,
    _In_opt_ _locale_t _Locale
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(
    errno_t, _wcstombs_s_l,
    _Out_opt_ size_t*, _PtNumOfCharConverted,
    _Out_writes_opt_(_Size) char, _Dest,
    _In_z_ wchar_t const*, _Source,
    _In_ size_t, _MaxCount,
    _In_opt_ _locale_t, _Locale
    )
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(
    _ACRTIMP, _wcstombs_l, _wcstombs_s_l,
    _Out_writes_opt_z_(_Size) char,
    _Out_writes_(_MaxCount), char, _Dest,
    _In_z_ wchar_t const*, _Source,
    _In_ size_t, _MaxCount,
    _In_opt_ _locale_t, _Locale
    )
       
_Success_(return != 0)
_Check_return_
_ACRTIMP _CRTALLOCATOR char* __cdecl _fullpath(
    _Out_writes_opt_z_(_BufferCount) char* _Buffer,
    _In_z_ char const* _Path,
    _In_ size_t _BufferCount
    );
       
_Check_return_wat_
_ACRTIMP errno_t __cdecl _makepath_s(
    _Out_writes_z_(_BufferCount) char* _Buffer,
    _In_ size_t _BufferCount,
    _In_opt_z_ char const* _Drive,
    _In_opt_z_ char const* _Dir,
    _In_opt_z_ char const* _Filename,
    _In_opt_z_ char const* _Ext
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(
    errno_t, _makepath_s,
               char, _Buffer,
    _In_opt_z_ char const*, _Drive,
    _In_opt_z_ char const*, _Dir,
    _In_opt_z_ char const*, _Filename,
    _In_opt_z_ char const*, _Ext
    )
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(
    void, __RETURN_POLICY_VOID, _ACRTIMP, _makepath,
    _Pre_notnull_ _Post_z_, char, _Buffer,
    _In_opt_z_ char const*, _Drive,
    _In_opt_z_ char const*, _Dir,
    _In_opt_z_ char const*, _Filename,
    _In_opt_z_ char const*, _Ext
    )
#pragma warning(pop)
_CRT_INSECURE_DEPRECATE(_splitpath_s)
_ACRTIMP void __cdecl _splitpath(
    _In_z_ char const* _FullPath,
    _Pre_maybenull_ _Post_z_ char* _Drive,
    _Pre_maybenull_ _Post_z_ char* _Dir,
    _Pre_maybenull_ _Post_z_ char* _Filename,
    _Pre_maybenull_ _Post_z_ char* _Ext
    );
_Check_return_wat_
_ACRTIMP errno_t __cdecl _splitpath_s(
    _In_z_ char const* _FullPath,
    _Out_writes_opt_z_(_DriveCount) char* _Drive,
    _In_ size_t _DriveCount,
    _Out_writes_opt_z_(_DirCount) char* _Dir,
    _In_ size_t _DirCount,
    _Out_writes_opt_z_(_FilenameCount) char* _Filename,
    _In_ size_t _FilenameCount,
    _Out_writes_opt_z_(_ExtCount) char* _Ext,
    _In_ size_t _ExtCount
    );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(errno_t, _splitpath_s, char, _Dest)
_ACRTIMP int* __cdecl __p___argc (void);
_ACRTIMP char*** __cdecl __p___argv (void);
_ACRTIMP wchar_t*** __cdecl __p___wargv(void);
    extern int __argc;
    extern char** __argv;
    extern wchar_t** __wargv;
_DCRTIMP char*** __cdecl __p__environ (void);
_DCRTIMP wchar_t*** __cdecl __p__wenviron(void);
    #define _CRT_V12_LEGACY_FUNCTIONALITY
    #define _environ (*__p__environ())
    #define _wenviron (*__p__wenviron())
_CRT_END_C_HEADER
