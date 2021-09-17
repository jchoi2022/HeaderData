       
#include <wmmintrin.h>
extern "C" {
typedef union __declspec(intrin_type) _CRT_ALIGN(32) __m256 {
    float m256_f32[8];
} __m256;
typedef struct __declspec(intrin_type) _CRT_ALIGN(32) {
    double m256d_f64[4];
} __m256d;
typedef union __declspec(intrin_type) _CRT_ALIGN(32) __m256i {
    __int8 m256i_i8[32];
    __int16 m256i_i16[16];
    __int32 m256i_i32[8];
    __int64 m256i_i64[4];
    unsigned __int8 m256i_u8[32];
    unsigned __int16 m256i_u16[16];
    unsigned __int32 m256i_u32[8];
    unsigned __int64 m256i_u64[4];
} __m256i;
extern __m256d __cdecl _mm256_add_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_add_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_addsub_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_addsub_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_and_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_and_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_andnot_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_andnot_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_blend_pd(__m256d m1, __m256d m2, const int mask);
extern __m256 __cdecl _mm256_blend_ps(__m256 m1, __m256 m2, const int mask);
extern __m256d __cdecl _mm256_blendv_pd(__m256d m1, __m256d m2, __m256d m3);
extern __m256 __cdecl _mm256_blendv_ps(__m256 m1, __m256 m2, __m256 mask);
extern __m256d __cdecl _mm256_div_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_div_ps(__m256 m1, __m256 m2);
extern __m256 __cdecl _mm256_dp_ps(__m256 m1, __m256 m2, const int mask);
extern __m256d __cdecl _mm256_hadd_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_hadd_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_hsub_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_hsub_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_max_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_max_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_min_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_min_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_mul_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_mul_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_or_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_or_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_shuffle_pd(__m256d m1, __m256d m2, const int select);
extern __m256 __cdecl _mm256_shuffle_ps(__m256 m1, __m256 m2, const int select);
extern __m256d __cdecl _mm256_sub_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_sub_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_xor_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_xor_ps(__m256 m1, __m256 m2);
extern __m128d __cdecl _mm_cmp_pd(__m128d m1, __m128d m2, const int predicate);
extern __m256d __cdecl _mm256_cmp_pd(__m256d m1, __m256d m2, const int predicate);
extern __m128 __cdecl _mm_cmp_ps(__m128 m1, __m128 m2, const int predicate);
extern __m256 __cdecl _mm256_cmp_ps(__m256 m1, __m256 m2, const int predicate);
extern __m128d __cdecl _mm_cmp_sd(__m128d m1, __m128d m2, const int predicate);
extern __m128 __cdecl _mm_cmp_ss(__m128 m1, __m128 m2, const int predicate);
extern __m256d __cdecl _mm256_cvtepi32_pd(__m128i m1);
extern __m256 __cdecl _mm256_cvtepi32_ps(__m256i m1);
extern __m128 __cdecl _mm256_cvtpd_ps(__m256d m1);
extern __m256i __cdecl _mm256_cvtps_epi32(__m256 m1);
extern __m256d __cdecl _mm256_cvtps_pd(__m128 m1);
extern __m128i __cdecl _mm256_cvttpd_epi32(__m256d m1);
extern __m128i __cdecl _mm256_cvtpd_epi32(__m256d m1);
extern __m256i __cdecl _mm256_cvttps_epi32(__m256 m1);
extern __m128 __cdecl _mm256_extractf128_ps(__m256 m1, const int offset);
extern __m128d __cdecl _mm256_extractf128_pd(__m256d m1, const int offset);
extern __m128i __cdecl _mm256_extractf128_si256(__m256i m1, const int offset);
extern void __cdecl _mm256_zeroall(void);
extern void __cdecl _mm256_zeroupper(void);
extern __m256 __cdecl _mm256_permutevar_ps(__m256 m1, __m256i control);
extern __m128 __cdecl _mm_permutevar_ps(__m128 a, __m128i control);
extern __m256 __cdecl _mm256_permute_ps(__m256 m1, int control);
extern __m128 __cdecl _mm_permute_ps(__m128 a, int control);
extern __m256d __cdecl _mm256_permutevar_pd(__m256d m1, __m256i control);
extern __m128d __cdecl _mm_permutevar_pd(__m128d a, __m128i control);
extern __m256d __cdecl _mm256_permute_pd(__m256d m1, int control);
extern __m128d __cdecl _mm_permute_pd(__m128d a, int control);
extern __m256 __cdecl _mm256_permute2f128_ps(__m256 m1, __m256 m2, int control);
extern __m256d __cdecl _mm256_permute2f128_pd(__m256d m1, __m256d m2, int control);
extern __m256i __cdecl _mm256_permute2f128_si256(__m256i m1, __m256i m2, int control);
extern __m256 __cdecl _mm256_broadcast_ss(float const *a);
extern __m128 __cdecl _mm_broadcast_ss(float const *a);
extern __m256d __cdecl _mm256_broadcast_sd(double const *a);
extern __m256 __cdecl _mm256_broadcast_ps(__m128 const *a);
extern __m256d __cdecl _mm256_broadcast_pd(__m128d const *a);
extern __m256 __cdecl _mm256_insertf128_ps(__m256, __m128 a, int offset);
extern __m256d __cdecl _mm256_insertf128_pd(__m256d, __m128d a, int offset);
extern __m256i __cdecl _mm256_insertf128_si256(__m256i, __m128i a, int offset);
extern __m256d __cdecl _mm256_load_pd(double const *a);
extern void __cdecl _mm256_store_pd(double *a, __m256d b);
extern __m256 __cdecl _mm256_load_ps(float const *a);
extern void __cdecl _mm256_store_ps(float *a, __m256 b);
extern __m256d __cdecl _mm256_loadu_pd(double const *a);
extern void __cdecl _mm256_storeu_pd(double *a, __m256d b);
extern __m256 __cdecl _mm256_loadu_ps(float const *a);
extern void __cdecl _mm256_storeu_ps(float *a, __m256 b);
extern __m256i __cdecl _mm256_load_si256(__m256i const *a);
extern void __cdecl _mm256_store_si256(__m256i *a, __m256i b);
extern __m256i __cdecl _mm256_loadu_si256(__m256i const *a);
extern void __cdecl _mm256_storeu_si256(__m256i *a, __m256i b);
extern __m256d __cdecl _mm256_maskload_pd(double const *a, __m256i mask);
extern void __cdecl _mm256_maskstore_pd(double *a, __m256i mask, __m256d b);
extern __m128d __cdecl _mm_maskload_pd(double const *a, __m128i mask);
extern void __cdecl _mm_maskstore_pd(double *a, __m128i mask, __m128d b);
extern __m256 __cdecl _mm256_maskload_ps(float const *a, __m256i mask);
extern void __cdecl _mm256_maskstore_ps(float *a, __m256i mask, __m256 b);
extern __m128 __cdecl _mm_maskload_ps(float const *a, __m128i mask);
extern void __cdecl _mm_maskstore_ps(float *a, __m128i mask, __m128 b);
extern __m256 __cdecl _mm256_movehdup_ps(__m256 a);
extern __m256 __cdecl _mm256_moveldup_ps(__m256 a);
extern __m256d __cdecl _mm256_movedup_pd(__m256d a);
extern __m256i __cdecl _mm256_lddqu_si256(__m256i const *a);
extern void __cdecl _mm256_stream_si256(__m256i *p, __m256i a);
extern void __cdecl _mm256_stream_pd(double *p, __m256d a);
extern void __cdecl _mm256_stream_ps(float *p, __m256 a);
extern __m256 __cdecl _mm256_rcp_ps(__m256 a);
extern __m256 __cdecl _mm256_rsqrt_ps(__m256 a);
extern __m256d __cdecl _mm256_sqrt_pd(__m256d a);
extern __m256 __cdecl _mm256_sqrt_ps(__m256 a);
extern __m256d __cdecl _mm256_round_pd(__m256d a, int iRoundMode);
extern __m256 __cdecl _mm256_round_ps(__m256 a, int iRoundMode);
extern __m256d __cdecl _mm256_unpackhi_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_unpackhi_ps(__m256 m1, __m256 m2);
extern __m256d __cdecl _mm256_unpacklo_pd(__m256d m1, __m256d m2);
extern __m256 __cdecl _mm256_unpacklo_ps(__m256 m1, __m256 m2);
extern int __cdecl _mm256_testz_si256(__m256i s1, __m256i s2);
extern int __cdecl _mm256_testc_si256(__m256i s1, __m256i s2);
extern int __cdecl _mm256_testnzc_si256(__m256i s1, __m256i s2);
extern int __cdecl _mm256_testz_pd(__m256d s1, __m256d s2);
extern int __cdecl _mm256_testc_pd(__m256d s1, __m256d s2);
extern int __cdecl _mm256_testnzc_pd(__m256d s1, __m256d s2);
extern int __cdecl _mm_testz_pd(__m128d s1, __m128d s2);
extern int __cdecl _mm_testc_pd(__m128d s1, __m128d s2);
extern int __cdecl _mm_testnzc_pd(__m128d s1, __m128d s2);
extern int __cdecl _mm256_testz_ps(__m256 s1, __m256 s2);
extern int __cdecl _mm256_testc_ps(__m256 s1, __m256 s2);
extern int __cdecl _mm256_testnzc_ps(__m256 s1, __m256 s2);
extern int __cdecl _mm_testz_ps(__m128 s1, __m128 s2);
extern int __cdecl _mm_testc_ps(__m128 s1, __m128 s2);
extern int __cdecl _mm_testnzc_ps(__m128 s1, __m128 s2);
extern int __cdecl _mm256_movemask_pd(__m256d a);
extern int __cdecl _mm256_movemask_ps(__m256 a);
extern __m256d __cdecl _mm256_setzero_pd(void);
extern __m256 __cdecl _mm256_setzero_ps(void);
extern __m256i __cdecl _mm256_setzero_si256(void);
extern __m256d __cdecl _mm256_set_pd(double, double, double, double);
extern __m256 __cdecl _mm256_set_ps(float, float, float, float, float, float, float, float);
extern __m256i __cdecl _mm256_set_epi8(char, char, char, char, char, char, char, char,
                                       char, char, char, char, char, char, char, char,
                                       char, char, char, char, char, char, char, char,
                                       char, char, char, char, char, char, char, char);
extern __m256i __cdecl _mm256_set_epi16(short, short, short, short, short, short, short, short,
                                        short, short, short, short, short, short, short, short);
extern __m256i __cdecl _mm256_set_epi32(int, int, int, int, int, int, int, int);
extern __m256i __cdecl _mm256_set_epi64x(long long, long long, long long, long long);
extern __m256d __cdecl _mm256_setr_pd(double, double, double, double);
extern __m256 __cdecl _mm256_setr_ps(float, float, float, float, float, float, float, float);
extern __m256i __cdecl _mm256_setr_epi8(char, char, char, char, char, char, char, char,
                                        char, char, char, char, char, char, char, char,
                                        char, char, char, char, char, char, char, char,
                                        char, char, char, char, char, char, char, char);
extern __m256i __cdecl _mm256_setr_epi16(short, short, short, short, short, short, short, short,
                                         short, short, short, short, short, short, short, short);
extern __m256i __cdecl _mm256_setr_epi32(int, int, int, int, int, int, int, int);
extern __m256i __cdecl _mm256_setr_epi64x(long long, long long, long long, long long);
extern __m256d __cdecl _mm256_set1_pd(double);
extern __m256 __cdecl _mm256_set1_ps(float);
extern __m256i __cdecl _mm256_set1_epi8(char);
extern __m256i __cdecl _mm256_set1_epi16(short);
extern __m256i __cdecl _mm256_set1_epi32(int);
extern __m256i __cdecl _mm256_set1_epi64x(long long);
extern __m256 __cdecl _mm256_castpd_ps(__m256d a);
extern __m256d __cdecl _mm256_castps_pd(__m256 a);
extern __m256i __cdecl _mm256_castps_si256(__m256 a);
extern __m256i __cdecl _mm256_castpd_si256(__m256d a);
extern __m256 __cdecl _mm256_castsi256_ps(__m256i a);
extern __m256d __cdecl _mm256_castsi256_pd(__m256i a);
extern __m128 __cdecl _mm256_castps256_ps128(__m256 a);
extern __m128d __cdecl _mm256_castpd256_pd128(__m256d a);
extern __m128i __cdecl _mm256_castsi256_si128(__m256i a);
extern __m256 __cdecl _mm256_castps128_ps256(__m128 a);
extern __m256d __cdecl _mm256_castpd128_pd256(__m128d a);
extern __m256i __cdecl _mm256_castsi128_si256(__m128i a);
extern unsigned __int64 __cdecl _xgetbv(unsigned int ext_ctrl_reg);
extern void __cdecl _xsetbv(unsigned int ext_ctrl_reg, unsigned __int64 val);
extern void __cdecl _xsave(void *mem, unsigned __int64 save_mask);
extern void __cdecl _xsaveopt(void *mem, unsigned __int64 save_mask);
extern void __cdecl _xrstor(void const *mem, unsigned __int64 restore_mask);
extern void __cdecl _fxsave(void *mem);
extern void __cdecl _fxrstor(void const *mem);
extern __m128 __cdecl _mm_cvtph_ps(__m128i m1);
extern __m256 __cdecl _mm256_cvtph_ps(__m128i x);
extern __m128i __cdecl _mm_cvtps_ph(__m128 m1, const int imm);
extern __m128i __cdecl _mm256_cvtps_ph(__m256 x, const int imm8);
extern int __cdecl _rdrand16_step(unsigned short *random_val);
extern int __cdecl _rdrand32_step(unsigned int *random_val);
extern __m128 __cdecl _mm_fmaddsub_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmaddsub_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fmsubadd_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmsubadd_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fmadd_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmadd_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fmadd_ss(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmadd_sd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fmsub_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmsub_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fmsub_ss(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fmsub_sd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fnmadd_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fnmadd_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fnmadd_ss(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fnmadd_sd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fnmsub_ps(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fnmsub_pd(__m128d a, __m128d b, __m128d c);
extern __m128 __cdecl _mm_fnmsub_ss(__m128 a, __m128 b, __m128 c);
extern __m128d __cdecl _mm_fnmsub_sd(__m128d a, __m128d b, __m128d c);
extern __m256 __cdecl _mm256_fmaddsub_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fmaddsub_pd(__m256d a, __m256d b, __m256d c);
extern __m256 __cdecl _mm256_fmsubadd_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fmsubadd_pd(__m256d a, __m256d b, __m256d c);
extern __m256 __cdecl _mm256_fmadd_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fmadd_pd(__m256d a, __m256d b, __m256d c);
extern __m256 __cdecl _mm256_fmsub_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fmsub_pd(__m256d a, __m256d b, __m256d c);
extern __m256 __cdecl _mm256_fnmadd_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fnmadd_pd(__m256d a, __m256d b, __m256d c);
extern __m256 __cdecl _mm256_fnmsub_ps(__m256 a, __m256 b, __m256 c);
extern __m256d __cdecl _mm256_fnmsub_pd(__m256d a, __m256d b, __m256d c);
extern __m256i __cdecl _mm256_abs_epi8(__m256i);
extern __m256i __cdecl _mm256_abs_epi16(__m256i);
extern __m256i __cdecl _mm256_abs_epi32(__m256i);
extern __m256i __cdecl _mm256_packs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_packs_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_packus_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_packus_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_alignr_epi8(__m256i, __m256i, const int);
extern __m256i __cdecl _mm256_avg_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_avg_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_blendv_epi8(__m256i, __m256i, __m256i);
extern __m256i __cdecl _mm256_blend_epi16(__m256i, __m256i, const int);
extern __m256i __cdecl _mm256_cmpeq_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadd_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadd_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadds_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_cvtepi8_epi16(__m128i);
extern __m256i __cdecl _mm256_cvtepi8_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepi8_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepi16_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepi16_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepi32_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi16(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu16_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepu16_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu32_epi64(__m128i);
extern __m256i __cdecl _mm256_hsub_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hsub_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_hsubs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_madd_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_maddubs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu32(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu32(__m256i, __m256i);
extern int __cdecl _mm256_movemask_epi8(__m256i);
extern __m256i __cdecl _mm256_mulhrs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mulhi_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mulhi_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mullo_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mullo_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_mul_epu32(__m256i, __m256i);
extern __m256i __cdecl _mm256_mul_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sad_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_shuffle_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_shuffle_epi32(__m256i, const int);
extern __m256i __cdecl _mm256_shufflehi_epi16(__m256i, const int);
extern __m256i __cdecl _mm256_shufflelo_epi16(__m256i, const int);
extern __m256i __cdecl _mm256_sign_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_sign_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sign_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_slli_si256(__m256i, const int);
extern __m256i __cdecl _mm256_srli_si256(__m256i, const int);
extern __m256i __cdecl _mm256_sll_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_sll_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_sll_epi64(__m256i, __m128i);
extern __m256i __cdecl _mm256_slli_epi16(__m256i, int);
extern __m256i __cdecl _mm256_slli_epi32(__m256i, int);
extern __m256i __cdecl _mm256_slli_epi64(__m256i, int);
extern __m256i __cdecl _mm256_sllv_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sllv_epi64(__m256i, __m256i);
extern __m128i __cdecl _mm_sllv_epi32(__m128i, __m128i);
extern __m128i __cdecl _mm_sllv_epi64(__m128i, __m128i);
extern __m256i __cdecl _mm256_sra_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_sra_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_srai_epi16(__m256i, int);
extern __m256i __cdecl _mm256_srai_epi32(__m256i, int);
extern __m256i __cdecl _mm256_srav_epi32(__m256i, __m256i);
extern __m128i __cdecl _mm_srav_epi32(__m128i, __m128i);
extern __m256i __cdecl _mm256_srl_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_srl_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_srl_epi64(__m256i, __m128i);
extern __m256i __cdecl _mm256_srli_epi16(__m256i, int);
extern __m256i __cdecl _mm256_srli_epi32(__m256i, int);
extern __m256i __cdecl _mm256_srli_epi64(__m256i, int);
extern __m256i __cdecl _mm256_srlv_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_srlv_epi64(__m256i, __m256i);
extern __m128i __cdecl _mm_srlv_epi32(__m128i, __m128i);
extern __m128i __cdecl _mm_srlv_epi64(__m128i, __m128i);
extern __m256i __cdecl _mm256_sub_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_and_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_andnot_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_or_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_xor_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_mpsadbw_epu8(__m256i, __m256i, const int);
extern __m256d __cdecl _mm256_mask_i32gather_pd(__m256d, double const *, __m128i, __m256d, const int);
extern __m256 __cdecl _mm256_mask_i32gather_ps(__m256, float const *, __m256i, __m256, const int);
extern __m256d __cdecl _mm256_mask_i64gather_pd(__m256d, double const *, __m256i, __m256d, const int);
extern __m128 __cdecl _mm256_mask_i64gather_ps(__m128, float const *, __m256i, __m128, const int);
extern __m256d __cdecl _mm256_i32gather_pd(double const *, __m128i, const int);
extern __m256 __cdecl _mm256_i32gather_ps(float const *, __m256i, const int);
extern __m256d __cdecl _mm256_i64gather_pd(double const *, __m256i, const int);
extern __m128 __cdecl _mm256_i64gather_ps(float const *, __m256i, const int);
extern __m128d __cdecl _mm_mask_i32gather_pd(__m128d, double const *, __m128i, __m128d, const int);
extern __m128 __cdecl _mm_mask_i32gather_ps(__m128, float const *, __m128i, __m128, const int);
extern __m128d __cdecl _mm_mask_i64gather_pd(__m128d, double const *, __m128i, __m128d, const int);
extern __m128 __cdecl _mm_mask_i64gather_ps(__m128, float const *, __m128i, __m128, const int);
extern __m128d __cdecl _mm_i32gather_pd(double const *, __m128i, const int);
extern __m128 __cdecl _mm_i32gather_ps(float const *, __m128i, const int);
extern __m128d __cdecl _mm_i64gather_pd(double const *, __m128i, const int);
extern __m128 __cdecl _mm_i64gather_ps(float const *, __m128i, const int);
extern __m256i __cdecl _mm256_mask_i32gather_epi32(__m256i, int const *, __m256i, __m256i, const int);
extern __m256i __cdecl _mm256_mask_i32gather_epi64(__m256i, __int64 const *, __m128i, __m256i, const int);
extern __m128i __cdecl _mm256_mask_i64gather_epi32(__m128i, int const *, __m256i, __m128i, const int);
extern __m256i __cdecl _mm256_mask_i64gather_epi64(__m256i, __int64 const *, __m256i, __m256i, const int);
extern __m128i __cdecl _mm_mask_i32gather_epi32(__m128i, int const *, __m128i, __m128i, const int);
extern __m128i __cdecl _mm_mask_i32gather_epi64(__m128i, __int64 const *, __m128i, __m128i, const int);
extern __m128i __cdecl _mm_mask_i64gather_epi32(__m128i, int const *, __m128i, __m128i, const int);
extern __m128i __cdecl _mm_mask_i64gather_epi64(__m128i, __int64 const *, __m128i, __m128i, const int);
extern __m256i __cdecl _mm256_i32gather_epi32(int const *, __m256i, const int);
extern __m256i __cdecl _mm256_i32gather_epi64(__int64 const *, __m128i, const int);
extern __m128i __cdecl _mm256_i64gather_epi32(int const *, __m256i, const int);
extern __m256i __cdecl _mm256_i64gather_epi64(__int64 const *, __m256i, const int);
extern __m128i __cdecl _mm_i32gather_epi32(int const *, __m128i, const int);
extern __m128i __cdecl _mm_i32gather_epi64(__int64 const *, __m128i, const int);
extern __m128i __cdecl _mm_i64gather_epi32(int const *, __m128i, const int);
extern __m128i __cdecl _mm_i64gather_epi64(__int64 const *, __m128i, const int);
extern __m256i __cdecl _mm256_permutevar8x32_epi32(__m256i A, __m256i Offsets);
extern __m256 __cdecl _mm256_permutevar8x32_ps(__m256 A, __m256i Offsets);
extern __m256i __cdecl _mm256_permute4x64_epi64(__m256i A, const int control);
extern __m256d __cdecl _mm256_permute4x64_pd(__m256d A, const int control);
extern __m256i __cdecl _mm256_permute2x128_si256(__m256i A, __m256i B, const int control);
extern __m128i __cdecl _mm_blend_epi32(__m128i A, __m128i B, const int control);
extern __m256i __cdecl _mm256_blend_epi32(__m256i A, __m256i B, const int control);
extern __m128i __cdecl _mm_maskload_epi32(int const * A, __m128i Mask);
extern void __cdecl _mm_maskstore_epi32(int * A, __m128i Mask, __m128i B);
extern __m128i __cdecl _mm_maskload_epi64(__int64 const * A, __m128i Mask);
extern void __cdecl _mm_maskstore_epi64(__int64 * A, __m128i Mask, __m128i B);
extern __m256i __cdecl _mm256_maskload_epi32(int const * A, __m256i Mask);
extern void __cdecl _mm256_maskstore_epi32(int * A, __m256i Mask, __m256i B);
extern __m256i __cdecl _mm256_maskload_epi64(__int64 const * A, __m256i Mask);
extern void __cdecl _mm256_maskstore_epi64(__int64 * A, __m256i Mask, __m256i B);
extern __m128i __cdecl _mm256_extracti128_si256(__m256i A, int offset);
extern __m256i __cdecl _mm256_inserti128_si256(__m256i A, __m128i B, int offset);
extern __m256i __cdecl _mm256_stream_load_si256(__m256i const * A);
extern __m256 __cdecl _mm256_broadcastss_ps(__m128 scalar_in_xmm);
extern __m256d __cdecl _mm256_broadcastsd_pd(__m128d scalar_in_xmm);
extern __m128 __cdecl _mm_broadcastss_ps(__m128 scalar_in_xmm);
extern __m128d __cdecl _mm_broadcastsd_pd(__m128d scalar_in_xmm);
extern __m256i __cdecl _mm256_broadcastsi128_si256(__m128i si128_in_xmm);
extern __m256i __cdecl _mm256_broadcastb_epi8(__m128i scalar_in_xmm);
extern __m256i __cdecl _mm256_broadcastw_epi16(__m128i scalar_in_xmm);
extern __m256i __cdecl _mm256_broadcastd_epi32(__m128i scalar_in_xmm);
extern __m256i __cdecl _mm256_broadcastq_epi64(__m128i scalar_in_xmm);
extern __m128i __cdecl _mm_broadcastb_epi8(__m128i scalar_in_xmm);
extern __m128i __cdecl _mm_broadcastw_epi16(__m128i scalar_in_xmm);
extern __m128i __cdecl _mm_broadcastd_epi32(__m128i scalar_in_xmm);
extern __m128i __cdecl _mm_broadcastq_epi64(__m128i scalar_in_xmm);
extern unsigned int _bextr_u32(unsigned int src, unsigned int start, unsigned int len);
extern unsigned int _blsi_u32(unsigned int);
extern unsigned int _blsmsk_u32(unsigned int);
extern unsigned int _blsr_u32(unsigned int);
extern unsigned int _bzhi_u32(unsigned int, unsigned int);
extern unsigned int _lzcnt_u32(unsigned int);
extern unsigned int _mulx_u32(unsigned int, unsigned int, unsigned int*);
extern unsigned int _pdep_u32(unsigned int, unsigned int);
extern unsigned int _pext_u32(unsigned int, unsigned int);
extern unsigned int _rorx_u32(unsigned int, const unsigned char);
extern int _sarx_i32(int, unsigned int);
extern unsigned int _shlx_u32(unsigned int, unsigned int);
extern unsigned int _shrx_u32(unsigned int, unsigned int);
extern unsigned int _tzcnt_u32(unsigned int);
extern void __cdecl _invpcid(unsigned int type, void *descriptor);
long _InterlockedCompareExchange_HLEAcquire(long volatile *,long,long);
long _InterlockedCompareExchange_HLERelease(long volatile *,long,long);
__int64 _InterlockedCompareExchange64_HLEAcquire(__int64 volatile *,__int64,__int64);
__int64 _InterlockedCompareExchange64_HLERelease(__int64 volatile *,__int64,__int64);
void *_InterlockedCompareExchangePointer_HLEAcquire(void *volatile *,void *,void *);
void *_InterlockedCompareExchangePointer_HLERelease(void *volatile *,void *,void *);
long _InterlockedExchangeAdd_HLEAcquire(long volatile *,long);
long _InterlockedExchangeAdd_HLERelease(long volatile *,long);
__int64 _InterlockedExchangeAdd64_HLEAcquire(__int64 volatile *,__int64);
__int64 _InterlockedExchangeAdd64_HLERelease(__int64 volatile *,__int64);
void _Store_HLERelease(long volatile *,long);
void _Store64_HLERelease(__int64 volatile *,__int64);
void _StorePointer_HLERelease(void * volatile *,void *);
unsigned __int32 _xbegin(void);
void _xend(void);
void _xabort(const unsigned int imm);