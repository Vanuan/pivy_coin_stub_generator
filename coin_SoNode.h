typedef int SbBool;
typedef __INT_LEAST8_TYPE__ int_least8_t;
typedef __INT_LEAST16_TYPE__ int_least16_t;
typedef __INT_LEAST32_TYPE__ int_least32_t;
typedef __INT_LEAST64_TYPE__ int_least64_t;
typedef __UINT_LEAST8_TYPE__ uint_least8_t;
typedef __UINT_LEAST16_TYPE__ uint_least16_t;
typedef __UINT_LEAST32_TYPE__ uint_least32_t;
typedef __UINT_LEAST64_TYPE__ uint_least64_t;



typedef __INT_FAST8_TYPE__ int_fast8_t;
typedef __INT_FAST16_TYPE__ int_fast16_t;
typedef __INT_FAST32_TYPE__ int_fast32_t;
typedef __INT_FAST64_TYPE__ int_fast64_t;
typedef __UINT_FAST8_TYPE__ uint_fast8_t;
typedef __UINT_FAST16_TYPE__ uint_fast16_t;
typedef __UINT_FAST32_TYPE__ uint_fast32_t;
typedef __UINT_FAST64_TYPE__ uint_fast64_t;
typedef __INTMAX_TYPE__ intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;
typedef int wchar_t;
typedef wchar_t __gwchar_t;
typedef struct
  {
     long long int quot;
     long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
       ;


extern intmax_t strtoimax (const char * __nptr,
			   char ** __endptr, int __base) ;


extern uintmax_t strtoumax (const char * __nptr,
			    char ** __endptr, int __base) ;


extern intmax_t wcstoimax (const __gwchar_t * __nptr,
			   __gwchar_t ** __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const __gwchar_t * __nptr,
			    __gwchar_t ** __endptr, int __base)
     ;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




 typedef signed long long int __int64_t;
 typedef unsigned long long int __uint64_t;



typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;






 typedef long long int __quad_t;
 typedef unsigned long long int __u_quad_t;
#line 74 "../usr/include/x86_64-linux-gnu/bits/types.h"
 typedef long long int __intmax_t;
 typedef unsigned long long int __uintmax_t;
#line 143 "../usr/include/x86_64-linux-gnu/bits/types.h"
 typedef __u_quad_t __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef __u_quad_t __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned int __nlink_t;
 typedef long int __off_t;
 typedef __quad_t __off64_t;
 typedef int __pid_t;
 typedef struct { int __val[2]; } __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __u_quad_t __rlim64_t;
 typedef unsigned int __id_t;
 typedef long int __time_t;
 typedef unsigned int __useconds_t;
 typedef long int __suseconds_t;

 typedef int __daddr_t;
 typedef int __key_t;


 typedef int __clockid_t;


 typedef void * __timer_t;


 typedef long int __blksize_t;




 typedef long int __blkcnt_t;
 typedef __quad_t __blkcnt64_t;


 typedef unsigned long int __fsblkcnt_t;
 typedef __u_quad_t __fsblkcnt64_t;


 typedef unsigned long int __fsfilcnt_t;
 typedef __u_quad_t __fsfilcnt64_t;


 typedef int __fsword_t;

 typedef int __ssize_t;


 typedef long int __syscall_slong_t;

 typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


 typedef int __intptr_t;


 typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
#line 33 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
#line 59 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 97 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
#line 7 "../usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
typedef __clock_t clock_t;
#line 7 "../usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;
#line 7 "../usr/include/x86_64-linux-gnu/bits/types/time_t.h"
typedef __time_t time_t;
#line 7 "../usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
typedef __timer_t timer_t;
#line 216 "../usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h"
typedef long unsigned int size_t;
#line 148 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 24 "../usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
#line 160 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef	unsigned char u_int8_t;
typedef	unsigned short int u_int16_t;
typedef	unsigned int u_int32_t;



 typedef unsigned long long int u_int64_t;


typedef int register_t;
#line 33 "../usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	   | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
#line 69 "../usr/include/x86_64-linux-gnu/bits/byteswap.h"
 static __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56)	   | (((__bsx) & 0x00ff000000000000ull) >> 40)	   | (((__bsx) & 0x0000ff0000000000ull) >> 24)	   | (((__bsx) & 0x000000ff00000000ull) >> 8)	   | (((__bsx) & 0x00000000ff000000ull) << 8)	   | (((__bsx) & 0x0000000000ff0000ull) << 24)	   | (((__bsx) & 0x000000000000ff00ull) << 40)	   | (((__bsx) & 0x00000000000000ffull) << 56));

}
#line 32 "../usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
static __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
#line 5 "../usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
#line 7 "../usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;
#line 8 "../usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
#line 9 "../usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
#line 43 "../usr/include/x86_64-linux-gnu/sys/select.h"
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 59 "../usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
#line 101 "../usr/include/x86_64-linux-gnu/sys/select.h"
extern int select (int __nfds, fd_set * __readfds,
		   fd_set * __writefds,
		   fd_set * __exceptfds,
		   struct timeval * __timeout);
#line 113 "../usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect (int __nfds, fd_set * __readfds,
		    fd_set * __writefds,
		    fd_set * __exceptfds,
		    const struct timespec * __timeout,
		    const __sigset_t * __sigmask);
#line 202 "../usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
#line 65 "../usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
#line 92 "../usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h"
  unsigned char __flags;
  unsigned char __shared;
  signed char __rwelision;

  unsigned char __pad2;
  int __cur_writer;

};
#line 88 "../usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 118 "../usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;
#line 148 "../usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
  int __kind;


  unsigned int __nusers;






   union
  {
    struct			  {				    short __espins;		    short __eelision;		  } __elision_data;
    __pthread_slist_t __list;
  };



};




struct __pthread_cond_s
{
   union
  {
     unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
   union
  {
     unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
#line 27 "../usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#line 149 "../usr/lib/gcc/x86_64-linux-gnu/8/include/stddef.h"
typedef long int ptrdiff_t;
#line 214 "../usr/include/x86_64-linux-gnu/bits/floatn-common.h"
typedef float _Float32;
#line 251 "../usr/include/x86_64-linux-gnu/bits/floatn-common.h"
typedef double _Float64;
#line 268 "../usr/include/x86_64-linux-gnu/bits/floatn-common.h"
typedef double _Float32x;
#line 285 "../usr/include/x86_64-linux-gnu/bits/floatn-common.h"
typedef long double _Float64x;
#line 155 "../usr/include/math.h"
typedef long double float_t;
typedef long double double_t;
#line 21 "../usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassify (double __value)
     ;


extern int __signbit (double __value)
     ;



extern int __isinf (double __value) ;


extern int __finite (double __value) ;


extern int __isnan (double __value) ;


extern int __iseqsig (double __x, double __y) ;


extern int __issignaling (double __value)
     ;
#line 53 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acos (double __x) ;   extern double __acos (double __x) ;

extern double asin (double __x) ;   extern double __asin (double __x) ;

extern double atan (double __x) ;   extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ;   extern double __atan2 (double __y, double __x) ;


   extern double cos (double __x) ;   extern double __cos (double __x) ;

   extern double sin (double __x) ;   extern double __sin (double __x) ;

extern double tan (double __x) ;   extern double __tan (double __x) ;




extern double cosh (double __x) ;   extern double __cosh (double __x) ;

extern double sinh (double __x) ;   extern double __sinh (double __x) ;

extern double tanh (double __x) ;   extern double __tanh (double __x) ;
#line 85 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acosh (double __x) ;   extern double __acosh (double __x) ;

extern double asinh (double __x) ;   extern double __asinh (double __x) ;

extern double atanh (double __x) ;   extern double __atanh (double __x) ;





   extern double exp (double __x) ;   extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ;   extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ;   extern double __ldexp (double __x, int __exponent) ;


   extern double log (double __x) ;   extern double __log (double __x) ;


extern double log10 (double __x) ;   extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ;   extern double __modf (double __x, double *__iptr) ;
#line 119 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double expm1 (double __x) ;   extern double __expm1 (double __x) ;


extern double log1p (double __x) ;   extern double __log1p (double __x) ;


extern double logb (double __x) ;   extern double __logb (double __x) ;




extern double exp2 (double __x) ;   extern double __exp2 (double __x) ;


extern double log2 (double __x) ;   extern double __log2 (double __x) ;






   extern double pow (double __x, double __y) ;   extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ;   extern double __sqrt (double __x) ;



extern double hypot (double __x, double __y) ;   extern double __hypot (double __x, double __y) ;




extern double cbrt (double __x) ;   extern double __cbrt (double __x) ;






extern double ceil (double __x) ;   extern double __ceil (double __x) ;


extern double fabs (double __x) ;   extern double __fabs (double __x) ;


extern double floor (double __x) ;   extern double __floor (double __x) ;


extern double fmod (double __x, double __y) ;   extern double __fmod (double __x, double __y) ;
#line 177 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinf (double __value) ;




extern int finite (double __value) ;


extern double drem (double __x, double __y) ;   extern double __drem (double __x, double __y) ;



extern double significand (double __x) ;   extern double __significand (double __x) ;






extern double copysign (double __x, double __y) ;   extern double __copysign (double __x, double __y) ;




extern double nan (const char *__tagb) ;   extern double __nan (const char *__tagb) ;
#line 211 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnan (double __value) ;





extern double j0 (double) ;   extern double __j0 (double) ;
extern double j1 (double) ;   extern double __j1 (double) ;
extern double jn (int, double) ;   extern double __jn (int, double) ;
extern double y0 (double) ;   extern double __y0 (double) ;
extern double y1 (double) ;   extern double __y1 (double) ;
extern double yn (int, double) ;   extern double __yn (int, double) ;





extern double erf (double) ;   extern double __erf (double) ;
extern double erfc (double) ;   extern double __erfc (double) ;
extern double lgamma (double) ;   extern double __lgamma (double) ;




extern double tgamma (double) ;   extern double __tgamma (double) ;





extern double gamma (double) ;   extern double __gamma (double) ;
#line 249 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma_r (double, int *__signgamp) ;   extern double __lgamma_r (double, int *__signgamp) ;






extern double rint (double __x) ;   extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ;   extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ;   extern double __nexttoward (double __x, long double __y) ;
#line 272 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remainder (double __x, double __y) ;   extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ;   extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ;   extern int __ilogb (double __x) ;
#line 290 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbln (double __x, long int __n) ;   extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ;   extern double __nearbyint (double __x) ;



extern double round (double __x) ;   extern double __round (double __x) ;



extern double trunc (double __x) ;   extern double __trunc (double __x) ;




extern double remquo (double __x, double __y, int *__quo) ;   extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ;   extern long int __lrint (double __x) ;

extern long long int llrint (double __x) ;   extern long long int __llrint (double __x) ;



extern long int lround (double __x) ;   extern long int __lround (double __x) ;

extern long long int llround (double __x) ;   extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ;   extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y) ;   extern double __fmax (double __x, double __y) ;


extern double fmin (double __x, double __y) ;   extern double __fmin (double __x, double __y) ;


extern double fma (double __x, double __y, double __z) ;   extern double __fma (double __x, double __y, double __z) ;
#line 396 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalb (double __x, double __n) ;   extern double __scalb (double __x, double __n) ;
#line 21 "../usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassifyf (float __value)
     ;


extern int __signbitf (float __value)
     ;



extern int __isinff (float __value) ;


extern int __finitef (float __value) ;


extern int __isnanf (float __value) ;


extern int __iseqsigf (float __x, float __y) ;


extern int __issignalingf (float __value)
     ;
#line 53 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acosf (float __x) ;   extern float __acosf (float __x) ;

extern float asinf (float __x) ;   extern float __asinf (float __x) ;

extern float atanf (float __x) ;   extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ;   extern float __atan2f (float __y, float __x) ;


   extern float cosf (float __x) ;   extern float __cosf (float __x) ;

   extern float sinf (float __x) ;   extern float __sinf (float __x) ;

extern float tanf (float __x) ;   extern float __tanf (float __x) ;




extern float coshf (float __x) ;   extern float __coshf (float __x) ;

extern float sinhf (float __x) ;   extern float __sinhf (float __x) ;

extern float tanhf (float __x) ;   extern float __tanhf (float __x) ;
#line 85 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acoshf (float __x) ;   extern float __acoshf (float __x) ;

extern float asinhf (float __x) ;   extern float __asinhf (float __x) ;

extern float atanhf (float __x) ;   extern float __atanhf (float __x) ;





   extern float expf (float __x) ;   extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ;   extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ;   extern float __ldexpf (float __x, int __exponent) ;


   extern float logf (float __x) ;   extern float __logf (float __x) ;


extern float log10f (float __x) ;   extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ;   extern float __modff (float __x, float *__iptr) ;
#line 119 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float expm1f (float __x) ;   extern float __expm1f (float __x) ;


extern float log1pf (float __x) ;   extern float __log1pf (float __x) ;


extern float logbf (float __x) ;   extern float __logbf (float __x) ;




extern float exp2f (float __x) ;   extern float __exp2f (float __x) ;


extern float log2f (float __x) ;   extern float __log2f (float __x) ;






   extern float powf (float __x, float __y) ;   extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ;   extern float __sqrtf (float __x) ;



extern float hypotf (float __x, float __y) ;   extern float __hypotf (float __x, float __y) ;




extern float cbrtf (float __x) ;   extern float __cbrtf (float __x) ;






extern float ceilf (float __x) ;   extern float __ceilf (float __x) ;


extern float fabsf (float __x) ;   extern float __fabsf (float __x) ;


extern float floorf (float __x) ;   extern float __floorf (float __x) ;


extern float fmodf (float __x, float __y) ;   extern float __fmodf (float __x, float __y) ;
#line 177 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinff (float __value) ;




extern int finitef (float __value) ;


extern float dremf (float __x, float __y) ;   extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ;   extern float __significandf (float __x) ;






extern float copysignf (float __x, float __y) ;   extern float __copysignf (float __x, float __y) ;




extern float nanf (const char *__tagb) ;   extern float __nanf (const char *__tagb) ;
#line 211 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanf (float __value) ;





extern float j0f (float) ;   extern float __j0f (float) ;
extern float j1f (float) ;   extern float __j1f (float) ;
extern float jnf (int, float) ;   extern float __jnf (int, float) ;
extern float y0f (float) ;   extern float __y0f (float) ;
extern float y1f (float) ;   extern float __y1f (float) ;
extern float ynf (int, float) ;   extern float __ynf (int, float) ;





extern float erff (float) ;   extern float __erff (float) ;
extern float erfcf (float) ;   extern float __erfcf (float) ;
extern float lgammaf (float) ;   extern float __lgammaf (float) ;




extern float tgammaf (float) ;   extern float __tgammaf (float) ;





extern float gammaf (float) ;   extern float __gammaf (float) ;
#line 249 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf_r (float, int *__signgamp) ;   extern float __lgammaf_r (float, int *__signgamp) ;






extern float rintf (float __x) ;   extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ;   extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ;   extern float __nexttowardf (float __x, long double __y) ;
#line 272 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remainderf (float __x, float __y) ;   extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ;   extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ;   extern int __ilogbf (float __x) ;
#line 290 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalblnf (float __x, long int __n) ;   extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ;   extern float __nearbyintf (float __x) ;



extern float roundf (float __x) ;   extern float __roundf (float __x) ;



extern float truncf (float __x) ;   extern float __truncf (float __x) ;




extern float remquof (float __x, float __y, int *__quo) ;   extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ;   extern long int __lrintf (float __x) ;

extern long long int llrintf (float __x) ;   extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ;   extern long int __lroundf (float __x) ;

extern long long int llroundf (float __x) ;   extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ;   extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y) ;   extern float __fmaxf (float __x, float __y) ;


extern float fminf (float __x, float __y) ;   extern float __fminf (float __x, float __y) ;


extern float fmaf (float __x, float __y, float __z) ;   extern float __fmaf (float __x, float __y, float __z) ;
#line 396 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbf (float __x, float __n) ;   extern float __scalbf (float __x, float __n) ;
#line 21 "../usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h"
extern int __fpclassifyl (long double __value)
     ;


extern int __signbitl (long double __value)
     ;



extern int __isinfl (long double __value) ;


extern int __finitel (long double __value) ;


extern int __isnanl (long double __value) ;


extern int __iseqsigl (long double __x, long double __y) ;


extern int __issignalingl (long double __value)
     ;
#line 53 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acosl (long double __x) ;   extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ;   extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ;   extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ;   extern long double __atan2l (long double __y, long double __x) ;


   extern long double cosl (long double __x) ;   extern long double __cosl (long double __x) ;

   extern long double sinl (long double __x) ;   extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ;   extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ;   extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ;   extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ;   extern long double __tanhl (long double __x) ;
#line 85 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acoshl (long double __x) ;   extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ;   extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ;   extern long double __atanhl (long double __x) ;





   extern long double expl (long double __x) ;   extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ;   extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ;   extern long double __ldexpl (long double __x, int __exponent) ;


   extern long double logl (long double __x) ;   extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ;   extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ;   extern long double __modfl (long double __x, long double *__iptr) ;
#line 119 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double expm1l (long double __x) ;   extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ;   extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ;   extern long double __logbl (long double __x) ;




extern long double exp2l (long double __x) ;   extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ;   extern long double __log2l (long double __x) ;






   extern long double powl (long double __x, long double __y) ;   extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ;   extern long double __sqrtl (long double __x) ;



extern long double hypotl (long double __x, long double __y) ;   extern long double __hypotl (long double __x, long double __y) ;




extern long double cbrtl (long double __x) ;   extern long double __cbrtl (long double __x) ;






extern long double ceill (long double __x) ;   extern long double __ceill (long double __x) ;


extern long double fabsl (long double __x) ;   extern long double __fabsl (long double __x) ;


extern long double floorl (long double __x) ;   extern long double __floorl (long double __x) ;


extern long double fmodl (long double __x, long double __y) ;   extern long double __fmodl (long double __x, long double __y) ;
#line 177 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinfl (long double __value) ;




extern int finitel (long double __value) ;


extern long double dreml (long double __x, long double __y) ;   extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ;   extern long double __significandl (long double __x) ;






extern long double copysignl (long double __x, long double __y) ;   extern long double __copysignl (long double __x, long double __y) ;




extern long double nanl (const char *__tagb) ;   extern long double __nanl (const char *__tagb) ;
#line 211 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanl (long double __value) ;





extern long double j0l (long double) ;   extern long double __j0l (long double) ;
extern long double j1l (long double) ;   extern long double __j1l (long double) ;
extern long double jnl (int, long double) ;   extern long double __jnl (int, long double) ;
extern long double y0l (long double) ;   extern long double __y0l (long double) ;
extern long double y1l (long double) ;   extern long double __y1l (long double) ;
extern long double ynl (int, long double) ;   extern long double __ynl (int, long double) ;





extern long double erfl (long double) ;   extern long double __erfl (long double) ;
extern long double erfcl (long double) ;   extern long double __erfcl (long double) ;
extern long double lgammal (long double) ;   extern long double __lgammal (long double) ;




extern long double tgammal (long double) ;   extern long double __tgammal (long double) ;





extern long double gammal (long double) ;   extern long double __gammal (long double) ;
#line 249 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal_r (long double, int *__signgamp) ;   extern long double __lgammal_r (long double, int *__signgamp) ;






extern long double rintl (long double __x) ;   extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ;   extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ;   extern long double __nexttowardl (long double __x, long double __y) ;
#line 272 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remainderl (long double __x, long double __y) ;   extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ;   extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ;   extern int __ilogbl (long double __x) ;
#line 290 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalblnl (long double __x, long int __n) ;   extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ;   extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x) ;   extern long double __roundl (long double __x) ;



extern long double truncl (long double __x) ;   extern long double __truncl (long double __x) ;




extern long double remquol (long double __x, long double __y, int *__quo) ;   extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ;   extern long int __lrintl (long double __x) ;

extern long long int llrintl (long double __x) ;   extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ;   extern long int __lroundl (long double __x) ;

extern long long int llroundl (long double __x) ;   extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ;   extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y) ;   extern long double __fmaxl (long double __x, long double __y) ;


extern long double fminl (long double __x, long double __y) ;   extern long double __fminl (long double __x, long double __y) ;


extern long double fmal (long double __x, long double __y, long double __z) ;   extern long double __fmal (long double __x, long double __y, long double __z) ;
#line 396 "../usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbl (long double __x, long double __n) ;   extern long double __scalbl (long double __x, long double __n) ;
#line 773 "../usr/include/math.h"
extern int signgam;
#line 853 "../usr/include/math.h"
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
#line 190 "coin/include/Inventor/C/basic.h"
typedef uint64_t SbUniqueId;
#line 40 "../usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 99 "../usr/lib/gcc/x86_64-linux-gnu/8/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 46 "coin/include/Inventor/C/base/string.h"
enum cc_string_constants {
  CC_STRING_MIN_SIZE = 128 - sizeof(char *) + sizeof(size_t),
  CC_STRING_RESIZE   = 128
};

struct cc_string {
  char * pointer;
  size_t bufsize;
  char buffer[CC_STRING_MIN_SIZE];
};

typedef  struct cc_string  cc_string;

typedef char (*cc_apply_f)(char);



 void cc_string_construct(cc_string * me);
 cc_string * cc_string_construct_new(void);
 cc_string * cc_string_clone(const cc_string * str);
 void cc_string_clean(cc_string * str);
 void cc_string_destruct(cc_string * str);

 void cc_string_set_string(cc_string * str, const cc_string * str2);
 void cc_string_set_text(cc_string * str, const char * text);
 void cc_string_set_subtext(cc_string * str, const char * text, int start, int end);
 void cc_string_set_integer(cc_string * str, int integer);

 void cc_string_append_string(cc_string * str, const cc_string * str2);
 void cc_string_append_text(cc_string * str, const char * text);
 void cc_string_append_integer(cc_string * str, const int digits);
 void cc_string_append_char(cc_string * str, const char c);

 unsigned int cc_string_length(const cc_string * str);
 int cc_string_is(const cc_string * str);
 void cc_string_clear(cc_string * str);
 void cc_string_clear_no_free(cc_string * str);
 uint32_t cc_string_hash(const cc_string * str);
 uint32_t cc_string_hash_text(const char * text);

 const char * cc_string_get_text(const cc_string * str);
 void cc_string_remove_substring(cc_string * str, int start, int end);

 int cc_string_compare(const cc_string * lhs, const cc_string * rhs);
 int cc_string_compare_text(const char * lhs, const char * rhs);
 int cc_string_compare_subtext(const cc_string * str, const char * text, int offset);

 void cc_string_apply(cc_string * str, cc_apply_f function);

 void cc_string_sprintf(cc_string * str, const char * formatstr, ...);
 void cc_string_vsprintf(cc_string * str, const char * formatstr, va_list args);

 size_t cc_string_utf8_decode(const char * src, size_t srclen, uint32_t * value);
 size_t cc_string_utf8_encode(char * buffer, size_t buflen, uint32_t value);
 uint32_t cc_string_utf8_get_char(const char * str);
 const char * cc_string_utf8_next_char(const char * str);
 size_t cc_string_utf8_validate_length(const char * str);

 void cc_string_set_wtext(cc_string * str, const wchar_t * text);
#line 49 "coin/include/Inventor/C/errors/error.h"
typedef struct cc_error {
  cc_string debugstring;
} cc_error;

typedef void cc_error_cb(const cc_error * err, void * data);



 void cc_error_init(cc_error * me);
 void cc_error_clean(cc_error * me);
 void cc_error_copy(const cc_error * src, cc_error * dst);


 const cc_string * cc_error_get_debug_string(const cc_error * me);



 void cc_error_set_handler_callback(cc_error_cb * func, void * data);



 cc_error_cb * cc_error_get_handler_callback(void);



 void * cc_error_get_handler_data(void);


 void cc_error_post(const char * format, ...);
 void cc_error_post_arglist(const char * format, va_list args);




 void cc_error_set_debug_string(cc_error * me, const char * str);




 void cc_error_append_to_debug_string(cc_error * me, const char * str);




 void cc_error_handle(cc_error * me);



 cc_error_cb * cc_error_get_handler(void ** data);



 void cc_error_default_handler_cb(const cc_error * err, void * data);
#line 47 "coin/include/Inventor/C/errors/debugerror.h"
typedef enum CC_DEBUGERROR_SEVERITY {
  CC_DEBUGERROR_ERROR,
  CC_DEBUGERROR_WARNING,
  CC_DEBUGERROR_INFO
} CC_DEBUGERROR_SEVERITY;

typedef struct cc_debugerror {
  cc_error super;

  CC_DEBUGERROR_SEVERITY severity;
} cc_debugerror;

typedef void cc_debugerror_cb(const cc_debugerror * err, void * data);
#line 68 "coin/include/Inventor/C/errors/debugerror.h"
 void cc_debugerror_post(const char * source, const char * format, ...);
 void cc_debugerror_postwarning(const char * source, const char * format, ...);
 void cc_debugerror_postinfo(const char * source, const char * format, ...);


 void cc_debugerror_init(cc_debugerror * me);
 void cc_debugerror_clean(cc_debugerror * me);

 CC_DEBUGERROR_SEVERITY cc_debugerror_get_severity(const cc_debugerror * me);

 void cc_debugerror_set_handler_callback(cc_debugerror_cb * function, void * data);
 cc_debugerror_cb * cc_debugerror_get_handler_callback(void);
 void * cc_debugerror_get_handler_data(void);

 cc_debugerror_cb * cc_debugerror_get_handler(void ** data);
coin/include/Inventor/SbBasic.h:46 error: You are not compiling C++ - maybe your source file is named <file>.c
#line 67 "coin/include/Inventor/SbBasic.h"
template <class Type>
inline Type SbAbs( Type Val ) {
  return (Val < 0) ? 0 - Val : Val;
}

template <class Type>
inline Type SbMax( const Type A, const Type B ) {
  return (A < B) ? B : A;
}

template <class Type>
inline Type SbMin( const Type A, const Type B ) {
  return (A < B) ? A : B;
}

template <class Type>
inline Type SbClamp( const Type Val, const Type Min, const Type Max ) {
  return (Val < Min) ? Min : (Val > Max) ? Max : Val;
}

template <class Type>
inline void SbSwap( Type & A, Type & B ) {
  Type T; T = A; A = B; B = T;
}

template <class Type>
inline Type SbSqr(const Type val) {
  return val * val;
}
#line 104 "coin/include/Inventor/SbBasic.h"
template <typename Type>
inline void SbDividerChk(const char * funcname, Type divider) {
  if (!(divider != static_cast<Type>(0)))
    cc_debugerror_post(funcname, "divide by zero error.", divider);
}


class SbPList;



extern "C" {
typedef uintptr_t SbDictKeyType;
typedef void SbDictApplyFunc(SbDictKeyType key, void * value);
typedef void SbDictApplyDataFunc(SbDictKeyType key, void * value, void * data);
typedef SbDictKeyType SbDictHashingFunc(const SbDictKeyType key);
}

class SbDict {
public:
  SbDict(const int entries = 251);
  SbDict(const SbDict & from);
  ~SbDict();

  SbDict & operator=(const SbDict & from);

  typedef uintptr_t Key;

  void applyToAll(SbDictApplyFunc * rtn) const;
  void applyToAll(SbDictApplyDataFunc * rtn, void * data) const;
  void clear(void);

  SbBool enter(const Key key, void * const value);
  SbBool find(const Key key, void *& value) const;
  void makePList(SbPList & keys, SbPList & values);
  SbBool remove(const Key key);

  void setHashingFunction(SbDictHashingFunc * func);

private:
  struct cc_hash * hashtable;

};
#line 49 "coin/include/Inventor/SoType.h"
class SbName;
class SoTypedObject;
class SoTypeList;
class SoFieldData;
class SbDict;
struct SoTypeData;
template <class Type> class SbList;



class SoType {
public:
  typedef void * (*instantiationMethod)(void);

  static SoType fromName(const SbName name);
  SbName getName(void) const;
  const SoType getParent(void) const;
  SbBool isDerivedFrom(const SoType type) const;

  static int getAllDerivedFrom(const SoType type, SoTypeList & list);

  SbBool canCreateInstance(void) const;
  void * createInstance(void) const;

  uint16_t getData(void) const;
  int16_t getKey(void) const;

  SbBool operator == (const SoType type) const;
  SbBool operator != (const SoType type) const;

  SbBool operator <  (const SoType type) const;
  SbBool operator <= (const SoType type) const;
  SbBool operator >= (const SoType type) const;
  SbBool operator >  (const SoType type) const;

  static const SoType createType(const SoType parent, const SbName name,
                                 const instantiationMethod method = ((void *)0),
                                 const uint16_t data = 0);

  static const SoType overrideType(const SoType originalType,
                                   const instantiationMethod method = ((void *)0));

  static SbBool removeType(const SbName & name);

  static void init(void);

  static SoType fromKey(uint16_t key);
  static SoType badType(void);
  SbBool isBad(void) const;

  void makeInternal(void);
  SbBool isInternal(void) const;

  static int getNumTypes(void);

  instantiationMethod getInstantiationMethod(void) const;

private:
  static void clean(void);

  int16_t index;

  static SbList<SoTypeData *> * typedatalist;
};



inline int16_t
SoType::getKey(void) const
{
  return this->index;
}

inline SbBool
SoType::operator != (const SoType type) const
{
  return (this->getKey() != type.getKey());
}

inline SbBool
SoType::operator == (const SoType type) const
{
  return (this->getKey() == type.getKey());
}

inline SbBool
SoType::operator <  (const SoType type) const
{
  return (this->getKey() < type.getKey());
}

inline SbBool
SoType::operator <= (const SoType type) const
{
  return (this->getKey() <= type.getKey());
}

inline SbBool
SoType::operator >= (const SoType type) const
{
  return (this->getKey() >= type.getKey());
}

inline SbBool
SoType::operator >  (const SoType type) const
{
  return (this->getKey() > type.getKey());
}

inline SbBool
SoType::isBad(void) const
{
  return (this->index == 0);
}
coin/include/Inventor/lists/SbPList.h:37 error: Include file 'cassert' not found
#line 37 "coin/include/Inventor/lists/SbPList.h"

class SbPList {
  enum { DEFAULTSIZE = 4 };

public:
  SbPList(const int sizehint = DEFAULTSIZE);
  SbPList(const SbPList & l);
  ~SbPList();

  void copy(const SbPList & l);
  SbPList & operator=(const SbPList & l);
  void fit(void);

  void append(void * item);
  int find(const void * item) const;
  void insert(void * item, const int insertbefore);
  void removeItem(void * item);
  void remove(const int index);
  void removeFast(const int index);
  int getLength(void) const;
  void truncate(const int length, const int fit = 0);

  void ** getArrayPtr(const int start = 0) const;
  void *& operator[](const int index) const;

  int operator==(const SbPList & l) const;
  int operator!=(const SbPList & l) const;
  void * get(const int index) const;
  void set(const int index, void * item);

protected:

  void expand(const int size);
  int getArraySize(void) const;

private:
  void expandlist(const int size) const;
  void grow(const int size = -1);

  int itembuffersize;
  int numitems;
  void ** itembuffer;
  void * builtinbuffer[DEFAULTSIZE];
};



inline void
SbPList::append(void * item)
{
  if (this->numitems == this->itembuffersize) this->grow();
  this->itembuffer[this->numitems++] = item;
}

inline void
SbPList::removeFast(const int index)
{



  this->itembuffer[index] = this->itembuffer[--this->numitems];
}

inline int
SbPList::getLength(void) const
{
  return this->numitems;
}

inline void
SbPList::truncate(const int length, const int dofit)
{



  this->numitems = length;
  if (dofit) this->fit();
}

inline void **
SbPList::getArrayPtr(const int start) const
{



  return &this->itembuffer[start];
}

inline void *&
SbPList::operator[](const int index) const
{



  if (index >= this->getLength()) this->expandlist(index + 1);
  return this->itembuffer[index];
}

inline int
SbPList::operator!=(const SbPList & l) const
{
  return !(*this == l);
}

inline void *
SbPList::get(const int index) const
{
  return this->itembuffer[index];
}

inline void
SbPList::set(const int index, void * item)
{
  this->itembuffer[index] = item;
}

inline void
SbPList::expand(const int size)
{
  this->grow(size);
  this->numitems = size;
}

inline int
SbPList::getArraySize(void) const
{
  return this->itembuffersize;
}
coin/include/Inventor/misc/SoNotRec.h:37 error: Include file 'cstdio' not found
#line 37 "coin/include/Inventor/misc/SoNotRec.h"

class SoBase;


class SoNotRec {
public:
  enum Type {
    CONTAINER,
    PARENT,
    SENSOR,
    FIELD,
    ENGINE
  };

  enum OperationType {
    UNSPECIFIED,
    FIELD_UPDATE,
    GROUP_ADDCHILD,
    GROUP_INSERTCHILD,
    GROUP_REPLACECHILD,
    GROUP_REMOVECHILD,
    GROUP_REMOVEALLCHILDREN
  };

  SoNotRec(SoBase * const notifbase);
  void setType(const SoNotRec::Type type);
  SoBase * getBase(void) const;
  SoNotRec::Type getType(void) const;
  const SoNotRec * getPrevious(void) const;
  void setPrevious(const SoNotRec * const prev);
  void print(FILE * const file) const;
  SoNotRec::OperationType getOperationType(void) const;
  int getIndex(void) const;
  int getFieldNumIndices(void) const;
  const SoBase * getGroupChild(void) const;
  const SoBase * getGroupPrevChild(void) const;
  void setOperationType(const SoNotRec::OperationType opType);
  void setIndex(const int idx);
  void setFieldNumIndices(const int fldnumind);
  void setGroupChild(const SoBase * const gc);
  void setGroupPrevChild(const SoBase * const pc);

private:
  Type type;
  SoBase * base;
  const SoNotRec * prev;
  int index, fieldNumIndices;
  OperationType operationType;
  const SoBase * groupChild;
  const SoBase * groupPrevChild;
};
coin/include/Inventor/misc/SoNotification.h:37 error: Include file 'cstdio' not found
#line 37 "coin/include/Inventor/misc/SoNotification.h"

class SoEngineOutput;
class SoField;


class SoNotList {
public:
  SoNotList(void);
  SoNotList(const SoNotList * nl);

  void append(SoNotRec * const rec);
  void append(SoNotRec * const rec, SoField * const field);
  void append(SoNotRec * const rec, SoEngineOutput * const engineout);
  void setLastType(const SoNotRec::Type type);
  SoNotRec * getFirstRec(void) const;
  SoNotRec * getLastRec(void) const;
  SoNotRec * getFirstRecAtNode(void) const;
  SoField * getLastField(void) const;
  SoEngineOutput * getLastEngineOutput(void) const;
  SbUniqueId getTimeStamp(void) const;

  void print(FILE * const file = stdout) const;

private:
  SoNotRec * head;
  SoNotRec * tail;
  SoNotRec * firstnoderec;
  SoField * lastfield;
  SoEngineOutput * lastengine;
  SbUniqueId stamp;
};
#line 52 "coin/include/Inventor/lists/SoAuditorList.h"
class SoAuditorList : private SbPList {
  typedef SbPList inherited;

public:
  SoAuditorList(void);
  ~SoAuditorList();

  void append(void * const auditor, const SoNotRec::Type type);

  void set(const int index, void * const auditor, const SoNotRec::Type type);
  void * getObject(const int index) const;
  SoNotRec::Type getType(const int index) const;

  int getLength(void) const;
  int find(void * const auditor, const SoNotRec::Type type) const;

  void remove(const int index);
  void remove(void * const auditor, const SoNotRec::Type type);

  void notify(SoNotList * l);

private:


  SoAuditorList(const int) { }
  SoAuditorList(const SoAuditorList & l) : SbPList(l) { }
  void * get(const int) const { return ((void *)0); }
  void set(const int, void * const) { }
  void copy(const SbPList &) { }
  void append(const void *) { }
  int find(const void *) const { return -1; }
  void insert(const void *, const int) { }
  void removeFast(const int) { }
  void truncate(const int, const int = 0) { }
  void push(const void *) { }
  void * pop(void) { return ((void *)0); }
  SbPList & operator=(const SbPList &) { return *this; }
  operator void ** (void) { return static_cast<void **> (((void *)0)); }
  operator const void ** (void) const { return static_cast<const void **>(((void *)0)); }
  void * operator[](const int) const { return ((void *)0); }
  void * & operator[](const int) { return SbPList::operator[](0); }
  int operator==(const SbPList &) const { return 0; }
  int operator!=(const SbPList &) const { return 0; }

  void doNotify(SoNotList * l, const void * auditor, const SoNotRec::Type type);

};
#line 45 "coin/include/Inventor/C/base/rbptree.h"
typedef struct cc_rbptree_node cc_rbptree_node;

typedef struct cc_rbptree {
  cc_rbptree_node * root;


  void * inlinepointer[2];
  void * inlinedata[2];
  uint32_t counter;
} cc_rbptree;

 void cc_rbptree_init(cc_rbptree * t);
 void cc_rbptree_clean(cc_rbptree * t);

 void cc_rbptree_insert(cc_rbptree * t, void * p, void * data);
 SbBool cc_rbptree_remove(cc_rbptree * t, void * p);
 uint32_t cc_rbptree_size(const cc_rbptree * t);


typedef void cc_rbptree_traversecb(void * p, void * data, void * closure);
 void cc_rbptree_traverse(const cc_rbptree * t, cc_rbptree_traversecb * func, void * closure);


 void cc_rbptree_debug(const cc_rbptree * t);
#line 40 "coin/include/Inventor/misc/SoBase.h"
class SbString;
class SoBaseList;
class SoInput;
class SoOutput;

class SoBase {
public:
  static void initClass(void);

  void ref(void) const;
  void unref(void) const;
  void unrefNoDelete(void) const;
  int32_t getRefCount(void) const;

  void touch(void);

  virtual SoType getTypeId(void) const = 0;
  SbBool isOfType(SoType type) const;
  static SoType getClassTypeId(void);

  virtual SbName getName(void) const;
  virtual void setName(const SbName & newname);

  static void addName(SoBase * const base, const char * const name);
  static void removeName(SoBase * const base, const char * const name);

  virtual void startNotify(void);
  virtual void notify(SoNotList * l);

  void addAuditor(void * const auditor, const SoNotRec::Type type);
  void removeAuditor(void * const auditor, const SoNotRec::Type type);
  const SoAuditorList & getAuditors(void) const;

  virtual void addWriteReference(SoOutput * out, SbBool isfromfield = 0);
  SbBool shouldWrite(void);

  static void incrementCurrentWriteCounter(void);
  static void decrementCurrentWriteCounter(void);

  static SoBase * getNamedBase(const SbName & name, SoType type);
  static int getNamedBases(const SbName & name, SoBaseList & baselist,
                           SoType type);

  static SbBool read(SoInput * input, SoBase *& base, SoType expectedtype);
  static void setInstancePrefix(const SbString & c);

  static void setTraceRefs(SbBool trace);
  static SbBool getTraceRefs(void);

  static SbBool connectRoute(SoInput * input,
                             const SbName & fromnodename, const SbName & fromfieldname,
                             const SbName & tonodename, const SbName & tofieldname);

  void assertAlive(void) const;
  static SbBool readRoute(SoInput * input);

protected:

  enum BaseFlags { IS_ENGINE = 0x01, IS_GROUP = 0x02 };

  SoBase(void);
  virtual ~SoBase();

  virtual void destroy(void);

  SbBool hasMultipleWriteRefs(void) const;
  SbBool writeHeader(SoOutput * out, SbBool isgroup, SbBool isengine) const;
  void writeFooter(SoOutput * out) const;
  virtual const char * getFileFormatName(void) const;

  virtual SbBool readInstance(SoInput * input, unsigned short flags) = 0;

  static uint32_t getCurrentWriteCounter(void);
  static void staticDataLock(void);
  static void staticDataUnlock(void);

  virtual SoNotRec createNotRec(void);

private:
  static void cleanClass(void);

  static SoType classTypeId;

  struct {
    mutable int referencecount  : 28;
    mutable unsigned int alive  :  4;
  } objdata;

  void doNotify(SoNotList * l, const void * auditor, const SoNotRec::Type type);
  cc_rbptree auditortree;

  class PImpl;
  friend class PImpl;
};


inline void intrusive_ptr_add_ref(SoBase * obj) { obj->ref(); }
inline void intrusive_ptr_release(SoBase * obj) { obj->unref(); }
#line 38 "coin/include/Inventor/fields/SoFieldContainer.h"
class SbString;
class SoFieldData;
class SoFieldList;
class SoOutput;

class SoFieldContainer : public SoBase {
  typedef SoBase inherited;

public:
  static void initClass(void);
  static SoType getClassTypeId(void);
  static void cleanupClass(void);

  void setToDefaults(void);
  SbBool hasDefaultValues(void) const;

  SbBool fieldsAreEqual(const SoFieldContainer * container) const;
  void copyFieldValues(const SoFieldContainer * container,
                       SbBool copyconnections = 0);

  SbBool set(const char * const fielddata);
  void get(SbString & fielddata);

  virtual int getFields(SoFieldList & l) const;
  virtual int getAllFields(SoFieldList & l) const;
  virtual SoField * getField(const SbName & name) const;
  virtual SoField * getEventIn(const SbName & name) const;
  virtual SoField * getEventOut(const SbName & name) const;
  SbBool getFieldName(const SoField * const field, SbName & name) const;

  SbBool enableNotify(const SbBool flag);
  SbBool isNotifyEnabled(void) const;

  SbBool set(const char * fielddata, SoInput * input);
  void get(SbString & fielddata, SoOutput * out);

  virtual void notify(SoNotList * l);

  virtual SbBool validateNewFieldValue(SoField * field, void * newval);

  virtual void addWriteReference(SoOutput * out, SbBool isfromfield = 0);
  virtual void writeInstance(SoOutput * out);

  SbBool getIsBuiltIn(void) const;
  virtual const SoFieldData * getFieldData(void) const;

  virtual void copyContents(const SoFieldContainer * from,
                            SbBool copyconnections);
  virtual SoFieldContainer * copyThroughConnection(void) const;

  static void initCopyDict(void);
  static void addCopy(const SoFieldContainer * orig,
                      const SoFieldContainer * copy);
  static SoFieldContainer * checkCopy(const SoFieldContainer * orig);
  static SoFieldContainer * findCopy(const SoFieldContainer * orig,
                                     const SbBool copyconnections);
  static void copyDone(void);

  virtual void getFieldsMemorySize(size_t & managed, size_t & unmanaged) const;

  void setUserData(void * userdata) const;
  void * getUserData(void) const;

protected:
  SoFieldContainer(void);
  virtual ~SoFieldContainer();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  SbBool isBuiltIn;

private:
  static SoType classTypeId;
  SbBool donotify;

};
#line 38 "coin/include/Inventor/nodes/SoNode.h"
class SoAction;
class SoCallbackAction;
class SoChildList;
class SoGLRenderAction;
class SoGetBoundingBoxAction;
class SoGetMatrixAction;
class SoGetPrimitiveCountAction;
class SoHandleEventAction;
class SoNodeList;
class SoNotList;
class SoOutput;
class SoPickAction;
class SoRayPickAction;
class SoSearchAction;
class SoWriteAction;
class SoAudioRenderAction;
class SbDict;

class SoNode : public SoFieldContainer {
  typedef SoFieldContainer inherited;

public:


  enum Stage { FIRST_INSTANCE, PROTO_INSTANCE, OTHER_INSTANCE };


  void setOverride(const SbBool state);
  SbBool isOverride(void) const;

  enum NodeType {
    INVENTOR     = 0x0000,
    VRML1        = 0x0001,
    VRML2        = 0x0002,
    INVENTOR_1   = 0x0004,
    INVENTOR_2_0 = 0x0008,
    INVENTOR_2_1 = 0x0010,
    INVENTOR_2_5 = 0x0020,
    INVENTOR_2_6 = 0x0040,
    COIN_1_0     = 0x0080,
    COIN_2_0     = 0x0100,
    EXTENSION    = 0x0200,
    COIN_2_2     = 0x0400,
    COIN_2_3     = 0x0800,
    COIN_2_4     = 0x1000,
    INVENTOR_5_0 = 0x2000,
    COIN_2_5     = 0x4000,
    COIN_3_0     = 0x8000,
    INVENTOR_6_0 = 0x10000,
    COIN_4_0     = 0x20000
  };

  static uint32_t getCompatibilityTypes(const SoType & nodetype);
  void setNodeType(const NodeType type);
  NodeType getNodeType(void) const;

  virtual SoNode * copy(SbBool copyconnections = 0) const;
  virtual SbBool affectsState(void) const;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);
  virtual void GLRenderOffPath(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);

  /*!
    Action method for SoGetMatrixAction.
  
    Updates \a action by accumulating with the transformation matrix of
    this node (if any).
  */
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void pick(SoPickAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void search(SoSearchAction * action);
  virtual void write(SoWriteAction * action);
  virtual void audioRender(SoAudioRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  virtual void grabEventsSetup(void);
  virtual void grabEventsCleanup(void);

  virtual void startNotify(void);
  virtual void notify(SoNotList * l);

  SbUniqueId getNodeId(void) const;
  virtual SoChildList * getChildren(void) const;

  virtual void writeInstance(SoOutput * out);
  virtual SoNode * addToCopyDict(void) const;
  virtual void copyContents(const SoFieldContainer * from,
                            SbBool copyconnections);
  virtual SoFieldContainer * copyThroughConnection(void) const;


  static SoType getClassTypeId(void);
  static SoNode * getByName(const SbName & name);
  static int getByName(const SbName & name, SoNodeList & l);

  static void initClass(void);
  static void initClasses(void);

  static SbUniqueId getNextNodeId(void);
  static int getActionMethodIndex(const SoType type);

  static void getBoundingBoxS(SoAction * action, SoNode * node);
  static void GLRenderS(SoAction * action, SoNode * node);
  static void callbackS(SoAction * action, SoNode * node);
  static void getMatrixS(SoAction * action, SoNode * node);
  static void handleEventS(SoAction * action, SoNode * node);
  static void pickS(SoAction * action, SoNode * node);
  static void rayPickS(SoAction * action, SoNode * node);
  static void searchS(SoAction * action, SoNode * node);
  static void writeS(SoAction * action, SoNode * node);
  static void audioRenderS(SoAction * action, SoNode * node);
  static void getPrimitiveCountS(SoAction * action, SoNode * node);

protected:
  SoNode(void);
  virtual ~SoNode();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);

  static const SoFieldData ** getFieldDataPtr(void);
#line 163 "coin/include/Inventor/nodes/SoNode.h"
  static void setNextActionMethodIndex(int index);
  static int getNextActionMethodIndex(void);
  static void incNextActionMethodIndex(void);

  static void setCompatibilityTypes(const SoType & nodetype, const uint32_t bitmask);

  SbUniqueId uniqueId;
  static SbUniqueId nextUniqueId;
  static int nextActionMethodIndex;

private:
  static SoType classTypeId;
  uint32_t stateflags;
  void clearStateFlags(const unsigned int bits);
  void setStateFlags(const unsigned int bits);
  SbBool getState(const unsigned int bits) const;
  static void cleanupClass(void);
};
#line 40 "coin/include/Inventor/lists/SbIntList.h"
class SbIntList : public SbPList {
public:
  SbIntList(void) : SbPList () { }
  SbIntList(const int sizehint) : SbPList(sizehint) { }

  void append(const int item) {
    this->SbPList::append(reinterpret_cast<void*>(static_cast<uintptr_t>(item)));
  }
  int find(const int item) {
    return this->SbPList::find(reinterpret_cast<void *>(static_cast<uintptr_t>(item)));
  }
  void insert(const int item, const int addbefore) {
    this->SbPList::insert(reinterpret_cast<void *>(static_cast<uintptr_t>(item)), addbefore);
  }
  int & operator[](const int idx) const {
    return reinterpret_cast<int&>(((*static_cast<const SbPList *>(this))[idx]));
  }
};
#line 36 "coin/include/Inventor/lists/SoBaseList.h"
class SoBase;




class SoBaseList : public SbPList {
public:
  SoBaseList(void);
  SoBaseList(const int size);
  SoBaseList(const SoBaseList & l);
  ~SoBaseList();

  void append(SoBase * ptr);
  void insert(SoBase * ptr, const int addbefore);
  void remove(const int index);
  void removeItem(SoBase * item);
  void truncate(const int length);
  void copy(const SoBaseList & l);
  SoBaseList & operator=(const SoBaseList & l);
  SoBase * operator[](const int i) const;
  void set(const int i, SoBase * const ptr);
  void addReferences(const SbBool flag);
  SbBool isReferencing(void) const;

private:
  SbBool referencing;
};
#line 38 "coin/include/Inventor/lists/SoDetailList.h"
class SoDetail;

class SoDetailList : public SbPList {
public:
  SoDetailList(void) : SbPList() { }
  SoDetailList(const int sizehint) : SbPList (sizehint) { }
  SoDetailList(const SoDetailList & l);
  ~SoDetailList();

  void append(SoDetail * detail) {
    SbPList::append(static_cast<void *>(detail));
  }
  void insert(SoDetail * detail, const int insertbefore) {
    SbPList::insert(static_cast<void *>(detail), insertbefore);
  }
  void truncate(const int length, const int fit = 0);
  void copy(const SoDetailList & l);
  SoDetailList & operator=(const SoDetailList & l) {
    this->copy(l);
    return *this;
  }
  SoDetail * operator[](const int idx) const {
    return static_cast<SoDetail *>(this->SbPList::operator[](idx));
  }
  void set(const int index, SoDetail * item);
};
#line 39 "coin/include/Inventor/lists/SoTypeList.h"
class SoTypeList : public SbPList {
public:
  SoTypeList(void) : SbPList() { }
  SoTypeList(const int sizehint) : SbPList(sizehint) { }
  SoTypeList(const SoTypeList & l) : SbPList(l) { }

  void append(const SoType type);
  int find(const SoType type) const;
  void insert(const SoType type, const int insertbefore);
  SoType operator[](const int idx) const;
  void set(const int index, const SoType item);
};
#line 38 "coin/include/Inventor/lists/SoEnabledElementsList.h"
class SoEnabledElementsList {
public:
  SoEnabledElementsList(SoEnabledElementsList * const parentlist);
  ~SoEnabledElementsList();

  const SoTypeList & getElements(void) const;
  void enable(const SoType elementtype, const int stackindex);
  void merge(const SoEnabledElementsList & eel);

  static int getCounter(void);

private:
  class SoEnabledElementsListP * pimpl;
};
#line 38 "coin/include/Inventor/lists/SoEngineOutputList.h"
class SoEngineOutput;

class SoEngineOutputList : public SbPList {
public:
  SoEngineOutputList(void) : SbPList() { }
  SoEngineOutputList(const int sizehint) : SbPList(sizehint) { }
  SoEngineOutputList(const SoEngineOutputList & l) : SbPList(l) { }

  void append(SoEngineOutput * output) {
    SbPList::append(static_cast<void *>(output));
  }
  void insert(SoEngineOutput * output, const int insertbefore) {
    SbPList::insert(static_cast<void *>(output), insertbefore);
  }
  SoEngineOutput * operator [](const int idx) const {
    return static_cast<SoEngineOutput *>(SbPList::operator[](idx));
  }
  void set(const int idx, SoEngineOutput * item) {
    SbPList::operator[](idx) = static_cast<void *>(item);
  }
};
#line 38 "coin/include/Inventor/lists/SoEngineList.h"
class SoEngine;

class SoEngineList : public SoBaseList {
  typedef SoBaseList inherited;

public:
  SoEngineList(void);
  SoEngineList(const int size);
  SoEngineList(const SoEngineList & el);
  ~SoEngineList();

  void append(SoEngine * const ptr);
  SoEngine * operator[](const int i) const;
  SoEngineList & operator=(const SoEngineList & el);
};
#line 38 "coin/include/Inventor/lists/SoFieldList.h"
class SoField;

class SoFieldList : public SbPList {
public:
  SoFieldList(void) : SbPList() { }
  SoFieldList(const int sizehint) : SbPList(sizehint) { }
  SoFieldList(const SoFieldList & l) : SbPList(l) { }

  void append(SoField * field) {
    SbPList::append(static_cast<void *>(field));
  }
  void insert(SoField * field, const int insertbefore) {
    SbPList::insert(static_cast<void *>(field), insertbefore);
  }

  SoField * operator [](const int idx) const {
    return static_cast<SoField *>(SbPList::operator[](idx));
  }
  void set(const int idx, SoField * field) {
    SbPList::operator[](idx) = static_cast<void *>(field);
  }
  SoField * get(const int idx) const {
    return static_cast<SoField*>(SbPList::get(idx));
  }
};
#line 38 "coin/include/Inventor/lists/SoNodeList.h"
class SoNode;

class SoNodeList : public SoBaseList {
  typedef SoBaseList inherited;

public:
  SoNodeList(void);
  SoNodeList(const int size);
  SoNodeList(const SoNodeList & nl);
  ~SoNodeList();

  void append(SoNode * const ptr);
  SoNode * operator[](const int i) const;
  SoNodeList & operator=(const SoNodeList & nl);
};
#line 38 "coin/include/Inventor/lists/SoPathList.h"
class SoPath;

class SoPathList : public SoBaseList {
  typedef SoBaseList inherited;

public:
  SoPathList(void);
  SoPathList(const int size);
  SoPathList(const SoPathList & pl);
  ~SoPathList();

  void append(SoPath * const path);
  SoPath * operator[](const int i) const;
  SoPathList & operator=(const SoPathList & pl);
  int findPath(const SoPath & path) const;
  void sort(void);
  void uniquify(void);
};
#line 38 "coin/include/Inventor/lists/SoPickedPointList.h"
class SoPickedPoint;

class SoPickedPointList : public SbPList {
public:
  SoPickedPointList(void) : SbPList() { }
  SoPickedPointList(const int sizehint) : SbPList(sizehint) { }
  SoPickedPointList(const SoPickedPointList & l);
  ~SoPickedPointList() { this->truncate(0); }

  void append(SoPickedPoint * pp) {
    SbPList::append(static_cast<void *>(pp));
  }
  void insert(SoPickedPoint * pp, const int insertbefore) {
    SbPList::insert(static_cast<void *>(pp), insertbefore);
  }
  SoPickedPoint * operator[](const int idx) const {
    return static_cast<SoPickedPoint *>(SbPList::operator[](idx));
  }

  void truncate(const int start, const int fit = 0);
  void set(const int idx, SoPickedPoint * pp);

};
coin/src/nodes/SoNode.cpp:201 error: Include file 'cassert' not found
template <class Type>
class SbList {



  enum { DEFAULTSIZE = 4 };

public:

  SbList(const int sizehint = DEFAULTSIZE)
    : itembuffersize(DEFAULTSIZE), numitems(0), itembuffer(builtinbuffer) {
    if (sizehint > DEFAULTSIZE) this->grow(sizehint);
  }

  SbList(const SbList<Type> & l)
    : itembuffersize(DEFAULTSIZE), numitems(0), itembuffer(builtinbuffer) {
    this->copy(l);
  }

  ~SbList() {
    if (this->itembuffer != builtinbuffer) delete[] this->itembuffer;
  }

  void copy(const SbList<Type> & l) {
    if (this == &l) return;
    const int n = l.numitems;
    this->expand(n);
    for (int i = 0; i < n; i++) this->itembuffer[i] = l.itembuffer[i];
  }

  SbList <Type> & operator=(const SbList<Type> & l) {
    this->copy(l);
    return *this;
  }

  void fit(void) {
    const int items = this->numitems;

    if (items < this->itembuffersize) {
      Type * newitembuffer = this->builtinbuffer;
      if (items > DEFAULTSIZE) newitembuffer = new Type[items];

      if (newitembuffer != this->itembuffer) {
        for (int i = 0; i < items; i++) newitembuffer[i] = this->itembuffer[i];
      }

      if (this->itembuffer != this->builtinbuffer) delete[] this->itembuffer;
      this->itembuffer = newitembuffer;
      this->itembuffersize = items > DEFAULTSIZE ? items : DEFAULTSIZE;
    }
  }

  void append(const Type item) {
    if (this->numitems == this->itembuffersize) this->grow();
    this->itembuffer[this->numitems++] = item;
  }

  int find(const Type item) const {
    for (int i = 0; i < this->numitems; i++)
      if (this->itembuffer[i] == item) return i;
    return -1;
  }

  void insert(const Type item, const int insertbefore) {



    if (this->numitems == this->itembuffersize) this->grow();

    for (int i = this->numitems; i > insertbefore; i--)
      this->itembuffer[i] = this->itembuffer[i-1];
    this->itembuffer[insertbefore] = item;
    this->numitems++;
  }

  void removeItem(const Type item) {
    int idx = this->find(item);



    this->remove(idx);
  }

  void remove(const int index) {



    this->numitems--;
    for (int i = index; i < this->numitems; i++)
      this->itembuffer[i] = this->itembuffer[i + 1];
  }

  void removeFast(const int index) {



    this->itembuffer[index] = this->itembuffer[--this->numitems];
  }

  int getLength(void) const {
    return this->numitems;
  }

  void truncate(const int length, const int dofit = 0) {



    this->numitems = length;
    if (dofit) this->fit();
  }

  void push(const Type item) {
    this->append(item);
  }

  Type pop(void) {



    return this->itembuffer[--this->numitems];
  }

  const Type * getArrayPtr(const int start = 0) const {
    return &this->itembuffer[start];
  }

  Type operator[](const int index) const {



    return this->itembuffer[index];
  }

  Type & operator[](const int index) {



    return this->itembuffer[index];
  }

  int operator==(const SbList<Type> & l) const {
    if (this == &l) return 1;
    if (this->numitems != l.numitems) return 0;
    for (int i = 0; i < this->numitems; i++)
      if (this->itembuffer[i] != l.itembuffer[i]) return 0;
    return 1;
  }

  int operator!=(const SbList<Type> & l) const {
    return !(*this == l);
  }

  void ensureCapacity(const int size) {
    if ((size > itembuffersize) &&
        (size > DEFAULTSIZE)) {
      this->grow(size);
    }
  }

protected:

  void expand(const int size) {
    this->grow(size);
    this->numitems = size;
  }

  int getArraySize(void) const {
    return this->itembuffersize;
  }

private:
  void grow(const int size = -1) {

    if (size == -1) this->itembuffersize <<= 1;
    else if (size <= this->itembuffersize) return;
    else { this->itembuffersize = size; }

    Type * newbuffer = new Type[this->itembuffersize];
    const int n = this->numitems;
    for (int i = 0; i < n; i++) newbuffer[i] = this->itembuffer[i];
    if (this->itembuffer != this->builtinbuffer) delete[] this->itembuffer;
    this->itembuffer = newbuffer;
  }

  int itembuffersize;
  int numitems;
  Type * itembuffer;
  Type builtinbuffer[DEFAULTSIZE];
};
class SbString {
public:
  SbString(void) { cc_string_construct(&this->str); }

  SbString(const char * s)
  { cc_string_construct(&this->str); cc_string_set_text(&this->str, s); }

  SbString(const wchar_t * s)
  { cc_string_construct(&this->str); cc_string_set_wtext(&this->str, s); }

  SbString(const char * s, int start, int end)
  { cc_string_construct(&this->str); cc_string_set_subtext(&this->str, s, start, end); }

  SbString(const SbString & s)
  { cc_string_construct(&this->str); cc_string_set_string(&this->str, &s.str); }

  SbString(const int digits)
  { cc_string_construct(&this->str); cc_string_set_integer(&this->str, digits); }

  ~SbString() { cc_string_clean(&this->str); }

  uint32_t hash(void) const { return cc_string_hash(&this->str); }
  static uint32_t hash(const char * s) { return cc_string_hash_text(s); }

  int getLength(void) const { return cc_string_length(&this->str); }

  void makeEmpty(SbBool freeold = 1)
  {
    if ( freeold ) cc_string_clear(&this->str);
    else cc_string_clear_no_free(&this->str);
  }

  const char * getString(void) const { return cc_string_get_text(&this->str); }

  SbString getSubString(int startidx, int endidx = -1) const
  {
    SbString s;
    cc_string_set_subtext(&s.str, cc_string_get_text(&this->str), startidx, endidx);
    return s;
  }
  void deleteSubString(int startidx, int endidx = -1)
  {
    cc_string_remove_substring(&this->str, startidx, endidx);
  }

  void addIntString(const int value) { cc_string_append_integer(&this->str, value); }

  char operator[](int index) const { return this->str.pointer[index]; }

  SbString & operator=(const char * s)
  { cc_string_set_text(&this->str, s); return *this; }
  SbString & operator=(const SbString & s)
  { cc_string_set_text(&this->str, s.str.pointer); return *this; }

  SbString & operator+=(const char * s)
  { cc_string_append_text(&this->str, s); return *this; }
  SbString & operator+=(const SbString & s)
  { cc_string_append_string(&this->str, &s.str); return *this; }
  SbString & operator+=(const char c)
  { cc_string_append_char(&this->str, c); return *this; }

  int operator!(void) const { return ! cc_string_is(&this->str); }

  int compareSubString(const char * text, int offset = 0) const
  { return cc_string_compare_subtext(&this->str, text, offset); }

  SbString & sprintf(const char * formatstr, ...)
  {
    va_list args; __builtin_va_start(args,formatstr);
    cc_string_vsprintf(&this->str, formatstr, args);
    __builtin_va_end(args); return *this;
  }
  SbString & vsprintf(const char * formatstr, va_list args)
  { cc_string_vsprintf(&this->str, formatstr, args); return *this; }

  void apply(char (*func)(char input)) {
    cc_string_apply(&this->str, reinterpret_cast<cc_apply_f>(func));
  }

  int find(const SbString & s) const;
  SbBool findAll(const SbString & s, SbIntList & found) const;

  SbString lower() const;
  SbString upper() const;

  void print(std::FILE * fp) const;

  friend int operator==(const SbString & sbstr, const char * s);
  friend int operator==(const char * s, const SbString & sbstr);
  friend int operator==(const SbString & str1, const SbString & str2);
  friend int operator!=(const SbString & sbstr, const char * s);
  friend int operator!=(const char * s, const SbString & sbstr);
  friend int operator!=(const SbString & str1, const SbString & str2);
  friend int operator<(const SbString & sbstr, const char * s);
  friend int operator<(const char * s, const SbString & sbstr);
  friend int operator<(const SbString & str1, const SbString & str2);
  friend int operator>(const SbString & sbstr, const char * s);
  friend int operator>(const char * s, const SbString & sbstr);
  friend int operator>(const SbString & str1, const SbString & str2);
  friend const SbString operator+(const SbString & str1, const SbString & str2);
  friend const SbString operator+(const SbString & sbstr, const char * s);
  friend const SbString operator+(const char * s, const SbString & sbstr);

private:
  struct cc_string str;
};

inline int operator==(const SbString & sbstr, const char * s)
{ return (cc_string_compare_text(sbstr.str.pointer, s) == 0); }
inline int operator==(const char * s, const SbString & sbstr)
{ return (cc_string_compare_text(s, sbstr.str.pointer) == 0); }
inline int operator==(const SbString & str1, const SbString & str2)
{ return (cc_string_compare_text(str1.str.pointer, str2.str.pointer) == 0); }

inline int operator!=(const SbString & sbstr, const char * s)
{ return (cc_string_compare_text(sbstr.str.pointer, s) != 0); }
inline int operator!=(const char * s, const SbString & sbstr)
{ return (cc_string_compare_text(s, sbstr.str.pointer) != 0); }
inline int operator!=(const SbString & str1, const SbString & str2)
{ return (cc_string_compare_text(str1.str.pointer, str2.str.pointer) != 0); }

inline int operator<(const SbString & sbstr, const char * s)
{ return (cc_string_compare_text(sbstr.str.pointer, s) < 0); }
inline int operator<(const char * s, const SbString & sbstr)
{ return (cc_string_compare_text(s, sbstr.str.pointer) < 0); }
inline int operator<(const SbString & str1, const SbString & str2)
{ return (cc_string_compare_text(str1.str.pointer, str2.str.pointer) < 0); }

inline int operator>(const SbString & sbstr, const char * s)
{ return (cc_string_compare_text(sbstr.str.pointer, s) > 0); }
inline int operator>(const char * s, const SbString & sbstr)
{ return (cc_string_compare_text(s, sbstr.str.pointer) > 0); }
inline int operator>(const SbString & str1, const SbString & str2)
{ return (cc_string_compare_text(str1.str.pointer, str2.str.pointer) > 0); }

inline const SbString operator+(const SbString & str1, const SbString & str2)
{
  SbString newstr(str1);
  newstr += str2;
  return newstr;
}
inline const SbString operator+(const SbString & sbstr, const char * s)
{
  SbString newstr(sbstr);
  newstr += s;
  return newstr;
}
inline const SbString operator+(const char * s, const SbString & sbstr)
{
  SbString newstr(s);
  newstr += sbstr;
  return newstr;
}
#line 38 "coin/include/Inventor/SbName.h"
class SbString;

class SbName {
public:
  SbName(void);
  SbName(const char * namestring);
  SbName(const SbString & str);
  SbName(const SbName & name);
  ~SbName();

  const char * getString(void) const;
  int getLength(void) const;

  int operator!(void) const;
  friend int operator==(const SbName & lhs, const char * rhs);
  friend int operator==(const char * lhs, const SbName & rhs);
  friend int operator==(const SbName & lhs, const SbName & rhs);
  friend int operator!=(const SbName & lhs, const char * rhs);
  friend int operator!=(const char * lhs, const SbName & rhs);
  friend int operator!=(const SbName & lhs, const SbName & rhs);

  operator const char * (void) const;
#line 66 "coin/include/Inventor/SbName.h"
  static SbBool isIdentStartChar(const char c);
  static SbBool isIdentChar(const char c);
  static SbBool isBaseNameStartChar(const char c);
  static SbBool isBaseNameChar(const char c);

  static const SbName & empty(void);

private:
  const char * permaaddress;
};

 int operator==(const SbName & lhs, const char * rhs);
 int operator==(const char * lhs, const SbName & rhs);
 int operator==(const SbName & lhs, const SbName & rhs);
 int operator!=(const SbName & lhs, const char * rhs);
 int operator!=(const char * lhs, const SbName & rhs);
 int operator!=(const SbName & lhs, const SbName & rhs);
#line 38 "coin/include/Inventor/sensors/SoSensorManager.h"
class SoDelayQueueSensor;
class SoTimerQueueSensor;
class SoTimerSensor;
class SbTime;

class SoSensorManager {
public:
  SoSensorManager(void);
  ~SoSensorManager();

  void insertDelaySensor(SoDelayQueueSensor * s);
  void insertTimerSensor(SoTimerQueueSensor * s);
  void removeDelaySensor(SoDelayQueueSensor * s);
  void removeTimerSensor(SoTimerQueueSensor * s);

  void setChangedCallback(void (*sensorQueueChangedCB)(void *), void * data);

  void rescheduleTimer(SoTimerSensor * s);
  void removeRescheduledTimer(SoTimerQueueSensor * s);

  void processDelayQueue(SbBool isidle);
  void processImmediateQueue(void);
  void processTimerQueue(void);

  SbBool isDelaySensorPending(void);
  SbBool isTimerSensorPending(SbTime & tm);

  void setDelaySensorTimeout(const SbTime & t);
  const SbTime & getDelaySensorTimeout(void);

  int doSelect(int nfds, void * readfds, void * writefds,
               void * exceptfds, struct timeval * userTimeOut);

private:
  void notifyChanged(void);

  int mergeTimerQueues(void);
  int mergeDelayQueues(void);

  class SoSensorManagerP * pimpl;
  friend class SoSensorManagerP;
};
#line 41 "coin/include/Inventor/SoDB.h"
class SbName;
class SbTime;
class SoBase;
class SoField;
class SoInput;
class SoNode;
class SoPath;
class SoSeparator;
class SoVRMLGroup;
class SoGroup;

typedef void SoDBHeaderCB(void * data, SoInput * input);


class SoDB {
public:
  static void init(void);
  static void finish(void);
  static void cleanup(void);

  static const char * getVersion(void);
  static SbBool read(SoInput * input, SoPath *& path);
  static SbBool read(SoInput * input, SoBase *& base);
  static SbBool read(SoInput * input, SoNode *& rootnode);
  static SoSeparator * readAll(SoInput * input);
  static SoVRMLGroup * readAllVRML(SoInput * input);
  static SbBool isValidHeader(const char * teststring);
  static SbBool registerHeader(const SbString & headerstring,
                               SbBool isbinary,
                               float ivversion,
                               SoDBHeaderCB * precallback,
                               SoDBHeaderCB * postcallback,
                               void * userdata = ((void *)0));
  static SbBool getHeaderData(const SbString & headerstring,
                              SbBool & isbinary,
                              float & ivversion,
                              SoDBHeaderCB *& precallback,
                              SoDBHeaderCB *& postcallback,
                              void *& userdata,
                              SbBool substringok = 0);
  static int getNumHeaders(void);
  static SbString getHeaderString(const int i);
  static SoField * createGlobalField(const SbName & name, SoType type);
  static SoField * getGlobalField(const SbName & name);
  static void renameGlobalField(const SbName & from, const SbName & to);

  static void setRealTimeInterval(const SbTime & interval);
  static const SbTime & getRealTimeInterval(void);
  static void enableRealTimeSensor(SbBool on);

  static SoSensorManager * getSensorManager(void);
  static void setDelaySensorTimeout(const SbTime & t);
  static const SbTime & getDelaySensorTimeout(void);
  static int doSelect(int nfds, void * readfds, void * writefds,
                      void * exceptfds, struct timeval * usertimeout);

  static void addConverter(SoType from, SoType to, SoType converter);
  static SoType getConverter(SoType from, SoType to);

  static SbBool isInitialized(void);

  static void startNotify(void);
  static SbBool isNotifying(void);
  static void endNotify(void);

  typedef SbBool ProgressCallbackType(const SbName & itemid, float fraction,
                                      SbBool interruptible, void * userdata);
  static void addProgressCallback(ProgressCallbackType * func, void * userdata);
  static void removeProgressCallback(ProgressCallbackType * func, void * userdata);

  static SbBool isMultiThread(void);
  static void readlock(void);
  static void readunlock(void);
  static void writelock(void);
  static void writeunlock(void);

  static void createRoute(SoNode * from, const char * eventout,
                          SoNode * to, const char * eventin);
  static void removeRoute(SoNode * from, const char * eventout,
                          SoNode * to, const char * eventin);

private:
  static SoGroup * readAllWrapper(SoInput * input, const SoType & grouptype);
};
#line 47 "coin/include/Inventor/SoInput.h"
class SbDict;
class SoBase;
class SbString;
class SbTime;
class SbName;
class SbStringList;
class SoInput_FileInfo;
class SoProto;
class SoField;
class SoFieldContainer;
class SoInputP;



class SoInput {
public:
  SoInput(void);
  SoInput(SoInput * dictIn);

  SoProto * findProto(const SbName & name);
  void addProto(SoProto * proto);
  void pushProto(SoProto * proto);
  SoProto * getCurrentProto(void) const;
  void popProto(void);

  void addRoute(const SbName & fromnode, const SbName & fromfield,
                const SbName & tonode, const SbName & tofield);
  SbBool checkISReference(SoFieldContainer * container, const SbName & fieldname,
                          SbBool & readok);

  virtual ~SoInput(void);

  virtual void setFilePointer(FILE * newFP);
  virtual SbBool openFile(const char * fileName, SbBool okIfNotFound = 0);
  virtual SbBool pushFile(const char * fileName);
  virtual void closeFile(void);
  virtual SbBool isValidFile(void);
  virtual SbBool isValidBuffer(void);
  virtual FILE * getCurFile(void) const;
  virtual const char * getCurFileName(void) const;
  virtual void setBuffer(const void * bufpointer, size_t bufsize);
          void setStringArray(const char * strings[]);
  virtual size_t getNumBytesRead(void) const;
  virtual SbString getHeader(void);
  virtual float getIVVersion(void);
  virtual SbBool isBinary(void);

  virtual SbBool get(char & c);
  virtual SbBool getASCIIBuffer(char & c);
  virtual SbBool getASCIIFile(char & c);
  virtual SbBool readHex(uint32_t & l);
  virtual SbBool read(char & c);
  virtual SbBool read(char & c, SbBool skip);
  virtual SbBool read(SbString & s);
  virtual SbBool read(SbName & n, SbBool validIdent = 0);
  virtual SbBool read(int & i);
  virtual SbBool read(unsigned int & i);
  virtual SbBool read(short & s);
  virtual SbBool read(unsigned short & s);
  virtual SbBool read(float & f);
  virtual SbBool read(double & d);
  virtual SbBool readByte(int8_t & b);
  virtual SbBool readByte(uint8_t & b);





  virtual SbBool readBinaryArray(unsigned char * c, int length);
  virtual SbBool readBinaryArray(int32_t * l, int length);
  virtual SbBool readBinaryArray(float * f, int length);
  virtual SbBool readBinaryArray(double * d, int length);
  virtual SbBool eof(void) const;

  SbBool isFileVRML1(void);
  SbBool isFileVRML2(void);
  virtual void resetFilePointer(FILE * fptr);

  virtual void getLocationString(SbString & string) const;
  virtual void putBack(const char c);
  virtual void putBack(const char * str);
  virtual void addReference(const SbName & name, SoBase * base,
                            SbBool addToGlobalDict = 1);
  virtual void removeReference(const SbName & name);
  virtual SoBase * findReference(const SbName & name) const;

  static void addDirectoryFirst(const char * dirName);
  static void addDirectoryLast(const char * dirName);
  static void addEnvDirectoriesFirst(const char * envVarName,
                                     const char * separator = ":\t ");
  static void addEnvDirectoriesLast(const char * envVarName,
                                    const char * separator = ":\t ");
  static void removeDirectory(const char * dirName);
  static void clearDirectories(void);
  static const SbStringList & getDirectories(void);

  static void init(void);

  static SbString getPathname(const char * const filename);
  static SbString getPathname(const SbString & s);
  static SbString getBasename(const char * const filename);
  static SbString getBasename(const SbString & s);

  static SbString searchForFile(const SbString & basename,
                                const SbStringList & directories,
                                const SbStringList & subdirectories);


protected:
  virtual SbBool popFile(void);
  void setIVVersion(float version);
  FILE * findFile(const char * fileName, SbString & fullName);
  void initFile(FILE * newFP, const char * fileName, SbString * fullName,
                SbBool openedHere, SbDict * refDict = ((void *)0));
  SbBool checkHeader(SbBool bValidateBufferHeader = 0);
  SbBool fromBuffer(void) const;
  SbBool skipWhiteSpace(void);
  size_t freeBytesInBuf(void) const;
  SbBool readInteger(int32_t & l);
  SbBool readUnsignedInteger(uint32_t & l);
  SbBool readReal(double & d);
  SbBool readUnsignedIntegerString(char * str);
  int readDigits(char * str);
  int readHexDigits(char * str);
  int readChar(char * str, char charToRead);

  SbBool makeRoomInBuf(size_t nBytes);
  void convertShort(char * from, short * s);
  void convertInt32(char * from, int32_t * l);
  void convertFloat(char * from, float * f);
  void convertDouble(char * from, double * d);
  void convertShortArray(char * from, short * to, int len);
  void convertInt32Array(char * from, int32_t * to, int len);
  void convertFloatArray(char * from, float * to, int len);
  void convertDoubleArray(char * from, double * to, int len);
  SbBool isFileURL(const char * url);
  char * URLToFile(char * out_buf, const char * in_buf);
  SbBool IsURL(const char * c_strng);

  static void setDirectories(SbStringList * dirs);

private:
  friend class SoDB;
  friend class SoInputP;

  static void clean(void);
  void constructorsCommon(void);

  static void addDirectoryIdx(const int idx, const char * dirName);
  static void addEnvDirectoriesIdx(int startidx, const char * envVarName,
                                   const char * separator);
  static SbStringList * dirsearchlist;

  SbList<SoInput_FileInfo *> filestack;
  SoInput_FileInfo * getTopOfStack(void) const {
    return this->filestack[0];
  }

  SoInputP * pimpl;
};

class SbDict;
class SbName;
class SoBase;
class SoOutputP;
class SoProto;
class SoField;
class SoFieldContainer;

typedef void * SoOutputReallocCB(void * ptr, size_t newSize);

class SoOutput {
public:
  enum Stage { COUNT_REFS, WRITE };

  enum Annotations { ADDRESSES = 0x01, REF_COUNTS = 0x02 };

  SoOutput(void);
  SoOutput(SoOutput * dictOut);
  virtual ~SoOutput();

  virtual void setFilePointer(FILE * newFP);
  virtual FILE * getFilePointer(void) const;
  virtual SbBool openFile(const char * const fileName);
  virtual void closeFile(void);

  SbBool setCompression(const SbName & compmethod,
                        const float level = 0.5f);
  static const SbName * getAvailableCompressionMethods(unsigned int & num);

  virtual void setBuffer(void * bufPointer, size_t initSize,
                         SoOutputReallocCB * reallocFunc, int32_t offset = 0);
  virtual SbBool getBuffer(void * & bufPointer, size_t & nBytes) const;
  virtual size_t getBufferSize(void) const;
  virtual void resetBuffer(void);
  virtual void setBinary(const SbBool flag);
  virtual SbBool isBinary(void) const;
  virtual void setHeaderString(const SbString & str);
  virtual void resetHeaderString(void);
  virtual void setFloatPrecision(const int precision);

  void setStage(Stage stage);
  Stage getStage(void) const;

  void incrementIndent(const int levels = 1);
  void decrementIndent(const int levels = 1);

  virtual void write(const char c);
  virtual void write(const char * s);
  virtual void write(const SbString & s);
  virtual void write(const SbName & n);
  virtual void write(const int i);
  virtual void write(const unsigned int i);
  virtual void write(const short s);
  virtual void write(const unsigned short s);
  virtual void write(const float f);
  virtual void write(const double d);





  virtual void writeBinaryArray(const unsigned char * c, const int length);
  virtual void writeBinaryArray(const int32_t * const l, const int length);
  virtual void writeBinaryArray(const float * const f, const int length);
  virtual void writeBinaryArray(const double * const d, const int length);

  virtual void indent(void);
  virtual void reset(void);
  void setCompact(SbBool flag);
  SbBool isCompact(void) const;
  void setAnnotation(uint32_t bits);
  uint32_t getAnnotation(void);

  static SbString getDefaultASCIIHeader(void);
  static SbString getDefaultBinaryHeader(void);

  int addReference(const SoBase * base);
  int findReference(const SoBase * base) const;
  void setReference(const SoBase * base, int refid);

  void addDEFNode(SbName name);
  SbBool lookupDEFNode(SbName name);
  void removeDEFNode(SbName name);

  void pushProto(SoProto * proto);
  SoProto * getCurrentProto(void) const;
  void popProto(void);

  void addRoute(SoFieldContainer * from, const SbName & fromfield,
                SoFieldContainer * to, const SbName & tofield);
  void resolveRoutes(void);

protected:
  SbBool isToBuffer(void) const;
  size_t bytesInBuf(void) const;
  SbBool makeRoomInBuf(size_t nBytes);
  void convertShort(short s, char * to);
  void convertInt32(int32_t l, char * to);
  void convertFloat(float f, char * to);
  void convertDouble(double d, char * to);
  void convertShortArray(short * from, char * to, int len);
  void convertInt32Array(int32_t * from, char * to, int len);
  void convertFloatArray(float * from, char * to, int len);
  void convertDoubleArray(double * from, char * to, int len);

  static SbString padHeader(const SbString & inString);

  SbBool wroteHeader;

private:
  SoOutputP * pimpl;

  void constructorCommon(void);

  void checkHeader(void);
  void writeBytesWithPadding(const char * const p, const size_t nr);

  friend class SoBase;
  friend class SoWriterefCounter;
  void removeSoBase2IdRef(const SoBase * base);
};
#line 46 "coin/include/Inventor/SoPath.h"
class SoWriteAction;
class SoNotList;
class SoInput;
class SoPathList;


class SoPath : public SoBase {
  typedef SoBase inherited;

public:
  static void initClass(void);

  SoPath(const int approxlength = 4);
  SoPath(SoNode * const head);
  SoPath(const SoPath & rhs);

  SoPath & operator=(const SoPath & rhs);

  static SoType getClassTypeId(void);
  virtual SoType getTypeId(void) const;

  void setHead(SoNode * const head);
  SoNode * getHead(void) const;
  void append(const int childindex);
  void append(SoNode * const node);
  void append(const SoPath * const frompath);
  void push(const int childindex);
  void pop(void);
  SoNode * getTail(void) const;
  SoNode * getNode(const int index) const;
  SoNode * getNodeFromTail(const int index) const;
  int getIndex(const int index) const;
  int getIndexFromTail(const int index) const;
  int getLength(void) const;
  void truncate(const int length);

  int findFork(const SoPath * const path) const;
  int findNode(const SoNode * const node) const;

  SbBool containsNode(const SoNode * const node) const;
  SbBool containsPath(const SoPath * const path) const;
  SoPath * copy(const int startfromnodeindex = 0, int numnodes = 0) const;
  friend SbBool operator==(const SoPath & lhs, const SoPath & rhs);
  friend SbBool operator!=(const SoPath & lhs, const SoPath & rhs);

  static SoPath * getByName(const SbName name);
  static int getByName(const SbName name, SoPathList & l);

  void insertIndex(SoNode * const parent, const int newindex);
  void removeIndex(SoNode * const parent, const int oldindex);
  void replaceIndex(SoNode * const parent, const int index,
                    SoNode * const newchild);
  SbBool isRelevantNotification(SoNotList * const l) const;

  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoPath();
  void auditPath(const SbBool flag);

private:
  static void cleanupClass(void);
  static void * createInstance(void);
  void append(SoNode * const node, const int index);
  int getFullLength(void) const;
  void truncate(const int length, const SbBool donotify);
  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  void setFirstHidden(void);

  SoNodeList nodes;
  SbList<int> indices;
  SbBool isauditing;
  int firsthidden;
  SbBool firsthiddendirty;
  static SoType classTypeId;

  friend class SoFullPath;
  friend class SoNodeKitPath;
  friend class SoAction;
  friend class SoTempPath;
};



inline int
SoPath::getFullLength(void) const
{
  return this->nodes.getLength();
}

inline void
SoPath::push(const int childindex)
{
  this->append(childindex);
}

inline void
SoPath::pop(void)
{
  this->truncate(this->getFullLength() - 1);
}
#line 39 "coin/include/Inventor/misc/SoLightPath.h"
class SoNode;
class SoTempPath;

class SoLightPath {
public:
  SoLightPath(SoNode *node, const int approxlength);
  SoLightPath(const int approxlength);
  ~SoLightPath();

  void setHead(SoNode * const node);
  void append(const int childindex);
  void push(const int childindex);
  void pop(void);
  void setTail(const int childindex);
  SoNode *getTail(void) const;
  SoNode *getHead(void) const;
  SoNode *getNode(const int index) const;
  int getIndex(const int index) const;
  int getFullLength() const;
  void truncate(const int startindex);

  void makeTempPath(SoTempPath *path) const;
private:
  SoNode *headnode;
  SbList <int> indices;
};
#line 38 "coin/include/Inventor/SoFullPath.h"
class SoFullPath : public SoPath {
  typedef SoPath inherited;
  friend class SoTempPath;

private:
  SoFullPath(const int approxLength);
  virtual ~SoFullPath(void);

public:
  void pop(void);
  SoNode * getTail(void) const;
  SoNode * getNodeFromTail(const int index) const;
  int getIndexFromTail(const int index) const;
  int getLength(void) const;
};



inline void
SoFullPath::pop(void)
{
  this->truncate(this->nodes.getLength() - 1);
}
#line 38 "coin/include/Inventor/misc/SoTempPath.h"
class SoTempPath : public SoFullPath {
public:
  SoTempPath(const int approxlength);


  void simpleAppend(SoNode * const node, const int index);
  void replaceTail(SoNode * const node, const int index);
};
#line 54 "coin/include/Inventor/tools/SbPimplPtr.h"
template <class T>
class SbPimplPtr {
public:
  SbPimplPtr(void);
  SbPimplPtr(T * initial);
  SbPimplPtr(const SbPimplPtr<T> & copy);
  ~SbPimplPtr(void);

  void set(T * value);
  T & get(void) const;

  SbPimplPtr<T> & operator = (const SbPimplPtr<T> & copy);

  SbBool operator == (const SbPimplPtr<T> & rhs) const;
  SbBool operator != (const SbPimplPtr<T> & rhs) const;

  const T * operator -> (void) const;
  T * operator -> (void);

protected:
  T * getNew(void) const;

protected:
  T * ptr;

};
#line 39 "coin/include/Inventor/lists/SoActionMethodList.h"
class SoAction;
class SoNode;

typedef void (* SoActionMethod)(SoAction *, SoNode *);

class SoActionMethodList : public SbPList {
  typedef SbPList inherited;

public:
  SoActionMethodList(SoActionMethodList * const parentlist);
  ~SoActionMethodList();

  SoActionMethod & operator[](const int index);

  void addMethod(const SoType node, const SoActionMethod method);
  void setUp(void);

private:
  class SoActionMethodListP * pimpl;
};
#line 70 "coin/include/Inventor/actions/SoAction.h"
class SoEnabledElementsList;
class SoNode;
class SoPath;
class SoPathList;
class SoState;
class SoActionP;

class SoAction {
public:
  static void initClass(void);
  static void initClasses(void);

  enum AppliedCode { NODE = 0, PATH = 1, PATH_LIST = 2 };
  enum PathCode { NO_PATH = 0, IN_PATH = 1, BELOW_PATH = 2, OFF_PATH = 3 };

  virtual ~SoAction(void);

  static SoType getClassTypeId(void);
  virtual SoType getTypeId(void) const = 0;
  virtual SbBool isOfType(SoType type) const;

  virtual void apply(SoNode * root);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);
  void apply(SoAction * beingApplied);
  virtual void invalidateState(void);

  static void nullAction(SoAction * action, SoNode * node);

  AppliedCode getWhatAppliedTo(void) const;
  SoNode * getNodeAppliedTo(void) const;
  SoPath * getPathAppliedTo(void) const;
  const SoPathList * getPathListAppliedTo(void) const;
  const SoPathList * getOriginalPathListAppliedTo(void) const;

  SbBool isLastPathListAppliedTo(void) const;

  PathCode getPathCode(int & numindices, const int * & indices);

  void traverse(SoNode * const node);
  SbBool hasTerminated(void) const;

  const SoPath * getCurPath(void);
  SoState * getState(void) const;

  PathCode getCurPathCode(void) const;
  virtual SoNode * getCurPathTail(void);
  void usePathCode(int & numindices, const int * & indices);

  void pushCurPath(const int childindex, SoNode * node = ((void *)0));
  void popCurPath(const PathCode prevpathcode);
  void pushCurPath(void);

  void popPushCurPath(const int childindex, SoNode * node = ((void *)0));
  void popCurPath(void);

public:
  void switchToPathTraversal(SoPath * path);
  void switchToNodeTraversal(SoNode * node);

protected:
  SoAction(void);

  virtual void beginTraversal(SoNode * node);
  virtual void endTraversal(SoNode * node);
  void setTerminated(const SbBool flag);

  virtual const SoEnabledElementsList & getEnabledElements(void) const;
  virtual SbBool shouldCompactPathList(void) const;

  SoState * state;
  SoActionMethodList * traversalMethods;




  static SoEnabledElementsList * getClassEnabledElements(void);
  static SoActionMethodList * getClassActionMethods(void);

private:
  static SoType classTypeId;




  static void atexit_cleanup(void);
  static SoEnabledElementsList * enabledElements;
  static SoActionMethodList * methods;
  SoTempPath currentpath;
  PathCode currentpathcode;

private:
  SbPimplPtr<SoActionP> pimpl;


  SoAction(const SoAction & rhs);
  SoAction & operator = (const SoAction & rhs);
};



inline SoAction::PathCode
SoAction::getCurPathCode(void) const
{
  return this->currentpathcode;
}
#line 45 "coin/include/Inventor/C/tidbits.h"
enum CoinEndiannessValues {
  COIN_HOST_IS_UNKNOWNENDIAN = -1,
  COIN_HOST_IS_LITTLEENDIAN = 0,
  COIN_HOST_IS_BIGENDIAN = 1
};

 int coin_host_get_endianness(void);

 int coin_snprintf(char * dst, unsigned int n, const char * fmtstr, ...);
 int coin_vsnprintf(char * dst, unsigned int n, const char * fmtstr, va_list args);

 const char * coin_getenv(const char * name);
 SbBool coin_setenv(const char * name, const char * value, int overwrite);
 void coin_unsetenv(const char * name);

 int coin_strncasecmp(const char * str1, const char * str2, int len);

 uint16_t coin_hton_uint16(uint16_t value);
 uint16_t coin_ntoh_uint16(uint16_t value);
 uint32_t coin_hton_uint32(uint32_t value);
 uint32_t coin_ntoh_uint32(uint32_t value);
 uint64_t coin_hton_uint64(uint64_t value);
 uint64_t coin_ntoh_uint64(uint64_t value);

 void coin_hton_float_bytes(float value, char * result);
 float coin_ntoh_float_bytes(const char * value);

 void coin_hton_double_bytes(double value, char * result);
 double coin_ntoh_double_bytes(const char * value);

 SbBool coin_isascii(const int c);
 SbBool coin_isspace(const char c);

 SbBool coin_is_power_of_two(uint32_t x);
 uint32_t coin_next_power_of_two(uint32_t x);
 uint32_t coin_geq_power_of_two(uint32_t x);

 void coin_viewvolume_jitter(int numpasses, int curpass, const int * vpsize, float * jitter);

typedef void coin_atexit_f(void);
 void cc_coin_atexit(coin_atexit_f * fp);


 void cc_coin_atexit_static_internal(coin_atexit_f * fp);

class SoAction;
class SoTypeList;
class SoElement;

class SoState {
public:
  SoState(SoAction * action,
          const SoTypeList & enabledelements);
  ~SoState(void);

  SoAction * getAction(void) const;

  SoElement * getElement(const int stackindex);
  const SoElement * getConstElement(const int stackindex) const;

  void push(void);
  void pop(void);

  void print(FILE * const file = stdout) const;

  SbBool isElementEnabled(const int stackindex) const;

  int getDepth(void) const;

  void setCacheOpen(const SbBool flag);
  SbBool isCacheOpen(void) const;

  SoElement * getElementNoPush(const int stackindex) const;

private:
  SoElement ** stack;
  int numstacks;
  SbBool cacheopen;
  class SoStateP * pimpl;
};



inline SbBool
SoState::isElementEnabled(const int stackindex) const
{
  return (stackindex < this->numstacks) && (this->stack[stackindex] != ((void *)0));
}

inline const SoElement *
SoState::getConstElement(const int stackindex) const
{
  assert(this->isElementEnabled(stackindex));
  return this->stack[stackindex];
}

inline SbBool
SoState::isCacheOpen(void) const
{
  return this->cacheopen;
}

inline SoElement *
SoState::getElementNoPush(const int stackindex) const
{
  assert(this->isElementEnabled(stackindex));
  return this->stack[stackindex];
}

class SoNode;

class SoElement {
public:
  static void initClass(void);

  static SoType getClassTypeId(void);
  static int getClassStackIndex(void);
  const SoType getTypeId(void) const;
  int getStackIndex(void) const;

  virtual void init(SoState * state);

  virtual void push(SoState * state);
  virtual void pop(SoState * state, const SoElement * prevTopElement);

  virtual SbBool matches(const SoElement * element) const = 0;
  virtual SoElement * copyMatchInfo(void) const = 0;

  static void initElements(void);

  static int getNumStackIndices(void);
  static SoType getIdFromStackIndex(const int stackIndex);

  void setDepth(const int depth);

  int getDepth(void) const;

  virtual void print(FILE * file = stdout) const;
  virtual ~SoElement();

protected:
  SoElement(void);
  static int classStackIndex;

  static SoElement * getElement(SoState * const state, const int stackIndex);
  static const SoElement * getConstElement(SoState * const state, const int stackIndex);

  void capture(SoState * const state) const;

  virtual void captureThis(SoState * state) const;

  void setTypeId(const SoType typeId);
  void setStackIndex(const int index);

  SoType typeId;
  int stackIndex;

  static int createStackIndex(const SoType id);
  static SoTypeList * stackToType;

  int depth;

  SoElement * getNextInStack(void) const;
  SoElement * getNextFree(void) const;

private:

  static SoType classTypeId;

  friend class SoState;
  static void cleanup(void);
  SoElement * nextup;
  SoElement * nextdown;
};



inline SoElement *
SoElement::getElement(SoState * const state,
                      const int stackIndex)
{
  return state->getElement(stackIndex);
}

inline void
SoElement::capture(SoState * const state) const
{
  if (state->isCacheOpen()) this->captureThis(state);
}

inline const SoElement *
SoElement::getConstElement(SoState * const state,
                           const int stackIndex)
{
  const SoElement * element = state->getConstElement(stackIndex);
  element->capture(state);
  return element;
}
#line 39 "coin/include/Inventor/elements/SoInt32Element.h"
class SoInt32Element : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoInt32Element(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoInt32Element::classTypeId.getName()); SoInt32Element::classTypeId = SoType::badType(); };
public:
  static void initClass(void);
protected:
  virtual ~SoInt32Element();

public:
  virtual void init(SoState * state);

  virtual SbBool matches(const SoElement * element) const;
  virtual SoElement * copyMatchInfo(void) const;

  virtual void print(FILE * file) const;

  static  void set(const int index, SoState * const state,
                    SoNode * const node, const int32_t value);
  static  void set(const int index, SoState * const state,
                    const int32_t value);
  static  int32_t get(const int index, SoState * const state);
  virtual void setElt(int32_t value);

protected:
  int32_t data;

};
#line 38 "coin/include/Inventor/elements/SoDecimationTypeElement.h"
class SoDecimationTypeElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoDecimationTypeElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoDecimationTypeElement::classTypeId.getName()); SoDecimationTypeElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoDecimationTypeElement();

public:
  enum Type { AUTOMATIC, HIGHEST, LOWEST, PERCENTAGE };

  virtual void init(SoState * state);

  static  void set(SoState * const state, const Type type);
  static  void set(SoState * const state, SoNode * const node, const Type type);

  static Type get(SoState * const state);
  static Type getDefault(void);

};
class SbName;
class SoField;
class SoFieldContainer;
class SoInput;
class SoOutput;

class SoEnumEntry;
class SoFieldEntry;

class SoFieldData {
public:
  SoFieldData(void);
  SoFieldData(const SoFieldData & fd);
  SoFieldData(const SoFieldData * fd);
  SoFieldData(int numfields);
  ~SoFieldData();

  void addField(SoFieldContainer * base, const char * name,
                const SoField * field);

  void overlay(SoFieldContainer * to, const SoFieldContainer * from,
               SbBool copyconnections) const;

  int getNumFields(void) const;
  const SbName & getFieldName(int index) const;
  SoField * getField(const SoFieldContainer * object, int index) const;
  int getIndex(const SoFieldContainer * fc, const SoField * field) const;

  void addEnumValue(const char * enumname, const char * valuename, int value);
  void getEnumData(const char * enumname,
                   int & num, const int *& values, const SbName *& names);

  SbBool read(SoInput * input, SoFieldContainer * object,
              SbBool erroronunknownfield, SbBool & notbuiltin) const;
  SbBool read(SoInput * input, SoFieldContainer * object,
              const SbName & fieldname, SbBool & foundname) const;
  void write(SoOutput * out, const SoFieldContainer * object) const;
  void copy(const SoFieldData * src);
  SbBool isSame(const SoFieldContainer * c1,
                const SoFieldContainer * c2) const;

  SbBool readFieldDescriptions(SoInput * input, SoFieldContainer * object,
                               int numdescriptionsexpected,
                               const SbBool readfieldvalues = 1) const;
  void writeFieldDescriptions(SoOutput * out,
                              const SoFieldContainer * object) const;

private:
  SbBool hasField(const char * name) const;
  SbBool hasEnumValue(const char * enumname, const char * valuename);


  enum ControlWord {
    NOTBUILTIN = 0x40
  };

  int operator==(const SoFieldData * fd) const;
  int operator!=(const SoFieldData * fd) const { return ! operator==(fd); }
  int operator==(const SoFieldData & fd) const { return operator==(&fd); }
  int operator!=(const SoFieldData & fd) const { return ! operator==(&fd); }

  void freeResources(void);

  SbList<SoFieldEntry *> fields;
  SbList<SoEnumEntry *> enums;
};
#line 39 "coin/include/Inventor/fields/SoField.h"
class SbString;
class SoEngineOutput;
class SoFieldContainer;
class SoFieldConverter;
class SoFieldList;
class SoInput;
class SoOutput;

class SoField {

public:
  virtual ~SoField();

  static void initClass(void);
  static void initClasses(void);
  static void cleanupClass(void);

  void setIgnored(SbBool ignore);
  SbBool isIgnored(void) const;

  void setDefault(SbBool defaultVal);
  SbBool isDefault(void) const;

  virtual SoType getTypeId(void) const = 0;

  static SoType getClassTypeId(void);
  SbBool isOfType(const SoType type) const;

  void enableConnection(SbBool flag);
  SbBool isConnectionEnabled(void) const;


  SbBool connectFrom(SoEngineOutput * master,
                     SbBool notnotify = 0, SbBool append = 0);
  SbBool appendConnection(SoEngineOutput * master, SbBool notnotify = 0);
  void disconnect(SoEngineOutput * engineoutput);
  SbBool isConnectedFromEngine(void) const;
  SbBool getConnectedEngine(SoEngineOutput *& master) const;


  SbBool connectFrom(SoField * master,
                     SbBool notnotify = 0, SbBool append = 0);
  SbBool appendConnection(SoField * master, SbBool notnotify = 0);
  void disconnect(SoField * field);
  SbBool isConnectedFromField(void) const;
  SbBool getConnectedField(SoField *& master) const;
  int getNumConnections(void) const;
  int getForwardConnections(SoFieldList & slavelist) const;
  int getConnections(SoFieldList & masterlist) const;

  void disconnect(void);
  SbBool isConnected(void) const;

  void setContainer(SoFieldContainer * cont);
  SoFieldContainer * getContainer(void) const;

  SbBool set(const char * valuestring);
  void get(SbString & valuestring);

  SbBool shouldWrite(void) const;

  virtual void touch(void);
  virtual void startNotify(void);
  virtual void notify(SoNotList * nlist);
  SbBool enableNotify(SbBool on);
  SbBool isNotifyEnabled(void) const;

  void addAuditor(void * f, SoNotRec::Type type);
  void removeAuditor(void * f, SoNotRec::Type type);

  int operator ==(const SoField & f) const;
  int operator !=(const SoField & f) const;

  virtual void connectionStatusChanged(int numconnections);
  SbBool isReadOnly(void) const;
  virtual SbBool isSame(const SoField & f) const = 0;
  virtual void copyFrom(const SoField & f) = 0;

  virtual void fixCopy(SbBool copyconnections);
  virtual SbBool referencesCopy(void) const;
  void copyConnection(const SoField * fromfield);

  virtual SbBool read(SoInput * input, const SbName & name);
  virtual void write(SoOutput * out, const SbName & name) const;

  virtual void countWriteRefs(SoOutput * out) const;


  enum FieldType {
    NORMAL_FIELD = 0,
    EVENTIN_FIELD,
    EVENTOUT_FIELD,
    EXPOSED_FIELD
  };

  void setFieldType(int type);
  int getFieldType(void) const;

  SbBool getDirty(void) const;
  void setDirty(SbBool dirty);

  void evaluate(void) const {
    if ((this->statusbits & (FLAG_EXTSTORAGE|FLAG_NEEDEVALUATION)) ==
        (FLAG_EXTSTORAGE|FLAG_NEEDEVALUATION)) this->evaluateField();
  }

protected:
  SoField(void);

  void valueChanged(SbBool resetdefault = 1);
  virtual void evaluateConnection(void) const;
  virtual SbBool readValue(SoInput * in) = 0;
  virtual void writeValue(SoOutput * out) const = 0;
  virtual SbBool readConnection(SoInput * in);
  virtual void writeConnection(SoOutput * out) const;

  SbBool isDestructing(void) const;

  virtual SoNotRec createNotRec(SoBase * cont);

private:

  enum FieldFlags {
    FLAG_TYPEMASK = 0x0007,
    FLAG_ISDEFAULT = 0x0008,
    FLAG_IGNORE = 0x0010,
    FLAG_EXTSTORAGE = 0x0020,
    FLAG_ENABLECONNECTS = 0x0040,
    FLAG_NEEDEVALUATION = 0x0080,
    FLAG_READONLY = 0x0100,
    FLAG_DONOTIFY = 0x0200,
    FLAG_ISDESTRUCTING = 0x0400,
    FLAG_ISEVALUATING = 0x0800,
    FLAG_ISNOTIFIED = 0x1000
  };

  void evaluateField(void) const;
  void extendStorageIfNecessary(void);
  SoFieldConverter * createConverter(SoType from) const;
  SoFieldContainer * resolveWriteConnection(SbName & mastername) const;

  void notifyAuditors(SoNotList * l);

  static SoType classTypeId;


  enum FileFormatFlags {
    IGNORED = 0x01,
    CONNECTED = 0x02,
    DEFAULT = 0x04,
    ALLFILEFLAGS = IGNORED|CONNECTED|DEFAULT
  };

  SbBool changeStatusBits(const unsigned int bits, const SbBool onoff);
  void clearStatusBits(const unsigned int bits);
  void setStatusBits(const unsigned int bits);
  SbBool getStatus(const unsigned int bits) const;
  unsigned int statusbits;
  union {
    SoFieldContainer * container;
    class SoConnectStorage * storage;
  };

  SbBool hasExtendedStorage(void) const;
};
#line 38 "coin/include/Inventor/fields/SoMField.h"
class SoInput;
class SoOutput;

class SoMField : public SoField {
  typedef SoField inherited;

public:
  virtual ~SoMField();

  static SoType getClassTypeId(void);
  static void atexit_cleanup(void);

  int getNum(void) const;
  void setNum(const int num);

  virtual void deleteValues(int start, int num = -1);
  virtual void insertSpace(int start, int num);

  SbBool set1(const int index, const char * const valuestring);
  void get1(const int index, SbString & valuestring);

  static void initClass(void);

  virtual void enableDeleteValues(void);
  virtual SbBool isDeleteValuesEnabled(void) const;

protected:
  SoMField(void);
  virtual void makeRoom(int newnum);


  virtual int fieldSizeof(void) const = 0;
  virtual void * valuesPtr(void) = 0;
  virtual void setValuesPtr(void * ptr) = 0;
  virtual void allocValues(int num);


  virtual SoNotRec createNotRec(SoBase * container);

  void setChangedIndex(const int chgidx);
  void setChangedIndices(const int chgidx = -1, const int numchgind = 0);

  int num;
  int maxNum;
  SbBool userDataIsUsed;

private:
  virtual void deleteAllValues(void) = 0;
  virtual void copyValue(int to, int from) = 0;
  virtual SbBool readValue(SoInput * in);
  virtual SbBool read1Value(SoInput * in, int idx) = 0;
  virtual void writeValue(SoOutput * out) const;
  virtual void write1Value(SoOutput * out, int idx) const = 0;
  virtual SbBool readBinaryValues(SoInput * in, int num);
  virtual void writeBinaryValues(SoOutput * out) const;
  virtual int getNumValuesPerLine(void) const;

  static SoType classTypeId;
  int changedIndex, numChangedIndices;
};



inline int
SoMField::getNum(void) const
{
  this->evaluate();
  return this->num;
}
#line 38 "coin/include/Inventor/fields/SoSField.h"
class SoSField : public SoField {
  typedef SoField inherited;

public:
  virtual ~SoSField();

  static void initClass(void);
  static SoType getClassTypeId(void);
  static void atexit_cleanup(void);
protected:
  SoSField(void);

private:
  static SoType classTypeId;
};
class SoSFEnum : public SoSField {
  typedef SoSField inherited;

  public:   SoSFEnum(void);   virtual ~SoSFEnum();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFEnum::classTypeId.getName()); SoSFEnum::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFEnum & operator=(const SoSFEnum & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   int value;  public:   int getValue(void) const { this->evaluate(); return this->value; }   void setValue(int newvalue);   int operator=(int newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFEnum & field) const;   int operator!=(const SoSFEnum & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(const SbName name);
  void setEnums(const int num, const int * vals, const SbName * names);

  int getNumEnums(void) const;
  int getEnum(const int idx, SbName & name) const;

protected:
  virtual SbBool findEnumValue(const SbName & name, int & val);
  virtual SbBool findEnumName(int value, const SbName * & name) const;

  int numEnums;
  int * enumValues;
  SbName * enumNames;
  SbBool legalValuesSet;
};
#line 39 "coin/include/Inventor/fields/SoSFFloat.h"
class SoSFFloat : public SoSField {
  typedef SoSField inherited;

  public:   SoSFFloat(void);   virtual ~SoSFFloat();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFFloat::classTypeId.getName()); SoSFFloat::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFFloat & operator=(const SoSFFloat & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   float value;  public:   float getValue(void) const { this->evaluate(); return this->value; }   void setValue(float newvalue);   float operator=(float newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFFloat & field) const;   int operator!=(const SoSFFloat & field) const { return ! operator==(field); };

public:
  static void initClass(void);

};
#line 38 "coin/include/Inventor/elements/SoComplexityTypeElement.h"
class SoComplexityTypeElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoComplexityTypeElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoComplexityTypeElement::classTypeId.getName()); SoComplexityTypeElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoComplexityTypeElement();

public:

  enum Type {
    OBJECT_SPACE,
    SCREEN_SPACE,
    BOUNDING_BOX
  };

  virtual void init(SoState * state);

  static  void set(SoState * const state, SoNode * const node,
                   const Type type);
  static  void set(SoState * const state, const Type type);
  static  Type get(SoState * const state);
  static  Type getDefault();

};
#line 41 "coin/include/Inventor/nodes/SoComplexity.h"
class SoComplexity : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoComplexity(void);

  enum Type {
    OBJECT_SPACE = SoComplexityTypeElement::OBJECT_SPACE,
    SCREEN_SPACE = SoComplexityTypeElement::SCREEN_SPACE,
    BOUNDING_BOX = SoComplexityTypeElement::BOUNDING_BOX
  };

  SoSFEnum type;
  SoSFFloat value;
  SoSFFloat textureQuality;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoComplexity();
};
#line 38 "coin/include/Inventor/elements/SoDrawStyleElement.h"
class SoDrawStyleElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoDrawStyleElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoDrawStyleElement::classTypeId.getName()); SoDrawStyleElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoDrawStyleElement();

public:

  enum Style {
    FILLED,
    LINES,
    POINTS,
    INVISIBLE
  };

  virtual void init(SoState * state);
  static void set(SoState * const state, SoNode * const node,
                  const Style style);
  static void set(SoState * const state, const Style style);
  static Style get(SoState * const state);
  static Style getDefault();

};
#line 39 "coin/include/Inventor/fields/SoSFUShort.h"
class SoSFUShort : public SoSField {
  typedef SoSField inherited;

  public:   SoSFUShort(void);   virtual ~SoSFUShort();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFUShort::classTypeId.getName()); SoSFUShort::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFUShort & operator=(const SoSFUShort & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   unsigned short value;  public:   unsigned short getValue(void) const { this->evaluate(); return this->value; }   void setValue(unsigned short newvalue);   unsigned short operator=(unsigned short newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFUShort & field) const;   int operator!=(const SoSFUShort & field) const { return ! operator==(field); };

public:
  static void initClass(void);
};
#line 39 "coin/include/Inventor/fields/SoSFInt32.h"
class SoSFInt32 : public SoSField {
  typedef SoSField inherited;

  public:   SoSFInt32(void);   virtual ~SoSFInt32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFInt32::classTypeId.getName()); SoSFInt32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFInt32 & operator=(const SoSFInt32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   int32_t value;  public:   int32_t getValue(void) const { this->evaluate(); return this->value; }   void setValue(int32_t newvalue);   int32_t operator=(int32_t newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFInt32 & field) const;   int operator!=(const SoSFInt32 & field) const { return ! operator==(field); };

public:
  static void initClass(void);
};
#line 43 "coin/include/Inventor/nodes/SoDrawStyle.h"
class SoDrawStyle : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoDrawStyle(void);

  enum Style {
    FILLED = SoDrawStyleElement::FILLED,
    LINES = SoDrawStyleElement::LINES,
    POINTS = SoDrawStyleElement::POINTS,
    INVISIBLE = SoDrawStyleElement::INVISIBLE
  };

  SoSFEnum style;
  SoSFFloat pointSize;
  SoSFFloat lineWidth;
  SoSFUShort linePattern;
  SoSFInt32 linePatternScaleFactor;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoDrawStyle();
};
class SoBase;
class SoNode;
class SoPath;
class SoEngine;

typedef void SoErrorCB(const class SoError * error, void * data);
typedef SoErrorCB * SoErrorCBPtr;


class SoError {
public:
  SoError(void) { cc_error_init(&this->err); }
  virtual ~SoError() { cc_error_clean(&this->err); }

  static void setHandlerCallback(SoErrorCB * const func, void * const data);
  static SoErrorCB * getHandlerCallback(void);
  static void * getHandlerData(void);

  const SbString & getDebugString(void) const;

  static SoType getClassTypeId(void);
  virtual SoType getTypeId(void) const;
  SbBool isOfType(const SoType type) const;

  static void post(const char * const format, ...);

  static SbString getString(const SoNode * const node);
  static SbString getString(const SoPath * const path);
  static SbString getString(const SoEngine * const engine);

  static void initClass(void);
  static void initClasses(void);

protected:
  static void defaultHandlerCB(const SoError * error, void * userdata);
  virtual SoErrorCBPtr getHandler(void * & data) const;

  void setDebugString(const char * const str);
  void appendToDebugString(const char * const str);

  void handleError(void);

private:
  SoError(const cc_error * error);
  static void generateBaseString(SbString & str, const SoBase * const base,
                                 const char * const what);

  static void callbackForwarder(const cc_error * err, void * data);

  static SoType classTypeId;
  static SoErrorCB * callback;
  static void * callbackData;
  SbString debugstring;

  cc_error err;
};
#line 47 "coin/include/Inventor/errors/SoDebugError.h"
class SoDebugError : public SoError {
  typedef SoError inherited;

public:
  enum Severity { ERROR, WARNING, INFO };

  static void setHandlerCallback(SoErrorCB * const function,
                                 void * const data);
  static SoErrorCB * getHandlerCallback(void);
  static void * getHandlerData(void);

  static SoType getClassTypeId(void);
  virtual SoType getTypeId(void) const;

  SoDebugError::Severity getSeverity(void) const;

  static void post(const char * const source, const char * const format, ...);
  static void postWarning(const char * const source, const char * const format, ...);
  static void postInfo(const char * const source, const char * const format, ...);

  static void initClass(void);

protected:
  virtual SoErrorCBPtr getHandler(void * & data) const;

private:
  static void callbackForwarder(const struct cc_debugerror * error, void * data);
  static void commonPostHandling(Severity severity, const char * type,
                                 const char * source, const SbString & s);

  static SoType classTypeId;
  static SoErrorCB * callback;
  static void * callbackData;
  Severity severity;
};
#line 44 "coin/include/Inventor/SbVec3f.h"
class SbPlane;
class SbVec3d;
class SbVec3b;
class SbVec3s;
class SbVec3i32;

class SbVec3f {
public:
  SbVec3f(void) { }
  SbVec3f(const float v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; }
  SbVec3f(float x, float y, float z) { vec[0] = x; vec[1] = y; vec[2] = z; }
  explicit SbVec3f(const SbVec3d & v) { setValue(v); }
  explicit SbVec3f(const SbVec3b & v) { setValue(v); }
  explicit SbVec3f(const SbVec3s & v) { setValue(v); }
  explicit SbVec3f(const SbVec3i32 & v) { setValue(v); }
  SbVec3f(const SbPlane & p0, const SbPlane & p1, const SbPlane & p2);

  SbVec3f & setValue(const float v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; return *this; }
  SbVec3f & setValue(float x, float y, float z) { vec[0] = x; vec[1] = y; vec[2] = z; return *this; }
  SbVec3f & setValue(const SbVec3f & barycentric,
                     const SbVec3f & v0,
                     const SbVec3f & v1,
                     const SbVec3f & v2);
  SbVec3f & setValue(const SbVec3d & v);
  SbVec3f & setValue(const SbVec3b & v);
  SbVec3f & setValue(const SbVec3s & v);
  SbVec3f & setValue(const SbVec3i32 & v);

  const float * getValue(void) const { return vec; }
  void getValue(float & x, float & y, float & z) const { x = vec[0]; y = vec[1]; z = vec[2]; }

  float & operator [] (int i) { return vec[i]; }
  const float & operator [] (int i) const { return vec[i]; }

  SbBool equals(const SbVec3f & v, float tolerance) const;
  SbVec3f cross(const SbVec3f & v) const;
  float dot(const SbVec3f & v) const { return vec[0] * v[0] + vec[1] * v[1] + vec[2] * v[2]; }
  SbVec3f getClosestAxis(void) const;
  float length(void) const;
  float sqrLength(void) const { return vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]; }
  float normalize(void);
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; }

  SbVec3f & operator *= (float d) { vec[0] *= d; vec[1] *= d; vec[2] *= d; return *this; }
  SbVec3f & operator /= (float d) { SbDividerChk("SbVec3f::operator/=(float)", d); return operator *= (1.0f / d); }
  SbVec3f & operator += (const SbVec3f & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; return *this; }
  SbVec3f & operator -= (const SbVec3f & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; return *this; }
  SbVec3f operator - (void) const { return SbVec3f(-vec[0], -vec[1], -vec[2]); }

  SbString toString() const;
  SbBool fromString(const SbString & str);

  void print(FILE * fp) const;

protected:
  float vec[3];

};

 inline SbVec3f operator * (const SbVec3f & v, float d) {
  SbVec3f val(v); val *= d; return val;
}

 inline SbVec3f operator * (float d, const SbVec3f & v) {
  SbVec3f val(v); val *= d; return val;
}

 inline SbVec3f operator / (const SbVec3f & v, float d) {
  SbDividerChk("operator/(SbVec3f,float)", d);
  SbVec3f val(v); val /= d; return val;
}

 inline SbVec3f operator + (const SbVec3f & v1, const SbVec3f & v2) {
  SbVec3f v(v1); v += v2; return v;
}

 inline SbVec3f operator - (const SbVec3f & v1, const SbVec3f & v2) {
  SbVec3f v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec3f & v1, const SbVec3f & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]));
}

 inline int operator != (const SbVec3f & v1, const SbVec3f & v2) {
  return !(v1 == v2);
}
#line 39 "coin/include/Inventor/SbColor.h"
class SbColor : public SbVec3f {
public:
  SbColor(void);
  SbColor(const SbVec3f& v);
  SbColor(const float* const rgb);
  SbColor(const float r, const float g, const float b);

  SbColor & setHSVValue(float h, float s, float v);
  SbColor & setHSVValue(const float hsv[3]);
  void getHSVValue(float &h, float &s, float &v) const;
  void getHSVValue(float hsv[3]) const;
  SbColor & setPackedValue(const uint32_t rgba, float& transparency);
  uint32_t getPackedValue(const float transparency = 0.0f) const;

private:
  float red(void) const { return (*this)[0]; }
  float green(void) const { return (*this)[1]; }
  float blue(void) const { return (*this)[2]; }
  uint32_t convertToUInt(const float val) { return static_cast<uint32_t>(val*255.0f);}
};
#line 40 "coin/include/Inventor/elements/SoLazyElement.h"
class SoMFFloat;
class SoMFColor;
class SoColorPacker;
class SoLazyElementP;




class SoLazyElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoLazyElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoLazyElement::classTypeId.getName()); SoLazyElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);

public:
  static void initClass();
protected:
  ~SoLazyElement();
public:
  enum cases {
    LIGHT_MODEL_CASE = 0,
    COLOR_MATERIAL_CASE,
    DIFFUSE_CASE,
    AMBIENT_CASE,
    EMISSIVE_CASE,
    SPECULAR_CASE,
    SHININESS_CASE,
    BLENDING_CASE,
    TRANSPARENCY_CASE,
    VERTEXORDERING_CASE,
    TWOSIDE_CASE,
    CULLING_CASE,
    SHADE_MODEL_CASE,
    ALPHATEST_CASE,
    GLIMAGE_CASE,
    LAZYCASES_LAST
  };
  enum masks{
    LIGHT_MODEL_MASK = 1 << LIGHT_MODEL_CASE,
    COLOR_MATERIAL_MASK = 1 << COLOR_MATERIAL_CASE,
    DIFFUSE_MASK = 1 << DIFFUSE_CASE,
    AMBIENT_MASK = 1 << AMBIENT_CASE,
    EMISSIVE_MASK = 1<<EMISSIVE_CASE,
    SPECULAR_MASK = 1 << SPECULAR_CASE,
    SHININESS_MASK = 1 << SHININESS_CASE,
    TRANSPARENCY_MASK = 1 << TRANSPARENCY_CASE,
    BLENDING_MASK = 1 << BLENDING_CASE,
    VERTEXORDERING_MASK = 1 << VERTEXORDERING_CASE,
    TWOSIDE_MASK = 1 << TWOSIDE_CASE,
    CULLING_MASK = 1 << CULLING_CASE,
    SHADE_MODEL_MASK = 1 << SHADE_MODEL_CASE,
    ALPHATEST_MASK = 1 << ALPHATEST_CASE,
    GLIMAGE_MASK = 1 << GLIMAGE_CASE,
    ALL_MASK = (1 << LAZYCASES_LAST)-1
  };

  enum internalMasks{
    OTHER_COLOR_MASK = AMBIENT_MASK|EMISSIVE_MASK|SPECULAR_MASK|SHININESS_MASK,
    ALL_COLOR_MASK = OTHER_COLOR_MASK|DIFFUSE_MASK,
    NO_COLOR_MASK = ALL_MASK & (~ALL_COLOR_MASK),
    ALL_BUT_DIFFUSE_MASK = ALL_MASK &(~ DIFFUSE_MASK),
    DIFFUSE_ONLY_MASK = ALL_MASK &(~ OTHER_COLOR_MASK)
  };

  enum LightModel {
    BASE_COLOR,
    PHONG
  };

  enum VertexOrdering {
    CW,
    CCW
  };

  virtual void init(SoState *state);
  virtual void push(SoState *state);
  virtual SbBool matches(const SoElement *) const;
  virtual SoElement *copyMatchInfo(void) const;

  static void setToDefault(SoState * state);
  static void setDiffuse(SoState * state, SoNode * node, int32_t numcolors,
                         const SbColor * colors, SoColorPacker * packer);
  static void setTransparency(SoState *state, SoNode *node, int32_t numvalues,
                              const float * transparency, SoColorPacker * packer);
  static void setPacked(SoState * state, SoNode * node,
                        int32_t numcolors, const uint32_t * colors,
                        const SbBool packedtransparency = 0);
  static void setColorIndices(SoState *state, SoNode *node,
                              int32_t numindices, const int32_t *indices);
  static void setAmbient(SoState *state, const SbColor * color);
  static void setEmissive(SoState *state, const SbColor * color);
  static void setSpecular(SoState *state, const SbColor * color);
  static void setShininess(SoState *state, float value);
  static void setColorMaterial(SoState *state, SbBool value);
  static void enableBlending(SoState *state,
                             int sfactor,
                             int dfactor);
  static void enableSeparateBlending(SoState *state,
                                     int sfactor,
                                     int dfactor,
                                     int alpha_sfactor,
                                     int alpha_dfactor);

  static void disableBlending(SoState * state);
  static void setLightModel(SoState *state, const int32_t model);
  static void setVertexOrdering(SoState * state, VertexOrdering ordering);
  static void setBackfaceCulling(SoState * state, SbBool onoff);
  static void setTwosideLighting(SoState * state, SbBool onoff);
  static void setShadeModel(SoState * state, SbBool flatshading);
  static void setAlphaTest(SoState * state, int func, float value);

  static const SbColor & getDiffuse(SoState* state, int index);
  static float getTransparency(SoState*, int index);
  static const uint32_t * getPackedColors(SoState*);
  static const int32_t  * getColorIndices(SoState*);
  static int32_t getColorIndex(SoState*, int num);
  static const SbColor & getAmbient(SoState *);
  static const SbColor & getEmissive(SoState *);
  static const SbColor & getSpecular(SoState *);
  static float getShininess(SoState*);
  static SbBool getColorMaterial(SoState*);
  static SbBool getBlending(SoState *,
                            int & sfactor, int & dfactor);
  static SbBool getAlphaBlending(SoState *,
                                 int & sfactor, int & dfactor);

  static int32_t getLightModel(SoState*);
  static int getAlphaTest(SoState * state, float & value);
  static SbBool getTwoSidedLighting(SoState * state);

  int32_t getNumDiffuse(void) const;
  int32_t getNumTransparencies(void) const;
  int32_t getNumColorIndices(void) const;
  SbBool isPacked(void) const;
  SbBool isTransparent(void) const;
  static SoLazyElement * getInstance(SoState *state);
  static float getDefaultAmbientIntensity(void);

  static SbColor getDefaultDiffuse(void);
  static SbColor getDefaultAmbient(void);
  static SbColor getDefaultSpecular(void);
  static SbColor getDefaultEmissive(void);
  static float getDefaultShininess(void);
  static uint32_t getDefaultPacked(void);
  static float getDefaultTransparency(void);
  static int32_t getDefaultLightModel(void);
  static int32_t getDefaultColorIndex(void);

  static void setMaterials(SoState * state, SoNode *node, uint32_t bitmask,
                           SoColorPacker * cPacker,
                           const SbColor * diffuse,
                           const int numdiffuse,
                           const float * transp,
                           const int numtransp,
                           const SbColor & ambient,
                           const SbColor & emissive,
                           const SbColor & specular,
                           const float shininess,
                           const SbBool istransparent);

  static SoLazyElement * getWInstance(SoState *state);

  const uint32_t * getPackedPointer(void) const;
  const SbColor * getDiffusePointer(void) const;
  const int32_t * getColorIndexPointer(void) const;

  const float * getTransparencyPointer(void) const;
  static void setTransparencyType(SoState * state, int32_t type);

protected:

  struct CoinState {
    SbColor ambient;
    SbColor specular;
    SbColor emissive;
    float shininess;
    SbBool blending;
    int blend_sfactor;
    int blend_dfactor;
    int alpha_blend_sfactor;
    int alpha_blend_dfactor;
    int32_t lightmodel;
    SbBool packeddiffuse;
    int32_t numdiffuse;
    int32_t numtransp;
    const SbColor * diffusearray;
    const uint32_t * packedarray;
    const float * transparray;
    const int32_t * colorindexarray;
    int32_t transptype;
    SbBool istransparent;
    SbUniqueId diffusenodeid;
    SbUniqueId transpnodeid;
    int32_t stipplenum;
    VertexOrdering vertexordering;
    SbBool twoside;
    SbBool culling;
    SbBool flatshading;
    int alphatestfunc;
    float alphatestvalue;
  } coinstate;

protected:
  virtual void lazyDidSet(uint32_t mask);
  virtual void lazyDidntSet(uint32_t mask);

  virtual void setDiffuseElt(SoNode*,  int32_t numcolors,
                             const SbColor * colors, SoColorPacker * packer);
  virtual void setPackedElt(SoNode * node, int32_t numcolors,
                            const uint32_t * colors, const SbBool packedtransparency);
  virtual void setColorIndexElt(SoNode * node, int32_t numindices,
                                const int32_t * indices);
  virtual void setTranspElt(SoNode * node, int32_t numtransp,
                            const float * transp, SoColorPacker * packer);

  virtual void setTranspTypeElt(int32_t type);
  virtual void setAmbientElt(const SbColor* color);
  virtual void setEmissiveElt(const SbColor* color);
  virtual void setSpecularElt(const SbColor* color);
  virtual void setShininessElt(float value);
  virtual void setColorMaterialElt(SbBool value);
  virtual void enableBlendingElt(int sfactor, int dfactor, int alpha_sfactor, int alpha_dfactor);
  virtual void disableBlendingElt(void);
  virtual void setLightModelElt(SoState *state, int32_t model);
  virtual void setMaterialElt(SoNode * node, uint32_t bitmask,
                              SoColorPacker * packer,
                              const SbColor * diffuse, const int numdiffuse,
                              const float * transp, const int numtransp,
                              const SbColor & ambient,
                              const SbColor & emissive,
                              const SbColor & specular,
                              const float shininess,
                              const SbBool istransparent);
  virtual void setVertexOrderingElt(VertexOrdering ordering);
  virtual void setBackfaceCullingElt(SbBool onoff);
  virtual void setTwosideLightingElt(SbBool onoff);
  virtual void setShadeModelElt(SbBool flatshading);
  virtual void setAlphaTestElt(int func, float value);

private:
  SoLazyElementP * pimpl;

};

class SoColorPacker {
public:
  SoColorPacker(void);
  ~SoColorPacker();

  uint32_t * getPackedColors(void) const {
    return this->array;
  }
  SbBool diffuseMatch(const SbUniqueId nodeid) const {
    return nodeid == this->diffuseid;
  }
  SbBool transpMatch(const SbUniqueId nodeid) const {
    return nodeid == this->transpid;
  }
  void setNodeIds(const SbUniqueId diffuse, const SbUniqueId transp) {
    this->diffuseid = diffuse;
    this->transpid = transp;
  }
  int32_t getSize(void) const {
    return this->arraysize;
  }
  void reallocate(const int32_t size);

  SbUniqueId getDiffuseId(void) const {
    return this->diffuseid;
  }
  SbUniqueId getTranspId(void) const {
    return this->transpid;
  }
private:
  SbUniqueId transpid;
  SbUniqueId diffuseid;
  uint32_t * array;
  int32_t arraysize;
};
#line 40 "coin/include/Inventor/nodes/SoLightModel.h"
class SoLightModel : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoLightModel(void);

  enum Model {
    BASE_COLOR = SoLazyElement::BASE_COLOR,
    PHONG = SoLazyElement::PHONG
  };

  SoSFEnum model;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoLightModel();
};
#line 38 "coin/include/Inventor/elements/SoMaterialBindingElement.h"
class SoMaterialBindingElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoMaterialBindingElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoMaterialBindingElement::classTypeId.getName()); SoMaterialBindingElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoMaterialBindingElement();

public:

  enum Binding {
    OVERALL = 2,
    PER_PART = 3,
    PER_PART_INDEXED = 4,
    PER_FACE = 5,
    PER_FACE_INDEXED = 6,
    PER_VERTEX = 7,
    PER_VERTEX_INDEXED = 8,
    DEFAULT = OVERALL,
    NONE = OVERALL
  };

  virtual void init(SoState * state);

  static  void set(SoState * const state, SoNode * const node,
                   const Binding binding);
  static  void set(SoState * const state, const Binding binding);
  static  Binding get(SoState * const state);
  static  Binding getDefault();

};
#line 40 "coin/include/Inventor/nodes/SoMaterialBinding.h"
class SoMaterialBinding : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoMaterialBinding(void);

  enum Binding {
    OVERALL = SoMaterialBindingElement::OVERALL,
    PER_PART = SoMaterialBindingElement::PER_PART,
    PER_PART_INDEXED = SoMaterialBindingElement::PER_PART_INDEXED,
    PER_FACE = SoMaterialBindingElement::PER_FACE,
    PER_FACE_INDEXED = SoMaterialBindingElement::PER_FACE_INDEXED,
    PER_VERTEX = SoMaterialBindingElement::PER_VERTEX,
    PER_VERTEX_INDEXED = SoMaterialBindingElement::PER_VERTEX_INDEXED,



    DEFAULT = OVERALL,
    NONE = OVERALL
  };

  SoSFEnum value;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoMaterialBinding();
};
#line 38 "coin/include/Inventor/elements/SoNormalBindingElement.h"
class SoNormalBindingElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoNormalBindingElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoNormalBindingElement::classTypeId.getName()); SoNormalBindingElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoNormalBindingElement();

public:

  enum Binding {
    OVERALL = 2,
    PER_PART,
    PER_PART_INDEXED,
    PER_FACE,
    PER_FACE_INDEXED,
    PER_VERTEX,
    PER_VERTEX_INDEXED,
    DEFAULT = PER_VERTEX_INDEXED,
    NONE = OVERALL
  };

  virtual void init(SoState * state);
  static  void set(SoState * const state, SoNode * const node,
                     const Binding binding);
  static  void set(SoState * const state, const Binding binding);
  static  Binding get(SoState * const state);
  static  Binding getDefault();

};
#line 40 "coin/include/Inventor/nodes/SoNormalBinding.h"
class SoNormalBinding : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoNormalBinding(void);

  enum Binding {
    OVERALL = SoNormalBindingElement::OVERALL,
    PER_PART = SoNormalBindingElement::PER_PART,
    PER_PART_INDEXED = SoNormalBindingElement::PER_PART_INDEXED,
    PER_FACE = SoNormalBindingElement::PER_FACE,
    PER_FACE_INDEXED = SoNormalBindingElement::PER_FACE_INDEXED,
    PER_VERTEX = SoNormalBindingElement::PER_VERTEX,
    PER_VERTEX_INDEXED = SoNormalBindingElement::PER_VERTEX_INDEXED,



    DEFAULT = PER_VERTEX_INDEXED,
    NONE = PER_VERTEX_INDEXED
  };

  SoSFEnum value;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoNormalBinding();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
};
#line 38 "coin/include/Inventor/elements/SoPickStyleElement.h"
class SoPickStyleElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoPickStyleElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoPickStyleElement::classTypeId.getName()); SoPickStyleElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoPickStyleElement();

public:
  enum Style {
    SHAPE,
    BOUNDING_BOX,
    UNPICKABLE,
    SHAPE_ON_TOP,
    BOUNDING_BOX_ON_TOP,
    SHAPE_FRONTFACES
  };

  virtual void init(SoState * state);
  static void set(SoState * const state, SoNode * const node,
                  const int32_t style);
  static void set(SoState * const state, const Style style);
  static Style get(SoState * const state);
  static Style getDefault();
};
#line 40 "coin/include/Inventor/nodes/SoPickStyle.h"
class SoPickStyle : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPickStyle(void);

  enum Style {
    SHAPE = SoPickStyleElement::SHAPE,
    BOUNDING_BOX = SoPickStyleElement::BOUNDING_BOX,
    UNPICKABLE = SoPickStyleElement::UNPICKABLE,
    SHAPE_ON_TOP = SoPickStyleElement::SHAPE_ON_TOP,
    BOUNDING_BOX_ON_TOP = SoPickStyleElement::BOUNDING_BOX_ON_TOP,
    SHAPE_FRONTFACES = SoPickStyleElement::SHAPE_FRONTFACES
  };

  SoSFEnum style;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoPickStyle();
};
#line 38 "coin/include/Inventor/elements/SoShapeHintsElement.h"
class SoShapeHintsElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoShapeHintsElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoShapeHintsElement::classTypeId.getName()); SoShapeHintsElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoShapeHintsElement();

public:
  enum VertexOrdering {
    UNKNOWN_ORDERING,
    CLOCKWISE,
    COUNTERCLOCKWISE,
    ORDERING_AS_IS
  };

  enum ShapeType {
    UNKNOWN_SHAPE_TYPE,
    SOLID,
    SHAPE_TYPE_AS_IS
  };

  enum FaceType {
    UNKNOWN_FACE_TYPE,
    CONVEX,
    FACE_TYPE_AS_IS
  };

  virtual void init(SoState * state);
  virtual void push(SoState * state);
  virtual void pop(SoState * state, const SoElement * prevtopelement);

  virtual SbBool matches(const SoElement * element) const;
  virtual SoElement *copyMatchInfo(void) const;

  static void set(SoState * const state, SoNode * const node,
                  const VertexOrdering vertexOrdering,
                  const ShapeType shapeType, const FaceType faceType);
  static void set(SoState * const state,
                  const VertexOrdering vertexOrdering,
                  const ShapeType shapeType, const FaceType faceType);
  static void get(SoState * const state, VertexOrdering & vertexOrdering,
                  ShapeType & shapeType, FaceType & faceType);

  static VertexOrdering getVertexOrdering(SoState * const state);
  static ShapeType getShapeType(SoState * const state);
  static FaceType getFaceType(SoState * const state);

  static VertexOrdering getDefaultVertexOrdering();
  static ShapeType getDefaultShapeType();
  static FaceType getDefaultFaceType();

  virtual void print(FILE * file) const;

protected:
  void updateLazyElement(SoState * state);
  virtual void setElt(VertexOrdering vertexOrdering,
                      ShapeType shapeType, FaceType faceType);

  VertexOrdering vertexOrdering;
  ShapeType shapeType;
  FaceType faceType;

};
#line 39 "coin/include/Inventor/fields/SoSFBool.h"
class SoSFBool : public SoSField {
  typedef SoSField inherited;

  public:   SoSFBool(void);   virtual ~SoSFBool();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFBool::classTypeId.getName()); SoSFBool::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFBool & operator=(const SoSFBool & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbBool value;  public:   SbBool getValue(void) const { this->evaluate(); return this->value; }   void setValue(SbBool newvalue);   SbBool operator=(SbBool newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFBool & field) const;   int operator!=(const SoSFBool & field) const { return ! operator==(field); };

public:
  static void initClass(void);
};
#line 42 "coin/include/Inventor/nodes/SoShapeHints.h"
class SoShapeHints : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoShapeHints(void);

  enum VertexOrdering {
    UNKNOWN_ORDERING = SoShapeHintsElement::UNKNOWN_ORDERING,
    CLOCKWISE = SoShapeHintsElement::CLOCKWISE,
    COUNTERCLOCKWISE = SoShapeHintsElement::COUNTERCLOCKWISE
  };

  enum ShapeType {
    UNKNOWN_SHAPE_TYPE = SoShapeHintsElement::UNKNOWN_SHAPE_TYPE,
    SOLID = SoShapeHintsElement::SOLID
  };

  enum FaceType {
    UNKNOWN_FACE_TYPE = SoShapeHintsElement::UNKNOWN_FACE_TYPE,
    CONVEX = SoShapeHintsElement::CONVEX
  };

  enum WindingType {
    NO_WINDING_TYPE = 0
  };

  SoSFEnum vertexOrdering;
  SoSFEnum shapeType;
  SoSFEnum faceType;
  SoSFEnum windingType;
  SoSFBool useVBO;
  SoSFFloat creaseAngle;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoShapeHints();
};
#line 39 "coin/include/Inventor/nodes/SoTexture.h"
class SoTexture : public SoNode {
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;
  typedef SoNode inherited;

public:
  static void initClass(void);
  static void cleanupClass(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  SoTexture(void);
  virtual ~SoTexture(void);

private:

};
class SbVec2us;
class SbVec2b;
class SbVec2i32;
class SbVec2f;
class SbVec2d;

class SbVec2s {
public:
  SbVec2s(void) { }
  SbVec2s(const short v[2]) { vec[0] = v[0]; vec[1] = v[1]; }
  SbVec2s(short x, short y) { vec[0] = x; vec[1] = y; }
  explicit SbVec2s(const SbVec2us & v) { setValue(v); }
  explicit SbVec2s(const SbVec2b & v) { setValue(v); }
  explicit SbVec2s(const SbVec2i32 & v) { setValue(v); }
  explicit SbVec2s(const SbVec2f & v) { setValue(v); }
  explicit SbVec2s(const SbVec2d & v) { setValue(v); }

  SbVec2s & setValue(const short v[2]) { vec[0] = v[0]; vec[1] = v[1]; return *this; }
  SbVec2s & setValue(short x, short y) { vec[0] = x; vec[1] = y; return *this; }
  SbVec2s & setValue(const SbVec2us & v);
  SbVec2s & setValue(const SbVec2b & v);
  SbVec2s & setValue(const SbVec2i32 & v);
  SbVec2s & setValue(const SbVec2f & v);
  SbVec2s & setValue(const SbVec2d & v);

  const short * getValue(void) const { return vec; }
  void getValue(short & x, short & y) const { x = vec[0]; y = vec[1]; }

  short & operator [] (int i) { return vec[i]; }
  const short & operator [] (int i) const { return vec[i]; }

  int32_t dot(const SbVec2s & v) const { return vec[0] * v[0] + vec[1] * v[1]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; }

  SbVec2s & operator *= (int d) { vec[0] = short(vec[0] * d); vec[1] = short(vec[1] * d); return *this; }
  SbVec2s & operator *= (double d);
  SbVec2s & operator /= (int d) { SbDividerChk("SbVec2s::operator/=(int)", d); vec[0] = short(vec[0] / d); vec[1] = short(vec[1] / d); return *this; }
  SbVec2s & operator /= (double d) { SbDividerChk("SbVec2s::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec2s & operator += (const SbVec2s & v) { vec[0] += v[0]; vec[1] += v[1]; return *this; }
  SbVec2s & operator -= (const SbVec2s & v) { vec[0] -= v[0]; vec[1] -= v[1]; return *this; }
  SbVec2s operator - (void) const { return SbVec2s(-vec[0], -vec[1]); }

  SbString toString() const;
  SbBool fromString(const SbString & str);

  void print(FILE * fp) const;

protected:
  short vec[2];

};

 inline SbVec2s operator * (const SbVec2s & v, int d) {
  SbVec2s val(v); val *= d; return val;
}

 inline SbVec2s operator * (const SbVec2s & v, double d) {
  SbVec2s val(v); val *= d; return val;
}

 inline SbVec2s operator * (int d, const SbVec2s & v) {
  SbVec2s val(v); val *= d; return val;
}

 inline SbVec2s operator * (double d, const SbVec2s & v) {
  SbVec2s val(v); val *= d; return val;
}

 inline SbVec2s operator / (const SbVec2s & v, int d) {
  SbDividerChk("operator/(SbVec2s,int)", d);
  SbVec2s val(v); val /= d; return val;
}

 inline SbVec2s operator / (const SbVec2s & v, double d) {
  SbDividerChk("operator/(SbVec2s,double)", d);
  SbVec2s val(v); val /= d; return val;
}

 inline SbVec2s operator + (const SbVec2s & v1, const SbVec2s & v2) {
  SbVec2s v(v1); v += v2; return v;
}

 inline SbVec2s operator - (const SbVec2s & v1, const SbVec2s & v2) {
  SbVec2s v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec2s & v1, const SbVec2s & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]));
}

 inline int operator != (const SbVec2s & v1, const SbVec2s & v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/fields/SoSFImage.h"
class SbImage;

class SoSFImage : public SoSField {
  typedef SoSField inherited;

  public:   SoSFImage(void);   virtual ~SoSFImage();
  private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFImage::classTypeId.getName()); SoSFImage::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFImage & operator=(const SoSFImage & field);   virtual SbBool isSame(const SoField & field) const;

public:
  enum CopyPolicy {
    COPY,
    NO_COPY,
    NO_COPY_AND_DELETE,
    NO_COPY_AND_FREE
  };

  static void initClass(void);

  const unsigned char * getValue(SbVec2s & size, int & nc) const;
  const SbImage & getValue() const;

  void setValue(const SbVec2s & size, const int nc,
                const unsigned char * pixels, CopyPolicy copypolicy = COPY);

  int operator==(const SoSFImage & field) const;
  int operator!=(const SoSFImage & field) const { return ! operator == (field); }

  unsigned char * startEditing(SbVec2s & size, int & nc);
  void finishEditing(void);

  void setSubValue(const SbVec2s & dims, const SbVec2s & offset, unsigned char * pixels);
  void setSubValues(const SbVec2s * dims, const SbVec2s * offsets, int num, unsigned char ** pixelblocks);
  unsigned char * getSubTexture(int idx, SbVec2s & dims, SbVec2s & offset) const;
  SbBool hasSubTextures(int & numsubtextures);

  void setNeverWrite(SbBool flag);
  SbBool isNeverWrite(void) const;

  SbBool hasTransparency(void) const;

private:
  virtual SbBool readValue(SoInput * in);
  virtual void writeValue(SoOutput * out) const;

  class SoSFImageP * pimpl;
};
#line 40 "coin/include/Inventor/fields/SoSFString.h"
class SoSFString : public SoSField {
  typedef SoSField inherited;

  public:   SoSFString(void);   virtual ~SoSFString();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFString::classTypeId.getName()); SoSFString::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFString & operator=(const SoSFString & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbString value;  public:   const SbString & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbString & newvalue);   const SbString & operator=(const SbString & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFString & field) const;   int operator!=(const SoSFString & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(const char * str);
};
#line 40 "coin/include/Inventor/fields/SoSFColor.h"
class SoSFColor : public SoSField {
  typedef SoSField inherited;

  public:   SoSFColor(void);   virtual ~SoSFColor();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFColor::classTypeId.getName()); SoSFColor::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFColor & operator=(const SoSFColor & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbColor value;  public:   const SbColor & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbColor & newvalue);   const SbColor & operator=(const SbColor & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFColor & field) const;   int operator!=(const SoSFColor & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(const SbVec3f & vec);
  void setValue(float red, float green, float blue);
  void setValue(const float rgb[3]);
  void setHSVValue(float h, float s, float v);
  void setHSVValue(const float hsv[3]);
};
#line 39 "coin/include/Inventor/elements/SoReplacedElement.h"
class SoReplacedElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoReplacedElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoReplacedElement::classTypeId.getName()); SoReplacedElement::classTypeId = SoType::badType(); };
public:
  static void initClass(void);
protected:
  virtual ~SoReplacedElement();

public:
  virtual void init(SoState * state);
  virtual SbBool matches(const SoElement * element) const;

  virtual SoElement * copyMatchInfo() const;

  SbUniqueId getNodeId() const;

  virtual void print(FILE * file) const;

protected:
  static  SoElement * getElement(SoState * const state,
                                 const int stackIndex, SoNode * const node);

  SbUniqueId nodeId;
};
class SbVec3us;
class SbVec3b;
class SbVec3i32;
class SbVec3f;
class SbVec3d;

class SbVec3s {
public:
  SbVec3s(void) { }
  SbVec3s(const short v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; }
  SbVec3s(short x, short y, short z) { vec[0] = x; vec[1] = y; vec[2] = z; }
  explicit SbVec3s(const SbVec3us & v) { setValue(v); }
  explicit SbVec3s(const SbVec3b & v) { setValue(v); }
  explicit SbVec3s(const SbVec3i32 & v) { setValue(v); }
  explicit SbVec3s(const SbVec3f & v) { setValue(v); }
  explicit SbVec3s(const SbVec3d & v) { setValue(v); }

  SbVec3s & setValue(const short v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; return *this; }
  SbVec3s & setValue(short x, short y, short z) { vec[0] = x; vec[1] = y; vec[2] = z; return *this; }
  SbVec3s & setValue(const SbVec3us & v);
  SbVec3s & setValue(const SbVec3b & v);
  SbVec3s & setValue(const SbVec3i32 & v);
  SbVec3s & setValue(const SbVec3f & v);
  SbVec3s & setValue(const SbVec3d & v);

  const short * getValue(void) const { return vec; }
  void getValue(short & x, short & y, short & z) const { x = vec[0]; y = vec[1]; z = vec[2]; }

  short & operator [] (int i) { return vec[i]; }
  const short & operator [] (int i) const { return vec[i]; }

  int32_t dot(const SbVec3s & v) const { return vec[0] * v[0] + vec[1] * v[1] + vec[2] * v[2]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; }

  SbVec3s & operator *= (int d) { vec[0] = short(vec[0] * d); vec[1] = short(vec[1] * d); vec[2] = short(vec[2] * d); return *this; }
  SbVec3s & operator *= (double  d);
  SbVec3s & operator /= (int d) { SbDividerChk("SbVec3s::operator/=(int)", d); vec[0] = short(vec[0] / d); vec[1] = short(vec[1] / d); vec[2] = short(vec[2] / d); return *this; }
  SbVec3s & operator /= (double d) { SbDividerChk("SbVec3s::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec3s & operator += (const SbVec3s & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; return *this; }
  SbVec3s & operator -= (const SbVec3s & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; return *this; }
  SbVec3s operator - (void) const { return SbVec3s(-vec[0], -vec[1], -vec[2]); }

  SbString toString() const;
  SbBool fromString(const SbString & str);
  void print(FILE * fp) const;

protected:
  short vec[3];

};

 inline SbVec3s operator * (const SbVec3s & v, int d) {
  SbVec3s val(v); val *= d; return val;
}

 inline SbVec3s operator * (const SbVec3s & v, double d) {
  SbVec3s val(v); val *= d; return val;
}

 inline SbVec3s operator * (int d, const SbVec3s & v) {
  SbVec3s val(v); val *= d; return val;
}

 inline SbVec3s operator * (double d, const SbVec3s & v) {
  SbVec3s val(v); val *= d; return val;
}

 inline SbVec3s operator / (const SbVec3s & v, int d) {
  SbDividerChk("operator/(SbVec3s,int)", d);
  SbVec3s val(v); val /= d; return val;
}

 inline SbVec3s operator / (const SbVec3s & v, double d) {
  SbDividerChk("operator/(SbVec3s,double)", d);
  SbVec3s val(v); val /= d; return val;
}

 inline SbVec3s operator + (const SbVec3s & v1, const SbVec3s & v2) {
  SbVec3s v(v1); v += v2; return v;
}

 inline SbVec3s operator - (const SbVec3s & v1, const SbVec3s & v2) {
  SbVec3s v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec3s & v1, const SbVec3s & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]));
}

 inline int operator != (const SbVec3s & v1, const SbVec3s & v2) {
  return !(v1 == v2);
}
#line 41 "coin/include/Inventor/elements/SoMultiTextureImageElement.h"
class SoState;
class SoMultiTextureImageElementP;

class SoMultiTextureImageElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoMultiTextureImageElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoMultiTextureImageElement::classTypeId.getName()); SoMultiTextureImageElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoMultiTextureImageElement();

public:

  enum Model {



    BLEND = 0x0be2,
    MODULATE = 0x2100,
    DECAL = 0x2101,
    REPLACE = 0x1E01
  };

  enum Wrap {



    CLAMP = 0x2900,
    REPEAT = 0x2901,
    CLAMP_TO_BORDER = 0x812D
  };

  virtual void init(SoState * state);
  static void setDefault(SoState * const state, SoNode * const node, const int unit = 0);

  static void set(SoState * const state, SoNode * const node,
                  const int unit,
                  const SbVec2s & size, const int numComponents,
                  const unsigned char * bytes,
                  const Wrap wrapS,
                  const Wrap wrapT,
                  const Model model, const SbColor & blendColor);
  static void set(SoState * const state, SoNode * const node,
                  const int unit,
                  const SbVec3s & size, const int numComponents,
                  const unsigned char * bytes,
                  const Wrap wrapS,
                  const Wrap wrapT,
                  const Wrap wrapR,
                  const Model model, const SbColor & blendColor);

  static const unsigned char *get(SoState * const state,
                                  const int unit,
                                  SbVec2s & size,
                                  int & numComponents,
                                  Wrap & wrapS,
                                  Wrap & wrapT,
                                  Model & model,
                                  SbColor & blendColor);
  static const unsigned char *get(SoState * const state,
                                  const int unit,
                                  SbVec3s & size,
                                  int & numComponents,
                                  Wrap & wrapS,
                                  Wrap & wrapT,
                                  Wrap & wrapR,
                                  Model & model,
                                  SbColor & blendColor);

  static const unsigned char *getImage(SoState * const state,
                                       const int unit,
                                       SbVec2s & size,
                                       int & numComponents);
  static const unsigned char *getImage(SoState * const state,
                                       const int unit,
                                       SbVec3s &size,
                                       int &numComponents);

  static const SbColor & getBlendColor(SoState * const state, const int unit = 0);
  static Model getModel(SoState * const state, const int unit = 0);
  static Wrap getWrapS(SoState * const state, const int unit = 0);
  static Wrap getWrapT(SoState * const state, const int unit = 0);
  static Wrap getWrapR(SoState * const state, const int unit = 0);

  static SbBool containsTransparency(SoState * const state);

  static const unsigned char * getDefault(SbVec2s & size, int & numComponents);
  static const unsigned char * getDefault(SbVec3s & size, int & numComponents);

  virtual void push(SoState * state);
  virtual SbBool matches(const SoElement * elem) const;
  SoElement * copyMatchInfo(void) const;

  virtual void setElt(const int unit,
                      const SbUniqueId nodeid,
                      const SbVec2s & size, const int numComponents,
                      const unsigned char * bytes,
                      const Wrap wrapS,
                      const Wrap wrapT,
                      const Model model,
                      const SbColor & blendColor);
  virtual void setElt(const int unit,
                      const SbUniqueId nodeid,
                      const SbVec3s & size, const int numComponents,
                      const unsigned char * bytes,
                      const Wrap wrapS,
                      const Wrap wrapT,
                      const Wrap wrapR,
                      const Model model,
                      const SbColor & blendColor);

  virtual SbBool hasTransparency(const int unit = 0) const;

  class UnitData {
  public:
    UnitData();
    UnitData(const UnitData & org);
    SbUniqueId nodeid;
    SbVec3s size;
    int numComponents;
    const unsigned char * bytes;
    Wrap wrapS, wrapT, wrapR;
    Model model;
    SbColor blendColor;
  };

protected:
  const UnitData & getUnitData(const int unit) const;
  int getNumUnits() const;

private:
  SoMultiTextureImageElementP * pimpl;

 public:
  static void set(SoState * const state, SoNode * const node,
                  const SbVec2s & size, const int numComponents,
                  const unsigned char * bytes,
                  const int wrapS, const int wrapT,
                  const int model, const SbColor & blendColor) {
    set(state, node,0, size, numComponents, bytes,
        (Wrap) wrapS, (Wrap) wrapT, (Model) model, blendColor);
  }
  static void set(SoState * const state, SoNode * const node,
                  const SbVec2s & size, const int numComponents,
                  const unsigned char * bytes,
                  const Wrap wrapS, const Wrap wrapT,
                  const Model model, const SbColor & blendColor) {
    set(state, node, 0, size, numComponents, bytes,
        wrapS, wrapT, model, blendColor);
  }

  static void set(SoState * const state, SoNode * const node,
                  const SbVec3s & size, const int numComponents,
                  const unsigned char * bytes,
                  const int wrapS, const int wrapT, const int wrapR,
                  const int model, const SbColor & blendColor) {
    set(state, node, 0, size, numComponents, bytes,
        (Wrap) wrapS, (Wrap) wrapT, (Wrap) wrapR, (Model) model, blendColor);
  }

  static void set(SoState * const state, SoNode * const node,
                  const SbVec3s & size, const int numComponents,
                  const unsigned char * bytes,
                  const Wrap wrapS, const Wrap wrapT, const Wrap wrapR,
                  const Model model, const SbColor & blendColor) {
    set(state, node, 0, size, numComponents, bytes,
        wrapS, wrapT, wrapR, model, blendColor);
  }

  static const unsigned char *get(SoState * const state,
                                  SbVec2s & size,
                                  int & numComponents,
                                  Wrap & wrapS,
                                  Wrap & wrapT,
                                  Model & model,
                                  SbColor & blendColor) {
    return get(state, 0, size, numComponents, wrapS, wrapT, model, blendColor);
  }
  static const unsigned char *get(SoState * const state,
                                  SbVec3s & size,
                                  int & numComponents,
                                  Wrap & wrapS,
                                  Wrap & wrapT,
                                  Wrap & wrapR,
                                  Model & model,
                                  SbColor & blendColor) {
    return get(state, 0, size, numComponents, wrapS, wrapT, wrapR, model, blendColor);
  }

  static const unsigned char *get(SoState * const state,
                                  SbVec2s & size,
                                  int & numComponents,
                                  int & wrapS,
                                  int & wrapT,
                                  int & model,
                                  SbColor & blendColor) {
    Wrap s, t;
    Model m;
    const unsigned char * bytes = get(state, 0, size, numComponents, s, t, m, blendColor);
    wrapS = (int) s;
    wrapT = (int) t;
    model = (int) m;
    return bytes;
  }
  static const unsigned char *get(SoState * const state,
                                  SbVec3s & size,
                                  int & numComponents,
                                  int & wrapS,
                                  int & wrapT,
                                  int & wrapR,
                                  int & model,
                                  SbColor & blendColor) {
    Wrap s, t, r;
    Model m;
    const unsigned char * bytes = get(state, 0, size, numComponents, s, t, r, m, blendColor);
    wrapS = (int) s;
    wrapT = (int) t;
    wrapR = (int) r;
    model = (int) m;
    return bytes;
  }
  static const unsigned char *getImage(SoState * const state,
                                       SbVec2s &size,
                                       int &numComponents) {
    return getImage(state, 0, size, numComponents);
  }
  static const unsigned char *getImage(SoState * const state,
                                       SbVec3s &size,
                                       int &numComponents) {
    return getImage(state, 0, size, numComponents);
  }
};
#line 45 "coin/include/Inventor/nodes/SoTexture2.h"
class SoFieldSensor;
class SoSensor;
class SoTexture2P;

class SoTexture2 : public SoTexture {
  typedef SoTexture inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTexture2(void);

  enum Model {
    MODULATE = SoMultiTextureImageElement::MODULATE,
    DECAL = SoMultiTextureImageElement::DECAL,
    BLEND = SoMultiTextureImageElement::BLEND,
    REPLACE = SoMultiTextureImageElement::REPLACE
  };

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP
  };

  SoSFString filename;
  SoSFImage image;
  SoSFEnum wrapS;
  SoSFEnum wrapT;
  SoSFEnum model;
  SoSFColor blendColor;
  SoSFBool enableCompressedTexture;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void rayPick(SoRayPickAction * action);

  static SbBool readImage(const SbString & fname, int & w, int & h, int & nc,
                          unsigned char *& bytes);
protected:
  virtual ~SoTexture2();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void notify(SoNotList * list);
  int getReadStatus(void);
  void setReadStatus(int s);

private:
  SbBool loadFilename(void);
  static void filenameSensorCB(void *, SoSensor *);

  SoTexture2P * pimpl;
};
#line 38 "coin/include/Inventor/elements/SoTextureCoordinateBindingElement.h"
class SoTextureCoordinateBindingElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoTextureCoordinateBindingElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoTextureCoordinateBindingElement::classTypeId.getName()); SoTextureCoordinateBindingElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoTextureCoordinateBindingElement();

public:

  enum Binding {
    PER_VERTEX = 2,
    PER_VERTEX_INDEXED = 3
  };

  virtual void init(SoState * state);

  static void set(SoState * const state, SoNode * const node,
                  const Binding binding);
  static void set(SoState * const state, const Binding binding);

  static Binding get(SoState * const state);

  static Binding getDefault(void);
};
#line 40 "coin/include/Inventor/nodes/SoTextureCoordinateBinding.h"
class SoTextureCoordinateBinding : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateBinding(void);

  enum Binding {
    PER_VERTEX = SoTextureCoordinateBindingElement::PER_VERTEX,
    PER_VERTEX_INDEXED = SoTextureCoordinateBindingElement::PER_VERTEX_INDEXED,
#line 56 "coin/include/Inventor/nodes/SoTextureCoordinateBinding.h"
    DEFAULT = PER_VERTEX_INDEXED
  };

  SoSFEnum value;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinateBinding();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
};
#line 38 "coin/include/Inventor/nodes/SoTransformation.h"
class SoTransformation : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

protected:
  SoTransformation(void);
  virtual ~SoTransformation();
};
#line 40 "coin/include/Inventor/nodes/SoUnits.h"
class SoUnits : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoUnits(void);



  enum Units {
    METERS,
    CENTIMETERS,
    MILLIMETERS,
    MICROMETERS,
    MICRONS,
    NANOMETERS,
    ANGSTROMS,
    KILOMETERS,
    FEET,
    INCHES,
    POINTS,
    YARDS,
    MILES,
    NAUTICAL_MILES
  };

  SoSFEnum units;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoUnits();
};
#line 53 "coin/include/Inventor/actions/SoCallbackAction.h"
class SbColor;
class SbMatrix;
class SbVec2f;
class SbVec2s;
class SbVec3f;
class SbVec4f;
class SbViewVolume;
class SoCallbackAction;
class SoCallbackActionP;
class SoCallbackData;
class SoPrimitiveVertex;
class SoShape;
class SbViewportRegion;

typedef void SoTriangleCB(void * userdata, SoCallbackAction * action,
                          const SoPrimitiveVertex * v1,
                          const SoPrimitiveVertex * v2,
                          const SoPrimitiveVertex * v3);

typedef void SoLineSegmentCB(void * userdata, SoCallbackAction * action,
                             const SoPrimitiveVertex * v1,
                             const SoPrimitiveVertex * v2);

typedef void SoPointCB(void * userdata, SoCallbackAction * action,
                       const SoPrimitiveVertex * v);


class SoCallbackAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoCallbackAction(void);
  SoCallbackAction(const SbViewportRegion & vp);
  virtual ~SoCallbackAction(void);

  void setViewportRegion(const SbViewportRegion & vp);

  enum Response { CONTINUE,  ABORT, PRUNE };

  typedef Response SoCallbackActionCB(void * userdata,
                                      SoCallbackAction * action,
                                      const SoNode * node);

  void addPreCallback(const SoType type, SoCallbackActionCB * cb, void * userdata);
  void addPostCallback(const SoType type, SoCallbackActionCB * cb, void * userdata);

  void addPreTailCallback(SoCallbackActionCB * cb, void * userdata);
  void addPostTailCallback(SoCallbackActionCB * cb, void * userdata);

  void addTriangleCallback(const SoType type, SoTriangleCB * cb, void * userdata);
  void addLineSegmentCallback(const SoType type, SoLineSegmentCB * cb, void * userdata);
  void addPointCallback(const SoType type, SoPointCB * cb, void * userdata);

  SoDecimationTypeElement::Type getDecimationType(void) const;
  float getDecimationPercentage(void) const;
  float getComplexity(void) const;
  SoComplexity::Type getComplexityType(void) const;
  int32_t getNumCoordinates(void) const;
  const SbVec3f & getCoordinate3(const int index) const;
  const SbVec4f & getCoordinate4(const int index) const;
  SoDrawStyle::Style getDrawStyle(void) const;
  unsigned short getLinePattern(void) const;
  float getLineWidth(void) const;
  float getPointSize(void) const;
  const SbName & getFontName(void) const;
  float getFontSize(void) const;
  SoLightModel::Model getLightModel(void) const;
  const SbVec3f & getLightAttenuation(void) const;
  void getMaterial(SbColor & ambient, SbColor & diffuse,
                   SbColor & specular, SbColor & emission,
                   float & shininess, float & transparency,
                   const int index = 0) const;
  SoMaterialBinding::Binding getMaterialBinding(void) const;
  uint32_t getNumNormals(void) const;
  const SbVec3f & getNormal(const int index) const;
  SoNormalBinding::Binding getNormalBinding(void) const;
  int32_t getNumProfileCoordinates(void) const;
  const SbVec2f & getProfileCoordinate2(const int index) const;
  const SbVec3f & getProfileCoordinate3(const int index) const;
  const SoNodeList & getProfile(void) const;
  SoShapeHints::VertexOrdering getVertexOrdering(void) const;
  SoShapeHints::ShapeType getShapeType(void) const;
  SoShapeHints::FaceType getFaceType(void) const;
  float getCreaseAngle(void) const;
  int32_t getNumTextureCoordinates(void) const;
  const SbVec2f & getTextureCoordinate2(const int index) const;
  const SbVec3f & getTextureCoordinate3(const int index) const;
  const SbVec4f & getTextureCoordinate4(const int index) const;
  SoTextureCoordinateBinding::Binding getTextureCoordinateBinding(void) const;
  const SbColor & getTextureBlendColor(void) const;
  const unsigned char * getTextureImage(SbVec2s & size, int & numcomps) const;
  const unsigned char * getTextureImage(SbVec3s & size, int & numcomps) const;
  const SbMatrix & getTextureMatrix(void) const;
  SoTexture2::Model getTextureModel(void) const;
  SoTexture2::Wrap getTextureWrapS(void) const;
  SoTexture2::Wrap getTextureWrapT(void) const;
  SoTexture2::Wrap getTextureWrapR(void) const;
  const SbMatrix & getModelMatrix(void) const;
  SoUnits::Units getUnits(void) const;
  float getFocalDistance(void) const;
  const SbMatrix & getProjectionMatrix(void) const;
  const SbMatrix & getViewingMatrix(void) const;
  const SbViewVolume & getViewVolume(void) const;
  const SbViewportRegion & getViewportRegion(void) const;
  SoPickStyle::Style getPickStyle(void) const;
  int32_t getSwitch(void) const;

  Response getCurrentResponse(void) const;
  void invokePreCallbacks(const SoNode * const node);
  void invokePostCallbacks(const SoNode * const node);
  void invokeTriangleCallbacks(const SoShape * const shape,
                               const SoPrimitiveVertex * const v1,
                               const SoPrimitiveVertex * const v2,
                               const SoPrimitiveVertex * const v3);
  void invokeLineSegmentCallbacks(const SoShape * const shape,
                                  const SoPrimitiveVertex * const v1,
                                  const SoPrimitiveVertex * const v2);
  void invokePointCallbacks(const SoShape * const shape,
                            const SoPrimitiveVertex * const v);

  SbBool shouldGeneratePrimitives(const SoShape * shape) const;

  virtual SoNode * getCurPathTail(void);
  void setCurrentNode(SoNode * const node);

  void setCallbackAll(SbBool callbackall);
  SbBool isCallbackAll(void) const;

protected:
  virtual void beginTraversal(SoNode * node);

private:
  void commonConstructor(void);

private:
  SbPimplPtr<SoCallbackActionP> pimpl;
  friend class SoCallbackActionP;

  SoCallbackAction(const SoCallbackAction & rhs);
  SoCallbackAction & operator = (const SoCallbackAction & rhs);
};
class SbVec2d;
class SbVec2b;
class SbVec2s;
class SbVec2i32;

class SbVec2f {
public:
  SbVec2f(void) { }
  SbVec2f(const float v[2]) { vec[0] = v[0]; vec[1] = v[1]; }
  SbVec2f(float x, float y) { vec[0] = x; vec[1] = y; }
  explicit SbVec2f(const SbVec2d & v) { setValue(v); }
  explicit SbVec2f(const SbVec2b & v) { setValue(v); }
  explicit SbVec2f(const SbVec2s & v) { setValue(v); }
  explicit SbVec2f(const SbVec2i32 & v) { setValue(v); }

  SbVec2f & setValue(const float v[2]) { vec[0] = v[0]; vec[1] = v[1]; return *this; }
  SbVec2f & setValue(float x, float y) { vec[0] = x; vec[1] = y; return *this; }
  SbVec2f & setValue(const SbVec2d & v);
  SbVec2f & setValue(const SbVec2b & v);
  SbVec2f & setValue(const SbVec2s & v);
  SbVec2f & setValue(const SbVec2i32 & v);

  const float * getValue(void) const { return vec; }
  void getValue(float & x, float & y) const { x = vec[0]; y = vec[1]; }

  float & operator [] (int i) { return vec[i]; }
  const float & operator [] (int i) const { return vec[i]; }

  float dot(const SbVec2f & v) const { return vec[0] * v[0] + vec[1] * v[1]; }
  SbBool equals(const SbVec2f & v, float tolerance) const;
  float length(void) const;
  float sqrLength(void) const { return vec[0] * vec[0] + vec[1] * vec[1]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; }
  float normalize(void);

  SbVec2f & operator *= (float d) { vec[0] *= d; vec[1] *= d; return *this; }
  SbVec2f & operator /= (float d) { SbDividerChk("SbVec2f::operator/=(float)", d); return operator *= (1.0f / d); }
  SbVec2f & operator += (const SbVec2f & v) { vec[0] += v[0]; vec[1] += v[1]; return *this; }
  SbVec2f & operator -= (const SbVec2f & v) { vec[0] -= v[0]; vec[1] -= v[1]; return *this; }
  SbVec2f operator - (void) const { return SbVec2f(-vec[0], -vec[1]); }

  SbString toString() const;
  SbBool fromString(const SbString & str);

  void print(FILE * fp) const;

protected:
  float vec[2];

};

 inline SbVec2f operator * (const SbVec2f & v, float d) {
  SbVec2f val(v); val *= d; return val;
}

 inline SbVec2f operator * (float d, const SbVec2f & v) {
  SbVec2f val(v); val *= d; return val;
}

 inline SbVec2f operator / (const SbVec2f & v, float d) {
  SbDividerChk("operator/(SbVec2f,float)", d);
  SbVec2f val(v); val /= d; return val;
}

 inline SbVec2f operator + (const SbVec2f & v1, const SbVec2f & v2) {
  SbVec2f v(v1); v += v2; return v;
}

 inline SbVec2f operator - (const SbVec2f & v1, const SbVec2f & v2) {
  SbVec2f v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec2f & v1, const SbVec2f & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]));
}

 inline int operator != (const SbVec2f & v1, const SbVec2f & v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/SbViewportRegion.h"
class SbViewportRegion {
public:
  SbViewportRegion(void);
  SbViewportRegion(short width, short height);
  SbViewportRegion(SbVec2s winSize);
  SbViewportRegion(const SbViewportRegion & vpReg);

  void setWindowSize(short width, short height);
  void setWindowSize(SbVec2s winSize);
  void setViewport(float left, float bottom,
                   float width, float height);
  void setViewport(SbVec2f origin, SbVec2f size);
  void setViewportPixels(short left, short bottom,
                         short width, short height);
  void setViewportPixels(SbVec2s origin, SbVec2s size);
  const SbVec2s & getWindowSize(void) const;
  const SbVec2f & getViewportOrigin(void) const;
  const SbVec2s & getViewportOriginPixels(void) const;
  const SbVec2f & getViewportSize(void) const;
  const SbVec2s & getViewportSizePixels(void) const;
  float getViewportAspectRatio(void) const;
  void scaleWidth(float ratio);
  void scaleHeight(float ratio);
  void setPixelsPerInch(float ppi);
  float getPixelsPerInch(void) const;
  float getPixelsPerPoint(void) const;
  friend int operator ==(const SbViewportRegion & reg1,
                                      const SbViewportRegion & reg2);

  friend int operator !=(const SbViewportRegion & reg1,
                                      const SbViewportRegion & reg2);

  void print(FILE * file) const;

private:
  SbVec2s winsize;
  SbVec2f vporigin;
  SbVec2f vpsize;
  SbVec2s vporigin_s;
  SbVec2s vpsize_s;
  float pixperinch;
};

 int operator ==(const SbViewportRegion & reg1, const SbViewportRegion & reg2);
 int operator !=(const SbViewportRegion & reg1, const SbViewportRegion & reg2);
#line 44 "coin/include/Inventor/actions/SoGLRenderAction.h"
typedef void SoGLRenderPassCB(void * userdata);
typedef void SoGLPreRenderCB(void * userdata, class SoGLRenderAction * action);
typedef float SoGLSortedObjectOrderCB(void * userdata, SoGLRenderAction * action);

class SoGLRenderActionP;

class SoGLRenderAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoGLRenderAction(const SbViewportRegion & viewportregion);
  virtual ~SoGLRenderAction(void);

  enum TransparencyType {
    SCREEN_DOOR,
    ADD, DELAYED_ADD, SORTED_OBJECT_ADD,
    BLEND, DELAYED_BLEND, SORTED_OBJECT_BLEND,

    SORTED_OBJECT_SORTED_TRIANGLE_ADD,
    SORTED_OBJECT_SORTED_TRIANGLE_BLEND,
    NONE, SORTED_LAYERS_BLEND
  };

  enum TransparentDelayedObjectRenderType {
    ONE_PASS,
    NONSOLID_SEPARATE_BACKFACE_PASS
  };

  enum AbortCode {
    CONTINUE, ABORT, PRUNE, DELAY
  };

  enum SortedObjectOrderStrategy {
    BBOX_CENTER,
    BBOX_CLOSEST_CORNER,
    BBOX_FARTHEST_CORNER,
    CUSTOM_CALLBACK
  };

  typedef AbortCode SoGLRenderAbortCB(void * userdata);

  void setViewportRegion(const SbViewportRegion & newregion);
  const SbViewportRegion & getViewportRegion(void) const;
  void setUpdateArea(const SbVec2f & origin, const SbVec2f & size);
  void getUpdateArea(SbVec2f & origin, SbVec2f & size) const;
  void setAbortCallback(SoGLRenderAbortCB * const func, void * const userdata);
  void getAbortCallback(SoGLRenderAbortCB * & func_out, void * & userdata_out) const;
  void setTransparencyType(const TransparencyType type);
  TransparencyType getTransparencyType(void) const;
  void setTransparentDelayedObjectRenderType(TransparentDelayedObjectRenderType type);
  TransparentDelayedObjectRenderType getTransparentDelayedObjectRenderType(void) const;
  void setSmoothing(const SbBool smooth);
  SbBool isSmoothing(void) const;
  void setNumPasses(const int num);
  int getNumPasses(void) const;
  void setPassUpdate(const SbBool flag);
  SbBool isPassUpdate(void) const;
  void setPassCallback(SoGLRenderPassCB * const func, void * const userdata);
  void setCacheContext(const uint32_t context);
  uint32_t getCacheContext(void) const;

  void addDelayedPath(SoPath * path);
  SbBool isRenderingDelayedPaths(void) const;

  SbBool handleTransparency(SbBool istransparent = 0);
  void setCurPass(const int passnum, const int numpasses);
  int getCurPass(void) const;
  SbBool abortNow(void);

  void setRenderingIsRemote(SbBool isremote);
  SbBool getRenderingIsRemote(void) const;

  virtual void invalidateState(void);

  void addPreRenderCallback(SoGLPreRenderCB * func, void * userdata);
  void removePreRenderCallback(SoGLPreRenderCB * func, void * userdata);

  void setSortedLayersNumPasses(int num);
  int getSortedLayersNumPasses(void) const;

  void setSortedObjectOrderStrategy(const SortedObjectOrderStrategy strategy,
                                    SoGLSortedObjectOrderCB * cb = ((void *)0),
                                    void * closure = ((void *)0));

  void setDelayedObjDepthWrite(SbBool write);
  SbBool getDelayedObjDepthWrite(void) const;

  SbBool isRenderingTranspPaths(void) const;
  SbBool isRenderingTranspBackfaces(void) const;

protected:
  friend class SoGLRenderActionP;
  virtual void beginTraversal(SoNode * node);
  virtual void endTraversal(SoNode * node);

private:
  SbPimplPtr<SoGLRenderActionP> pimpl;

  SoGLRenderAction(const SoGLRenderAction & rhs);
  SoGLRenderAction & operator = (const SoGLRenderAction & rhs);

};
#line 39 "coin/include/Inventor/actions/SoBoxHighlightRenderAction.h"
class SoBoxHighlightRenderActionP;

class SoBoxHighlightRenderAction : public SoGLRenderAction {
  typedef SoGLRenderAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoBoxHighlightRenderAction(void);
  SoBoxHighlightRenderAction(const SbViewportRegion & viewportregion);
  virtual ~SoBoxHighlightRenderAction(void);

  virtual void apply(SoNode * node);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);
  void setVisible(const SbBool visible);
  SbBool isVisible(void) const;
  void setColor(const SbColor & color);
  const SbColor & getColor(void);
  void setLinePattern(unsigned short pattern);
  unsigned short getLinePattern(void) const;
  void setLineWidth(const float width);
  float getLineWidth(void) const;

protected:
  SbBool hlVisible;
#line 75 "coin/include/Inventor/actions/SoBoxHighlightRenderAction.h"
private:
  void init(void);
  void drawBoxes(SoPath * pathtothis, const SoPathList * pathlist);

private:
  SbPimplPtr<SoBoxHighlightRenderActionP> pimpl;


  SoBoxHighlightRenderAction(const SoBoxHighlightRenderAction & rhs);
  SoBoxHighlightRenderAction & operator = (const SoBoxHighlightRenderAction & rhs);
};
#line 39 "coin/include/Inventor/actions/SoLineHighlightRenderAction.h"
class SoLineHighlightRenderActionP;

class SoLineHighlightRenderAction : public SoGLRenderAction {
  typedef SoGLRenderAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoLineHighlightRenderAction(void);
  SoLineHighlightRenderAction(const SbViewportRegion & viewportregion);
  virtual ~SoLineHighlightRenderAction(void);

  virtual void apply(SoNode * node);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);
  void setVisible(const SbBool visible);
  SbBool isVisible(void) const;
  void setColor(const SbColor & color);
  const SbColor & getColor(void);
  void setLinePattern(uint16_t pattern);
  uint16_t getLinePattern(void) const;
  void setLineWidth(const float width);
  float getLineWidth(void) const;

protected:
  SbBool hlVisible;
#line 74 "coin/include/Inventor/actions/SoLineHighlightRenderAction.h"
private:
  SbPimplPtr<SoLineHighlightRenderActionP> pimpl;
  friend class SoLineHighlightRenderActionP;


  SoLineHighlightRenderAction(const SoLineHighlightRenderAction & rhs);
  SoLineHighlightRenderAction & operator = (const SoLineHighlightRenderAction & rhs);
};
#line 55 "coin/include/Inventor/tools/SbLazyPimplPtr.h"
template <class T>
class SbLazyPimplPtr {
public:
  SbLazyPimplPtr(void);
  SbLazyPimplPtr(T * initial);
  SbLazyPimplPtr(const SbLazyPimplPtr<T> & copy);
  ~SbLazyPimplPtr(void);

  void set(T * value);
  T & get(void) const;

  SbLazyPimplPtr<T> & operator = (const SbLazyPimplPtr<T> & copy);

  SbBool operator == (const SbLazyPimplPtr<T> & rhs) const;
  SbBool operator != (const SbLazyPimplPtr<T> & rhs) const;

  const T * operator -> (void) const;
  T * operator -> (void);

protected:
  T * getNew(void) const;

protected:
  mutable T * ptr;

};



class SbBox3d;
class SbBox3i32;
class SbBox3s;

class SbMatrix;

class SbBox3f {
public:
  SbBox3f(void) { makeEmpty(); }
  SbBox3f(float xmin, float ymin, float zmin, float xmax, float ymax, float zmax)
    : minpt(xmin, ymin, zmin), maxpt(xmax, ymax, zmax) { }
  SbBox3f(const SbVec3f & minpoint, const SbVec3f & maxpoint)
    : minpt(minpoint), maxpt(maxpoint) { }
  explicit SbBox3f(const SbBox3d & box) { setBounds(box); }
  explicit SbBox3f(const SbBox3s & box) { setBounds(box); }
  explicit SbBox3f(const SbBox3i32 & box) { setBounds(box); }

  SbBox3f & setBounds(float xmin, float ymin, float zmin, float xmax, float ymax, float zmax)
    { minpt.setValue(xmin, ymin, zmin); maxpt.setValue(xmax, ymax, zmax); return *this; }
  SbBox3f & setBounds(const SbVec3f & minpoint, const SbVec3f & maxpoint)
    { minpt = minpoint; maxpt = maxpoint; return *this; }
  SbBox3f & setBounds(const SbBox3d & box);
  SbBox3f & setBounds(const SbBox3s & box);
  SbBox3f & setBounds(const SbBox3i32 & box);

  void getBounds(float & xmin, float & ymin, float & zmin, float & xmax, float & ymax, float & zmax) const
    { minpt.getValue(xmin, ymin, zmin); maxpt.getValue(xmax, ymax, zmax); }
  void getBounds(SbVec3f & minpoint, SbVec3f & maxpoint) const
    { minpoint = minpt; maxpoint = maxpt; }

  const SbVec3f & getMin(void) const { return minpt; }
  SbVec3f & getMin(void) { return minpt; }
  const SbVec3f & getMax(void) const { return maxpt; }
  SbVec3f & getMax(void) { return maxpt; }

  void extendBy(const SbVec3f & pt);
  void extendBy(const SbBox3f & box);
  void transform(const SbMatrix & matrix);
  void makeEmpty(void);
  SbBool isEmpty(void) const { return maxpt[0] < minpt[0]; }
  SbBool hasVolume(void) const
    { return ((maxpt[0] > minpt[0]) && (maxpt[1] > minpt[1]) && (maxpt[2] > minpt[2])); }
  float getVolume(void) const
    { float dx = 0.0f, dy = 0.0f, dz = 0.0f; getSize(dx, dy, dz); return (dx * dy * dz); }

  SbBool intersect(const SbVec3f & pt) const;
  SbBool intersect(const SbBox3f & box) const;
  SbVec3f getClosestPoint(const SbVec3f & point) const;
  SbBool outside(const SbMatrix & mvp, int & cullbits) const;

  SbVec3f getCenter(void) const { return (minpt + maxpt) * 0.5f; }
  void getOrigin(float & originX, float & originY, float & originZ) const
    { minpt.getValue(originX, originY, originZ); }
  void getSize(float & sizeX, float & sizeY, float & sizeZ) const
    { if (isEmpty()) { sizeX = sizeY = sizeZ = 0; }
      else { sizeX = maxpt[0] - minpt[0]; sizeY = maxpt[1] - minpt[1]; sizeZ = maxpt[2] - minpt[2]; } }

  SbVec3f getSize(void) const {
    SbVec3f v;
    this->getSize(v[0], v[1], v[2]);
    return v;
  }
  void getSpan(const SbVec3f & dir, float & dmin, float & dmax) const;

  void print(FILE * file) const;

private:
  SbVec3f minpt, maxpt;

};

 inline int operator == (const SbBox3f & b1, const SbBox3f & b2) {
  return ((b1.getMin() == b2.getMin()) && (b1.getMax() == b2.getMax()));
}

 inline int operator != (const SbBox3f & b1, const SbBox3f & b2) {
  return !(b1 == b2);
}


class SbLine;
class SbRotation;
class SbVec3f;
class SbVec4f;
class SbDPMatrix;

typedef float SbMat[4][4];

class SbMatrix {
public:
  SbMatrix(void);
  SbMatrix(const float a11, const float a12, const float a13, const float a14,
           const float a21, const float a22, const float a23, const float a24,
           const float a31, const float a32, const float a33, const float a34,
           const float a41, const float a42, const float a43, const float a44);
  SbMatrix(const SbMat & matrix);
  SbMatrix(const SbMat * matrix);
  explicit SbMatrix(const SbDPMatrix & matrix);
  ~SbMatrix(void);

  void setValue(const SbMat & m);
  void setValue(const SbDPMatrix & m);
  void setValue(const float * pMat);
  const SbMat & getValue(void) const;

  void makeIdentity(void);
  void setRotate(const SbRotation & q);
  SbMatrix inverse(void) const;
  float det3(int r1, int r2, int r3,
             int c1, int c2, int c3) const;
  float det3(void) const;
  float det4(void) const;

  SbBool equals(const SbMatrix & m, float tolerance) const;


  void getValue(SbMat & m) const;
  static SbMatrix identity(void);
  void setScale(const float s);
  void setScale(const SbVec3f & s);
  void setTranslate(const SbVec3f & t);
  void setTransform(const SbVec3f & t, const SbRotation & r, const SbVec3f & s);
  void setTransform(const SbVec3f & t, const SbRotation & r, const SbVec3f & s,
                    const SbRotation & so);
  void setTransform(const SbVec3f & translation,
                    const SbRotation & rotation, const SbVec3f & scaleFactor,
                    const SbRotation & scaleOrientation, const SbVec3f & center);
  void getTransform(SbVec3f & t, SbRotation & r,
                    SbVec3f & s, SbRotation & so) const;
  void getTransform(SbVec3f & translation, SbRotation & rotation,
                    SbVec3f & scaleFactor, SbRotation & scaleOrientation,
                    const SbVec3f & center) const;
  SbBool factor(SbMatrix & r, SbVec3f & s, SbMatrix & u, SbVec3f & t,
                SbMatrix & proj) const;
  SbBool LUDecomposition(int index[4], float & d);
  void LUBackSubstitution(int index[4], float b[4]) const;
  SbMatrix transpose(void) const;
  SbMatrix & multRight(const SbMatrix & m);
  SbMatrix & multLeft(const SbMatrix & m);
  void multMatrixVec(const SbVec3f & src, SbVec3f & dst) const;
  void multVecMatrix(const SbVec3f & src, SbVec3f & dst) const;
  void multDirMatrix(const SbVec3f & src, SbVec3f & dst) const;
  void multLineMatrix(const SbLine & src, SbLine & dst) const;
  void multVecMatrix(const SbVec4f & src, SbVec4f & dst) const;

  void print(FILE * fp) const;

  operator float*(void);
  operator SbMat&(void);

  float * operator [](int i);
  const float * operator [](int i) const;

  SbMatrix & operator =(const SbMat & m);
  SbMatrix & operator =(const SbMatrix & m);
  SbMatrix & operator =(const SbRotation & q);
  SbMatrix & operator *=(const SbMatrix & m);

  friend SbMatrix operator *(const SbMatrix & m1, const SbMatrix & m2);
  friend int operator ==(const SbMatrix & m1, const SbMatrix & m2);
  friend int operator !=(const SbMatrix & m1, const SbMatrix & m2);

private:
  float matrix[4][4];

  void operator /=(const float v);
  void operator *=(const float v);
};

 SbMatrix operator *(const SbMatrix & m1, const SbMatrix & m2);
 int operator ==(const SbMatrix & m1, const SbMatrix & m2);
 int operator !=(const SbMatrix & m1, const SbMatrix & m2);
#line 40 "coin/include/Inventor/SbXfBox3f.h"
class SbXfBox3f : public SbBox3f {
  typedef SbBox3f inherited;

public:
  SbXfBox3f(void);
  SbXfBox3f(const SbVec3f & boxmin, const SbVec3f & boxmax);
  SbXfBox3f(const SbBox3f & box);
  ~SbXfBox3f();

  void setTransform(const SbMatrix & m);
  const SbMatrix & getTransform(void) const;
  const SbMatrix & getInverse(void) const;
  SbVec3f getCenter(void) const;
  void extendBy(const SbVec3f & pt);
  void extendBy(const SbBox3f & bb);
  void extendBy(const SbXfBox3f & bb);
  SbBool intersect(const SbVec3f & pt) const;
  SbBool intersect(const SbBox3f & bb) const;
  SbBool intersect(const SbXfBox3f & bb) const;
  void getSpan(const SbVec3f & direction, float & dMin, float & dMax) const;
  SbBox3f project(void) const;
  friend int operator ==(const SbXfBox3f & b1, const SbXfBox3f & b2);
  friend int operator !=(const SbXfBox3f & b1, const SbXfBox3f & b2);



  void transform(const SbMatrix & m);

  float getVolume(void) const;

  void print(FILE * file) const;

private:

  const SbVec3f & getMin(void) const {return SbBox3f::getMin(); }
  const SbVec3f & getMax(void) const { return SbBox3f::getMax(); }

  void calcInverse(void) const;
  void makeInvInvalid(void);

  SbMatrix matrix, invertedmatrix;
};

 int operator ==(const SbXfBox3f & b1, const SbXfBox3f & b2);
 int operator !=(const SbXfBox3f & b1, const SbXfBox3f & b2);
#line 43 "coin/include/Inventor/actions/SoGetBoundingBoxAction.h"
class SoGetBoundingBoxActionP;

class SoGetBoundingBoxAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoGetBoundingBoxAction(const SbViewportRegion & vp);
  virtual ~SoGetBoundingBoxAction(void);

  enum ResetType { TRANSFORM = 0x1, BBOX = 0x2, ALL = TRANSFORM | BBOX };

  void setViewportRegion(const SbViewportRegion & newregion);
  const SbViewportRegion & getViewportRegion(void) const;

  SbBox3f getBoundingBox(void) const;
  SbXfBox3f & getXfBoundingBox(void);

  const SbVec3f & getCenter(void) const;

  void setInCameraSpace(const SbBool flag);
  SbBool isInCameraSpace(void) const;

  void setResetPath(const SoPath * path, const SbBool resetbefore = 1,
                    const ResetType what = ALL);
  const SoPath * getResetPath(void) const;
  SbBool isResetPath(void) const;
  SbBool isResetBefore(void) const;
  SoGetBoundingBoxAction::ResetType getWhatReset(void) const;


  void checkResetBefore(void);
  void checkResetAfter(void);

  void extendBy(const SbBox3f & box);
  void extendBy(const SbXfBox3f & box);

  void setCenter(const SbVec3f & center, const SbBool transformcenter);
  SbBool isCenterSet(void) const;
  void resetCenter(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  enum { CENTER_SET = 0x1, CAMERA_SPACE = 0x2, RESET_BEFORE= 0x4 };

  SbXfBox3f bbox;
  SbVec3f center;
  SbViewportRegion vpregion;
  ResetType resettype;
  const SoPath * resetpath;
  unsigned int flags;

private:
  SbLazyPimplPtr<SoGetBoundingBoxActionP> pimpl;

  SoGetBoundingBoxAction(const SoGetBoundingBoxAction & rhs);
  SoGetBoundingBoxAction & operator = (const SoGetBoundingBoxAction & rhs);
};
coin/include/Inventor/SbRotation.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbRotation.h"
#include <cstdio>
coin/include/Inventor/SbVec4f.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbVec4f.h"
#include <cstdio>






class SbVec4d;
class SbVec4b;
class SbVec4s;
class SbVec4i32;
class SbVec3f;

class SbVec4f {
public:
  SbVec4f(void) { }
  SbVec4f(const float v[4]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; vec[3] = v[3]; }
  SbVec4f(float x, float y, float z, float w) { vec[0] = x; vec[1] = y; vec[2] = z; vec[3] = w; }
  explicit SbVec4f(const SbVec4d & v) { setValue(v); }
  explicit SbVec4f(const SbVec4b & v) { setValue(v); }
  explicit SbVec4f(const SbVec4s & v) { setValue(v); }
  explicit SbVec4f(const SbVec4i32 & v) { setValue(v); }

  SbVec4f & setValue(const float v[4]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; vec[3] = v[3]; return *this; }
  SbVec4f & setValue(float x, float y, float z, float w) { vec[0] = x; vec[1] = y; vec[2] = z; vec[3] = w; return *this; }
  SbVec4f & setValue(const SbVec4d & v);
  SbVec4f & setValue(const SbVec4b & v);
  SbVec4f & setValue(const SbVec4s & v);
  SbVec4f & setValue(const SbVec4i32 & v);

  const float * getValue(void) const { return vec; }
  void getValue(float & x, float & y, float & z, float & w) const { x = vec[0]; y = vec[1]; z = vec[2]; w = vec[3]; }

  float & operator [] (int i) { return vec[i]; }
  const float & operator [] (int i) const { return vec[i]; }

  SbBool equals(const SbVec4f & v, float tolerance) const;
  float dot(const SbVec4f & v) const { return vec[0] * v[0] + vec[1] * v[1] + vec[2] * v[2] + vec[3] * v[3]; }
  void getReal(SbVec3f & v) const;
  float length(void) const;
  float sqrLength(void) const { return vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2] + vec[3] * vec[3]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; vec[3] = -vec[3]; }
  float normalize(void);

  SbVec4f & operator *= (float d) { vec[0] *= d; vec[1] *= d; vec[2] *= d; vec[3] *= d; return *this; }
  SbVec4f & operator /= (float d) { SbDividerChk("SbVec4f::operator/=(float)", d); return operator *= (1.0f / d); }
  SbVec4f & operator += (const SbVec4f & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; vec[3] += v[3]; return *this; }
  SbVec4f & operator -= (const SbVec4f & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; vec[3] -= v[3]; return *this; }
  SbVec4f operator - (void) const { return SbVec4f(-vec[0], -vec[1], -vec[2], -vec[3]); }

  void print(FILE * fp) const;

protected:
  float vec[4];

};

 inline SbVec4f operator * (const SbVec4f & v, float d) {
  SbVec4f val(v); val *= d; return val;
}

 inline SbVec4f operator * (float d, const SbVec4f & v) {
  SbVec4f val(v); val *= d; return val;
}

 inline SbVec4f operator / (const SbVec4f & v, float d) {
  SbDividerChk("operator/(SbVec4f,float)", d);
  SbVec4f val(v); val /= d; return val;
}

 inline SbVec4f operator + (const SbVec4f & v1, const SbVec4f & v2) {
  SbVec4f v(v1); v += v2; return v;
}

 inline SbVec4f operator - (const SbVec4f & v1, const SbVec4f & v2) {
  SbVec4f v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec4f & v1, const SbVec4f & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]) && (v1[3] == v2[3]));
}

 inline int operator != (const SbVec4f & v1, const SbVec4f & v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/SbRotation.h"
class SbMatrix;
class SbVec3f;

class SbRotation {
public:
  SbRotation(void);
  SbRotation(const SbVec3f & axis, const float radians);
  SbRotation(const float q[4]);
  SbRotation(const float q0, const float q1, const float q2, const float q3);
  SbRotation(const SbMatrix & m);
  SbRotation(const SbVec3f & rotateFrom, const SbVec3f & rotateTo);
  const float * getValue(void) const;
  void getValue(float & q0, float & q1, float & q2, float & q3) const;
  SbRotation & setValue(const float q0, const float q1,
                        const float q2, const float q3);
  void getValue(SbVec3f & axis, float & radians) const;
  void getValue(SbMatrix & matrix) const;
  SbRotation & invert(void);
  SbRotation inverse(void) const;
  SbRotation & setValue(const float q[4]);
  SbRotation & setValue(const SbMatrix & m);
  SbRotation & setValue(const SbVec3f & axis, const float radians);
  SbRotation & setValue(const SbVec3f & rotateFrom, const SbVec3f & rotateTo);
  SbRotation & operator*=(const SbRotation & q);
  SbRotation & operator*=(const float s);
  friend int operator==(const SbRotation & q1, const SbRotation & q2);
  friend int operator!=(const SbRotation & q1, const SbRotation & q2);
  float operator[] (int n) const;

  SbBool equals(const SbRotation & r, float tolerance) const;
  friend SbRotation operator *(const SbRotation & q1, const SbRotation & q2);
  void multVec(const SbVec3f & src, SbVec3f & dst) const;

  void scaleAngle(const float scaleFactor);
  static SbRotation slerp(const SbRotation & rot0, const SbRotation & rot1,
                          float t);
  static SbRotation identity(void);

  SbString toString() const;
  SbBool fromString(const SbString & str);

  void print(FILE * fp) const;

private:
  SbVec4f quat;
};

 int operator ==(const SbRotation & q1, const SbRotation & q2);
 int operator !=(const SbRotation & q1, const SbRotation & q2);
 SbRotation operator *(const SbRotation & q1, const SbRotation & q2);

inline float SbRotation::operator[](int n) const
{

  return quat[n];
}
#line 44 "coin/include/Inventor/actions/SoGetMatrixAction.h"
class SoGetMatrixActionP;

class SoGetMatrixAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoGetMatrixAction(const SbViewportRegion & region);
  virtual ~SoGetMatrixAction(void);

  void setViewportRegion(const SbViewportRegion & region);
  const SbViewportRegion & getViewportRegion(void) const;

  SbMatrix & getMatrix(void);
  SbMatrix & getInverse(void);
  SbMatrix & getTextureMatrix(void);
  SbMatrix & getTextureInverse(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbMatrix matrix, invmatrix;
  SbMatrix texmatrix, invtexmatrix;
  SbViewportRegion viewportregion;

private:
  SbLazyPimplPtr<SoGetMatrixActionP> pimpl;


  SoGetMatrixAction(const SoGetMatrixAction & rhs);
  SoGetMatrixAction & operator = (const SoGetMatrixAction & rhs);
};
#line 41 "coin/include/Inventor/actions/SoGetPrimitiveCountAction.h"
class SoGetPrimitiveCountActionP;
class SbViewportRegion;

class SoGetPrimitiveCountAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoGetPrimitiveCountAction(void);
  SoGetPrimitiveCountAction(const SbViewportRegion & vp);

  virtual ~SoGetPrimitiveCountAction(void);

  int getTriangleCount(void) const;
  int getLineCount(void) const;
  int getPointCount(void) const;
  int getTextCount(void) const;
  int getImageCount(void) const;
  SbBool containsNoPrimitives(void);
  SbBool containsNonTriangleShapes(void);

  SbBool is3DTextCountedAsTriangles(void);
  void setCount3DTextAsTriangles(const SbBool flag);

  SbBool canApproximateCount(void);
  void setCanApproximate(const SbBool flag);

  void setDecimationValue(SoDecimationTypeElement::Type type,
                          float percentage = 1.0);
  SoDecimationTypeElement::Type getDecimationType(void);
  float getDecimationPercentage(void);

  void addNumTriangles(const int num);
  void addNumLines(const int num);
  void addNumPoints(const int num);
  void addNumText(const int num);
  void addNumImage(const int num);
  void incNumTriangles(void);
  void incNumLines(void);
  void incNumPoints(void);
  void incNumText(void);
  void incNumImage(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  int numtris;
  int numlines;
  int numpoints;
  int numtexts;
  int numimages;

  SbBool textastris;
  SbBool approx;
  SbBool nonvertexastris;
  SoDecimationTypeElement::Type decimationtype;
  float decimationpercentage;

private:
  void commonConstructor(const SbViewportRegion & vp);
  SbLazyPimplPtr<SoGetPrimitiveCountActionP> pimpl;


  SoGetPrimitiveCountAction(const SoGetPrimitiveCountAction & rhs);
  SoGetPrimitiveCountAction & operator = (const SoGetPrimitiveCountAction & rhs);
};
#line 39 "coin/include/Inventor/actions/SoHandleEventAction.h"
class SbViewportRegion;
class SoEvent;
class SoPickedPoint;
class SoPickedPointList;

class SoHandleEventActionP;

class SoHandleEventAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoHandleEventAction(const SbViewportRegion & viewportregion);
  virtual ~SoHandleEventAction(void);

  void setViewportRegion(const SbViewportRegion & newregion);
  const SbViewportRegion & getViewportRegion(void) const;
  void setEvent(const SoEvent * ev);
  const SoEvent * getEvent(void) const;
  void setHandled(void);
  SbBool isHandled(void) const;
  void setGrabber(SoNode * node);
  void releaseGrabber(void);
  SoNode * getGrabber(void) const;
  void setPickRoot(SoNode * node);
  SoNode * getPickRoot(void) const;
  void setPickRadius(const float radiusinpixels);
  float getPickRadius(void) const;
  const SoPickedPoint * getPickedPoint(void);
  const SoPickedPointList & getPickedPointList(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoHandleEventActionP> pimpl;


  SoHandleEventAction(const SoHandleEventAction & rhs);
  SoHandleEventAction & operator = (const SoHandleEventAction & rhs);
};
#line 41 "coin/include/Inventor/actions/SoPickAction.h"
class SoPickActionP;

class SoPickAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  void setViewportRegion(const SbViewportRegion & newregion);
  const SbViewportRegion & getViewportRegion(void) const;

  void enableCulling(const SbBool flag);
  SbBool isCullingEnabled(void) const;

protected:
  SoPickAction(const SbViewportRegion & viewportregion);
  virtual ~SoPickAction(void);

  virtual void beginTraversal(SoNode * node);

  SbViewportRegion vpRegion;

private:
  SbBool cullingenabled;

private:
  SbLazyPimplPtr<SoPickActionP> pimpl;


  SoPickAction(const SoPickAction & rhs);
  SoPickAction & operator = (const SoPickAction & rhs);
};
#line 38 "coin/include/Inventor/actions/SoRayPickAction.h"
class SbBox3f;
class SbLine;
class SbMatrix;
class SbVec2f;
class SbVec2s;
class SbVec3f;
class SbViewVolume;
class SbViewportRegion;
class SoPickedPoint;
class SoPickedPointList;
class SoRayPickActionP;

class SoRayPickAction : public SoPickAction {
  typedef SoPickAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  SoRayPickAction(const SbViewportRegion & viewportregion);
  virtual ~SoRayPickAction();
  static void initClass(void);

  void setPoint(const SbVec2s & viewportPoint);
  void setNormalizedPoint(const SbVec2f & normpoint);
  void setRadius(const float radiusinpixels);
  float getRadius(void) const;
  void setRay(const SbVec3f & start, const SbVec3f & direction,
              float neardistance = -1.0,
              float fardistance = -1.0);
  void setPickAll(const SbBool flag);
  SbBool isPickAll(void) const;
  const SoPickedPointList & getPickedPointList(void) const;
  SoPickedPoint * getPickedPoint(const int index = 0) const;


  void computeWorldSpaceRay(void);
  SbBool hasWorldSpaceRay(void) const;
  void setObjectSpace(void);
  void setObjectSpace(const SbMatrix & matrix);
  SbBool intersect(const SbVec3f & v0, const SbVec3f & v1, const SbVec3f & v2,
                   SbVec3f & intersection, SbVec3f & barycentric,
                   SbBool & front) const;
  SbBool intersect(const SbVec3f & v0, const SbVec3f & v1,
                   SbVec3f & intersection) const;
  SbBool intersect(const SbVec3f & point) const;
  SbBool intersect(const SbBox3f & box, const SbBool usefullviewvolume = 1);
  SbBool intersect(const SbBox3f & box, SbVec3f & intersection,
                   const SbBool usefullviewvolume = 1);
  const SbViewVolume & getViewVolume(void);
  const SbLine & getLine(void);
  SbBool isBetweenPlanes(const SbVec3f & intersection) const;
  SoPickedPoint * addIntersection(const SbVec3f & objectspacepoint, SbBool frontpick = 1);

  void reset(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoRayPickActionP> pimpl;


  SoRayPickAction(const SoRayPickAction & rhs);
  SoRayPickAction & operator = (const SoRayPickAction & rhs);
};
#line 42 "coin/include/Inventor/actions/SoSearchAction.h"
class SoSearchActionP;

class SoSearchAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoSearchAction(void);
  virtual ~SoSearchAction(void);

  enum LookFor { NODE = 1, TYPE = 2, NAME = 4 };
  enum Interest { FIRST, LAST, ALL };

  void setNode(SoNode * const node);
  SoNode * getNode(void) const;
  void setType(const SoType type, const SbBool chkderived = 1);
  SoType getType(SbBool & chkderived) const;
  void setName(const SbName name);
  SbName getName(void) const;
  void setFind(const int what);
  int getFind(void) const;
  void setInterest(const Interest interest);
  Interest getInterest(void) const;
  void setSearchingAll(const SbBool searchall);
  SbBool isSearchingAll(void) const;
  SoPath * getPath(void) const;
  SoPathList & getPaths(void);
  void reset(void);

  void setFound(void);
  SbBool isFound(void) const;
  void addPath(SoPath * const path);



  static SbBool duringSearchAll;

protected:
  virtual void beginTraversal(SoNode * node);

private:
  int lookfor;
  Interest interest;
  SbBool searchall, chkderived;
  SoNode * node;
  SoType type;
  SbName name;
  SoPath * path;
  SoPathList paths;

private:
  SbLazyPimplPtr<SoSearchActionP> pimpl;


  SoSearchAction(const SoSearchAction & rhs);
  SoSearchAction & operator = (const SoSearchAction & rhs);
};
#line 39 "coin/include/Inventor/actions/SoSimplifyAction.h"
class SoSimplifyActionP;

class SoSimplifyAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoSimplifyAction(void);
  virtual ~SoSimplifyAction(void);

  virtual void apply(SoNode * root);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoSimplifyActionP> pimpl;


  SoSimplifyAction(const SoSimplifyAction & rhs);
  SoSimplifyAction & operator = (const SoSimplifyAction & rhs);
};
#line 38 "coin/include/Inventor/actions/SoReorganizeAction.h"
class SoSimplifier;
class SoSeparator;
class SoReorganizeActionP;

class SoReorganizeAction : public SoSimplifyAction {
  typedef SoSimplifyAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoReorganizeAction(SoSimplifier * simplifier = ((void *)0));
  virtual ~SoReorganizeAction(void);

  SoSeparator * getSimplifiedSceneGraph(void) const;
  void generateNormals(SbBool onoff);
  SbBool areNormalGenerated(void) const;
  void generateTriangleStrips(SbBool onoff);
  SbBool areTriangleStripGenerated(void) const;
  void generateTexCoords(SbBool onoff);
  SbBool areTexCoordsGenerated(void) const;
  void generateVPNodes(SbBool onoff);
  SbBool areVPNodesGenerated(void);
  void matchIndexArrays(SbBool onoff);
  SbBool areIndexArraysMatched(void) const;
  SoSimplifier * getSimplifier(void) const;

  virtual void apply(SoNode * root);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);

  static void startReport(const char * msg);
  static void finishReport(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoReorganizeActionP> pimpl;


  SoReorganizeAction(const SoReorganizeAction & rhs);
  SoReorganizeAction & operator = (const SoReorganizeAction & rhs);
};
#line 40 "coin/include/Inventor/actions/SoWriteAction.h"
class SoWriteActionP;

class SoWriteAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  SoWriteAction(void);
  SoWriteAction(SoOutput * out);
  virtual ~SoWriteAction(void);

  static void initClass(void);

  SoOutput * getOutput(void) const;

  void continueToApply(SoNode * node);
  void continueToApply(SoPath * path);

protected:
  virtual void beginTraversal(SoNode * node);
  virtual SbBool shouldCompactPathLists(void) const;

private:
  void commonConstructor(SoOutput * out);

  SoOutput * outobj;
  SbBool localoutputalloc;
  SbBool continuing;

private:
  SbLazyPimplPtr<SoWriteActionP> pimpl;


  SoWriteAction(const SoWriteAction & rhs);
  SoWriteAction & operator = (const SoWriteAction & rhs);
};
#line 40 "coin/include/Inventor/actions/SoAudioRenderAction.h"
class SoAudioRenderActionP;

class SoAudioRenderAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoAudioRenderAction(void);
  virtual ~SoAudioRenderAction(void);

  static void callDoAction(SoAction *action, SoNode *node);
  static void callAudioRender(SoAction *action, SoNode *node);

protected:
  virtual void beginTraversal(SoNode *node);

private:
  SbLazyPimplPtr<SoAudioRenderActionP> pimpl;


  SoAudioRenderAction(const SoAudioRenderAction & rhs);
  SoAudioRenderAction & operator = (const SoAudioRenderAction & rhs);
};
#line 41 "coin/include/Inventor/collision/SoIntersectionDetectionAction.h"
struct SoIntersectingPrimitive {
  SoPath * path;
  enum PrimitiveType {
    SEGMENT = 2,
    LINE_SEGMENT = 2,
    TRIANGLE = 3
  } type;
  SbVec3f vertex[3];
  SbVec3f xf_vertex[3];
};

class SoIntersectionDetectionAction : public SoAction {
  typedef SoAction hinherited;
  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;
public:
  static void initClass(void);
  SoIntersectionDetectionAction(void);
  virtual ~SoIntersectionDetectionAction(void);

  enum Resp {
    NEXT_PRIMITIVE,
    NEXT_SHAPE,
    ABORT
  };

  typedef SoCallbackAction::Response SoIntersectionVisitationCB(void * closure, const SoPath * where);
  typedef SbBool SoIntersectionFilterCB(void * closure, const SoPath * p1, const SoPath * p2);
  typedef Resp SoIntersectionCB(void * closure, const SoIntersectingPrimitive * p1, const SoIntersectingPrimitive * p2);

  void setIntersectionDetectionEpsilon(float epsilon);
  float getIntersectionDetectionEpsilon(void) const;

  static void setIntersectionEpsilon(float epsilon);
  static float getIntersectionEpsilon(void);

  void setTypeEnabled(SoType type, SbBool enable);
  SbBool isTypeEnabled(SoType type, SbBool checkgroups = 0) const;

  void setManipsEnabled(SbBool enable);
  SbBool isManipsEnabled(void) const;

  void setDraggersEnabled(SbBool enable);
  SbBool isDraggersEnabled(void) const;

  void setShapeInternalsEnabled(SbBool enable);
  SbBool isShapeInternalsEnabled(void) const;

  void addVisitationCallback(SoType type, SoIntersectionVisitationCB * cb, void * closure);
  void removeVisitationCallback(SoType type, SoIntersectionVisitationCB * cb, void * closure);

  virtual void apply(SoNode * node);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & paths, SbBool obeysRules = 0);

  virtual void setFilterCallback(SoIntersectionFilterCB * cb, void * closure = ((void *)0));
  virtual void addIntersectionCallback(SoIntersectionCB * cb, void * closure  = ((void *)0));
  virtual void removeIntersectionCallback(SoIntersectionCB * cb, void * closure  = ((void *)0));

private:
  class PImpl;
  SbPimplPtr<PImpl> pimpl;

  SoIntersectionDetectionAction(const SoIntersectionDetectionAction & rhs);
  SoIntersectionDetectionAction & operator = (const SoIntersectionDetectionAction & rhs);

};
#line 39 "coin/include/Inventor/actions/SoToVRMLAction.h"
class SoToVRMLActionP;

class SoToVRMLAction : public SoAction {
  typedef SoAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoToVRMLAction(void);
  virtual ~SoToVRMLAction(void);

  virtual void apply(SoNode * node);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);

  SoNode * getVRMLSceneGraph(void) const;

  void expandSoFile(SbBool flag);
  SbBool areSoFileExpanded(void) const;

  void setUrlName(const SbString name);
  SbString getUrlName(void) const;

  void writeTexCoords(SbBool flag);
  SbBool areTexCoordWritten(void) const;

  void expandTexture2Node(SbBool flag);
  SbBool areTexture2NodeExpanded(void) const;

  void keepUnknownNodes(SbBool flag);
  SbBool areUnknownNodeKept(void) const;

  void convertInlineNodes(SbBool flag);
  SbBool doConvertInlineNodes(void) const;

  void conditionalConversion(SbBool flag);
  SbBool doConditionalConversion(void) const;

  void setVerbosity(SbBool flag);
  SbBool isVerbose(void) const;

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoToVRMLActionP> pimpl;
  friend class SoToVRMLActionP;


  SoToVRMLAction(const SoToVRMLAction & rhs);
  SoToVRMLAction & operator = (const SoToVRMLAction & rhs);
};
#line 38 "coin/include/Inventor/actions/SoToVRML2Action.h"
class SoToVRML2ActionP;

class SoToVRML2Action : public SoToVRMLAction {
  typedef SoToVRMLAction inherited;

  public:   virtual SoType getTypeId(void) const;   static SoType getClassTypeId(void);   static void addMethod(const SoType type, SoActionMethod method);   static void enableElement(const SoType type, const int stackindex);  protected:   virtual const SoEnabledElementsList & getEnabledElements(void) const;   static SoEnabledElementsList * getClassEnabledElements(void);   static SoActionMethodList * getClassActionMethods(void);  private:   static void atexit_cleanup(void);   static SoEnabledElementsList * enabledElements;   static SoActionMethodList * methods;   static SoType classTypeId;

public:
  static void initClass(void);

  SoToVRML2Action(void);
  virtual ~SoToVRML2Action(void);

  virtual void apply(SoNode * node);
  virtual void apply(SoPath * path);
  virtual void apply(const SoPathList & pathlist, SbBool obeysrules = 0);

  class SoVRMLGroup * getVRML2SceneGraph(void) const;

  void reuseAppearanceNodes(SbBool appearance);
  SbBool doReuseAppearanceNodes(void) const;

  void reusePropertyNodes(SbBool property);
  SbBool doReusePropertyNodes(void) const;

  void reuseGeometryNodes(SbBool geometry);
  SbBool doReuseGeometryNodes(void) const;

protected:
  virtual void beginTraversal(SoNode * node);

private:
  SbPimplPtr<SoToVRML2ActionP> pimpl;
  friend class SoToVRML2ActionP;


  SoToVRML2Action(const SoToVRML2Action & rhs);
  SoToVRML2Action & operator = (const SoToVRML2Action & rhs);
};
#line 38 "coin/include/Inventor/elements/SoCacheElement.h"
class SoCache;

class SoCacheElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoCacheElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoCacheElement::classTypeId.getName()); SoCacheElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoCacheElement();

public:
  virtual void init(SoState * state);

  virtual void push(SoState * state);
  virtual void pop(SoState * state, const SoElement * prevTopElement);

  static void set(SoState * const state, SoCache * const cache);
  SoCache * getCache(void) const;
  static SbBool anyOpen(SoState * const state);
  static void invalidate(SoState * const state);
  virtual SbBool matches(const SoElement * element) const;
  virtual SoElement * copyMatchInfo(void) const;
  SoCacheElement * getNextCacheElement(void) const;

  static void addElement(SoState * const state,
                         const SoElement * const element);
  static void addCacheDependency(SoState * const state, SoCache * const cache);
  static SbBool setInvalid(const SbBool newvalue);
  static SoCache * getCurrentCache(SoState * const state);

private:
  SoCache * cache;
  static SbBool invalidated;
};
#line 39 "coin/include/Inventor/misc/SoChildList.h"
class SoPath;
class SoAction;

class SoChildList : public SoNodeList {
  typedef SoNodeList inherited;

public:
  SoChildList(SoNode * const parent);
  SoChildList(SoNode * const parent, const int size);
  SoChildList(SoNode * const parent, const SoChildList & cl);
  ~SoChildList();

  void append(SoNode * const node);
  void insert(SoNode * const ptr, const int addbefore);
  void remove(const int index);
  void truncate(const int length);
  void copy(const SoChildList & cl);
  void set(const int index, SoNode * const node);

  void traverseInPath(SoAction * const action, const int numindices,
                      const int * indices);
  void traverse(SoAction * const action);
  void traverse(SoAction * const action, const int index);
  void traverse(SoAction * const action, SoNode * node);
  void traverse(SoAction * const action, const int first, const int last);

public:
  void addPathAuditor(SoPath * const path);
  void removePathAuditor(SoPath * const path);

private:
  SoNode * parent;
  SbList<SoPath *> auditors;
};
#line 38 "coin/include/Inventor/misc/SoProto.h"
class SoProto;
class SoInput;
class SoProtoInstance;
class SoProtoP;

typedef SoProto * SoFetchExternProtoCB(SoInput * in,
                                       const SbString * urls,
                                       const int numurls,
                                       void * closure);



class SoProto : public SoNode {
public:
  SoProto(const SbBool externproto = 0);

  static void setFetchExternProtoCallback(SoFetchExternProtoCB * cb,
                                          void * closure);

  virtual SoType getTypeId(void) const;
  static SoType getClassTypeId(void);

  static SoProto * findProto(const SbName & name);
  static void initClass(void);

  SoProtoInstance * createProtoInstance(void);
  void addISReference(SoNode * container,
                      const SbName & fieldname,
                      const SbName & interfacename);
  SbName findISReference(const SoFieldContainer * container,
                         const SbName & fieldname);

  void addReference(const SbName & name, SoBase * base);
  void removeReference(const SbName & name);
  SoBase * findReference(const SbName & name) const;

  void addRoute(const SbName & fromnode, const SbName & fromfield,
                const SbName & tonode, const SbName & tofield);

  SbName getProtoName(void) const;

  virtual SbBool readInstance(SoInput * input, unsigned short flags);
  virtual void write(SoWriteAction * action);

protected:

  virtual ~SoProto();
  virtual void destroy(void);

private:
  SbBool writeInterface(SoOutput * out);
  SbBool writeDefinition(SoWriteAction * action);

  SbBool readInterface(SoInput * in);
  SbBool readDefinition(SoInput * in);

  SbBool writeURLs(SoOutput * out);
  SoProtoP * pimpl;
  friend class SoProtoP;

  SbBool setupExtern(SoInput * in, SoProto * externproto);

  SoNode * createInstanceRoot(SoProtoInstance * inst) const;
  void connectISRefs(SoProtoInstance * inst, SoNode * src, SoNode * dst) const;
};
#line 43 "coin/include/Inventor/misc/SoProtoInstance.h"
class SoProto;
class SoSensor;

class SoProtoInstance : public SoNode {
  typedef SoNode inherited;




  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId;
protected:
  virtual const SoFieldData * getFieldData(void) const;
private:
  SoFieldData * classfielddata;

public:
  static void initClass(void);

  SoProtoInstance(SoProto * proto,
                  const SoFieldData * deffielddata);

  static SoProtoInstance * findProtoInstance(const SoNode * rootnode);
  void setRootNode(SoNode * root);
  SoNode * getRootNode(void);

  SoProto * getProtoDefinition(void) const;
  SbName getProtoName(void) const;

  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoProtoInstance();
  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual const char * getFileFormatName(void) const;

private:

  static void sensorCB(void * data, SoSensor * sensor);
  static void cleanupClass(void);
  void copyFieldData(const SoFieldData * src);

  class SoProtoInstanceP * pimpl;
};
coin/include/Inventor/SbViewVolume.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbViewVolume.h"
#include <cstdio>
coin/include/Inventor/SbDPViewVolume.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbDPViewVolume.h"
#include <cstdio>
coin/include/Inventor/SbVec3d.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbVec3d.h"
#include <cstdio>
#line 44 "coin/include/Inventor/SbVec3d.h"
class SbVec3f;
class SbVec3b;
class SbVec3s;
class SbVec3i32;
class SbDPPlane;

class SbVec3d {
public:
  SbVec3d(void) { }
  SbVec3d(const double v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; }
  SbVec3d(double x, double y, double z) { vec[0] = x; vec[1] = y; vec[2] = z; }
  explicit SbVec3d(const SbVec3f & v) { setValue(v); }
  explicit SbVec3d(const SbVec3b & v) { setValue(v); }
  explicit SbVec3d(const SbVec3s & v) { setValue(v); }
  explicit SbVec3d(const SbVec3i32 & v) { setValue(v); }
  SbVec3d(const SbDPPlane & p0, const SbDPPlane & p1, const SbDPPlane & p2);

  SbVec3d & setValue(const double v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; return *this; }
  SbVec3d & setValue(double x, double y, double z) { vec[0] = x; vec[1] = y; vec[2] = z; return *this; }
  SbVec3d & setValue(const SbVec3d & barycentric,
                     const SbVec3d & v0,
                     const SbVec3d & v1,
                     const SbVec3d & v2);
  SbVec3d & setValue(const SbVec3f & v);
  SbVec3d & setValue(const SbVec3b & v);
  SbVec3d & setValue(const SbVec3s & v);
  SbVec3d & setValue(const SbVec3i32 & v);

  const double * getValue(void) const { return vec; }
  void getValue(double & x, double & y, double & z) const { x = vec[0]; y = vec[1]; z = vec[2]; }

  double & operator [] (int i) { return vec[i]; }
  const double & operator [] (int i) const { return vec[i]; }

  SbVec3d cross(const SbVec3d & v) const;
  double dot(const SbVec3d & v) const { return vec[0] * v.vec[0] + vec[1] * v.vec[1] + vec[2] * v.vec[2]; }
  SbBool equals(const SbVec3d & v, double tolerance) const;
  SbVec3d getClosestAxis(void) const;
  double length(void) const;
  double sqrLength(void) const { return vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; }
  double normalize(void);

  SbVec3d & operator *= (double d) { vec[0] *= d; vec[1] *= d; vec[2] *= d; return *this; }
  SbVec3d & operator /= (double d) { SbDividerChk("SbVec3d::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec3d & operator += (const SbVec3d & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; return *this; }
  SbVec3d & operator -= (const SbVec3d & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; return *this; }
  SbVec3d operator - (void) const { return SbVec3d(-vec[0], -vec[1], -vec[2]); }

  SbString toString() const;
  SbBool fromString(const SbString & str);

  void print(FILE * fp) const;

private:
  double vec[3];

};

 inline SbVec3d operator * (const SbVec3d & v, double d) {
  SbVec3d val(v); val *= d; return val;
}

 inline SbVec3d operator * (double d, const SbVec3d & v) {
  SbVec3d val(v); val *= d; return val;
}

 inline SbVec3d operator / (const SbVec3d & v, double d) {
  SbDividerChk("operator/(SbVec3d,double)", d);
  SbVec3d val(v); val /= d; return val;
}

 inline SbVec3d operator + (const SbVec3d & v1, const SbVec3d & v2) {
  SbVec3d v(v1); v += v2; return v;
}

 inline SbVec3d operator - (const SbVec3d & v1, const SbVec3d & v2) {
  SbVec3d v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec3d & v1, const SbVec3d & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]));
}

 inline int operator != (const SbVec3d & v1, const SbVec3d & v2) {
  return !(v1 == v2);
}
#line 41 "coin/include/Inventor/SbDPViewVolume.h"
class SbBox3f;
class SbDPLine;
class SbDPMatrix;
class SbPlane;
class SbDPRotation;
class SbVec2d;
class SbViewVolume;

class SbDPViewVolume {
public:
  enum ProjectionType { ORTHOGRAPHIC = 0, PERSPECTIVE = 1 };

public:
  SbDPViewVolume(void);
  ~SbDPViewVolume(void);
  void getMatrices(SbDPMatrix& affine, SbDPMatrix& proj) const;
  SbDPMatrix getMatrix(void) const;
  SbDPMatrix getCameraSpaceMatrix(void) const;
  void projectPointToLine(const SbVec2d& pt, SbDPLine& line) const;
  void projectPointToLine(const SbVec2d& pt,
                          SbVec3d& line0, SbVec3d& line1) const;
  void projectToScreen(const SbVec3d& src, SbVec3d& dst) const;
  SbPlane getPlane(const double distFromEye) const;
  SbVec3d getSightPoint(const double distFromEye) const;
  SbVec3d getPlanePoint(const double distFromEye,
                        const SbVec2d& normPoint) const;
  SbDPRotation getAlignRotation(SbBool rightAngleOnly = 0) const;
  double getWorldToScreenScale(const SbVec3d& worldCenter,
                              double normRadius) const;
  SbVec2d projectBox(const SbBox3f& box) const;
  SbDPViewVolume narrow(double left, double bottom,
                      double right, double top) const;
  SbDPViewVolume narrow(const SbBox3f& box) const;
  void ortho(double left, double right,
             double bottom, double top,
             double nearval, double farval);
  void perspective(double fovy, double aspect,
                   double nearval, double farval);
  void frustum(double left, double right,
               double bottom, double top,
               double nearval, double farval);
  void rotateCamera(const SbDPRotation& q);
  void translateCamera(const SbVec3d& v);
  SbVec3d zVector(void) const;
  SbDPViewVolume zNarrow(double nearval, double farval) const;
  void scale(double factor);
  void scaleWidth(double ratio);
  void scaleHeight(double ratio);
  ProjectionType getProjectionType(void) const;
  const SbVec3d& getProjectionPoint(void) const;
  const SbVec3d& getProjectionDirection(void) const;
  double getNearDist(void) const;
  double getWidth(void) const;
  double getHeight(void) const;
  double getDepth(void) const;

  void print(FILE * fp) const;
  void getViewVolumePlanes(SbPlane planes[6]) const;
  void transform(const SbDPMatrix &matrix);
  SbVec3d getViewUp(void) const;

  void copyValues(SbViewVolume & vv);

private:

  ProjectionType type;
  SbVec3d projPoint;
  SbVec3d projDir;
  double nearDist;
  double nearToFar;
  SbVec3d llf;
  SbVec3d lrf;
  SbVec3d ulf;

  void getPlaneRectangle(const double depth, SbVec3d & lowerleft,
                         SbVec3d & lowerright, SbVec3d & upperleft,
                         SbVec3d & upperright) const;
};
#line 42 "coin/include/Inventor/SbViewVolume.h"
class SbBox3f;
class SbLine;
class SbMatrix;
class SbPlane;
class SbRotation;
class SbVec2f;
class SbVec3f;

class SbViewVolume {
public:
  enum ProjectionType { ORTHOGRAPHIC = 0, PERSPECTIVE = 1 };

public:
  SbViewVolume(void);
  ~SbViewVolume(void);
  void getMatrices(SbMatrix& affine, SbMatrix& proj) const;
  SbMatrix getMatrix(void) const;
  SbMatrix getCameraSpaceMatrix(void) const;
  void projectPointToLine(const SbVec2f& pt, SbLine& line) const;
  void projectPointToLine(const SbVec2f& pt,
                          SbVec3f& line0, SbVec3f& line1) const;
  void projectToScreen(const SbVec3f& src, SbVec3f& dst) const;
  SbPlane getPlane(const float distFromEye) const;
  SbVec3f getSightPoint(const float distFromEye) const;
  SbVec3f getPlanePoint(const float distFromEye,
                        const SbVec2f& normPoint) const;
  SbRotation getAlignRotation(SbBool rightAngleOnly = 0) const;
  float getWorldToScreenScale(const SbVec3f& worldCenter,
                              float normRadius) const;
  SbVec2f projectBox(const SbBox3f& box) const;
  SbViewVolume narrow(float left, float bottom,
                      float right, float top) const;
  SbViewVolume narrow(const SbBox3f& box) const;
  void ortho(float left, float right,
             float bottom, float top,
             float nearval, float farval);
  void perspective(float fovy, float aspect,
                   float nearval, float farval);
  void frustum(float left, float right,
               float bottom, float top,
               float nearval, float farval);
  void rotateCamera(const SbRotation& q);
  void translateCamera(const SbVec3f& v);
  SbVec3f zVector(void) const;
  SbViewVolume zNarrow(float nearval, float farval) const;
  void scale(float factor);
  void scaleWidth(float ratio);
  void scaleHeight(float ratio);
  ProjectionType getProjectionType(void) const;
  const SbVec3f& getProjectionPoint(void) const;
  const SbVec3f& getProjectionDirection(void) const;
  float getNearDist(void) const;
  float getWidth(void) const;
  float getHeight(void) const;
  float getDepth(void) const;

  void print(FILE * fp) const;
  void getViewVolumePlanes(SbPlane planes[6]) const;
  void transform(const SbMatrix &matrix);
  SbVec3f getViewUp(void) const;

  SbBool intersect(const SbVec3f & p) const;
  SbBool intersect(const SbVec3f & p0, const SbVec3f & p1,
                   SbVec3f & closestpoint) const;
  SbBool intersect(const SbBox3f & box) const;
  SbBox3f intersectionBox(const SbBox3f & box) const;

  SbBool outsideTest(const SbPlane & p,
                     const SbVec3f & bmin, const SbVec3f & bmax) const;
  const SbDPViewVolume & getDPViewVolume(void) const;

public:
#line 120 "coin/include/Inventor/SbViewVolume.h"
  ProjectionType type;
  SbVec3f projPoint;
  SbVec3f projDir;
  float nearDist;
  float nearToFar;
  SbVec3f llf;
  SbVec3f lrf;
  SbVec3f ulf;

private:
  void getPlaneRectangle(const float depth, SbVec3f & lowerleft,
                         SbVec3f & lowerright, SbVec3f & upperleft,
                         SbVec3f & upperright) const;

  SbDPViewVolume dpvv;
};
#line 40 "coin/include/Inventor/fields/SoSFRotation.h"
class SoSFRotation : public SoSField {
  typedef SoSField inherited;

  public:   SoSFRotation(void);   virtual ~SoSFRotation();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFRotation::classTypeId.getName()); SoSFRotation::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFRotation & operator=(const SoSFRotation & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbRotation value;  public:   const SbRotation & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbRotation & newvalue);   const SbRotation & operator=(const SbRotation & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFRotation & field) const;   int operator!=(const SoSFRotation & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void getValue(SbVec3f & axis, float & angle) const;
  void setValue(const float q0, const float q1, const float q2, const float q3);
  void setValue(const float q[4]);
  void setValue(const SbVec3f & axis, const float angle);
};
#line 40 "coin/include/Inventor/fields/SoSFVec3f.h"
class SoSFVec3f : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec3f(void);   virtual ~SoSFVec3f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec3f::classTypeId.getName()); SoSFVec3f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec3f & operator=(const SoSFVec3f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec3f value;  public:   const SbVec3f & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec3f & newvalue);   const SbVec3f & operator=(const SbVec3f & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec3f & field) const;   int operator!=(const SoSFVec3f & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(float x, float y, float z);
  void setValue(const float xyz[3]);

};
#line 60 "coin/include/Inventor/nodes/SoCamera.h"
class SoPath;

class SoCameraP;

class SoCamera : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  enum ViewportMapping {
    CROP_VIEWPORT_FILL_FRAME,
    CROP_VIEWPORT_LINE_FRAME,
    CROP_VIEWPORT_NO_FRAME,
    ADJUST_CAMERA,
    LEAVE_ALONE
  };

  SoSFEnum viewportMapping;
  SoSFVec3f position;
  SoSFRotation orientation;
  SoSFFloat aspectRatio;
  SoSFFloat nearDistance;
  SoSFFloat farDistance;
  SoSFFloat focalDistance;

  SbViewVolume getViewVolume(const SbViewportRegion & vp,
                             SbViewportRegion & resultvp,
                             const SbMatrix & mm = SbMatrix::identity()) const;

  void pointAt(const SbVec3f & targetpoint);
  void pointAt(const SbVec3f & targetpoint, const SbVec3f & upvector);
  virtual void scaleHeight(float scalefactor) = 0;
  virtual SbViewVolume getViewVolume(float useaspectratio = 0.0f) const = 0;
  void viewAll(SoNode * const sceneroot, const SbViewportRegion & vpregion,
               const float slack = 1.0f);
  void viewAll(SoPath * const path, const SbViewportRegion & vpregion,
               const float slack = 1.0f);
  SbViewportRegion getViewportBounds(const SbViewportRegion & region) const;

  enum StereoMode {
    MONOSCOPIC,
    LEFT_VIEW,
    RIGHT_VIEW
  };

  void setStereoMode(StereoMode mode);
  StereoMode getStereoMode(void) const;

  void setStereoAdjustment(float adjustment);
  float getStereoAdjustment(void) const;
  void setBalanceAdjustment(float adjustment);
  float getBalanceAdjustment(void) const;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void audioRender(SoAudioRenderAction *action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void viewBoundingBox(const SbBox3f & box, float aspect,
                               float slack) = 0;
protected:
  SoCamera(void);
  virtual ~SoCamera();

  virtual void jitter(int numpasses, int curpass,
                      const SbViewportRegion & vpreg,
                      SbVec3f & jitteramount) const;

private:
  void getView(SoAction * action, SbViewVolume & resultvv,
               SbViewportRegion & resultvp,
               const SbBool considermodelmatrix = 1);

  void drawCroppedFrame(SoGLRenderAction * action,
                        const int viewportmapping,
                        const SbViewportRegion & oldvp,
                        const SbViewportRegion & newvp);

  void lookAt(const SbVec3f & dir, const SbVec3f & up);

  StereoMode stereomode;
  float stereoadjustment;
  float balanceadjustment;
private:
  SoCameraP *pimpl;
  friend class SoCameraP;
};
#line 39 "coin/include/Inventor/nodes/SoPerspectiveCamera.h"
class SoPerspectiveCamera : public SoCamera {
  typedef SoCamera inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPerspectiveCamera(void);

  SoSFFloat heightAngle;

  virtual void scaleHeight(float scalefactor);
  virtual SbViewVolume getViewVolume(float useaspectratio = 0.0f) const;
  virtual void viewBoundingBox(const SbBox3f & box, float aspect, float slack);

protected:
  virtual ~SoPerspectiveCamera();

};
#line 39 "coin/include/Inventor/nodes/SoReversePerspectiveCamera.h"
class SoReversePerspectiveCamera : public SoPerspectiveCamera {
  typedef SoPerspectiveCamera inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoReversePerspectiveCamera(void);

protected:
  virtual ~SoReversePerspectiveCamera();

};
#line 39 "coin/include/Inventor/nodes/SoOrthographicCamera.h"
class SoOrthographicCamera : public SoCamera {
  typedef SoCamera inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoOrthographicCamera(void);

  SoSFFloat height;

  virtual void scaleHeight(float scalefactor);
  virtual SbViewVolume getViewVolume(float useaspectratio = 0.0f) const;
  virtual void viewBoundingBox(const SbBox3f & box, float aspect, float slack);

protected:
  virtual ~SoOrthographicCamera();

};
#line 40 "coin/include/Inventor/nodes/SoFrustumCamera.h"
class SoFrustumCamera : public SoCamera {
  typedef SoCamera inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFrustumCamera(void);

  SoSFFloat left;
  SoSFFloat right;
  SoSFFloat top;
  SoSFFloat bottom;

  virtual void scaleHeight(float scalefactor);
  virtual SbViewVolume getViewVolume(float useaspectratio = 0.0f) const;

protected:
  virtual ~SoFrustumCamera();
  virtual void viewBoundingBox(const SbBox3f & box, float aspect, float slack);
};
#line 42 "coin/include/Inventor/elements/SoMultiTextureCoordinateElement.h"
typedef const SbVec4f & SoTextureCoordinateFunctionCB(void * userdata,
                                                      const SbVec3f & point,
                                                      const SbVec3f & normal);

class SoMultiTextureCoordinateElementP;

class SoMultiTextureCoordinateElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoMultiTextureCoordinateElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoMultiTextureCoordinateElement::classTypeId.getName()); SoMultiTextureCoordinateElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoMultiTextureCoordinateElement();

public:

  enum CoordType {
    NONE = 0,
    TEXGEN = 0,
    EXPLICIT = 1,
    FUNCTION = 2,
    DEFAULT = 3
  };

  virtual void init(SoState * state);

  static void setDefault(SoState * const state, SoNode * const node, const int unit = 0);
  static void setFunction(SoState * const state, SoNode * const node,
                          const int unit,
                          SoTextureCoordinateFunctionCB * const func,
                          void * const userdata);

  static void set2(SoState * const state, SoNode * const node,
                   const int unit,
                   const int32_t numCoords, const SbVec2f * const coords);
  static void set3(SoState * const state, SoNode * const node,
                   const int unit,
                   const int32_t numCoords, const SbVec3f * const coords);
  static void set4(SoState * const state, SoNode * const node,
                   const int unit,
                   const int32_t numCoords, const SbVec4f * const coords);

  static CoordType getType(SoState * const state, const int unit = 0);
  virtual CoordType getType(const int unit = 0) const;

  static const SoMultiTextureCoordinateElement * getInstance(SoState * const state);

  const SbVec4f & get(const int unit,
                      const SbVec3f & point,
                      const SbVec3f & normal) const;

  int32_t getNum(const int unit = 0) const;
  SbBool is2D(const int unit = 0) const;
  int32_t getDimension(const int unit = 0) const;

  const SbVec2f & get2(const int unit, const int index) const;
  const SbVec3f & get3(const int unit, const int index) const;
  const SbVec4f & get4(const int unit, const int index) const;

  const SbVec2f * getArrayPtr2(const int unit = 0) const;
  const SbVec3f * getArrayPtr3(const int unit = 0)  const;
  const SbVec4f * getArrayPtr4(const int unit = 0) const;

  class UnitData {
  public:
    UnitData();
    UnitData(const UnitData & org);

    SbUniqueId nodeid;
    CoordType whatKind;
    SoTextureCoordinateFunctionCB * funcCB;
    void * funcCBData;
    int32_t numCoords;
    const SbVec2f * coords2;
    const SbVec3f * coords3;
    const SbVec4f * coords4;
    int coordsDimension;
  };

  virtual void push(SoState * state);
  virtual SbBool matches(const SoElement * elem) const;
  SoElement * copyMatchInfo(void) const;


  const SbVec4f & get(const SbVec3f & point,
                      const SbVec3f & normal) const {
    return this->get(0, point, normal);
  }

  static void setFunction(SoState * const state,
                          SoNode * const node,
                          SoTextureCoordinateFunctionCB * const func,
                          void * const userdata) {
    setFunction(state, node, 0, func, userdata);
  }

  static void set2(SoState * const state, SoNode * const node,
                   const int32_t numCoords, const SbVec2f * const coords) {
    set2(state, node, 0, numCoords, coords);
  }
  static void set3(SoState * const state, SoNode * const node,
                   const int32_t numCoords, const SbVec3f * const coords) {
    set3(state, node, 0, numCoords, coords);
  }
  static void set4(SoState * const state, SoNode * const node,
                   const int32_t numCoords, const SbVec4f * const coords) {
    set4(state, node, 0, numCoords, coords);
  }
  const SbVec2f & get2(const int index) const {
    return this->get2(0, index);
  }
  const SbVec3f & get3(const int index) const {
    return this->get3(0, index);
  }
  const SbVec4f & get4(const int index) const {
    return this->get4(0, index);
  }


protected:
  int getMaxUnits() const;
  UnitData & getUnitData(const int unit);
  const UnitData & getUnitData(const int unit) const;
  SbVec2f convert2;
  SbVec3f convert3;
  SbVec4f convert4;

private:
  SoMultiTextureCoordinateElementP * pimpl;
};
#line 42 "coin/include/Inventor/nodes/SoShape.h"
class SoPrimitiveVertex;
class SoDetail;
class SoPickedPoint;
class SoFaceDetail;
class SoState;
class SoCoordinateElement;
class SbVec2f;
class SoMaterialBundle;
class SoBoundingBoxCache;

class SoShape : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  enum TriangleShape {
    TRIANGLE_STRIP, TRIANGLE_FAN, TRIANGLES, POLYGON,

    QUADS, QUAD_STRIP, POINTS, LINES, LINE_STRIP
  };

  virtual SbBool affectsState(void) const;
  virtual void notify(SoNotList * nl);

  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box,
                           SbVec3f & center) =  0;
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  static void getScreenSize(SoState * const state, const SbBox3f & boundingbox,
                            SbVec2s & rectsize);
  static float getDecimatedComplexity(SoState * state, float complexity);
  const SoBoundingBoxCache * getBoundingBoxCache(void) const;

protected:
  SoShape(void);
  virtual ~SoShape();

  float getComplexityValue(SoAction * action);
  virtual void generatePrimitives(SoAction * action) =  0;
  virtual SbBool shouldGLRender(SoGLRenderAction * action);
  void beginSolidShape(SoGLRenderAction * action);
  void endSolidShape(SoGLRenderAction * action);
  void GLRenderBoundingBox(SoGLRenderAction * action);
  SbBool shouldPrimitiveCount(SoGetPrimitiveCountAction * action);

  SbBool shouldRayPick(SoRayPickAction * const action);
  void computeObjectSpaceRay(SoRayPickAction * const action);
  void computeObjectSpaceRay(SoRayPickAction * const action,
                             const SbMatrix & matrix);
  virtual SoDetail * createTriangleDetail(SoRayPickAction * action,
                                          const SoPrimitiveVertex * v1,
                                          const SoPrimitiveVertex * v2,
                                          const SoPrimitiveVertex * v3,
                                          SoPickedPoint * pp);
  virtual SoDetail * createLineSegmentDetail(SoRayPickAction * action,
                                             const SoPrimitiveVertex * v1,
                                             const SoPrimitiveVertex * v2,
                                             SoPickedPoint * pp);
  virtual SoDetail * createPointDetail(SoRayPickAction * action,
                                       const SoPrimitiveVertex * v,
                                       SoPickedPoint * pp);

  void invokeTriangleCallbacks(SoAction * const action,
                               const SoPrimitiveVertex * const v1,
                               const SoPrimitiveVertex * const v2,
                               const SoPrimitiveVertex * const v3);
  void invokeLineSegmentCallbacks(SoAction * const action,
                                  const SoPrimitiveVertex * const v1,
                                  const SoPrimitiveVertex * const v2);
  void invokePointCallbacks(SoAction * const action,
                            const SoPrimitiveVertex * const v);
  void beginShape(SoAction * const action, const TriangleShape shapetype,
                  SoDetail * const detail = ((void *)0));
  void shapeVertex(const SoPrimitiveVertex * const v);
  void endShape(void);

  void generateVertex(SoPrimitiveVertex * const pv,
                      const SbVec3f & point,
                      const SbBool useTexFunc,
                      const SoMultiTextureCoordinateElement * const tce,
                      const float s,
                      const float t,
                      const SbVec3f & normal);
  void generateVertex(SoPrimitiveVertex * const pv,
                      const SbVec3f & point,
                      const SbBool useTexFunc,
                      const SoMultiTextureCoordinateElement * const tce,
                      const float s,
                      const float t,
                      const float r,
                      const SbVec3f & normal);

  SbBool startVertexArray(SoGLRenderAction * action,
                          const SoCoordinateElement * coords,
                          const SbVec3f * pervertexnormals,
                          const SbBool texpervertex,
                          const SbBool colorpervertex);

  void finishVertexArray(SoGLRenderAction * action,
                         const SbBool vbo,
                         const SbBool normpervertex,
                         const SbBool texpervertex,
                         const SbBool colorpervertex);
private:
  class SoShapeP * pimpl;
  void validatePVCache(SoGLRenderAction * action);
  void getBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  void rayPickBoundingBox(SoRayPickAction * action);
  friend class soshape_primdata;
  friend class so_generate_prim_private;
};
#line 40 "coin/include/Inventor/fields/SoMFString.h"
class SoMFString : public SoMField {
  typedef SoMField inherited;

  public:   SoMFString(void);   virtual ~SoMFString();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFString::classTypeId.getName()); SoMFString::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFString & operator=(const SoMFString & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbString * values; public:   const SbString & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbString * getValues(const int start) const     { this->evaluate(); return const_cast<const SbString *>(this->values + start); }   int find(const SbString & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbString * newvals);   void set1Value(const int idx, const SbString & value);   void setValue(const SbString & value);   const SbString & operator=(const SbString & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFString & field) const;   SbBool operator!=(const SoMFString & field) const { return !operator==(field); }   SbString * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

public:
  static void initClass(void);

  void setValues(const int start, const int num, const char * strings[]);
  void setValue(const char * string);
  void deleteText(const int fromline, const int fromchar,
                  const int toline, const int tochar);
};
#line 39 "coin/include/Inventor/fields/SoMFFloat.h"
class SoMFFloat : public SoMField {
  typedef SoMField inherited;

  public:   SoMFFloat(void);   virtual ~SoMFFloat();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFFloat::classTypeId.getName()); SoMFFloat::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFFloat & operator=(const SoMFFloat & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    float * values; public:   float operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const float * getValues(const int start) const     { this->evaluate(); return const_cast<const float *>(this->values + start); }   int find(float value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const float * newvals);   void set1Value(const int idx, float value);   void setValue(float value);   float operator=(float val) { this->setValue(val); return val; }   SbBool operator==(const SoMFFloat & field) const;   SbBool operator!=(const SoMFFloat & field) const { return !operator==(field); }   float * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const float * userdata);   void setValuesPointer(const int num, float * userdata);

public:
  static void initClass(void);

private:
  virtual int getNumValuesPerLine(void) const;
};
#line 44 "coin/include/Inventor/nodes/SoAsciiText.h"
class SoAsciiText : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoAsciiText(void);

  enum Justification {
    LEFT = 1,
    RIGHT,
    CENTER
  };

  SoMFString string;
  SoSFFloat spacing;
  SoSFEnum justification;
  SoMFFloat width;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoAsciiText();

  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  virtual void generatePrimitives(SoAction *);

  virtual SoDetail * createTriangleDetail(SoRayPickAction * action,
                                          const SoPrimitiveVertex * v1,
                                          const SoPrimitiveVertex * v2,
                                          const SoPrimitiveVertex * v3,
                                          SoPickedPoint * pp);
  virtual void notify(SoNotList * list);

private:
  class SoAsciiTextP * pimpl;
  friend class SoAsciiTextP;

  float getWidth(const int idx, const float fontsize);
};
#line 38 "coin/include/Inventor/fields/SoSFBitMask.h"
class SoSFBitMask : public SoSFEnum {
  typedef SoSFEnum inherited;

  public:   SoSFBitMask(void);   virtual ~SoSFBitMask();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFBitMask::classTypeId.getName()); SoSFBitMask::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFBitMask & operator=(const SoSFBitMask & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; public:   int operator=(int newvalue) { this->setValue(newvalue); return this->value; };

public:
  static void initClass(void);

  friend class SoMFBitMask;
};
#line 41 "coin/include/Inventor/nodes/SoCone.h"
class SoCone : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCone(void);

  enum Part {
    SIDES   = 0x01,
    BOTTOM  = 0x02,
    ALL     = (SIDES|BOTTOM)
  };

  SoSFBitMask parts;
  SoSFFloat bottomRadius;
  SoSFFloat height;

  void addPart(SoCone::Part part);
  void removePart(SoCone::Part part);
  SbBool hasPart(SoCone::Part part) const;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoCone();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
};
#line 40 "coin/include/Inventor/nodes/SoCube.h"
class SoIndexedFaceSet;

class SoCube : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCube(void);

  SoSFFloat width;
  SoSFFloat height;
  SoSFFloat depth;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoCube();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

private:
  void getHalfSize(float & w, float & h, float & d);
};
#line 41 "coin/include/Inventor/nodes/SoCylinder.h"
class SoCylinder : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCylinder(void);

  enum Part {
    SIDES =  0x1,
    TOP =    0x2,
    BOTTOM = 0x4,
    ALL =    SIDES|TOP|BOTTOM
  };

  SoSFFloat radius;
  SoSFFloat height;
  SoSFBitMask parts;

  void addPart(SoCylinder::Part part);
  void removePart(SoCylinder::Part part);
  SbBool hasPart(SoCylinder::Part part) const;

  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoCylinder();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
};
#line 44 "coin/include/Inventor/fields/SoSFNode.h"
class SoNode;


class SoSFNode : public SoSField {
  typedef SoSField inherited;

  public:   SoSFNode(void);   virtual ~SoSFNode();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFNode::classTypeId.getName()); SoSFNode::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFNode & operator=(const SoSFNode & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SoNode * value;  public:   SoNode * getValue(void) const { this->evaluate(); return this->value; }   void setValue(SoNode * newvalue);   SoNode * operator=(SoNode * newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFNode & field) const;   int operator!=(const SoSFNode & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  virtual void fixCopy(SbBool copyconnections);
  virtual SbBool referencesCopy(void) const;

private:
  virtual void countWriteRefs(SoOutput * out) const;


  friend class SoMFNode;
};
#line 39 "coin/include/Inventor/fields/SoMFUInt32.h"
class SoMFUInt32 : public SoMField {
  typedef SoMField inherited;

  public:   SoMFUInt32(void);   virtual ~SoMFUInt32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFUInt32::classTypeId.getName()); SoMFUInt32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFUInt32 & operator=(const SoMFUInt32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    uint32_t * values; public:   uint32_t operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const uint32_t * getValues(const int start) const     { this->evaluate(); return const_cast<const uint32_t *>(this->values + start); }   int find(uint32_t value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const uint32_t * newvals);   void set1Value(const int idx, uint32_t value);   void setValue(uint32_t value);   uint32_t operator=(uint32_t val) { this->setValue(val); return val; }   SbBool operator==(const SoMFUInt32 & field) const;   SbBool operator!=(const SoMFUInt32 & field) const { return !operator==(field); }   uint32_t * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const uint32_t * userdata);   void setValuesPointer(const int num, uint32_t * userdata);

public:
  static void initClass(void);

private:
  virtual int getNumValuesPerLine(void) const;
};
#line 40 "coin/include/Inventor/fields/SoMFVec3f.h"
class SoMFVec3f : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec3f(void);   virtual ~SoMFVec3f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec3f::classTypeId.getName()); SoMFVec3f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec3f & operator=(const SoMFVec3f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec3f * values; public:   const SbVec3f & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec3f * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec3f *>(this->values + start); }   int find(const SbVec3f & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec3f * newvals);   void set1Value(const int idx, const SbVec3f & value);   void setValue(const SbVec3f & value);   const SbVec3f & operator=(const SbVec3f & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec3f & field) const;   SbBool operator!=(const SoMFVec3f & field) const { return !operator==(field); }   SbVec3f * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };
  void setValuesPointer(const int num, const SbVec3f * userdata);   void setValuesPointer(const int num, SbVec3f * userdata);
  void setValuesPointer(const int num, const float * userdata);   void setValuesPointer(const int num, float * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const float xyz[][3]);
  void set1Value(int idx, float x, float y, float z);
  void set1Value(int idx, const float xyz[3]);
  void setValue(float x, float y, float z);
  void setValue(const float xyz[3]);

};
#line 40 "coin/include/Inventor/fields/SoMFVec2f.h"
class SoMFVec2f : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec2f(void);   virtual ~SoMFVec2f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec2f::classTypeId.getName()); SoMFVec2f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec2f & operator=(const SoMFVec2f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec2f * values; public:   const SbVec2f & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec2f * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec2f *>(this->values + start); }   int find(const SbVec2f & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec2f * newvals);   void set1Value(const int idx, const SbVec2f & value);   void setValue(const SbVec2f & value);   const SbVec2f & operator=(const SbVec2f & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec2f & field) const;   SbBool operator!=(const SoMFVec2f & field) const { return !operator==(field); }   SbVec2f * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const SbVec2f * userdata);   void setValuesPointer(const int num, SbVec2f * userdata);
  void setValuesPointer(const int num, const float * userdata);   void setValuesPointer(const int num, float * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const float xy[][2]);
  void set1Value(int idx, float x, float y);
  void set1Value(int idx, const float xy[2]);
  void setValue(float x, float y);
  void setValue(const float xy[2]);

};
#line 39 "coin/include/Inventor/fields/SoMFInt32.h"
class SoMFInt32 : public SoMField {
  typedef SoMField inherited;

  public:   SoMFInt32(void);   virtual ~SoMFInt32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFInt32::classTypeId.getName()); SoMFInt32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFInt32 & operator=(const SoMFInt32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    int32_t * values; public:   int32_t operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const int32_t * getValues(const int start) const     { this->evaluate(); return const_cast<const int32_t *>(this->values + start); }   int find(int32_t value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const int32_t * newvals);   void set1Value(const int idx, int32_t value);   void setValue(int32_t value);   int32_t operator=(int32_t val) { this->setValue(val); return val; }   SbBool operator==(const SoMFInt32 & field) const;   SbBool operator!=(const SoMFInt32 & field) const { return !operator==(field); }   int32_t * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const int32_t * userdata);   void setValuesPointer(const int num, int32_t * userdata);

public:
  static void initClass(void);

private:
  virtual int getNumValuesPerLine(void) const;
};
#line 43 "coin/include/Inventor/nodes/SoVertexProperty.h"
class SoVertexPropertyP;
class SoState;

class SoVertexProperty : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoVertexProperty(void);


  enum Binding {
    OVERALL = 2,
    PER_PART,
    PER_PART_INDEXED,
    PER_FACE,
    PER_FACE_INDEXED,
    PER_VERTEX,
    PER_VERTEX_INDEXED
  };

  SoMFVec3f vertex;
  SoMFVec2f texCoord;
  SoMFVec3f texCoord3;
  SoMFVec3f normal;
  SoSFEnum normalBinding;
  SoMFUInt32 orderedRGBA;
  SoSFEnum materialBinding;
  SoMFInt32 textureUnit;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoVertexProperty();
  virtual void notify(SoNotList *list);

private:
  void updateVertex(SoState * state, SbBool glrender, SbBool vbo);
  void updateTexCoord(SoState * state, SbBool glrender, SbBool vbo);
  void updateNormal(SoState * state, uint32_t overrideflags, SbBool glrender, SbBool vbo);
  void updateMaterial(SoState * state, uint32_t overrideflags, SbBool glrender, SbBool vbo);
  SoVertexPropertyP * pimpl;
};
#line 44 "coin/include/Inventor/nodes/SoVertexShape.h"
class SoNormalBundle;
class SoNormalCache;
class SbVec3f;
class SoCoordinateElement;
class SoVertexShapeP;

class SoVertexShape : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  SoSFNode vertexProperty;

  virtual void notify(SoNotList * nl);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalBundle * bundle);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalCache * cache);
  virtual void write(SoWriteAction * action);

protected:
  SoVertexShape(void);
  virtual ~SoVertexShape();

  virtual SbBool shouldGLRender(SoGLRenderAction * action);

  void setNormalCache(SoState * const state,
                      const int num, const SbVec3f * normals);
  SoNormalCache * getNormalCache(void) const;

  SoNormalCache * generateAndReadLockNormalCache(SoState * const state);
  void getVertexData(SoState * state,
                     const SoCoordinateElement *& coords,
                     const SbVec3f *& normals,
                     const SbBool neednormals);

  void readLockNormalCache(void);
  void readUnlockNormalCache(void);

private:
  void writeLockNormalCache(void);
  void writeUnlockNormalCache(void);
  SoVertexShapeP * pimpl;
};
#line 41 "coin/include/Inventor/nodes/SoNonIndexedShape.h"
class SoNonIndexedShape : public SoVertexShape {
  typedef SoVertexShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  SoSFInt32 startIndex;

protected:
  SoNonIndexedShape(void);
  virtual ~SoNonIndexedShape();

  void computeCoordBBox(SoAction * action, int numVertices,
                        SbBox3f & box, SbVec3f & center);

  void fixNumVerticesPointers(SoState *state, const int32_t *&start, const int32_t *&end,
                              int32_t *dummyarray) const;

};
#line 40 "coin/include/Inventor/nodes/SoFaceSet.h"
class SoFaceSetP;

class SoFaceSet : public SoNonIndexedShape {
  typedef SoNonIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFaceSet(void);

  SoMFInt32 numVertices;

  virtual void GLRender(SoGLRenderAction * action);
  virtual SbBool generateDefaultNormals(SoState * state, SoNormalBundle * nb);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoFaceSet();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache *);

private:
  enum Binding {
    OVERALL = 0,
    PER_FACE,
    PER_VERTEX
  };

  Binding findMaterialBinding(SoState * const state) const;
  Binding findNormalBinding(SoState * const state) const;
  SbBool useConvexCache(SoAction * action);
  virtual void notify(SoNotList * list);

  SoFaceSetP * pimpl;
};
#line 40 "coin/include/Inventor/nodes/SoLineSet.h"
class SoLineSet : public SoNonIndexedShape {
  typedef SoNonIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoLineSet(void);

public:
  SoMFInt32 numVertices;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoLineSet();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

private:
  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache * nc);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalBundle * bundle);

  enum Binding {
    OVERALL = 0,
    PER_LINE,
    PER_SEGMENT,
    PER_VERTEX
  };

  Binding findNormalBinding(SoState * const state) const;
  Binding findMaterialBinding(SoState * const state) const;
};
#line 40 "coin/include/Inventor/nodes/SoPointSet.h"
class SoPointSet : public SoNonIndexedShape {
  typedef SoNonIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPointSet(void);

  SoSFInt32 numPoints;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoPointSet();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache * nc);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalBundle * bundle);

private:
  enum Binding {
    OVERALL = 0,
    PER_VERTEX
  };

  Binding findNormalBinding(SoState * const state) const;
  Binding findMaterialBinding(SoState * const state) const;
};
#line 40 "coin/include/Inventor/nodes/SoMarkerSet.h"
class SoMarkerSet : public SoPointSet {
  typedef SoPointSet inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoMarkerSet(void);

  enum MarkerType {
    NONE = -1,
    CROSS_5_5, PLUS_5_5, MINUS_5_5, SLASH_5_5, BACKSLASH_5_5, BAR_5_5,
    STAR_5_5, Y_5_5, LIGHTNING_5_5, WELL_5_5,

    CIRCLE_LINE_5_5, SQUARE_LINE_5_5, DIAMOND_LINE_5_5, TRIANGLE_LINE_5_5,
    RHOMBUS_LINE_5_5, HOURGLASS_LINE_5_5, SATELLITE_LINE_5_5,
    PINE_TREE_LINE_5_5, CAUTION_LINE_5_5, SHIP_LINE_5_5,

    CIRCLE_FILLED_5_5, SQUARE_FILLED_5_5, DIAMOND_FILLED_5_5,
    TRIANGLE_FILLED_5_5, RHOMBUS_FILLED_5_5, HOURGLASS_FILLED_5_5,
    SATELLITE_FILLED_5_5, PINE_TREE_FILLED_5_5, CAUTION_FILLED_5_5,
    SHIP_FILLED_5_5,

    CROSS_7_7, PLUS_7_7, MINUS_7_7, SLASH_7_7, BACKSLASH_7_7, BAR_7_7,
    STAR_7_7, Y_7_7, LIGHTNING_7_7, WELL_7_7,

    CIRCLE_LINE_7_7, SQUARE_LINE_7_7, DIAMOND_LINE_7_7, TRIANGLE_LINE_7_7,
    RHOMBUS_LINE_7_7, HOURGLASS_LINE_7_7, SATELLITE_LINE_7_7,
    PINE_TREE_LINE_7_7, CAUTION_LINE_7_7, SHIP_LINE_7_7,

    CIRCLE_FILLED_7_7, SQUARE_FILLED_7_7, DIAMOND_FILLED_7_7,
    TRIANGLE_FILLED_7_7, RHOMBUS_FILLED_7_7, HOURGLASS_FILLED_7_7,
    SATELLITE_FILLED_7_7, PINE_TREE_FILLED_7_7, CAUTION_FILLED_7_7,
    SHIP_FILLED_7_7,

    CROSS_9_9, PLUS_9_9, MINUS_9_9, SLASH_9_9, BACKSLASH_9_9, BAR_9_9,
    STAR_9_9, Y_9_9, LIGHTNING_9_9, WELL_9_9,

    CIRCLE_LINE_9_9, SQUARE_LINE_9_9, DIAMOND_LINE_9_9, TRIANGLE_LINE_9_9,
    RHOMBUS_LINE_9_9, HOURGLASS_LINE_9_9, SATELLITE_LINE_9_9,
    PINE_TREE_LINE_9_9, CAUTION_LINE_9_9, SHIP_LINE_9_9,

    CIRCLE_FILLED_9_9, SQUARE_FILLED_9_9, DIAMOND_FILLED_9_9,
    TRIANGLE_FILLED_9_9, RHOMBUS_FILLED_9_9, HOURGLASS_FILLED_9_9,
    SATELLITE_FILLED_9_9, PINE_TREE_FILLED_9_9, CAUTION_FILLED_9_9,
    SHIP_FILLED_9_9,
    NUM_MARKERS
  };

  SoMFInt32 markerIndex;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  static int getNumDefinedMarkers(void);
  static void addMarker(int idx, const SbVec2s & size,
                        const unsigned char * bytes, SbBool isLSBFirst = 1,
                        SbBool isUpToDown = 1);
  static SbBool getMarker(int idx, SbVec2s & size,
                          const unsigned char *& bytes, SbBool & isLSBFirst);
  static SbBool removeMarker(int idx);
  static SbBool isMarkerBitSet(int idx, int bitNumber);

protected:
  virtual ~SoMarkerSet();

private:
  enum Binding {
    OVERALL = 0,
    PER_VERTEX
  };
  Binding findMaterialBinding(SoState * const state) const;
};
#line 40 "coin/include/Inventor/nodes/SoQuadMesh.h"
class SoQuadMesh : public SoNonIndexedShape {
  typedef SoNonIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoQuadMesh(void);

  SoSFInt32 verticesPerColumn;
  SoSFInt32 verticesPerRow;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  virtual SbBool generateDefaultNormals(SoState * state, SoNormalBundle * nb);

protected:
  virtual ~SoQuadMesh();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache *);

private:
  enum Binding {
    OVERALL = 0,
    PER_ROW,
    PER_FACE,
    PER_VERTEX,
    NONE = OVERALL
  };

  Binding findMaterialBinding(SoState * const state) const;
  Binding findNormalBinding(SoState * const state) const;
};
#line 40 "coin/include/Inventor/nodes/SoTriangleStripSet.h"
class SoTriangleStripSet : public SoNonIndexedShape {
  typedef SoNonIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTriangleStripSet(void);

  SoMFInt32 numVertices;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual SbBool generateDefaultNormals(SoState * state, SoNormalBundle * nb);

protected:
  virtual ~SoTriangleStripSet();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache *);

private:
  enum Binding {
    OVERALL = 0,
    PER_STRIP,
    PER_FACE,
    PER_VERTEX
  };

  Binding findMaterialBinding(SoState * const state) const;
  Binding findNormalBinding(SoState * const state) const;
};
#line 40 "coin/include/Inventor/nodes/SoIndexedShape.h"
class SoCoordinateElement;

class SoIndexedShape : public SoVertexShape {
  typedef SoVertexShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  SoMFInt32 coordIndex;
  SoMFInt32 materialIndex;
  SoMFInt32 normalIndex;
  SoMFInt32 textureCoordIndex;

protected:
  SoIndexedShape(void);
  virtual ~SoIndexedShape();

  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  int getNumVerts(const int startCoord);
  void setupIndices(const int numParts, const int numFaces,
                    const SbBool needNormals, const SbBool needTexCoords);

  const int32_t * getNormalIndices(void);
  const int32_t * getColorIndices(void);
  const int32_t * getTexCoordIndices(void);

  static SbBool areTexCoordsIndexed(SoAction * action);

  SbBool getVertexData(SoState * state,
                       const SoCoordinateElement *& coords,
                       const SbVec3f *& normals,
                       const int32_t *& cindices,
                       const int32_t *& nindices,
                       const int32_t *& tindices,
                       const int32_t *& mindices,
                       int & numcindices,
                       const SbBool needNormals,
                       SbBool & normalCacheUsed);
};
#line 43 "coin/include/Inventor/nodes/SoIndexedFaceSet.h"
class SoIndexedFaceSetP;

class SoIndexedFaceSet : public SoIndexedShape {
  typedef SoIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedFaceSet(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalBundle * bundle);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalCache * cache);

protected:
  virtual ~SoIndexedFaceSet();

  virtual void generatePrimitives(SoAction * action);

private:
  enum Binding {
    OVERALL = 0,
    PER_FACE,
    PER_FACE_INDEXED,
    PER_VERTEX,
    PER_VERTEX_INDEXED,
    NONE = OVERALL
  };

  SbBool useConvexCache(SoAction * action,
                        const SbVec3f * normals,
                        const int32_t * nindices,
                        const SbBool normalsfromcache);
  Binding findMaterialBinding(SoState * const state) const;
  Binding findNormalBinding(SoState * const state) const;
  virtual void notify(SoNotList * list);

  SoIndexedFaceSetP * pimpl;
};
#line 43 "coin/include/Inventor/nodes/SoIndexedLineSet.h"
class SoIndexedLineSetP;

class SoIndexedLineSet : public SoIndexedShape {
  typedef SoIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedLineSet(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoIndexedLineSet();
  virtual void notify(SoNotList * list);

private:
  virtual void generatePrimitives(SoAction * action);

  virtual SbBool generateDefaultNormals(SoState * state, SoNormalBundle * bundle);
  virtual SbBool generateDefaultNormals(SoState * state, SoNormalCache * nc);

  enum Binding {
    OVERALL = 0,
    PER_SEGMENT,
    PER_SEGMENT_INDEXED,
    PER_LINE,
    PER_LINE_INDEXED,
    PER_VERTEX,
    PER_VERTEX_INDEXED
  };

  Binding findNormalBinding(SoState * state);
  Binding findMaterialBinding(SoState * state);

  SoIndexedLineSetP * pimpl;
};
#line 39 "coin/include/Inventor/nodes/SoIndexedPointSet.h"
class SoVertexArrayIndexer;
class SoGLCoordinateElement;
class SoTextureCoordinateBundle;

class SoIndexedPointSet : public SoIndexedShape {
  typedef SoIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedPointSet(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void notify(SoNotList * list);

protected:
  virtual ~SoIndexedPointSet();

  virtual void generatePrimitives(SoAction * action);

  virtual SbBool generateDefaultNormals(SoState *, SoNormalCache * nc);
  virtual SbBool generateDefaultNormals(SoState * state,
                                        SoNormalBundle * bundle);
  SoVertexArrayIndexer * vaindexer;

  enum Binding {
    OVERALL,
    PER_VERTEX,
    PER_VERTEX_INDEXED
  };

  Binding findNormalBinding(SoState * const state) const;
  Binding findMaterialBinding(SoState * const state) const;
  Binding findTextureBinding(SoState * const state) const;

};
#line 39 "coin/include/Inventor/nodes/SoIndexedMarkerSet.h"
class SoGLCoordinateElement;
class SoTextureCoordinateBundle;

class SoIndexedMarkerSet : public SoIndexedPointSet {
  typedef SoIndexedPointSet inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedMarkerSet(void);

  SoMFInt32 markerIndex;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoIndexedMarkerSet();

private:

};
#line 45 "coin/include/Inventor/nodes/SoIndexedTriangleStripSet.h"
class SoIndexedTriangleStripSet : public SoIndexedShape {
  typedef SoIndexedShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedTriangleStripSet(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual SbBool generateDefaultNormals(SoState * state, SoNormalBundle * nb);

protected:
  virtual ~SoIndexedTriangleStripSet();

  virtual SbBool generateDefaultNormals(SoState * state, SoNormalCache * nc);
  virtual void generatePrimitives(SoAction * action);

private:
  enum Binding {
    OVERALL = 0,
    PER_STRIP,
    PER_STRIP_INDEXED,
    PER_TRIANGLE,
    PER_TRIANGLE_INDEXED,
    PER_VERTEX,
    PER_VERTEX_INDEXED
  };

  void countPrimitives(int & strips, int & tris);
  Binding findMaterialBinding(SoState * const state) const;
  Binding findNormalBinding(SoState * const state) const;
};
#line 43 "coin/include/Inventor/nodes/SoImage.h"
class SoSensor;
class SoFieldSensor;
class SbImage;

class SoImage : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoImage(void);

  enum VertAlignment {
    BOTTOM,
    HALF,
    TOP
  };

  enum HorAlignment {
    LEFT,
    CENTER,
    RIGHT
  };

  SoSFInt32 width;
  SoSFInt32 height;
  SoSFEnum vertAlignment;
  SoSFEnum horAlignment;
  SoSFImage image;
  SoSFString filename;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoImage();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void notify(SoNotList * list);
  int getReadStatus(void);
  void setReadStatus(SbBool flag);

private:
  SbVec2s getSize(void) const;
  static SbVec3f getNilpoint(SoState *state);
  void getQuad(SoState *state, SbVec3f &v0, SbVec3f &v1,
               SbVec3f &v2, SbVec3f &v3);

  const unsigned char * getImage(SbVec2s & size, int & nc);
  SbBool loadFilename(void);
  SbBool readstatus;
  SbImage * resizedimage;
  SbBool resizedimagevalid;
  class SoFieldSensor * filenamesensor;
  SbBool transparency;
  SbBool testtransparency;
  void testTransparency(void);
  static void filenameSensorCB(void *, SoSensor *);
};
#line 42 "coin/include/Inventor/nodes/SoIndexedNurbsCurve.h"
template<class Master> class SoNurbsP;

class SoIndexedNurbsCurve : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedNurbsCurve(void);

  SoSFInt32 numControlPoints;
  SoMFInt32 coordIndex;
  SoMFFloat knotVector;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  void sendPrimitive(SoAction *,  SoPrimitiveVertex *);

protected:
  virtual ~SoIndexedNurbsCurve();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  virtual SoDetail * createLineSegmentDetail(SoRayPickAction * action,
                                             const SoPrimitiveVertex * v1,
                                             const SoPrimitiveVertex * v2,
                                             SoPickedPoint * pp);
private:
  class SoIndexedNurbsCurveP * pimpl;
  friend class SoIndexedNurbsCurveP;
  friend class SoNurbsP<SoIndexedNurbsCurve>;
};
#line 42 "coin/include/Inventor/nodes/SoIndexedNurbsSurface.h"
template<class Master> class SoNurbsP;

class SoIndexedNurbsSurface : public SoShape {
    typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoIndexedNurbsSurface(void);

  SoSFInt32 numUControlPoints;
  SoSFInt32 numVControlPoints;
  SoMFInt32 coordIndex;
  SoMFFloat uKnotVector;
  SoMFFloat vKnotVector;
  SoSFInt32 numSControlPoints;
  SoSFInt32 numTControlPoints;
  SoMFInt32 textureCoordIndex;
  SoMFFloat sKnotVector;
  SoMFFloat tKnotVector;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  void sendPrimitive(SoAction *,  SoPrimitiveVertex *);

protected:
  virtual ~SoIndexedNurbsSurface();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  SoDetail * createTriangleDetail(SoRayPickAction * action,
                                  const SoPrimitiveVertex * v1,
                                  const SoPrimitiveVertex * v2,
                                  const SoPrimitiveVertex * v3,
                                  SoPickedPoint * pp);
private:
  class SoIndexedNurbsSurfaceP * pimpl;
  friend class SoIndexedNurbsSurfaceP;
  friend class SoNurbsP<SoIndexedNurbsSurface>;
};
#line 41 "coin/include/Inventor/nodes/SoNurbsCurve.h"
template<class Master> class SoNurbsP;

class SoNurbsCurve : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoNurbsCurve(void);

  SoSFInt32 numControlPoints;
  SoMFFloat knotVector;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  void sendPrimitive(SoAction *,  SoPrimitiveVertex *);

protected:
  virtual ~SoNurbsCurve();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  virtual SoDetail * createLineSegmentDetail(SoRayPickAction * action,
                                             const SoPrimitiveVertex * v1,
                                             const SoPrimitiveVertex * v2,
                                             SoPickedPoint * pp);
private:
  class SoNurbsCurveP * pimpl;
  friend class SoNurbsCurveP;
  friend class SoNurbsP<SoNurbsCurve>;
};
#line 41 "coin/include/Inventor/nodes/SoNurbsSurface.h"
template<class Master> class SoNurbsP;

class SoNurbsSurface : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoNurbsSurface(void);

  SoSFInt32 numUControlPoints;
  SoSFInt32 numVControlPoints;
  SoSFInt32 numSControlPoints;
  SoSFInt32 numTControlPoints;
  SoMFFloat uKnotVector;
  SoMFFloat vKnotVector;
  SoMFFloat sKnotVector;
  SoMFFloat tKnotVector;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  void sendPrimitive(SoAction *,  SoPrimitiveVertex *);

protected:
  virtual ~SoNurbsSurface();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  SoDetail * createTriangleDetail(SoRayPickAction * action,
                                  const SoPrimitiveVertex * v1,
                                  const SoPrimitiveVertex * v2,
                                  const SoPrimitiveVertex * v3,
                                  SoPickedPoint * pp);
private:
  class SoNurbsSurfaceP * pimpl;
  friend class SoNurbsSurfaceP;
  friend class SoNurbsP<SoNurbsSurface>;
};
#line 40 "coin/include/Inventor/nodes/SoSphere.h"
class SoSphere : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSphere(void);

  SoSFFloat radius;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoSphere();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
};
#line 42 "coin/include/Inventor/nodes/SoText2.h"
class SoText2 : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoText2(void);

  enum Justification {
    LEFT = 1,
    RIGHT,
    CENTER
  };

  SoMFString string;
  SoSFFloat spacing;
  SoSFEnum justification;

  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoText2();

  virtual void generatePrimitives(SoAction * action);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);

private:
  class SoText2P * pimpl;
  friend class SoText2P;
};
#line 44 "coin/include/Inventor/nodes/SoText3.h"
class SoSensor;
class SoFieldSensor;

class SoText3 : public SoShape {
  typedef SoShape inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoText3(void);

  enum Part {
    FRONT = 1,
    SIDES = 2,
    BACK =  4,
    ALL = FRONT|BACK|SIDES
  };

  enum Justification {
    LEFT = 1,
    RIGHT,
    CENTER
  };

  SoMFString string;
  SoSFFloat spacing;
  SoSFEnum justification;
  SoSFBitMask parts;

  SbBox3f getCharacterBounds(SoState * state, int stringindex, int charindex);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoText3();

  virtual void generatePrimitives(SoAction *);
  virtual void computeBBox(SoAction * action, SbBox3f & box, SbVec3f & center);
  virtual SoDetail * createTriangleDetail(SoRayPickAction * action,
                                         const SoPrimitiveVertex * v1,
                                         const SoPrimitiveVertex * v2,
                                         const SoPrimitiveVertex * v3,
                                         SoPickedPoint * pp);

  virtual void notify(SoNotList *list);

private:
  class SoText3P * pimpl;
  friend class SoText3P;
  void render(SoState * state, unsigned int part);
  void generate(SoAction * action, unsigned int part);
};
#line 38 "coin/include/Inventor/nodes/SoGroup.h"
class SoGroupP;

class SoGroup : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoGroup(void);

  SoGroup(int nchildren);

  virtual void addChild(SoNode * node);
  virtual void insertChild(SoNode * child, int newchildindex);
  virtual SoNode * getChild(int index) const;
  virtual int findChild(const SoNode * node) const;
  virtual int getNumChildren(void) const;
  virtual void removeChild(int childindex);
  virtual void removeChild(SoNode * child);
  virtual void removeAllChildren(void);
  virtual void replaceChild(int index, SoNode * newchild);
  virtual void replaceChild(SoNode * oldchild, SoNode * newchild);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void pick(SoPickAction * action);
  virtual void search(SoSearchAction * action);
  virtual void write(SoWriteAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);
  virtual SoChildList * getChildren(void) const;
  virtual void addWriteReference(SoOutput * out, SbBool isfromfield = 0);

protected:
  virtual ~SoGroup();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual SbBool readChildren(SoInput * in);

  virtual void copyContents(const SoFieldContainer * from,
			    SbBool copyconnections);

  virtual SoNotRec createNotRec(void);

  void setOperation(const SoNotRec::OperationType opType = SoNotRec::UNSPECIFIED,
		    const SoNode * cc = ((void *)0),
		    const SoNode * pc = ((void *)0),
		    const int ci = -1);

  SoChildList * children;

private:
  friend class SoUnknownNode;
  SoGroupP * pimpl;

  int changedIndex;
  const SoNode * changedChild;
  const SoNode * changedPrevChild;
  SoNotRec::OperationType operationType;
};
#line 41 "coin/include/Inventor/nodes/SoSeparator.h"
class SoState;
class SoSeparatorP;

class SoSeparator : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSeparator(void);
  SoSeparator(const int nchildren);

  enum CacheEnabled {
    OFF, ON, AUTO
  };

  SoSFEnum renderCaching;
  SoSFEnum boundingBoxCaching;
  SoSFEnum renderCulling;
  SoSFEnum pickCulling;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);
  virtual void GLRenderOffPath(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void search(SoSearchAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

  virtual void notify(SoNotList * nl);

  static void setNumRenderCaches(const int howmany);
  static int getNumRenderCaches(void);
  virtual SbBool affectsState(void) const;

protected:
  virtual ~SoSeparator();

  virtual SbBool cullTest(SoState * state);
  virtual SbBool cullTest(SoGLRenderAction * action, int & cullresults);
  virtual SbBool readInstance(SoInput * in, unsigned short flags);

private:
  void commonConstructor(void);
  SbBool cullTestNoPush(SoState * state);

  static int numrendercaches;

  SbPimplPtr<SoSeparatorP> pimpl;


  SoSeparator(const SoSeparator & rhs);
  SoSeparator & operator = (const SoSeparator & rhs);

};
#line 39 "coin/include/Inventor/nodes/SoAnnotation.h"
class SoAnnotation : public SoSeparator {
  typedef SoSeparator inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoAnnotation(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);
  virtual void GLRenderOffPath(SoGLRenderAction * action);

protected:
  virtual ~SoAnnotation();
};
#line 41 "coin/include/Inventor/nodes/SoSelection.h"
class SoSelection;
class SoPath;
class SoPickedPoint;
class SoCallbackList;

typedef void SoSelectionPathCB(void * data, SoPath * path);
typedef void SoSelectionClassCB(void * data, SoSelection * sel);
typedef SoPath * SoSelectionPickCB(void * data, const SoPickedPoint * pick);

class SoSelection : public SoSeparator {
  typedef SoSeparator inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSelection(void);

  enum Policy {
    SINGLE, TOGGLE, SHIFT, DISABLE
  };

  SoSFEnum policy;

  SoSelection(const int nChildren);

  void select(const SoPath * path);
  void select(SoNode *node);
  void deselect(const SoPath * path);
  void deselect(const int which);
  void deselect(SoNode * node);
  void toggle(const SoPath * path);
  void toggle(SoNode * node);
  SbBool isSelected(const SoPath * path) const;
  SbBool isSelected(SoNode * node) const;
  void deselectAll(void);
  int getNumSelected(void) const;
  const SoPathList * getList(void) const;
  SoPath * getPath(const int index) const;
  SoPath * operator[](const int i) const;
  void addSelectionCallback(SoSelectionPathCB * f, void * userData = ((void *)0));
  void removeSelectionCallback(SoSelectionPathCB * f, void * userData = ((void *)0));
  void addDeselectionCallback(SoSelectionPathCB * f, void * userData = ((void *)0));
  void removeDeselectionCallback(SoSelectionPathCB * f,
                                 void * userData = ((void *)0));
  void addStartCallback(SoSelectionClassCB * f, void * userData = ((void *)0));
  void removeStartCallback(SoSelectionClassCB * f, void * userData = ((void *)0));
  void addFinishCallback(SoSelectionClassCB * f, void * userData = ((void *)0));
  void removeFinishCallback(SoSelectionClassCB * f, void * userData = ((void *)0));
  void setPickFilterCallback(SoSelectionPickCB * f, void * userData = ((void *)0),
                             const SbBool callOnlyIfSelectable = 1);
  void setPickMatching(const SbBool pickMatching);
  SbBool isPickMatching(void) const;
  SbBool getPickMatching(void) const;
  void addChangeCallback(SoSelectionClassCB * f, void * userData = ((void *)0));
  void removeChangeCallback(SoSelectionClassCB * f, void * userData = ((void *)0));

protected:
  virtual ~SoSelection();

  void invokeSelectionPolicy(SoPath *path, SbBool shiftDown);
  void performSingleSelection(SoPath *path);
  void performToggleSelection(SoPath *path);
  SoPath * copyFromThis(const SoPath * path) const;
  void addPath(SoPath *path);
  void removePath(const int which);
  int findPath(const SoPath *path) const;

  virtual void handleEvent(SoHandleEventAction * action);

protected:

  SoPathList selectionList;

  SoCallbackList *selCBList;
  SoCallbackList *deselCBList;
  SoCallbackList *startCBList;
  SoCallbackList *finishCBList;

  SoSelectionPickCB *pickCBFunc;
  void *pickCBData;
  SbBool callPickCBOnlyIfSelectable;

  SoCallbackList *changeCBList;

  SoPath *mouseDownPickPath;
  SbBool pickMatching;

private:
  void init();
  SoPath *searchNode(SoNode * node) const;
  SoPath *getSelectionPath(SoHandleEventAction *action,
                           SbBool &ignorepick, SbBool &haltaction);
};
coin/include/Inventor/nodes/SoExtSelection.h:39 error: Include file 'cstddef' not found
#line 39 "coin/include/Inventor/nodes/SoExtSelection.h"
#include <cstddef>





class SbColor;
class SbVec3f;
class SbVec2f;
class SbVec2s;
class SbViewportRegion;
class SoPrimitiveVertex;
#line 55 "coin/include/Inventor/nodes/SoExtSelection.h"
class SoExtSelectionP;


typedef SbBool SoExtSelectionTriangleCB(void * userdata,
                                        SoCallbackAction * action,
                                        const SoPrimitiveVertex * v1,
                                        const SoPrimitiveVertex * v2,
                                        const SoPrimitiveVertex * v3);

typedef SbBool SoExtSelectionLineSegmentCB(void * userdata,
                                           SoCallbackAction * action,
                                           const SoPrimitiveVertex * v1,
                                           const SoPrimitiveVertex * v2);

typedef SbBool SoExtSelectionPointCB(void * userdata,
                                     SoCallbackAction * action,
                                     const SoPrimitiveVertex * v1);

typedef SoPath * SoLassoSelectionFilterCB(void * userdata, const SoPath * path);


class SoExtSelection : public SoSelection {
  typedef SoSelection inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoExtSelection(void);

  enum LassoType {
    NOLASSO, LASSO, RECTANGLE
  };

  enum LassoPolicy {
    FULL_BBOX, PART_BBOX, FULL, PART
  };

  enum LassoMode {
    ALL_SHAPES,
    VISIBLE_SHAPES
  };

  SoSFEnum lassoType;
  SoSFEnum lassoPolicy;
  SoSFEnum lassoMode;

  void useOverlay(SbBool overlay = 1);
  SbBool isUsingOverlay(void);
  SoSeparator * getOverlaySceneGraph(void);
  void setOverlayLassoColorIndex(const int index);
  int getOverlayLassoColorIndex(void);
  void setLassoColor(const SbColor & color);
  const SbColor & getLassoColor(void);
  void setLassoWidth(const float width);
  float getLassoWidth(void);
  void setOverlayLassoPattern(const unsigned short pattern);
  unsigned short getOverlayLassoPattern(void);
  void animateOverlayLasso(const SbBool animate = 1);
  SbBool isOverlayLassoAnimated(void);

  virtual void handleEvent(SoHandleEventAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);

  void select(SoNode * root, int numcoords, SbVec2f * lasso,
              const SbViewportRegion & vp, SbBool shiftpolicy);
  void select(SoNode * root, int numcoords, SbVec3f * lasso,
              const SbViewportRegion & vp, SbBool shiftkeypolicy);
  const SbVec2s * getLassoCoordsDC(int & numCoords);
  const SbVec3f * getLassoCoordsWC(int & numCoords);
  const SoPathList & getSelectionPathList() const;

  void setLassoFilterCallback(SoLassoSelectionFilterCB * f, void * userdata = ((void *)0),
                              const SbBool callonlyifselectable = 1);

  void setTriangleFilterCallback(SoExtSelectionTriangleCB * func,
                                 void * userdata = ((void *)0));
  void setLineSegmentFilterCallback(SoExtSelectionLineSegmentCB * func,
                                    void * userdata = ((void *)0));
  void setPointFilterCallback(SoExtSelectionPointCB * func,
                              void * userdata = ((void *)0));
  SbBool wasShiftDown(void) const;

protected:
  virtual ~SoExtSelection();

private:
  void draw(SoGLRenderAction * action);

  friend class SoExtSelectionP;
  class SoExtSelectionP * pimpl;
};
#line 41 "coin/include/Inventor/nodes/SoLocateHighlight.h"
class SoFullPath;
class SoLocateHighlightP;

class SoLocateHighlight : public SoSeparator {
  typedef SoSeparator inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoLocateHighlight(void);

  enum Modes {
    AUTO, ON, OFF
  };

  enum Styles {
    EMISSIVE, EMISSIVE_DIFFUSE
  };

  SoSFColor color;
  SoSFEnum style;
  SoSFEnum mode;

  virtual void handleEvent(SoHandleEventAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);
  static void turnOffCurrentHighlight(SoGLRenderAction * action);

protected:
  virtual ~SoLocateHighlight();
  virtual void redrawHighlighted(SoAction * act, SbBool  flag);

private:

  static void turnoffcurrent(SoAction * action);
  void setOverride(SoGLRenderAction * action);

  SoLocateHighlightP * pimpl;
};
#line 41 "coin/include/Inventor/nodes/SoWWWAnchor.h"
class SoWWWAnchor;
class SoWWWAnchorP;

typedef void SoWWWAnchorCB(const SbString & url, void * data,
                           SoWWWAnchor * node);



class SoWWWAnchor : public SoLocateHighlight {
  typedef SoLocateHighlight inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoWWWAnchor(void);

  enum Mapping {
    NONE, POINT
  };

  SoSFString name;
  SoSFString description;
  SoSFEnum map;

  void setFullURLName(const SbString & url);
  const SbString & getFullURLName(void);

  virtual void handleEvent(SoHandleEventAction * action);

  static void setFetchURLCallBack(SoWWWAnchorCB * f, void * userData);
  static void setHighlightURLCallBack(SoWWWAnchorCB * f, void * userData);

protected:
  virtual ~SoWWWAnchor();
  virtual void redrawHighlighted(SoAction * act, SbBool isNowHighlighting);

private:
  SoWWWAnchorP * pimpl;
};
#line 39 "coin/include/Inventor/fields/SoSFShort.h"
class SoSFShort : public SoSField {
  typedef SoSField inherited;

  public:   SoSFShort(void);   virtual ~SoSFShort();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFShort::classTypeId.getName()); SoSFShort::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFShort & operator=(const SoSFShort & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   short value;  public:   short getValue(void) const { this->evaluate(); return this->value; }   void setValue(short newvalue);   short operator=(short newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFShort & field) const;   int operator!=(const SoSFShort & field) const { return ! operator==(field); };

public:
  static void initClass(void);
};
#line 42 "coin/include/Inventor/nodes/SoArray.h"
class SoArray : public SoGroup {
    typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoArray(void);

  enum Origin {
    FIRST, CENTER, LAST
  };

  SoSFEnum origin;
  SoSFShort numElements1;
  SoSFShort numElements2;
  SoSFShort numElements3;
  SoSFVec3f separation1;
  SoSFVec3f separation2;
  SoSFVec3f separation3;

  virtual SbBool affectsState(void) const;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void search(SoSearchAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

protected:
  virtual ~SoArray();
};
#line 44 "coin/include/Inventor/nodes/SoSwitch.h"
class SoSwitchP;

class SoSwitch : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSwitch(void);
  SoSwitch(int numchildren);

  SoSFInt32 whichChild;

  virtual SbBool affectsState(void) const;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void search(SoSearchAction * action);
  virtual void write(SoWriteAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);
  virtual void notify(SoNotList *nl);

protected:
  virtual ~SoSwitch();

  void traverseChildren(SoAction * action);

private:
  SoSwitchP *pimpl;
  friend class SoSwitchP;

  void commonConstructor(void);
};
#line 41 "coin/include/Inventor/nodes/SoBlinker.h"
class SoBlinkerP;

class SoBlinker : public SoSwitch {
  typedef SoSwitch inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoBlinker(void);

  SoSFFloat speed;
  SoSFBool on;

  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoBlinker();
  virtual void notify(SoNotList * nl);

private:
  virtual SoNode * copy(SbBool copyconnections = 0) const;
  void deconnectInternalEngine(void);
  void reconnectInternalEngine(void);

  SoBlinkerP * pimpl;
};
#line 41 "coin/include/Inventor/nodes/SoLOD.h"
class SoLODP;

class SoLOD : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoLOD(void);
  SoLOD(int numchildren);

  static void initClass(void);

  SoMFFloat range;
  SoSFVec3f center;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void GLRenderBelowPath(SoGLRenderAction * action);
  virtual void GLRenderInPath(SoGLRenderAction * action);
  virtual void GLRenderOffPath(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);
  virtual void notify(SoNotList *nl);

protected:
  virtual ~SoLOD();

  virtual int whichToTraverse(SoAction *);

private:
  void commonConstructor(void);

private:
  SoLODP *pimpl;
  friend class SoLODP;
};
#line 40 "coin/include/Inventor/nodes/SoLevelOfDetail.h"
class SoLevelOfDetailP;

class SoLevelOfDetail : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);

  SoLevelOfDetail(void);
  SoLevelOfDetail(int numchildren);

  SoMFFloat screenArea;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

  virtual void notify(SoNotList * nl);

protected:
  virtual ~SoLevelOfDetail();

private:
  void commonConstructor(void);

  SoLevelOfDetailP * pimpl;
  friend class SoLevelOfDetailP;
};
#line 40 "coin/include/Inventor/fields/SoMFMatrix.h"
class SoMFMatrix : public SoMField {
  typedef SoMField inherited;

  public:   SoMFMatrix(void);   virtual ~SoMFMatrix();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFMatrix::classTypeId.getName()); SoMFMatrix::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFMatrix & operator=(const SoMFMatrix & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbMatrix * values; public:   const SbMatrix & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbMatrix * getValues(const int start) const     { this->evaluate(); return const_cast<const SbMatrix *>(this->values + start); }   int find(const SbMatrix & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbMatrix * newvals);   void set1Value(const int idx, const SbMatrix & value);   void setValue(const SbMatrix & value);   const SbMatrix & operator=(const SbMatrix & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFMatrix & field) const;   SbBool operator!=(const SoMFMatrix & field) const { return !operator==(field); }   SbMatrix * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

public:
  static void initClass(void);

  void setValue(const float a11, const float a12,
                const float a13, const float a14,

                const float a21, const float a22,
                const float a23, const float a24,

                const float a31, const float a32,
                const float a33, const float a34,

                const float a41, const float a42,
                const float a43, const float a44);
};
#line 40 "coin/include/Inventor/nodes/SoMultipleCopy.h"
class SoMultipleCopy : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoMultipleCopy(void);

  SoMFMatrix matrix;

  virtual SbBool affectsState(void) const;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void search(SoSearchAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

protected:
  virtual ~SoMultipleCopy();
};
#line 39 "coin/include/Inventor/fields/SoSFPath.h"
class SoPath;
class SoNotList;
class SoNode;

class SoSFPath : public SoSField {
  typedef SoSField inherited;

  public:   SoSFPath(void);   virtual ~SoSFPath();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFPath::classTypeId.getName()); SoSFPath::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFPath & operator=(const SoSFPath & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SoPath * value;  public:   SoPath * getValue(void) const { this->evaluate(); return this->value; }   void setValue(SoPath * newvalue);   SoPath * operator=(SoPath * newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFPath & field) const;   int operator!=(const SoSFPath & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  virtual void notify(SoNotList * l);
  virtual void fixCopy(SbBool copyconnections);
  virtual SbBool referencesCopy(void) const;

private:
  virtual void countWriteRefs(SoOutput * out) const;
  SoNode * head;


  friend class SoMFPath;
};
#line 40 "coin/include/Inventor/nodes/SoPathSwitch.h"
class SoPathSwitch : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);

  SoPathSwitch(void);
  SoPathSwitch(int numchildren);

  SoSFPath path;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void search(SoSearchAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

protected:
  virtual ~SoPathSwitch();

private:
  void commonConstructor(void);
};
#line 39 "coin/include/Inventor/nodes/SoTransformSeparator.h"
class SoTransformSeparator : public SoGroup {
  typedef SoGroup inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTransformSeparator(void);

  SoTransformSeparator(int nChildren);

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

protected:
  virtual ~SoTransformSeparator();
};
#line 42 "coin/include/Inventor/nodes/SoAntiSquish.h"
class SoAntiSquish : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoAntiSquish(void);

  enum Sizing {
    X, Y, Z, AVERAGE_DIMENSION, BIGGEST_DIMENSION, SMALLEST_DIMENSION,
    LONGEST_DIAGONAL
  };

  SoSFEnum sizing;
  SoSFBool recalcAlways;

  void recalc(void);
  virtual void doAction(SoAction * action);

protected:
  virtual ~SoAntiSquish();

  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);

  SbMatrix getUnsquishingMatrix(const SbMatrix & squishedmatrix,
                                const SbBool calcinverse,
                                SbMatrix & getinverse);
private:
  SbMatrix unsquishedmatrix, inversematrix;
  SbBool matrixvalid, inversevalid;
};
#line 40 "coin/include/Inventor/fields/SoSFMatrix.h"
class SoSFMatrix : public SoSField {
  typedef SoSField inherited;

  public:   SoSFMatrix(void);   virtual ~SoSFMatrix();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFMatrix::classTypeId.getName()); SoSFMatrix::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFMatrix & operator=(const SoSFMatrix & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbMatrix value;  public:   const SbMatrix & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbMatrix & newvalue);   const SbMatrix & operator=(const SbMatrix & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFMatrix & field) const;   int operator!=(const SoSFMatrix & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(const float a11, const float a12,
                const float a13, const float a14,
                const float a21, const float a22,
                const float a23, const float a24,
                const float a31, const float a32,
                const float a33, const float a34,
                const float a41, const float a42,
                const float a43, const float a44);
};
#line 40 "coin/include/Inventor/nodes/SoMatrixTransform.h"
class SoMatrixTransform : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoMatrixTransform(void);

  SoSFMatrix matrix;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoMatrixTransform();
};
#line 40 "coin/include/Inventor/nodes/SoRotation.h"
class SoRotation : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoRotation(void);

  SoSFRotation rotation;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoRotation();
};
#line 42 "coin/include/Inventor/nodes/SoPendulum.h"
class SoElapsedTime;
class SoCalculator;
class SoInterpolateRotation;

class SoPendulum : public SoRotation {
  typedef SoRotation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPendulum(void);

  SoSFRotation rotation0;
  SoSFRotation rotation1;
  SoSFFloat speed;
  SoSFBool on;

  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoPendulum();

private:
  virtual SoNode * copy(SbBool copyconnections = 0) const;
  void deconnectInternalEngine(void);
  void reconnectInternalEngine(void);

  SoInterpolateRotation * interpolator;
  SoCalculator * calculator;
  SoElapsedTime * timer;
};
coin/include/Inventor/SbTime.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbTime.h"
#include <cstdio>
#line 50 "coin/include/Inventor/SbTime.h"
class SbTime {
public:
  SbTime(void);
  SbTime(const double sec);
  SbTime(const int32_t sec, const long usec);
  SbTime(const struct timeval * const tv);
  static SbTime getTimeOfDay(void);
  void setToTimeOfDay(void);
  static SbTime zero(void);

  static SbTime max(void);
  static SbTime maxTime(void);
  static void sleep(int msec);
  void setValue(const double sec);
  void setValue(const int32_t sec, const long usec);
  void setValue(const struct timeval * const tv);
  void setMsecValue(const unsigned long msec);
  double getValue(void) const;
  void getValue(time_t & sec, long & usec) const;
  void getValue(struct timeval * tv) const;
  unsigned long getMsecValue(void) const;
  SbString format(const char * const fmt = "%S.%i") const;
  SbString formatDate(const char * const fmt = ((void *)0)) const;
  SbBool parsedate(const char * const date);
  friend SbTime operator +(const SbTime & t0, const SbTime & t1);
  friend SbTime operator -(const SbTime & t0, const SbTime & t1);
  SbTime & operator +=(const SbTime & tm);
  SbTime & operator -=(const SbTime & tm);
  SbTime operator-(void) const;
  friend SbTime operator *(const double s, const SbTime & tm);
  friend SbTime operator *(const SbTime & tm, const double s);
  friend SbTime operator /(const SbTime & tm, const double s);
  SbTime & operator *=(const double s);
  SbTime & operator /=(const double s);
  double operator /(const SbTime & tm) const;
  SbTime operator %(const SbTime & tm) const;
  int operator ==(const SbTime & tm) const;
  int operator !=(const SbTime & tm) const;
  SbBool operator <(const SbTime & tm) const;
  SbBool operator >(const SbTime & tm) const;
  SbBool operator <=(const SbTime & tm) const;
  SbBool operator >=(const SbTime & tm) const;

  void print(FILE * fp) const;

private:
  double dtime;
  void addToString(SbString & str, const double val) const;
};

 SbTime operator +(const SbTime & t0, const SbTime & t1);
 SbTime operator -(const SbTime & t0, const SbTime & t1);
 SbTime operator *(const double s, const SbTime & tm);
 SbTime operator *(const SbTime & tm, const double s);
 SbTime operator /(const SbTime & tm, const double s);
#line 43 "coin/include/Inventor/nodes/SoRotor.h"
class SoSensor;
class SoRotorP;

class SoRotor : public SoRotation {
  typedef SoRotation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoRotor(void);

  SoSFFloat speed;
  SoSFBool on;

protected:
  virtual ~SoRotor();

private:
  SoRotorP * pimpl;
  friend class SoRotorP;
};
#line 40 "coin/include/Inventor/nodes/SoResetTransform.h"
class SoResetTransform : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoResetTransform(void);


  enum ResetType {
    TRANSFORM = 0x01,
    BBOX = 0x02
  };

  SoSFBitMask whatToReset;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoResetTransform();
};
#line 44 "coin/include/Inventor/nodes/SoRotationXYZ.h"
class SoRotationXYZ : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoRotationXYZ(void);

  enum Axis {
    X, Y, Z
  };

  SoSFEnum axis;
  SoSFFloat angle;

  SbRotation getRotation(void) const;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoRotationXYZ();

private:
  SbBool getVector(SbVec3f & rotvec) const;
};
#line 40 "coin/include/Inventor/nodes/SoScale.h"
class SoScale : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoScale(void);

  SoSFVec3f scaleFactor;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoScale();
};
#line 40 "coin/include/Inventor/nodes/SoTranslation.h"
class SoTranslation : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTranslation(void);

  SoSFVec3f translation;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoTranslation();
};
#line 42 "coin/include/Inventor/nodes/SoShuttle.h"
class SoElapsedTime;
class SoCalculator;
class SoInterpolateVec3f;

class SoShuttle : public SoTranslation {
  typedef SoTranslation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoShuttle(void);

  SoSFVec3f translation0;
  SoSFVec3f translation1;
  SoSFFloat speed;
  SoSFBool on;

  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoShuttle();

private:
  virtual SoNode * copy(SbBool copyconnections = 0) const;
  void deconnectInternalEngines(void);
  void reconnectInternalEngines(void);

  SoInterpolateVec3f * interpolator;
  SoCalculator * calculator;
  SoElapsedTime * timer;
};
#line 41 "coin/include/Inventor/nodes/SoSurroundScale.h"
class SbMatrix;

class SoSurroundScale : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSurroundScale(void);

  SoSFInt32 numNodesUpToContainer;
  SoSFInt32 numNodesUpToReset;

  void invalidate(void);
  virtual void doAction(SoAction * action);
  void setDoingTranslations(const SbBool val);
  SbBool isDoingTranslations(void);

protected:
  virtual ~SoSurroundScale();

  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  void updateMySurroundParams(SoAction * action, const SbMatrix & inv);
  void setIgnoreInBbox(const SbBool val);
  SbBool isIgnoreInBbox(void);

protected:
  SbVec3f cachedScale;
  SbVec3f cachedInvScale;
  SbVec3f cachedTranslation;
  SbBool cacheOK;
  SbBool doTranslations;

private:
  SbBool ignoreinbbox;
};
#line 43 "coin/include/Inventor/nodes/SoTransform.h"
class SoTransform : public SoTransformation {
  typedef SoTransformation inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTransform(void);

  SoSFVec3f translation;
  SoSFRotation rotation;
  SoSFVec3f scaleFactor;
  SoSFRotation scaleOrientation;
  SoSFVec3f center;

  void pointAt(const SbVec3f & frompoint, const SbVec3f & topoint);
  void getScaleSpaceMatrix(SbMatrix & mat, SbMatrix & inv) const;
  void getRotationSpaceMatrix(SbMatrix & mat, SbMatrix & inv) const;
  void getTranslationSpaceMatrix(SbMatrix & mat, SbMatrix & inv) const;
  void multLeft(const SbMatrix & mat);
  void multRight(const SbMatrix & mat);
  void combineLeft(SoTransformation * nodeonright);
  void combineRight(SoTransformation * nodeonleft);
  void setMatrix(const SbMatrix & mat);
  void recenter(const SbVec3f & newcenter);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoTransform();
};
#line 40 "coin/include/Inventor/fields/SoMFColor.h"
class SoMFColor : public SoMField {
  typedef SoMField inherited;

  public:   SoMFColor(void);   virtual ~SoMFColor();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFColor::classTypeId.getName()); SoMFColor::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFColor & operator=(const SoMFColor & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbColor * values; public:   const SbColor & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbColor * getValues(const int start) const     { this->evaluate(); return const_cast<const SbColor *>(this->values + start); }   int find(const SbColor & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbColor * newvals);   void set1Value(const int idx, const SbColor & value);   void setValue(const SbColor & value);   const SbColor & operator=(const SbColor & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFColor & field) const;   SbBool operator!=(const SoMFColor & field) const { return !operator==(field); }   SbColor * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const float * userdata);   void setValuesPointer(const int num, float * userdata);
  void setValuesPointer(const int num, const SbColor * userdata);   void setValuesPointer(const int num, SbColor * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const float rgb[][3]);
  void setHSVValues(int start, int num, const float hsv[][3]);

  void setValue(const SbVec3f & vec);
  void setValue(float r, float g, float b);
  void setValue(const float rgb[3]);

  void setHSVValue(float h, float s, float v);
  void setHSVValue(const float hsv[3]);

  void set1Value(int idx, const SbVec3f & vec);
  void set1Value(int idx, float r, float g, float b);
  void set1Value(int idx, const float rgb[3]);

  void set1HSVValue(int idx, float h, float s, float v);
  void set1HSVValue(int idx, const float hsv[3]);

};
#line 39 "coin/include/Inventor/nodes/SoBaseColor.h"
class SoBaseColorP;

class SoBaseColor : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoBaseColor(void);

  SoMFColor rgb;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoBaseColor();

private:
  SoBaseColorP * pimpl;
};
#line 38 "coin/include/Inventor/nodes/SoCallback.h"
typedef void SoCallbackCB(void * userdata, SoAction * action);

class SoCallback : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCallback(void);

  void setCallback(SoCallbackCB * function, void * userdata = ((void *)0));

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void pick(SoPickAction * action);
  virtual void search(SoSearchAction * action);
  virtual void write(SoWriteAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoCallback();

  virtual void copyContents(const SoFieldContainer * from,
                            SbBool copyconnections);

private:
  SoCallbackCB * cbfunc;
  void * cbdata;
};
coin/include/Inventor/SbPlane.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbPlane.h"
#include <cstdio>



class SbLine;
class SbMatrix;

class SbPlane {
public:
  SbPlane(void);
  SbPlane(const SbVec3f& normal, const float D);
  SbPlane(const SbVec3f& p0, const SbVec3f& p1, const SbVec3f& p2);
  SbPlane(const SbVec3f& normal, const SbVec3f& point);

  void offset(const float d);
  SbBool intersect(const SbLine& l, SbVec3f& intersection) const;
  void transform(const SbMatrix& matrix);
  SbBool isInHalfSpace(const SbVec3f& point) const;
  float getDistance(const SbVec3f &point) const;
  const SbVec3f& getNormal(void) const;
  float getDistanceFromOrigin(void) const;
  friend int operator ==(const SbPlane& p1, const SbPlane& p2);
  friend int operator !=(const SbPlane& p1, const SbPlane& p2);

  void print(FILE * file) const;

  SbBool intersect(const SbPlane & pl, SbLine & line) const;

private:
  SbVec3f normal;
  float distance;
};

 int operator ==(const SbPlane& p1, const SbPlane& p2);
 int operator !=(const SbPlane& p1, const SbPlane& p2);
#line 40 "coin/include/Inventor/fields/SoSFPlane.h"
class SoSFPlane : public SoSField {
  typedef SoSField inherited;

  public:   SoSFPlane(void);   virtual ~SoSFPlane();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFPlane::classTypeId.getName()); SoSFPlane::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFPlane & operator=(const SoSFPlane & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbPlane value;  public:   const SbPlane & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbPlane & newvalue);   const SbPlane & operator=(const SbPlane & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFPlane & field) const;   int operator!=(const SoSFPlane & field) const { return ! operator==(field); };

public:
  static void initClass(void);
};
#line 40 "coin/include/Inventor/nodes/SoClipPlane.h"
class SoClipPlane : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoClipPlane(void);

  SoSFPlane plane;
  SoSFBool on;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoClipPlane();
};
#line 39 "coin/include/Inventor/nodes/SoColorIndex.h"
class SoColorIndex : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoColorIndex(void);

  SoMFInt32 index;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoColorIndex();
};
#line 39 "coin/include/Inventor/nodes/SoCoordinate3.h"
class SoCoordinate3P;

class SoCoordinate3 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCoordinate3(void);

  SoMFVec3f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

 protected:
  virtual ~SoCoordinate3();

 private:
  SoCoordinate3P * pimpl;
};
#line 40 "coin/include/Inventor/fields/SoMFVec4f.h"
class SoMFVec4f : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec4f(void);   virtual ~SoMFVec4f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec4f::classTypeId.getName()); SoMFVec4f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec4f & operator=(const SoMFVec4f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec4f * values; public:   const SbVec4f & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec4f * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec4f *>(this->values + start); }   int find(const SbVec4f & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec4f * newvals);   void set1Value(const int idx, const SbVec4f & value);   void setValue(const SbVec4f & value);   const SbVec4f & operator=(const SbVec4f & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec4f & field) const;   SbBool operator!=(const SoMFVec4f & field) const { return !operator==(field); }   SbVec4f * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const SbVec4f * userdata);   void setValuesPointer(const int num, SbVec4f * userdata);
  void setValuesPointer(const int num, const float * userdata);   void setValuesPointer(const int num, float * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const float xyzw[][4]);
  void set1Value(int idx, float x, float y, float z, float w);
  void set1Value(int idx, const float xyzw[4]);
  void setValue(float x, float y, float z, float w);
  void setValue(const float xyzw[4]);

};
#line 39 "coin/include/Inventor/nodes/SoCoordinate4.h"
class SoCoordinate4P;

class SoCoordinate4 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCoordinate4(void);

  SoMFVec4f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoCoordinate4();

 private:
  SoCoordinate4P * pimpl;
};
#line 41 "coin/include/Inventor/nodes/SoLight.h"
class SoLight : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  SoSFBool on;
  SoSFFloat intensity;
  SoSFColor color;

  virtual void callback(SoCallbackAction * action);

protected:
  SoLight(void);
  virtual ~SoLight();
};
#line 40 "coin/include/Inventor/nodes/SoDirectionalLight.h"
class SoDirectionalLight : public SoLight {
  typedef SoLight inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoDirectionalLight(void);

  SoSFVec3f direction;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoDirectionalLight();
};
#line 41 "coin/include/Inventor/nodes/SoSpotLight.h"
class SoSpotLight : public SoLight {
  typedef SoLight inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSpotLight(void);

  SoSFVec3f location;
  SoSFVec3f direction;
  SoSFFloat dropOffRate;
  SoSFFloat cutOffAngle;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoSpotLight();
};
#line 40 "coin/include/Inventor/nodes/SoPointLight.h"
class SoPointLight : public SoLight {
  typedef SoLight inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPointLight(void);

  SoSFVec3f location;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoPointLight();
};
#line 39 "coin/include/Inventor/elements/SoEnvironmentElement.h"
class SoEnvironmentElement : public SoReplacedElement {
  typedef SoReplacedElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoEnvironmentElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoEnvironmentElement::classTypeId.getName()); SoEnvironmentElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoEnvironmentElement();

public:

  enum FogType {
    NONE,
    HAZE,
    FOG,
    SMOKE
  };

  virtual void init(SoState * state);

  static  void set(SoState * const state, SoNode * const node,
                   const float ambientIntensity, const SbColor & ambientColor,
                   const SbVec3f & attenuation, const int32_t fogType,
                   const SbColor & fogColor, const float fogVisibility,
                   const float fogStart = 0.0f);
  static  void get(SoState * const state,
                   float & ambientIntensity, SbColor & ambientColor,
                   SbVec3f & attenuation, int32_t & fogType,
                   SbColor & fogColor, float & fogVisibility,
                   float & fogStart);

  static float getAmbientIntensity(SoState * const state);
  static float getFogVisibility(SoState * const state);
  static const SbVec3f & getLightAttenuation(SoState * const state);
  static const SbColor & getAmbientColor(SoState * const state);
  static const SbColor & getFogColor(SoState * const state);
  static int32_t getFogType(SoState * const state);

  static void getDefault(float & ambientIntensity,
                         SbColor & ambientColor, SbVec3f & attenuation,
                         int32_t & fogType, SbColor & fogColor,
                         float & fogVisibility, float & fogNear);

  virtual void print(FILE * file) const;

protected:

  virtual void setElt(SoState * const state,
                      const float ambientIntensity,
                      const SbColor & ambientColor,
                      const SbVec3f & attenuation,
                      const int32_t fogType,
                      const SbColor & fogColor,
                      const float fogVisibility,
                      const float fogNear);

  float ambientIntensity;
  SbColor ambientColor;
  SbVec3f attenuation;
  int32_t fogType;
  SbColor fogColor;
  float fogVisibility;
  float fogStart;
};
#line 43 "coin/include/Inventor/nodes/SoEnvironment.h"
class SoEnvironment : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoEnvironment(void);

  enum FogType {
    NONE = SoEnvironmentElement::NONE,
    HAZE = SoEnvironmentElement::HAZE,
    FOG = SoEnvironmentElement::FOG,
    SMOKE = SoEnvironmentElement::SMOKE
  };

  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

  SoSFFloat ambientIntensity;
  SoSFColor ambientColor;
  SoSFVec3f attenuation;
  SoSFEnum fogType;
  SoSFColor fogColor;
  SoSFFloat fogVisibility;

protected:
  virtual ~SoEnvironment();
};
#line 44 "coin/include/Inventor/nodes/SoEventCallback.h"
class SoEventCallback;
class SoPath;
class SoEvent;
class SoPickedPoint;
class SoHandleEventAction;

typedef void SoEventCallbackCB(void * userdata, SoEventCallback * node);

class SoEventCallback : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoEventCallback(void);

  void setPath(SoPath * path);
  const SoPath * getPath(void);

  void addEventCallback(SoType eventtype, SoEventCallbackCB * f,
                        void * userdata = ((void *)0));
  void removeEventCallback(SoType eventtype, SoEventCallbackCB * f,
                           void * userdata = ((void *)0));

  SoHandleEventAction * getAction(void) const;
  const SoEvent * getEvent(void) const;
  const SoPickedPoint * getPickedPoint(void) const;

  void setHandled(void);
  SbBool isHandled(void) const;

  void grabEvents(void);
  void releaseEvents(void);

protected:
  virtual ~SoEventCallback();

  virtual void handleEvent(SoHandleEventAction * action);

private:

  struct CallbackInfo {
    SoEventCallbackCB * func;
    SoType eventtype;
    void * userdata;
#line 95 "coin/include/Inventor/nodes/SoEventCallback.h"
    SbBool operator==(const CallbackInfo & cbi) {
      return this->func == cbi.func && this->eventtype == cbi.eventtype && this->userdata == cbi.userdata;
    }
    SbBool operator!=(const CallbackInfo & cbi) {
      return !(*this == cbi);
    }
  };

  SbList<CallbackInfo> callbacks;
  SoHandleEventAction * heaction;
  SoPath * path;

};
#line 39 "coin/include/Inventor/nodes/SoFile.h"
class SoFieldSensor;
class SoGroup;
class SoSensor;

class SoFile : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFile(void);

  SoSFString name;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);
  virtual void search(SoSearchAction * action);

  SoGroup * copyChildren(void) const;
  virtual SoChildList * getChildren(void) const;
  virtual void copyContents(const SoFieldContainer * from,
                            SbBool copyconnections);

  const SbString & getFullName(void) const;

  static void setSearchOK(SbBool dosearch);
  static SbBool getSearchOK();

protected:
  virtual ~SoFile();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual SbBool readNamedFile(SoInput * in);

private:
  static void nameFieldModified(void * userdata, SoSensor * sensor);

  SoChildList * children;
  SoFieldSensor * namesensor;
  SbString fullname;
};
#line 40 "coin/include/Inventor/fields/SoSFName.h"
class SoSFName : public SoSField {
  typedef SoSField inherited;

  public:   SoSFName(void);   virtual ~SoSFName();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFName::classTypeId.getName()); SoSFName::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFName & operator=(const SoSFName & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbName value;  public:   const SbName & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbName & newvalue);   const SbName & operator=(const SbName & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFName & field) const;   int operator!=(const SoSFName & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(const char * const name);
};
#line 40 "coin/include/Inventor/nodes/SoFont.h"
class SoFont : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFont(void);

  SoSFName name;
  SoSFFloat size;

  virtual void doAction(SoAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoFont();
};
#line 45 "coin/include/Inventor/nodes/SoFontStyle.h"
class SoFontStyle : public SoFont {
  typedef SoFont inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFontStyle(void);

  enum Family {
    SERIF, SANS, TYPEWRITER
  };

  enum Style {
    NONE, BOLD, ITALIC
  };

  SoSFEnum family;
  SoSFBitMask style;

  SbString getFontName(void) const;

  virtual void doAction(SoAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoFontStyle();
};
#line 39 "coin/include/Inventor/nodes/SoInfo.h"
class SoInfo : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoInfo(void);

  SoSFString string;

protected:
  virtual ~SoInfo();
};
#line 39 "coin/include/Inventor/nodes/SoLabel.h"
class SoLabel : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoLabel(void);

  SoSFName label;

protected:
  virtual ~SoLabel();
};
#line 39 "coin/include/Inventor/elements/SoAccumulatedElement.h"
class SoAccumulatedElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoAccumulatedElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoAccumulatedElement::classTypeId.getName()); SoAccumulatedElement::classTypeId = SoType::badType(); };
public:
  static void initClass(void);
protected:
  virtual ~SoAccumulatedElement();

public:
  virtual SbBool matches(const SoElement * element) const;

protected:
  virtual void init(SoState * state);
  virtual void push(SoState * state);

  void clearNodeIds(void);
  void addNodeId(const SoNode * const node);
  void setNodeId(const SoNode * const node);
  void copyNodeIds(const SoAccumulatedElement * copyfrom);
  virtual SoElement * copyMatchInfo(void) const;
  virtual void captureThis(SoState * state) const;

  SbList <SbUniqueId> nodeIds;

private:
  SbBool recursecapture;
};
#line 39 "coin/include/Inventor/elements/SoProfileElement.h"
class SoProfile;

class SoProfileElement : public SoAccumulatedElement {
  typedef SoAccumulatedElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoProfileElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoProfileElement::classTypeId.getName()); SoProfileElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoProfileElement();

public:
  enum Profile {
    START_FIRST,
    START_NEW,
    ADD_TO_CURRENT
  };

  virtual void init(SoState * state);
  virtual void push(SoState * state);
  static void add(SoState * const state, SoProfile * const profile);
  static const SoNodeList & get(SoState * const state);

protected:
  SoNodeList profiles;
};
#line 41 "coin/include/Inventor/nodes/SoProfile.h"
class SbVec2f;
class SoState;

class SoProfile : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);

  enum Profile {
    START_FIRST = SoProfileElement::START_FIRST,
    START_NEW = SoProfileElement::START_NEW,
    ADD_TO_CURRENT = SoProfileElement::ADD_TO_CURRENT
  };

  SoMFInt32 index;
  SoSFEnum linkage;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

  virtual void getTrimCurve(SoState * state, int32_t & numpoints,
                            float *& points, int & floatspervec,
                            int32_t & numknots, float *& knotvector) = 0;
  virtual void getVertices(SoState * state, int32_t & numvertices,
                           SbVec2f *& vertices) = 0;

protected:
  SoProfile(void);
  virtual ~SoProfile();
};
#line 39 "coin/include/Inventor/nodes/SoLinearProfile.h"
class SoLinearProfile : public SoProfile {
  typedef SoProfile inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoLinearProfile(void);

  virtual void getTrimCurve(SoState * state, int32_t & numpoints,
                            float *& points, int & floatspervec,
                            int32_t & numknots, float *& knotvector);
  virtual void getVertices(SoState * state, int32_t & numvertices,
                           SbVec2f *& vertices);

protected:
  virtual ~SoLinearProfile();
};
#line 41 "coin/include/Inventor/nodes/SoNurbsProfile.h"
class SoNurbsProfile : public SoProfile {
  typedef SoProfile inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoNurbsProfile(void);

  SoMFFloat knotVector;

  virtual void getTrimCurve(SoState * state, int32_t & numpoints,
                            float *& points, int & floatspervec,
                            int32_t & numknots, float *& knotvector);
  virtual void getVertices(SoState * state, int32_t & numvertices,
                           SbVec2f *& vertices);

protected:
  virtual ~SoNurbsProfile();

private:
  void * nurbsrenderer;
};
#line 42 "coin/include/Inventor/nodes/SoMaterial.h"
class SoMaterialP;

class SoMaterial : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoMaterial(void);

  SoMFColor ambientColor;
  SoMFColor diffuseColor;
  SoMFColor specularColor;
  SoMFColor emissiveColor;
  SoMFFloat shininess;
  SoMFFloat transparency;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoMaterial();

  virtual void notify(SoNotList * list);

private:
  int getMaterialType(void);

  SbPimplPtr<SoMaterialP> pimpl;

  SoMaterial(const SoMaterial &rhs);
  SoMaterial & operator = (const SoMaterial & rhs);

};
#line 40 "coin/include/Inventor/elements/SoVertexAttributeElement.h"
class SoState;
class SoMField;
class SoVertexAttributeData;
class SoVertexAttributeElementP;

class SoVertexAttributeElement : public SoAccumulatedElement {
  typedef SoAccumulatedElement inherited;
  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoVertexAttributeElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoVertexAttributeElement::classTypeId.getName()); SoVertexAttributeElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);

public:
  static void initClass(void);
  virtual void init(SoState * state);

  virtual void push(SoState * state);
  static void add(SoState * const state, SoVertexAttributeData * attribdata);

  static const SoVertexAttributeElement * getInstance(SoState * const state);
  unsigned int getNumAttributes(void) const;

  typedef const char * Key;
  typedef SoVertexAttributeData * Type;
  typedef void AttributeApplyFunc(const Key & key, const Type & obj, void * closure);
  void applyToAttributes(AttributeApplyFunc * func, void * closure) const;

protected:
  virtual ~SoVertexAttributeElement();

  virtual void addElt(SoVertexAttributeData * attribdata);

private:

  SoVertexAttributeElement(const SoVertexAttributeElement & rhs);
  SoVertexAttributeElement & operator = (const SoVertexAttributeElement & rhs);

  SbPimplPtr<SoVertexAttributeElementP> pimpl;
};
#line 44 "coin/include/Inventor/nodes/SoVertexAttribute.h"
class SoMField;
class SoVertexAttributeP;

class SoVertexAttribute : public SoNode {
  typedef SoNode inherited;

public:
  SoVertexAttribute(void);
  static void initClass(void);

  static SoType getClassTypeId(void);
  virtual SoType getTypeId(void) const;

  SoSFName name;
  SoSFName typeName;

  SoMField * getValuesField(void) const;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void write(SoWriteAction * action);
  virtual void copyContents(const SoFieldContainer * from,
                            SbBool copyconnections);
  virtual void notify(SoNotList * l);

protected:
  virtual ~SoVertexAttribute(void);

  virtual SbBool readInstance(SoInput * in, unsigned short flags);

private:
  static SoType classTypeId;
  static void * createInstance(void);
  virtual const SoFieldData * getFieldData(void) const;

  void initFieldData(void);

  SoVertexAttribute(const SoVertexAttribute & rhs);
  SoVertexAttribute & operator = (const SoVertexAttribute & rhs);

  SbPimplPtr<SoVertexAttributeP> pimpl;

};



template <int Type>
class SoAnyVertexAttribute : public SoVertexAttribute {
public:

private:
  SoAnyVertexAttribute(void) { }

};
#line 38 "coin/include/Inventor/elements/SoVertexAttributeBindingElement.h"
class SoVertexAttributeBindingElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoVertexAttributeBindingElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoVertexAttributeBindingElement::classTypeId.getName()); SoVertexAttributeBindingElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoVertexAttributeBindingElement();

public:
  enum Binding {
    OVERALL = 0,


    PER_VERTEX = 3,
    PER_VERTEX_INDEXED = 4,
    DEFAULT = PER_VERTEX_INDEXED
  };

  virtual void init(SoState * state);

  static  void set(SoState * const state, SoNode * const node,
                   const Binding binding);
  static  void set(SoState * const state, const Binding binding);
  static  Binding get(SoState * const state);
  static  Binding getDefault();

};
#line 40 "coin/include/Inventor/nodes/SoVertexAttributeBinding.h"
class SoVertexAttributeBinding : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoVertexAttributeBinding(void);

  enum Binding {
    OVERALL = SoVertexAttributeBindingElement::OVERALL,
    PER_VERTEX = SoVertexAttributeBindingElement::PER_VERTEX,
    PER_VERTEX_INDEXED = SoVertexAttributeBindingElement::PER_VERTEX_INDEXED,
    DEFAULT = PER_VERTEX_INDEXED
  };

  SoSFEnum value;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoVertexAttributeBinding();
};
#line 39 "coin/include/Inventor/nodes/SoNormal.h"
class SbVec3f;
class SoNormalP;

class SoNormal : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoNormal(void);

  SoMFVec3f vector;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoNormal();

 private:
  SoNormalP * pimpl;
};
#line 39 "coin/include/Inventor/nodes/SoPackedColor.h"
class SoPackedColorP;

class SoPackedColor : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPackedColor(void);

  SoMFUInt32 orderedRGBA;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

  SbBool isTransparent(void);

protected:
  virtual ~SoPackedColor();
  virtual void notify(SoNotList *list);

private:
  SoPackedColorP * pimpl;
};
#line 38 "coin/include/Inventor/elements/SoPolygonOffsetElement.h"
class SoPolygonOffsetElement : public SoReplacedElement {
  typedef SoReplacedElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoPolygonOffsetElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoPolygonOffsetElement::classTypeId.getName()); SoPolygonOffsetElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoPolygonOffsetElement();

public:
  enum Style {
    FILLED = 0x01,
    LINES = 0x02,
    POINTS = 0x04
  };

  virtual void init(SoState * state);
  static void set(SoState * state, SoNode * node, float factor, float units,
                  Style styles, SbBool on);
  static void get(SoState * state, float & factor, float & units,
                  Style & styles, SbBool & on);
  static void getDefault(float & factor, float & units, Style & styles,
                         SbBool & on);

protected:
  Style style;
  SbBool active;
  float offsetfactor;
  float offsetunits;

  virtual void setElt(float factor, float units, Style styles, SbBool on);
};
#line 42 "coin/include/Inventor/nodes/SoPolygonOffset.h"
class SoPolygonOffset : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoPolygonOffset(void);

  enum Style {
    FILLED = SoPolygonOffsetElement::FILLED,
    LINES = SoPolygonOffsetElement::LINES,
    POINTS = SoPolygonOffsetElement::POINTS
  };

  SoSFFloat factor;
  SoSFFloat units;
  SoSFBitMask styles;
  SoSFBool on;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoPolygonOffset();
};
#line 39 "coin/include/Inventor/nodes/SoProfileCoordinate2.h"
class SoProfileCoordinate2 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoProfileCoordinate2(void);

  SoMFVec2f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoProfileCoordinate2();
};
#line 39 "coin/include/Inventor/nodes/SoProfileCoordinate3.h"
class SoProfileCoordinate3 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoProfileCoordinate3(void);

  SoMFVec3f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);

protected:
  virtual ~SoProfileCoordinate3();
};
#line 40 "coin/include/Inventor/fields/SoSFImage3.h"
class SoSFImage3 : public SoSField {
  typedef SoSField inherited;

  public:   SoSFImage3(void);   virtual ~SoSFImage3();
  private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFImage3::classTypeId.getName()); SoSFImage3::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFImage3 & operator=(const SoSFImage3 & field);   virtual SbBool isSame(const SoField & field) const;

public:
  static void initClass(void);

  const unsigned char *getValue(SbVec3s &size, int &nc) const;
  void setValue(const SbVec3s &size, const int nc,
                const unsigned char *bytes);

  int operator==(const SoSFImage3 & field) const;
  int operator!=(const SoSFImage3 & field) const {
    return ! operator == (field);
  }

  unsigned char * startEditing(SbVec3s &size, int &nc);
  void finishEditing(void);

private:
  virtual SbBool readValue(SoInput *in);
  virtual void writeValue(SoOutput *out) const;

  class SbImage *image;
};
#line 45 "coin/include/Inventor/nodes/SoTexture3.h"
class SoFieldSensor;
class SoSensor;

class SoTexture3 : public SoTexture {
  typedef SoTexture inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTexture3(void);

  enum Model {
    MODULATE = SoMultiTextureImageElement::MODULATE,
    DECAL = SoMultiTextureImageElement::DECAL,
    BLEND = SoMultiTextureImageElement::BLEND
  };

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP
  };

  SoMFString filenames;
  SoSFImage3 images;
  SoSFEnum wrapR;
  SoSFEnum wrapS;
  SoSFEnum wrapT;
  SoSFEnum model;
  SoSFColor blendColor;
  SoSFBool enableCompressedTexture;

  virtual void doAction(SoAction *action);
  virtual void GLRender(SoGLRenderAction *action);
  virtual void callback(SoCallbackAction *action);

protected:
  virtual ~SoTexture3();

  virtual SbBool readInstance(SoInput *in, unsigned short flags);
  virtual void notify(SoNotList *list);
  int getReadStatus(void);
  void setReadStatus(int s);

private:
  SbBool loadFilenames(SoInput * in = ((void *)0));
  int readstatus;
  class SoGLImage *glimage;
  SbBool glimagevalid;

  class SoFieldSensor *filenamesensor;
  static void filenameSensorCB(void *, SoSensor *);
};
#line 40 "coin/include/Inventor/fields/SoSFVec2f.h"
class SoSFVec2f : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec2f(void);   virtual ~SoSFVec2f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec2f::classTypeId.getName()); SoSFVec2f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec2f & operator=(const SoSFVec2f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec2f value;  public:   const SbVec2f & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec2f & newvalue);   const SbVec2f & operator=(const SbVec2f & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec2f & field) const;   int operator!=(const SoSFVec2f & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(float x, float y);
  void setValue(const float xy[2]);

};
#line 40 "coin/include/Inventor/nodes/SoTexture2Transform.h"
class SbMatrix;

class SoTexture2Transform : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTexture2Transform(void);

  SoSFVec2f translation;
  SoSFFloat rotation;
  SoSFVec2f scaleFactor;
  SoSFVec2f center;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTexture2Transform();

private:
  void makeMatrix(SbMatrix & mat);
};
#line 41 "coin/include/Inventor/nodes/SoTexture3Transform.h"
class SbMatrix;


class SoTexture3Transform : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTexture3Transform(void);

  SoSFVec3f translation;
  SoSFRotation rotation;
  SoSFVec3f scaleFactor;
  SoSFRotation scaleOrientation;
  SoSFVec3f center;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTexture3Transform();
};
#line 39 "coin/include/Inventor/nodes/SoTextureCoordinate2.h"
class SoTextureCoordinate2P;

class SoTextureCoordinate2 : public SoNode {
  typedef SoNode inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinate2(void);

  SoMFVec2f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinate2();

private:
  SoTextureCoordinate2P * pimpl;
};
#line 39 "coin/include/Inventor/nodes/SoTextureCoordinate3.h"
class SoTextureCoordinate3P;

class SoTextureCoordinate3 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinate3(void);

  SoMFVec3f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinate3();

 private:
  SoTextureCoordinate3P * pimpl;
};
#line 38 "coin/include/Inventor/nodes/SoTextureCoordinateFunction.h"
class SoTextureCoordinateFunction : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  static void initClass(void);
#line 49 "coin/include/Inventor/nodes/SoTextureCoordinateFunction.h"
  SoTextureCoordinateFunction(void);

protected:
  virtual ~SoTextureCoordinateFunction();
};
#line 39 "coin/include/Inventor/nodes/SoTextureCoordinateDefault.h"
class SoTextureCoordinateDefault : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateDefault(void);


  virtual void doAction(SoAction *action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinateDefault();
};
#line 40 "coin/include/Inventor/nodes/SoTextureCoordinateEnvironment.h"
class SoTextureCoordinateEnvironment : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateEnvironment(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTextureCoordinateEnvironment();

private:
  static const SbVec4f &generate(void * userdata,
                                 const SbVec3f & p,
                                 const SbVec3f & n);
  static void handleTexgen(void *data);
};
#line 42 "coin/include/Inventor/nodes/SoTextureCoordinatePlane.h"
class SoTextureCoordinatePlaneP;

class SoTextureCoordinatePlane : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinatePlane(void);

  SoSFVec3f directionS;
  SoSFVec3f directionT;
  SoSFVec3f directionR;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTextureCoordinatePlane();

private:
  static const SbVec4f &generate(void *userdata,
                                 const SbVec3f &p,
                                 const SbVec3f &n);
  static void handleTexgen(void *data);

  SoTextureCoordinatePlaneP * pimpl;
  void setupGencache(void);
};
#line 39 "coin/include/Inventor/nodes/SoTextureMatrixTransform.h"
class SoTextureMatrixTransform : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureMatrixTransform(void);

  SoSFMatrix matrix;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureMatrixTransform();
};
#line 45 "coin/include/Inventor/nodes/SoWWWInline.h"
class SbColor;
class SoGroup;
class SoWWWInlineP;



class SoWWWInline;
typedef void SoWWWInlineFetchURLCB(const SbString & url, void * userData,
                                   SoWWWInline * node);



class SoWWWInline : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoWWWInline(void);

  SoSFString name;
  SoSFVec3f bboxCenter;
  SoSFVec3f bboxSize;
  SoSFNode alternateRep;

  enum BboxVisibility {
    NEVER,
    UNTIL_LOADED,
    ALWAYS
  };

  void setFullURLName(const SbString & url);
  const SbString & getFullURLName(void);

  SoGroup * copyChildren(void) const;

  void requestURLData(void);
  SbBool isURLDataRequested(void) const;
  SbBool isURLDataHere(void) const;
  void cancelURLDataRequest(void);

  void setChildData(SoNode * urldata);
  SoNode * getChildData(void) const;

  virtual SoChildList * getChildren(void) const;

  static void setFetchURLCallBack(SoWWWInlineFetchURLCB * f, void * userdata);

  static void setBoundingBoxVisibility(BboxVisibility b);
  static BboxVisibility getBoundingBoxVisibility(void);

  static void setBoundingBoxColor(SbColor & c);
  static const SbColor & getBoundingBoxColor(void);

  static void setReadAsSoFile(SbBool onoff);
  static SbBool getReadAsSoFile(void);

  virtual void doAction(SoAction * action);
  virtual void doActionOnKidsOrBox(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void handleEvent(SoHandleEventAction * action);
  virtual void search(SoSearchAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getPrimitiveCount(SoGetPrimitiveCountAction * action);
  virtual void audioRender(SoAudioRenderAction * action);

protected:
  virtual ~SoWWWInline();

  virtual void addBoundingBoxChild(SbVec3f center, SbVec3f size);
  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void copyContents(const SoFieldContainer * fromfC,
                            SbBool copyconnections);

private:
  friend class SoWWWInlineP;
  static SoWWWInlineFetchURLCB * fetchurlcb;
  static void * fetchurlcbdata;
  static SbBool readassofile;
  static SbColor * bboxcolor;
  static BboxVisibility bboxvisibility;

  static void cleanup(void);

  SoWWWInlineP * pimpl;
};
#line 40 "coin/include/Inventor/nodes/SoTransparencyType.h"
class SoTransparencyType : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTransparencyType(void);

  enum Type {
    SCREEN_DOOR = SoGLRenderAction::SCREEN_DOOR,
    ADD = SoGLRenderAction::ADD,
    DELAYED_ADD = SoGLRenderAction::DELAYED_ADD,
    SORTED_OBJECT_ADD = SoGLRenderAction::SORTED_OBJECT_ADD,
    BLEND = SoGLRenderAction::BLEND,
    DELAYED_BLEND = SoGLRenderAction::DELAYED_BLEND,
    SORTED_OBJECT_BLEND = SoGLRenderAction::SORTED_OBJECT_BLEND,
    SORTED_OBJECT_SORTED_TRIANGLE_ADD =
    SoGLRenderAction::SORTED_OBJECT_SORTED_TRIANGLE_ADD,
    SORTED_OBJECT_SORTED_TRIANGLE_BLEND =
    SoGLRenderAction::SORTED_OBJECT_SORTED_TRIANGLE_BLEND,
    NONE = SoGLRenderAction::NONE
  };

  SoSFEnum value;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTransparencyType();
};
#line 41 "coin/include/Inventor/nodes/SoListener.h"
class SoListenerP;

class SoListener : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);
  friend class SoAudioRenderAction;

public:
  static void initClass();
  SoListener();

  SoSFVec3f position;
  SoSFRotation orientation;
  SoSFFloat gain;
  SoSFVec3f dopplerVelocity;
  SoSFFloat dopplerFactor;

protected:
  virtual void audioRender(class SoAudioRenderAction *action);
  virtual ~SoListener();

private:
  SoListenerP *pimpl;
  friend class SoListenerP;
};
#line 38 "coin/include/Inventor/nodes/SoTextureCoordinateCube.h"
class SoTextureCoordinateCube : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateCube(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinateCube();
  class SoTextureCoordinateCubeP * pimpl;
  friend class SoTextureCoordinateCubeP;

};
#line 38 "coin/include/Inventor/nodes/SoTextureCoordinateSphere.h"
class SoTextureCoordinateSphere : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateSphere(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinateSphere();
  class SoTextureCoordinateSphereP * pimpl;
  friend class SoTextureCoordinateSphereP;

};
#line 38 "coin/include/Inventor/nodes/SoTextureCoordinateCylinder.h"
class SoTextureCoordinateCylinder : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateCylinder(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinateCylinder();
  class SoTextureCoordinateCylinderP * pimpl;
  friend class SoTextureCoordinateCylinderP;

};
#line 44 "coin/include/Inventor/nodes/SoTextureCubeMap.h"
class SoFieldSensor;
class SoSensor;
class SoTextureCubeMapP;

class SoTextureCubeMap : public SoTexture {
  typedef SoTexture inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCubeMap(void);

  enum Model {
    MODULATE = SoMultiTextureImageElement::MODULATE,
    DECAL = SoMultiTextureImageElement::DECAL,
    BLEND = SoMultiTextureImageElement::BLEND,
    REPLACE = SoMultiTextureImageElement::REPLACE
  };

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP
  };

  SoMFString filenames;

  SoSFImage imagePosX;
  SoSFImage imageNegX;
  SoSFImage imagePosY;
  SoSFImage imageNegY;
  SoSFImage imagePosZ;
  SoSFImage imageNegZ;

  SoSFEnum wrapS;
  SoSFEnum wrapT;
  SoSFEnum model;
  SoSFColor blendColor;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void rayPick(SoRayPickAction * action);

  static SbBool readImage(const SbString & fname, int & w, int & h, int & nc,
                          unsigned char *& bytes);
protected:
  virtual ~SoTextureCubeMap();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void notify(SoNotList * list);
  int getReadStatus(void);
  void setReadStatus(int s);

private:
  SbBool loadFilename(const SbString & filename, SoSFImage * image);
  static void filenameSensorCB(void *, SoSensor *);
  SoSFImage * getImageField(const int idx);

  SoTextureCubeMapP * pimpl;
};
#line 39 "coin/include/Inventor/fields/SoMFNode.h"
class SoNode;

class SoMFNode : public SoMField {
  typedef SoMField inherited;

  public:   SoMFNode(void);   virtual ~SoMFNode();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFNode::classTypeId.getName()); SoMFNode::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFNode & operator=(const SoMFNode & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SoNode * * values; public:   SoNode * operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SoNode * * getValues(const int start) const     { this->evaluate(); return const_cast<const SoNode * *>(this->values + start); }   int find(SoNode * value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SoNode * * newvals);   void set1Value(const int idx, SoNode * value);   void setValue(SoNode * value);   SoNode * operator=(SoNode * val) { this->setValue(val); return val; }   SbBool operator==(const SoMFNode & field) const;   SbBool operator!=(const SoMFNode & field) const { return !operator==(field); }   SoNode * * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

public:
  static void initClass(void);

  virtual void fixCopy(SbBool copyconnections);
  virtual SbBool referencesCopy(void) const;

  void addNode(SoNode * node);
  void insertNode(SoNode * node, int idx);
  SoNode * getNode(int idx) const;
  int findNode(const SoNode * node) const;
  int getNumNodes(void) const;
  void removeNode(int index);
  void removeNode(SoNode * node);
  void removeAllNodes(void);
  void replaceNode(int idx, SoNode * newnode);
  void replaceNode(SoNode * oldnode, SoNode * newnode);

  virtual void deleteValues(int start, int num = -1);
  virtual void insertSpace(int start, int num);

private:
  virtual void countWriteRefs(SoOutput * out) const;
};
coin_build/include/Inventor/system/gl-headers.h:48 error: Include file 'GL/gl.h' not found
#line 48 "coin_build/include/Inventor/system/gl-headers.h"
#include <GL/gl.h>
coin_build/include/Inventor/system/gl-headers.h:49 error: Include file 'GL/glu.h' not found
#include <GL/glu.h>
coin_build/include/Inventor/system/gl-headers.h:50 error: Include file 'GL/glext.h' not found
#include <GL/glext.h>
#line 57 "coin/include/Inventor/C/glue/gl.h"
typedef struct cc_glglue cc_glglue;
#line 75 "coin/include/Inventor/C/glue/gl.h"
 const cc_glglue * cc_glglue_instance(int contextid);
#line 83 "coin/include/Inventor/C/glue/gl.h"
 void cc_glglue_glversion(const cc_glglue * glue,
                                      unsigned int * major,
                                      unsigned int * minor,
                                      unsigned int * release);






 SbBool cc_glglue_glversion_matches_at_least(const cc_glglue * glue,
                                                         unsigned int major,
                                                         unsigned int minor,
                                                         unsigned int release);






 SbBool cc_glglue_glxversion_matches_at_least(const cc_glglue * glue,
                                                          int major,
                                                          int minor);




 SbBool cc_glglue_glext_supported(const cc_glglue * glue, const char * extname);
#line 123 "coin/include/Inventor/C/glue/gl.h"
 void * cc_glglue_getprocaddress(const cc_glglue * glue, const char * symname);



 SbBool cc_glglue_isdirect(const cc_glglue * w);






 SbBool cc_glglue_has_polygon_offset(const cc_glglue * glue);

enum cc_glglue_Primitives { cc_glglue_FILLED = 1 << 0,
                            cc_glglue_LINES  = 1 << 1,
                            cc_glglue_POINTS = 1 << 2 };
 void cc_glglue_glPolygonOffsetEnable(const cc_glglue * glue,
                                                  SbBool enable, int m);
 void cc_glglue_glPolygonOffset(const cc_glglue * glue,
                                            GLfloat factor,
                                            GLfloat units);



 SbBool cc_glglue_has_texture_objects(const cc_glglue * glue);
 void cc_glglue_glGenTextures(const cc_glglue * glue,
                                          GLsizei n,
                                          GLuint *textures);
 void cc_glglue_glBindTexture(const cc_glglue * glue,
                                          GLenum target,
                                          GLuint texture);
 void cc_glglue_glDeleteTextures(const cc_glglue * glue,
                                             GLsizei n,
                                             const GLuint * textures);



 SbBool cc_glglue_has_3d_textures(const cc_glglue * glue);
 void cc_glglue_glTexImage3D(const cc_glglue * glue,
                                         GLenum target,
                                         GLint level,
                                         GLenum internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLsizei depth,
                                         GLint border,
                                         GLenum format,
                                         GLenum type,
                                         const GLvoid *pixels);
 void cc_glglue_glTexSubImage3D(const cc_glglue * glue,
                                            GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLint zoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLsizei depth,
                                            GLenum format,
                                            GLenum type,
                                            const GLvoid * pixels);
 void cc_glglue_glCopyTexSubImage3D(const cc_glglue * glue,
                                                GLenum target,
                                                GLint level,
                                                GLint xoffset,
                                                GLint yoffset,
                                                GLint zoffset,
                                                GLint x,
                                                GLint y,
                                                GLsizei width,
                                                GLsizei height);



 SbBool cc_glglue_has_multitexture(const cc_glglue * glue);
 void cc_glglue_glMultiTexCoord2f(const cc_glglue * glue,
                                              GLenum target,
                                              GLfloat s,
                                              GLfloat t);
 void cc_glglue_glMultiTexCoord2fv(const cc_glglue * glue,
                                               GLenum target,
                                               const GLfloat * v);
 void cc_glglue_glMultiTexCoord3fv(const cc_glglue * glue,
                                               GLenum target,
                                               const GLfloat * v);
 void cc_glglue_glMultiTexCoord4fv(const cc_glglue * glue,
                                               GLenum target,
                                               const GLfloat * v);

 void cc_glglue_glActiveTexture(const cc_glglue * glue,
                                            GLenum texture);
 void cc_glglue_glClientActiveTexture(const cc_glglue * glue,
                                                  GLenum texture);



 SbBool cc_glglue_has_texsubimage(const cc_glglue * glue);
 void cc_glglue_glTexSubImage2D(const cc_glglue * glue,
                                            GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLenum format,
                                            GLenum type,
                                            const GLvoid * pixels);



 SbBool cc_glglue_has_2d_proxy_textures(const cc_glglue * glue);

 SbBool cc_glglue_has_texture_edge_clamp(const cc_glglue * glue);

 void cc_glglue_glPushClientAttrib(const cc_glglue * glue, GLbitfield mask);
 void cc_glglue_glPopClientAttrib(const cc_glglue * glue);




 SbBool cc_glue_has_texture_compression(const cc_glglue * glue);

 void cc_glglue_glCompressedTexImage3D(const cc_glglue * glue,
                                                   GLenum target,
                                                   GLint level,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLsizei height,
                                                   GLsizei depth,
                                                   GLint border,
                                                   GLsizei imageSize,
                                                   const GLvoid * data);
 void cc_glglue_glCompressedTexImage2D(const cc_glglue * glue,
                                                   GLenum target,
                                                   GLint level,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLsizei height,
                                                   GLint border,
                                                   GLsizei imageSize,
                                                   const GLvoid *data);
 void cc_glglue_glCompressedTexImage1D(const cc_glglue * glue,
                                                   GLenum target,
                                                   GLint level,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLint border,
                                                   GLsizei imageSize,
                                                   const GLvoid *data);
 void cc_glglue_glCompressedTexSubImage3D(const cc_glglue * glue,
                                                      GLenum target,
                                                      GLint level,
                                                      GLint xoffset,
                                                      GLint yoffset,
                                                      GLint zoffset,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLsizei depth,
                                                      GLenum format,
                                                      GLsizei imageSize,
                                                      const GLvoid *data);
 void cc_glglue_glCompressedTexSubImage2D(const cc_glglue * glue,
                                                      GLenum target,
                                                      GLint level,
                                                      GLint xoffset,
                                                      GLint yoffset,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLenum format,
                                                      GLsizei imageSize,
                                                      const GLvoid *data);
 void cc_glglue_glCompressedTexSubImage1D(const cc_glglue * glue,
                                                      GLenum target,
                                                      GLint level,
                                                      GLint xoffset,
                                                      GLsizei width,
                                                      GLenum format,
                                                      GLsizei imageSize,
                                                      const GLvoid *data);
 void cc_glglue_glGetCompressedTexImage(const cc_glglue * glue,
                                                    GLenum target,
                                                    GLint level,
                                                    void *img);




 SbBool cc_glglue_has_color_tables(const cc_glglue * glue);
 SbBool cc_glglue_has_color_subtables(const cc_glglue * glue);


 SbBool cc_glglue_has_paletted_textures(const cc_glglue * glue);

 void cc_glglue_glColorTable(const cc_glglue * glue,
                                         GLenum target,
                                         GLenum internalFormat,
                                         GLsizei width,
                                         GLenum format,
                                         GLenum type,
                                         const GLvoid *table);
 void cc_glglue_glColorSubTable(const cc_glglue * glue,
                                            GLenum target,
                                            GLsizei start,
                                            GLsizei count,
                                            GLenum format,
                                            GLenum type,
                                            const GLvoid * data);
 void cc_glglue_glGetColorTable(const cc_glglue * glue,
                                            GLenum target,
                                            GLenum format,
                                            GLenum type,
                                            GLvoid *data);
 void cc_glglue_glGetColorTableParameteriv(const cc_glglue * glue,
                                                       GLenum target,
                                                       GLenum pname,
                                                       GLint *params);
 void cc_glglue_glGetColorTableParameterfv(const cc_glglue * glue,
                                                       GLenum target,
                                                       GLenum pname,
                                                       GLfloat *params);




 SbBool cc_glglue_has_blendequation(const cc_glglue * glue);
 void cc_glglue_glBlendEquation(const cc_glglue * glue, GLenum mode);


 SbBool cc_glglue_has_blendfuncseparate(const cc_glglue * glue);
 void cc_glglue_glBlendFuncSeparate(const cc_glglue * glue,
                                                GLenum srgb, GLenum drgb,
                                                GLenum salpha, GLenum dalpha);



 SbBool cc_glglue_has_vertex_array(const cc_glglue * glue);
 void cc_glglue_glVertexPointer(const cc_glglue * glue,
                                            GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
 void cc_glglue_glTexCoordPointer(const cc_glglue * glue,
                                              GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
 void cc_glglue_glNormalPointer(const cc_glglue * glue,
                                            GLenum type, GLsizei stride, const GLvoid *pointer);
 void cc_glglue_glColorPointer(const cc_glglue * glue,
                                           GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
 void cc_glglue_glIndexPointer (const cc_glglue * glue,
                                            GLenum type, GLsizei stride, const GLvoid * pointer);
 void cc_glglue_glEnableClientState(const cc_glglue * glue, GLenum array);
 void cc_glglue_glDisableClientState(const cc_glglue * glue, GLenum array);
 void cc_glglue_glInterleavedArrays(const cc_glglue * glue,
                                                GLenum format, GLsizei stride, const GLvoid * pointer);
 void cc_glglue_glDrawArrays(const cc_glglue * glue,
                                         GLenum mode, GLint first, GLsizei count);
 void cc_glglue_glDrawElements(const cc_glglue * glue,
                                           GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
 void cc_glglue_glDrawRangeElements(const cc_glglue * glue,
                                                GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices);
 void cc_glglue_glArrayElement(const cc_glglue * glue, GLint i);

 int cc_glglue_max_texture_units(const cc_glglue * glue);
 int cc_glglue_has_multidraw_vertex_arrays(const cc_glglue * glue);

 void cc_glglue_glMultiDrawArrays(const cc_glglue * glue, GLenum mode, const GLint * first,
                                              const GLsizei * count, GLsizei primcount);
 void cc_glglue_glMultiDrawElements(const cc_glglue * glue, GLenum mode, const GLsizei * count,
                                                GLenum type, const GLvoid ** indices, GLsizei primcount);


 SbBool cc_glglue_has_nv_vertex_array_range(const cc_glglue * glue);
 void cc_glglue_glFlushVertexArrayRangeNV(const cc_glglue * glue);
 void cc_glglue_glVertexArrayRangeNV(const cc_glglue * glue, GLsizei size, const GLvoid * pointer);
 void * cc_glglue_glAllocateMemoryNV(const cc_glglue * glue,
                                                 GLsizei size, GLfloat readfreq,
                                                 GLfloat writefreq, GLfloat priority);
 void cc_glglue_glFreeMemoryNV(const cc_glglue * glue, GLvoid * buffer);


 SbBool cc_glglue_has_vertex_buffer_object(const cc_glglue * glue);
 void cc_glglue_glBindBuffer(const cc_glglue * glue, GLenum target, GLuint buffer);
 void cc_glglue_glDeleteBuffers(const cc_glglue * glue, GLsizei n, const GLuint *buffers);
 void cc_glglue_glGenBuffers(const cc_glglue * glue, GLsizei n, GLuint *buffers);
 GLboolean cc_glglue_glIsBuffer(const cc_glglue * glue, GLuint buffer);
 void cc_glglue_glBufferData(const cc_glglue * glue,
                                         GLenum target,
                                         intptr_t size,
                                         const GLvoid *data,
                                         GLenum usage);
 void cc_glglue_glBufferSubData(const cc_glglue * glue,
                                            GLenum target,
                                            intptr_t offset,
                                            intptr_t size,
                                            const GLvoid * data);
 void cc_glglue_glGetBufferSubData(const cc_glglue * glue,
                                               GLenum target,
                                               intptr_t offset,
                                               intptr_t size,
                                               GLvoid *data);
 GLvoid * cc_glglue_glMapBuffer(const cc_glglue * glue,
                                            GLenum target, GLenum access);
 GLboolean cc_glglue_glUnmapBuffer(const cc_glglue * glue,
                                               GLenum target);
 void cc_glglue_glGetBufferParameteriv(const cc_glglue * glue,
                                                   GLenum target,
                                                   GLenum pname,
                                                   GLint * params);
 void cc_glglue_glGetBufferPointerv(const cc_glglue * glue,
                                                GLenum target,
                                                GLenum pname,
                                                GLvoid ** params);


 SbBool cc_glglue_has_arb_fragment_program(const cc_glglue * glue);
 void cc_glglue_glProgramString(const cc_glglue * glue, GLenum target, GLenum format,
                                            GLsizei len, const GLvoid *string);
 void cc_glglue_glBindProgram(const cc_glglue * glue, GLenum target,
                                          GLuint program);
 void cc_glglue_glDeletePrograms(const cc_glglue * glue, GLsizei n,
                                             const GLuint *programs);
 void cc_glglue_glGenPrograms(const cc_glglue * glue, GLsizei n, GLuint *programs);
 void cc_glglue_glProgramEnvParameter4d(const cc_glglue * glue, GLenum target,
                                                    GLuint index, GLdouble x, GLdouble y,
                                                    GLdouble z, GLdouble w);
 void cc_glglue_glProgramEnvParameter4dv(const cc_glglue * glue, GLenum target,
                                                     GLuint index, const GLdouble *params);
 void cc_glglue_glProgramEnvParameter4f(const cc_glglue * glue, GLenum target,
                                                    GLuint index, GLfloat x,
                                                    GLfloat y, GLfloat z,
                                                    GLfloat w);
 void cc_glglue_glProgramEnvParameter4fv(const cc_glglue * glue, GLenum target,
                                                     GLuint index, const GLfloat *params);
 void cc_glglue_glProgramLocalParameter4d(const cc_glglue * glue, GLenum target,
                                                      GLuint index, GLdouble x,
                                                      GLdouble y, GLdouble z,
                                                      GLdouble w);
 void cc_glglue_glProgramLocalParameter4dv(const cc_glglue * glue, GLenum target,
                                                       GLuint index, const GLdouble *params);
 void cc_glglue_glProgramLocalParameter4f(const cc_glglue * glue, GLenum target,
                                                      GLuint index, GLfloat x, GLfloat y,
                                                      GLfloat z, GLfloat w);
 void cc_glglue_glProgramLocalParameter4fv(const cc_glglue * glue, GLenum target,
                                                       GLuint index, const GLfloat *params);
 void cc_glglue_glGetProgramEnvParameterdv(const cc_glglue * glue, GLenum target,
                                                       GLuint index, GLdouble *params);
 void cc_glglue_glGetProgramEnvParameterfv(const cc_glglue * glue, GLenum target,
                                                       GLuint index, GLfloat *params);
 void cc_glglue_glGetProgramLocalParameterdv(const cc_glglue * glue, GLenum target,
                                                         GLuint index, GLdouble *params);
 void cc_glglue_glGetProgramLocalParameterfv(const cc_glglue * glue, GLenum target,
                                                         GLuint index, GLfloat *params);
 void cc_glglue_glGetProgramiv(const cc_glglue * glue, GLenum target,
                                           GLenum pname, GLint *params);
 void cc_glglue_glGetProgramString(const cc_glglue * glue, GLenum target,
                                               GLenum pname, GLvoid *string);
 SbBool cc_glglue_glIsProgram(const cc_glglue * glue, GLuint program);


 SbBool cc_glglue_has_arb_vertex_program(const cc_glglue * glue);
 void cc_glglue_glVertexAttrib1s(const cc_glglue * glue, GLuint index, GLshort x);
 void cc_glglue_glVertexAttrib1f(const cc_glglue * glue, GLuint index, GLfloat x);
 void cc_glglue_glVertexAttrib1d(const cc_glglue * glue, GLuint index, GLdouble x);
 void cc_glglue_glVertexAttrib2s(const cc_glglue * glue, GLuint index, GLshort x, GLshort y);
 void cc_glglue_glVertexAttrib2f(const cc_glglue * glue, GLuint index, GLfloat x, GLfloat y);
 void cc_glglue_glVertexAttrib2d(const cc_glglue * glue, GLuint index, GLdouble x, GLdouble y);
 void cc_glglue_glVertexAttrib3s(const cc_glglue * glue, GLuint index,
                                             GLshort x, GLshort y, GLshort z);
 void cc_glglue_glVertexAttrib3f(const cc_glglue * glue, GLuint index,
                                             GLfloat x, GLfloat y, GLfloat z);
 void cc_glglue_glVertexAttrib3d(const cc_glglue * glue, GLuint index,
                                             GLdouble x, GLdouble y, GLdouble z);
 void cc_glglue_glVertexAttrib4s(const cc_glglue * glue, GLuint index, GLshort x,
                                             GLshort y, GLshort z, GLshort w);
 void cc_glglue_glVertexAttrib4f(const cc_glglue * glue, GLuint index, GLfloat x,
                                             GLfloat y, GLfloat z, GLfloat w);
 void cc_glglue_glVertexAttrib4d(const cc_glglue * glue, GLuint index, GLdouble x,
                                             GLdouble y, GLdouble z, GLdouble w);
 void cc_glglue_glVertexAttrib4Nub(const cc_glglue * glue, GLuint index, GLubyte x,
                                               GLubyte y, GLubyte z, GLubyte w);
 void cc_glglue_glVertexAttrib1sv(const cc_glglue * glue, GLuint index, const GLshort *v);
 void cc_glglue_glVertexAttrib1fv(const cc_glglue * glue, GLuint index, const GLfloat *v);
 void cc_glglue_glVertexAttrib1dv(const cc_glglue * glue, GLuint index, const GLdouble *v);
 void cc_glglue_glVertexAttrib2sv(const cc_glglue * glue, GLuint index, const GLshort *v);
 void cc_glglue_glVertexAttrib2fv(const cc_glglue * glue, GLuint index, const GLfloat *v);
 void cc_glglue_glVertexAttrib2dv(const cc_glglue * glue, GLuint index, const GLdouble *v);
 void cc_glglue_glVertexAttrib3sv(const cc_glglue * glue, GLuint index, const GLshort *v);
 void cc_glglue_glVertexAttrib3fv(const cc_glglue * glue, GLuint index, const GLfloat *v);
 void cc_glglue_glVertexAttrib3dv(const cc_glglue * glue, GLuint index, const GLdouble *v);
 void cc_glglue_glVertexAttrib4bv(const cc_glglue * glue, GLuint index, const GLbyte *v);
 void cc_glglue_glVertexAttrib4sv(const cc_glglue * glue, GLuint index, const GLshort *v);
 void cc_glglue_glVertexAttrib4iv(const cc_glglue * glue, GLuint index, const GLint *v);
 void cc_glglue_glVertexAttrib4ubv(const cc_glglue * glue, GLuint index, const GLubyte *v);
 void cc_glglue_glVertexAttrib4usv(const cc_glglue * glue, GLuint index, const GLushort *v);
 void cc_glglue_glVertexAttrib4uiv(const cc_glglue * glue, GLuint index, const GLuint *v);
 void cc_glglue_glVertexAttrib4fv(const cc_glglue * glue, GLuint index, const GLfloat *v);
 void cc_glglue_glVertexAttrib4dv(const cc_glglue * glue, GLuint index, const GLdouble *v);
 void cc_glglue_glVertexAttrib4Nbv(const cc_glglue * glue, GLuint index, const GLbyte *v);
 void cc_glglue_glVertexAttrib4Nsv(const cc_glglue * glue, GLuint index, const GLshort *v);
 void cc_glglue_glVertexAttrib4Niv(const cc_glglue * glue, GLuint index, const GLint *v);
 void cc_glglue_glVertexAttrib4Nubv(const cc_glglue * glue, GLuint index, const GLubyte *v);
 void cc_glglue_glVertexAttrib4Nusv(const cc_glglue * glue, GLuint index, const GLushort *v);
 void cc_glglue_glVertexAttrib4Nuiv(const cc_glglue * glue, GLuint index, const GLuint *v);
 void cc_glglue_glVertexAttribPointer(const cc_glglue * glue, GLuint index, GLint size,
                                                  GLenum type, GLboolean normalized, GLsizei stride,
                                                  const GLvoid *pointer);
 void cc_glglue_glEnableVertexAttribArray(const cc_glglue * glue, GLuint index);
 void cc_glglue_glDisableVertexAttribArray(const cc_glglue * glue, GLuint index);
 void cc_glglue_glGetVertexAttribdv(const cc_glglue * glue, GLuint index, GLenum pname,
                                                GLdouble *params);
 void cc_glglue_glGetVertexAttribfv(const cc_glglue * glue, GLuint index, GLenum pname,
                                                GLfloat *params);
 void cc_glglue_glGetVertexAttribiv(const cc_glglue * glue, GLuint index, GLenum pname,
                                                GLint *params);
 void cc_glglue_glGetVertexAttribPointerv(const cc_glglue * glue, GLuint index, GLenum pname,
                                                      GLvoid **pointer);


 SbBool cc_glglue_has_arb_vertex_shader(const cc_glglue * glue);


 SbBool cc_glglue_has_occlusion_query(const cc_glglue * glue);
 void cc_glglue_glGenQueries(const cc_glglue * glue,
                                         GLsizei n, GLuint * ids);
 void cc_glglue_glDeleteQueries(const cc_glglue * glue,
                                            GLsizei n, const GLuint *ids);
 GLboolean cc_glglue_glIsQuery(const cc_glglue * glue,
                                         GLuint id);
 void cc_glglue_glBeginQuery(const cc_glglue * glue,
                                         GLenum target, GLuint id);
 void cc_glglue_glEndQuery(const cc_glglue * glue,
                                       GLenum target);
 void cc_glglue_glGetQueryiv(const cc_glglue * glue,
                                         GLenum target, GLenum pname,
                                         GLint * params);
 void cc_glglue_glGetQueryObjectiv(const cc_glglue * glue,
                                               GLuint id, GLenum pname,
                                               GLint * params);
 void cc_glglue_glGetQueryObjectuiv(const cc_glglue * glue,
                                                GLuint id, GLenum pname,
                                                GLuint * params);


 void cc_glglue_glIsRenderbuffer(const cc_glglue * glue, GLuint renderbuffer);
 void cc_glglue_glBindRenderbuffer(const cc_glglue * glue, GLenum target, GLuint renderbuffer);
 void cc_glglue_glDeleteRenderbuffers(const cc_glglue * glue, GLsizei n, const GLuint *renderbuffers);
 void cc_glglue_glGenRenderbuffers(const cc_glglue * glue, GLsizei n, GLuint *renderbuffers);
 void cc_glglue_glRenderbufferStorage(const cc_glglue * glue, GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
 void cc_glglue_glGetRenderbufferParameteriv(const cc_glglue * glue, GLenum target, GLenum pname, GLint *params);
 GLboolean cc_glglue_glIsFramebuffer(const cc_glglue * glue, GLuint framebuffer);
 void cc_glglue_glBindFramebuffer(const cc_glglue * glue, GLenum target, GLuint framebuffer);
 void cc_glglue_glDeleteFramebuffers(const cc_glglue * glue, GLsizei n, const GLuint *framebuffers);
 void cc_glglue_glGenFramebuffers(const cc_glglue * glue, GLsizei n, GLuint *framebuffers);
 GLenum cc_glglue_glCheckFramebufferStatus(const cc_glglue * glue, GLenum target);
 void cc_glglue_glFramebufferTexture1D(const cc_glglue * glue, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
 void cc_glglue_glFramebufferTexture2D(const cc_glglue * glue, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
 void cc_glglue_glFramebufferTexture3D(const cc_glglue * glue, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
 void cc_glglue_glFramebufferRenderbuffer(const cc_glglue * glue, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
 void cc_glglue_glGetFramebufferAttachmentParameteriv(const cc_glglue * glue, GLenum target, GLenum attachment, GLenum pname, GLint *params);
 void cc_glglue_glGenerateMipmap(const cc_glglue * glue, GLenum target);
 SbBool cc_glglue_has_framebuffer_objects(const cc_glglue * glue);



 SbBool cc_glglue_can_do_bumpmapping(const cc_glglue * glue);
 SbBool cc_glglue_can_do_sortedlayersblend(const cc_glglue * glue);
 SbBool cc_glglue_can_do_anisotropic_filtering(const cc_glglue * glue);
 SbBool cc_glglue_has_framebuffer_objects(const cc_glglue * glue);


 int cc_glglue_get_max_lights(const cc_glglue * glue);
 const float * cc_glglue_get_line_width_range(const cc_glglue * glue);
 const float * cc_glglue_get_point_size_range(const cc_glglue * glue);

 float cc_glglue_get_max_anisotropy(const cc_glglue * glue);





 void * cc_glglue_glXGetCurrentDisplay(const cc_glglue * w);
#line 617 "coin/include/Inventor/C/glue/gl.h"
 void cc_glglue_context_max_dimensions(unsigned int * width, unsigned int * height);

 void * cc_glglue_context_create_offscreen(unsigned int width, unsigned int height);
 SbBool cc_glglue_context_make_current(void * ctx);
 void cc_glglue_context_reinstate_previous(void * ctx);
 void cc_glglue_context_destruct(void * ctx);

 void cc_glglue_context_bind_pbuffer(void * ctx);
 void cc_glglue_context_release_pbuffer(void * ctx);
 SbBool cc_glglue_context_pbuffer_is_bound(void * ctx);
 SbBool cc_glglue_context_can_render_to_texture(void * ctx);


 const void * cc_glglue_win32_HDC(void * ctx);
 void cc_glglue_win32_updateHDCBitmap(void * ctx);
#line 644 "coin/include/Inventor/C/glue/gl.h"
typedef void * cc_glglue_offscreen_data;

typedef struct cc_glglue_offscreen_cb_functions {
    cc_glglue_offscreen_data (*create_offscreen)(unsigned int width, unsigned int height);
    SbBool (*make_current)(cc_glglue_offscreen_data context);
    void (*reinstate_previous)(cc_glglue_offscreen_data context);
    void (*destruct)(cc_glglue_offscreen_data context);
} cc_glglue_offscreen_cb_functions;




 void cc_glglue_context_set_offscreen_cb_functions(cc_glglue_offscreen_cb_functions* p);
#line 44 "coin/include/Inventor/nodes/SoShaderObject.h"
class SoGLShaderObject;
class SoGLShaderProgram;
class SoState;



class SoShaderObject : public SoNode {
  typedef SoNode inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  enum SourceType {
    ARB_PROGRAM,
    CG_PROGRAM,
    GLSL_PROGRAM,
    FILENAME
  };

  SoSFBool isActive;
  SoSFEnum sourceType;
  SoSFString sourceProgram;


  SoMFNode parameter;

  static void initClass(void);

  virtual void GLRender(SoGLRenderAction * action);
  virtual void search(SoSearchAction * action);

  void updateParameters(SoState * state);

  SourceType getSourceType(void) const;
  SbString getSourceProgram(void) const;

protected:
  SoShaderObject(void);
  virtual ~SoShaderObject();
  virtual SbBool readInstance(SoInput * in, unsigned short flags);

private:
  class SoShaderObjectP * pimpl;
};
#line 40 "coin/include/Inventor/fields/SoSFVec4f.h"
class SoSFVec4f : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec4f(void);   virtual ~SoSFVec4f();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec4f::classTypeId.getName()); SoSFVec4f::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec4f & operator=(const SoSFVec4f & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec4f value;  public:   const SbVec4f & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec4f & newvalue);   const SbVec4f & operator=(const SbVec4f & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec4f & field) const;   int operator!=(const SoSFVec4f & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(float x, float y, float z, float w);
  void setValue(const float xyzw[4]);

};
coin/include/Inventor/SbVec2i32.h:36 error: Include file 'cstdio' not found
#line 36 "coin/include/Inventor/SbVec2i32.h"
#include <cstdio>
#line 44 "coin/include/Inventor/SbVec2i32.h"
class SbVec2ui32;
class SbVec2b;
class SbVec2s;
class SbVec2f;
class SbVec2d;

class SbVec2i32 {
public:
  SbVec2i32(void) { }
  SbVec2i32(const int32_t v[2]) { vec[0] = v[0]; vec[1] = v[1]; }
  SbVec2i32(int32_t x, int32_t y) { vec[0] = x; vec[1] = y; }
  explicit SbVec2i32(const SbVec2ui32 & v) { setValue(v); }
  explicit SbVec2i32(const SbVec2b & v) { setValue(v); }
  explicit SbVec2i32(const SbVec2s & v) { setValue(v); }
  explicit SbVec2i32(const SbVec2f & v) { setValue(v); }
  explicit SbVec2i32(const SbVec2d & v) { setValue(v); }

  SbVec2i32 & setValue(const int32_t v[2]) { vec[0] = v[0]; vec[1] = v[1]; return *this; }
  SbVec2i32 & setValue(int32_t x, int32_t y) { vec[0] = x; vec[1] = y; return *this; }
  SbVec2i32 & setValue(const SbVec2ui32 & v);
  SbVec2i32 & setValue(const SbVec2b & v);
  SbVec2i32 & setValue(const SbVec2s & v);
  SbVec2i32 & setValue(const SbVec2f & v);
  SbVec2i32 & setValue(const SbVec2d & v);

  const int32_t * getValue(void) const { return vec; }
  void getValue(int32_t & x, int32_t & y) const { x = vec[0]; y = vec[1]; }

  int32_t & operator [] (int i) { return vec[i]; }
  const int32_t & operator [] (int i) const { return vec[i]; }

  int32_t dot(const SbVec2i32 & v) const { return vec[0] * v[0] + vec[1] * v[1]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; }

  SbVec2i32 & operator *= (int d) { vec[0] *= d; vec[1] *= d; return *this; }
  SbVec2i32 & operator *= (double d);
  SbVec2i32 & operator /= (int d) { SbDividerChk("SbVec2i32::operator/=(int)", d); vec[0] /= d; vec[1] /= d; return *this; }
  SbVec2i32 & operator /= (double d) { SbDividerChk("SbVec2i32::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec2i32 & operator += (const SbVec2i32 & v) { vec[0] += v[0]; vec[1] += v[1]; return *this; }
  SbVec2i32 & operator -= (const SbVec2i32 & v) { vec[0] -= v[0]; vec[1] -= v[1]; return *this; }
  SbVec2i32 operator - (void) const { return SbVec2i32(-vec[0], -vec[1]); }

  void print(FILE * fp) const;

protected:
  int32_t vec[2];

};

 inline SbVec2i32 operator * (const SbVec2i32 & v, int d) {
  SbVec2i32 val(v); val *= d; return val;
}

 inline SbVec2i32 operator * (const SbVec2i32 & v, double d) {
  SbVec2i32 val(v); val *= d; return val;
}

 inline SbVec2i32 operator * (int d, const SbVec2i32 & v) {
  SbVec2i32 val(v); val *= d; return val;
}

 inline SbVec2i32 operator * (double d, const SbVec2i32 & v) {
  SbVec2i32 val(v); val *= d; return val;
}

 inline SbVec2i32 operator / (const SbVec2i32 & v, int d) {
  SbDividerChk("operator/(SbVec2i32,int)", d);
  SbVec2i32 val(v); val /= d; return val;
}

 inline SbVec2i32 operator / (const SbVec2i32 & v, double d) {
  SbDividerChk("operator/(SbVec2i32,double)", d);
  SbVec2i32 val(v); val /= d; return val;
}

 inline SbVec2i32 operator + (const SbVec2i32 & v1, const SbVec2i32 & v2) {
  SbVec2i32 v(v1); v += v2; return v;
}

 inline SbVec2i32 operator - (const SbVec2i32 & v1, const SbVec2i32 & v2) {
  SbVec2i32 v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec2i32 & v1, const SbVec2i32 & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]));
}

 inline int operator != (const SbVec2i32& v1, const SbVec2i32& v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/fields/SoSFVec2i32.h"
class SoSFVec2i32 : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec2i32(void);   virtual ~SoSFVec2i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec2i32::classTypeId.getName()); SoSFVec2i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec2i32 & operator=(const SoSFVec2i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec2i32 value;  public:   const SbVec2i32 & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec2i32 & newvalue);   const SbVec2i32 & operator=(const SbVec2i32 & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec2i32 & field) const;   int operator!=(const SoSFVec2i32 & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(int32_t x, int32_t y);
  void setValue(const int32_t xy[2]);

};
#line 42 "coin/include/Inventor/SbVec3i32.h"
class SbVec3ui32;
class SbVec3b;
class SbVec3s;
class SbVec3f;
class SbVec3d;

class SbVec3i32 {
public:
  SbVec3i32(void) { }
  SbVec3i32(const int32_t v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; }
  SbVec3i32(int32_t x, int32_t y, int32_t z) { vec[0] = x; vec[1] = y; vec[2] = z; }
  explicit SbVec3i32(const SbVec3ui32 & v) { setValue(v); }
  explicit SbVec3i32(const SbVec3b & v) { setValue(v); }
  explicit SbVec3i32(const SbVec3s & v) { setValue(v); }
  explicit SbVec3i32(const SbVec3f & v) { setValue(v); }
  explicit SbVec3i32(const SbVec3d & v) { setValue(v); }

  SbVec3i32 & setValue(const int32_t v[3]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; return *this; }
  SbVec3i32 & setValue(int32_t x, int32_t y, int32_t z) { vec[0] = x; vec[1] = y; vec[2] = z; return *this; }
  SbVec3i32 & setValue(const SbVec3ui32 & v);
  SbVec3i32 & setValue(const SbVec3b & v);
  SbVec3i32 & setValue(const SbVec3s & v);
  SbVec3i32 & setValue(const SbVec3f & v);
  SbVec3i32 & setValue(const SbVec3d & v);

  const int32_t * getValue(void) const { return vec; }
  void getValue(int32_t & x, int32_t & y, int32_t & z) const { x = vec[0]; y = vec[1]; z = vec[2]; }

  int32_t & operator [] (int i) { return vec[i]; }
  const int32_t & operator [] (int i) const { return vec[i]; }

  int32_t dot(const SbVec3i32 & v) const { return vec[0] * v[0] + vec[1] * v[1] + vec[2] * v[2]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; }

  SbVec3i32 & operator *= (int d) { vec[0] *= d; vec[1] *= d; vec[2] *= d; return *this; }
  SbVec3i32 & operator *= (double d);
  SbVec3i32 & operator /= (int d) { SbDividerChk("SbVec3i32::operator/=(int)", d); vec[0] /= d; vec[1] /= d; vec[2] /= d; return *this; }
  SbVec3i32 & operator /= (double d) { SbDividerChk("SbVec3i32::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec3i32 & operator += (const SbVec3i32 & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; return *this; }
  SbVec3i32 & operator -= (const SbVec3i32 & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; return *this; }
  SbVec3i32 operator - (void) const { return SbVec3i32(-vec[0], -vec[1], -vec[2]); }

protected:
  int32_t vec[3];

};

 inline SbVec3i32 operator * (const SbVec3i32 & v, int d) {
  SbVec3i32 val(v); val *= d; return val;
}

 inline SbVec3i32 operator * (const SbVec3i32 & v, double d) {
  SbVec3i32 val(v); val *= d; return val;
}

 inline SbVec3i32 operator * (int d, const SbVec3i32 & v) {
  SbVec3i32 val(v); val *= d; return val;
}

 inline SbVec3i32 operator * (double d, const SbVec3i32 & v) {
  SbVec3i32 val(v); val *= d; return val;
}

 inline SbVec3i32 operator / (const SbVec3i32 & v, int d) {
  SbDividerChk("operator/(SbVec3i32,int)", d);
  SbVec3i32 val(v); val /= d; return val;
}

 inline SbVec3i32 operator / (const SbVec3i32 & v, double d) {
  SbDividerChk("operator/(SbVec3i32,double)", d);
  SbVec3i32 val(v); val /= d; return val;
}

 inline SbVec3i32 operator + (const SbVec3i32 & v1, const SbVec3i32 & v2) {
  SbVec3i32 v(v1); v += v2; return v;
}

 inline SbVec3i32 operator - (const SbVec3i32 & v1, const SbVec3i32 & v2) {
  SbVec3i32 v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec3i32 & v1, const SbVec3i32 & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]));
}

 inline int operator != (const SbVec3i32 & v1, const SbVec3i32 & v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/fields/SoSFVec3i32.h"
class SoSFVec3i32 : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec3i32(void);   virtual ~SoSFVec3i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec3i32::classTypeId.getName()); SoSFVec3i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec3i32 & operator=(const SoSFVec3i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec3i32 value;  public:   const SbVec3i32 & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec3i32 & newvalue);   const SbVec3i32 & operator=(const SbVec3i32 & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec3i32 & field) const;   int operator!=(const SoSFVec3i32 & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(int32_t x, int32_t y, int32_t z);
  void setValue(const int32_t xyz[3]);

};
#line 42 "coin/include/Inventor/SbVec4i32.h"
class SbVec4ui32;
class SbVec4b;
class SbVec4s;
class SbVec4f;
class SbVec4d;

class SbVec4i32 {
public:
  SbVec4i32(void) { }
  SbVec4i32(const int32_t v[4]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; vec[3] = v[3]; }
  SbVec4i32(int32_t x, int32_t y, int32_t z, int32_t w) { vec[0] = x; vec[1] = y; vec[2] = z; vec[3] = w; }
  explicit SbVec4i32(const SbVec4ui32 & v) { setValue(v); }
  explicit SbVec4i32(const SbVec4b & v) { setValue(v); }
  explicit SbVec4i32(const SbVec4s & v) { setValue(v); }
  explicit SbVec4i32(const SbVec4f & v) { setValue(v); }
  explicit SbVec4i32(const SbVec4d & v) { setValue(v); }

  SbVec4i32 & setValue(const int32_t v[4]) { vec[0] = v[0]; vec[1] = v[1]; vec[2] = v[2]; vec[3] = v[3]; return *this; }
  SbVec4i32 & setValue(int32_t x, int32_t y, int32_t z, int32_t w) { vec[0] = x; vec[1] = y; vec[2] = z; vec[3] = w; return *this; }
  SbVec4i32 & setValue(const SbVec4ui32 & v);
  SbVec4i32 & setValue(const SbVec4b & v);
  SbVec4i32 & setValue(const SbVec4s & v);
  SbVec4i32 & setValue(const SbVec4f & v);
  SbVec4i32 & setValue(const SbVec4d & v);

  const int32_t * getValue(void) const { return vec; }
  void getValue(int32_t & x, int32_t & y, int32_t & z, int32_t & w) const { x = vec[0]; y = vec[1]; z = vec[2]; w = vec[3]; }

  int32_t & operator [] (int i) { return vec[i]; }
  const int32_t & operator [] (int i) const { return vec[i]; }

  int32_t dot(const SbVec4i32 & v) const { return vec[0] * v[0] + vec[1] * v[1] + vec[2] * v[2] + vec[3] * v[3]; }
  void negate(void) { vec[0] = -vec[0]; vec[1] = -vec[1]; vec[2] = -vec[2]; vec[3] = -vec[3]; }

  SbVec4i32 & operator *= (int d) { vec[0] *= d; vec[1] *= d; vec[2] *= d; vec[3] *= d; return *this; }
  SbVec4i32 & operator *= (double d);
  SbVec4i32 & operator /= (int d) { SbDividerChk("SbVec4i32::operator/=(int)", d); vec[0] /= d; vec[1] /= d; vec[2] /= d; vec[3] /= d; return *this; }
  SbVec4i32 & operator /= (double d) { SbDividerChk("SbVec4i32::operator/=(double)", d); return operator *= (1.0 / d); }
  SbVec4i32 & operator += (const SbVec4i32 & v) { vec[0] += v[0]; vec[1] += v[1]; vec[2] += v[2]; vec[3] += v[3]; return *this; }
  SbVec4i32 & operator -= (const SbVec4i32 & v) { vec[0] -= v[0]; vec[1] -= v[1]; vec[2] -= v[2]; vec[3] -= v[3]; return *this; }
  SbVec4i32 operator - (void) const { return SbVec4i32(-vec[0], -vec[1], -vec[2], -vec[3]); }

protected:
  int32_t vec[4];

};

 inline SbVec4i32 operator * (const SbVec4i32 & v, int d) {
  SbVec4i32 val(v); val *= d; return val;
}

 inline SbVec4i32 operator * (const SbVec4i32 & v, double d) {
  SbVec4i32 val(v); val *= d; return val;
}

 inline SbVec4i32 operator * (int d, const SbVec4i32 & v) {
  SbVec4i32 val(v); val *= d; return val;
}

 inline SbVec4i32 operator * (double d, const SbVec4i32 & v) {
  SbVec4i32 val(v); val *= d; return val;
}

 inline SbVec4i32 operator / (const SbVec4i32 & v, int d) {
  SbDividerChk("operator/(SbVec4i32,int)", d);
  SbVec4i32 val(v); val /= d; return val;
}

 inline SbVec4i32 operator / (const SbVec4i32 & v, double d) {
  SbDividerChk("operator/(SbVec4i32,double)", d);
  SbVec4i32 val(v); val /= d; return val;
}

 inline SbVec4i32 operator + (const SbVec4i32 & v1, const SbVec4i32 & v2) {
  SbVec4i32 v(v1); v += v2; return v;
}

 inline SbVec4i32 operator - (const SbVec4i32 & v1, const SbVec4i32 & v2) {
  SbVec4i32 v(v1); v -= v2; return v;
}

 inline int operator == (const SbVec4i32 & v1, const SbVec4i32 & v2) {
  return ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]) && (v1[3] == v2[3]));
}

 inline int operator != (const SbVec4i32 & v1, const SbVec4i32 & v2) {
  return !(v1 == v2);
}
#line 40 "coin/include/Inventor/fields/SoSFVec4i32.h"
class SoSFVec4i32 : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec4i32(void);   virtual ~SoSFVec4i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec4i32::classTypeId.getName()); SoSFVec4i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec4i32 & operator=(const SoSFVec4i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec4i32 value;  public:   const SbVec4i32 & getValue(void) const { this->evaluate(); return this->value; }   void setValue(const SbVec4i32 & newvalue);   const SbVec4i32 & operator=(const SbVec4i32 & newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec4i32 & field) const;   int operator!=(const SoSFVec4i32 & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(int32_t x, int32_t y, int32_t z, int32_t w);
  void setValue(const int32_t xyzw[4]);

};
#line 40 "coin/include/Inventor/fields/SoMFVec2i32.h"
class SoMFVec2i32 : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec2i32(void);   virtual ~SoMFVec2i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec2i32::classTypeId.getName()); SoMFVec2i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec2i32 & operator=(const SoMFVec2i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec2i32 * values; public:   const SbVec2i32 & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec2i32 * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec2i32 *>(this->values + start); }   int find(const SbVec2i32 & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec2i32 * newvals);   void set1Value(const int idx, const SbVec2i32 & value);   void setValue(const SbVec2i32 & value);   const SbVec2i32 & operator=(const SbVec2i32 & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec2i32 & field) const;   SbBool operator!=(const SoMFVec2i32 & field) const { return !operator==(field); }   SbVec2i32 * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const SbVec2i32 * userdata);   void setValuesPointer(const int num, SbVec2i32 * userdata);
  void setValuesPointer(const int num, const int32_t * userdata);   void setValuesPointer(const int num, int32_t * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const int32_t xy[][2]);
  void set1Value(int idx, int32_t x, int32_t y);
  void set1Value(int idx, const int32_t xy[2]);
  void setValue(int32_t x, int32_t y);
  void setValue(const int32_t xy[2]);

};
#line 40 "coin/include/Inventor/fields/SoMFVec3i32.h"
class SoMFVec3i32 : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec3i32(void);   virtual ~SoMFVec3i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec3i32::classTypeId.getName()); SoMFVec3i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec3i32 & operator=(const SoMFVec3i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec3i32 * values; public:   const SbVec3i32 & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec3i32 * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec3i32 *>(this->values + start); }   int find(const SbVec3i32 & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec3i32 * newvals);   void set1Value(const int idx, const SbVec3i32 & value);   void setValue(const SbVec3i32 & value);   const SbVec3i32 & operator=(const SbVec3i32 & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec3i32 & field) const;   SbBool operator!=(const SoMFVec3i32 & field) const { return !operator==(field); }   SbVec3i32 * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };
  void setValuesPointer(const int num, const SbVec3i32 * userdata);   void setValuesPointer(const int num, SbVec3i32 * userdata);
  void setValuesPointer(const int num, const int32_t * userdata);   void setValuesPointer(const int num, int32_t * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const int32_t xyz[][3]);
  void set1Value(int idx, int32_t x, int32_t y, int32_t z);
  void set1Value(int idx, const int32_t xyz[3]);
  void setValue(int32_t x, int32_t y, int32_t z);
  void setValue(const int32_t xyz[3]);

};
#line 40 "coin/include/Inventor/fields/SoMFVec4i32.h"
class SoMFVec4i32 : public SoMField {
  typedef SoMField inherited;

  public:   SoMFVec4i32(void);   virtual ~SoMFVec4i32();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFVec4i32::classTypeId.getName()); SoMFVec4i32::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFVec4i32 & operator=(const SoMFVec4i32 & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    SbVec4i32 * values; public:   const SbVec4i32 & operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const SbVec4i32 * getValues(const int start) const     { this->evaluate(); return const_cast<const SbVec4i32 *>(this->values + start); }   int find(const SbVec4i32 & value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const SbVec4i32 * newvals);   void set1Value(const int idx, const SbVec4i32 & value);   void setValue(const SbVec4i32 & value);   const SbVec4i32 & operator=(const SbVec4i32 & val) { this->setValue(val); return val; }   SbBool operator==(const SoMFVec4i32 & field) const;   SbBool operator!=(const SoMFVec4i32 & field) const { return !operator==(field); }   SbVec4i32 * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

  void setValuesPointer(const int num, const SbVec4i32 * userdata);   void setValuesPointer(const int num, SbVec4i32 * userdata);
  void setValuesPointer(const int num, const int32_t * userdata);   void setValuesPointer(const int num, int32_t * userdata);

public:
  static void initClass(void);

  void setValues(int start, int num, const int32_t xyzw[][4]);
  void set1Value(int idx, int32_t x, int32_t y, int32_t z, int32_t w);
  void set1Value(int idx, const int32_t xyzw[4]);
  void setValue(int32_t x, int32_t y, int32_t z, int32_t w);
  void setValue(const int32_t xyzw[4]);

};
#line 62 "coin/include/Inventor/nodes/SoShaderParameter.h"
class SoGLShaderParameter;
class SoGLShaderObject;
class SoState;
#line 74 "coin/include/Inventor/nodes/SoShaderParameter.h"
class SoShaderParameter : public SoNode {
  typedef SoNode inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

public:
  SoSFString name;
  SoSFInt32 identifier;

   public:
  static void initClass();

protected:
  SoShaderParameter();
  virtual ~SoShaderParameter();
};




class SoUniformShaderParameterP;

class SoUniformShaderParameter : public SoShaderParameter {
  typedef SoShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances;

   public:
  static void initClass(void);
  virtual void updateParameter(SoGLShaderObject *shaderObject) = 0;

protected:
  SoUniformShaderParameter();
  virtual ~SoUniformShaderParameter();

  SoGLShaderParameter * getGLShaderParameter(const uint32_t cachecontext);
  void ensureParameter(SoGLShaderObject * shader);

private:
  SoUniformShaderParameterP * pimpl;
};





class SoShaderParameter1f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFFloat value;
  SoShaderParameter1f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter1f();
};





class SoShaderParameter1i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFInt32 value;
  SoShaderParameter1i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter1i();
};





class SoShaderParameter2f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec2f value;
  SoShaderParameter2f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter2f();
};





class SoShaderParameter2i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec2i32 value;
  SoShaderParameter2i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter2i();
};





class SoShaderParameter3f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec3f value;

  SoShaderParameter3f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter3f();
};





class SoShaderParameter3i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec3i32 value;

  SoShaderParameter3i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter3i();
};





class SoShaderParameter4f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec4f value;

  SoShaderParameter4f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter4f();
};





class SoShaderParameter4i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFVec4i32 value;

  SoShaderParameter4i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameter4i();
};





class SoShaderParameterArray1f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFFloat value;

  SoShaderParameterArray1f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray1f();
};





class SoShaderParameterArray1i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFInt32 value;

  SoShaderParameterArray1i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray1i();
};





class SoShaderParameterArray2f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec2f value;

  SoShaderParameterArray2f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray2f();
};




class SoShaderParameterArray2i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec2i32 value;

  SoShaderParameterArray2i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray2i();
};





class SoShaderParameterArray3f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec3f value;

  SoShaderParameterArray3f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray3f();
};





class SoShaderParameterArray3i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec3i32 value;

  SoShaderParameterArray3i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray3i();
};





class SoShaderParameterArray4f : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec4f value;

  SoShaderParameterArray4f();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray4f();

};





class SoShaderParameterArray4i : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFVec4i32 value;

  SoShaderParameterArray4i();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterArray4i();
};





class SoShaderParameterMatrix : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoSFMatrix value;

  SoShaderParameterMatrix();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterMatrix();
};





class SoShaderParameterMatrixArray : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFMatrix value;

  SoShaderParameterMatrixArray();

   public:
  static void initClass();
  virtual void updateParameter(SoGLShaderObject *shaderObject);

protected:
  virtual ~SoShaderParameterMatrixArray();
};





class SoShaderStateMatrixParameter : public SoUniformShaderParameter {
  typedef SoUniformShaderParameter inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:

  enum MatrixType {
    MODELVIEW,
    PROJECTION,
    TEXTURE,
    MODELVIEW_PROJECTION
  };

  enum MatrixTransform{
    IDENTITY,
    TRANSPOSE,
    INVERSE,
    INVERSE_TRANSPOSE
  };

  SoSFEnum matrixType;
  SoSFEnum matrixTransform;

  SoShaderStateMatrixParameter();
  virtual ~SoShaderStateMatrixParameter();

  static void initClass(void);
  virtual void updateParameter(SoGLShaderObject *shaderObject);
  virtual void updateValue(SoState *state);

protected:


  SbMatrix value;
};
#line 40 "coin/include/Inventor/nodes/SoShaderProgram.h"
class SoState;
class SoGLRenderAction;


typedef void SoShaderProgramEnableCB(void * closure,
                                     SoState * state,
                                     const SbBool enable);



class SoShaderProgram : public SoNode {
  typedef SoNode inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  SoMFNode shaderObject;

  SoShaderProgram(void);

  void setEnableCallback(SoShaderProgramEnableCB * cb,
                         void * closure);

 public:
  virtual void GLRender(SoGLRenderAction * action);
  virtual void search(SoSearchAction * action);

 public:
  static void initClass();

protected:
  virtual ~SoShaderProgram();

private:
  class SoShaderProgramP * pimpl;
};
#line 40 "coin/include/Inventor/nodes/SoFragmentShader.h"
class SoFragmentShader : public SoShaderObject {
  typedef SoShaderObject inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoFragmentShader(void);
  virtual ~SoFragmentShader();

  static SbBool isSupported(SourceType sourceType);
};
#line 38 "coin/include/Inventor/nodes/SoVertexShader.h"
class SoVertexShader : public SoShaderObject {
  typedef SoShaderObject inherited;
  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoVertexShader(void);
  virtual ~SoVertexShader();

  static SbBool isSupported(SourceType sourceType);
};
#line 42 "coin/include/Inventor/nodes/SoTextureCoordinateNormalMap.h"
class SoTextureCoordinateNormalMap : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateNormalMap(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTextureCoordinateNormalMap();

private:
  static const SbVec4f & generate(void *userdata,
                                  const SbVec3f & p,
                                  const SbVec3f & n);
  static void handleTexgen(void *data);
};
#line 43 "coin/include/Inventor/nodes/SoTextureCoordinateReflectionMap.h"
class SoTextureCoordinateReflectionMap : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateReflectionMap(void);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTextureCoordinateReflectionMap();

private:
  static const SbVec4f & generate(void *userdata,
                                  const SbVec3f &p,
                                  const SbVec3f &n);
  static void handleTexgen(void *data);

};
#line 40 "coin/include/Inventor/nodes/SoTextureCoordinateObject.h"
class SoTextureCoordinateObject : public SoTextureCoordinateFunction {
  typedef SoTextureCoordinateFunction inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCoordinateObject(void);

  SoSFVec4f factorS;
  SoSFVec4f factorT;
  SoSFVec4f factorR;
  SoSFVec4f factorQ;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void callback(SoCallbackAction * action);

protected:
  virtual ~SoTextureCoordinateObject();

private:
  static const SbVec4f &generate(void *userdata,
                                 const SbVec3f & p,
                                 const SbVec3f & n);
  static void handleTexgen(void *data);

  SbVec4f dummy_object;
};
#line 40 "coin/include/Inventor/nodes/SoTextureScalePolicy.h"
class SoTextureScalePolicy : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureScalePolicy(void);

  enum Policy {
    USE_TEXTURE_QUALITY,
    SCALE_DOWN,
    SCALE_UP,
    FRACTURE
  };

  SoSFEnum policy;
  SoSFFloat quality;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoTextureScalePolicy();
};
#line 40 "coin/include/Inventor/nodes/SoTextureUnit.h"
class SoTextureUnit : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureUnit(void);

  enum MappingMethod {
    BUMP_MAPPING,
    IMAGE_MAPPING
  };

  SoSFInt32 unit;
  SoSFEnum mappingMethod;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);

  static uint32_t getMaxTextureUnit(void);
protected:
  virtual ~SoTextureUnit();
};
#line 39 "coin/include/Inventor/fields/SoMFEnum.h"
class SoMFEnum : public SoMField {
  typedef SoMField inherited;

  public:   SoMFEnum(void);   virtual ~SoMFEnum();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoMFEnum::classTypeId.getName()); SoMFEnum::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoMFEnum & operator=(const SoMFEnum & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool read1Value(SoInput * in, int idx);   virtual void write1Value(SoOutput * out, int idx) const; protected:   virtual void deleteAllValues(void);   virtual void copyValue(int to, int from);   virtual int fieldSizeof(void) const;   virtual void * valuesPtr(void);   virtual void setValuesPtr(void * ptr);   virtual void allocValues(int num);    int * values; public:   int operator[](const int idx) const     { this->evaluate(); return this->values[idx]; }   const int * getValues(const int start) const     { this->evaluate(); return const_cast<const int *>(this->values + start); }   int find(int value, SbBool addifnotfound = 0);   void setValues(const int start, const int num, const int * newvals);   void set1Value(const int idx, int value);   void setValue(int value);   int operator=(int val) { this->setValue(val); return val; }   SbBool operator==(const SoMFEnum & field) const;   SbBool operator!=(const SoMFEnum & field) const { return !operator==(field); }   int * startEditing(void) { this->evaluate(); return this->values; }   void finishEditing(void) { this->valueChanged(); };

public:
  static void initClass(void);

  void setValue(const SbName name);
  void set1Value(const int idx, const SbName name);
  void setEnums(const int num, const int * const values,
                const SbName * const names);

  int getNumEnums(void) const;
  int getEnum(const int idx, SbName & name) const;

protected:
  virtual SbBool findEnumValue(const SbName & name, int & value);
  virtual SbBool findEnumName(int value, const SbName * & name) const;

  SbBool legalValuesSet;
  int numEnums;
  int * enumValues;
  SbName * enumNames;
};
#line 40 "coin/include/Inventor/SbColor4f.h"
class SbVec4f;

class SbColor4f : public SbVec4f {
public:
  SbColor4f(void);
  SbColor4f(const SbColor &rgb, const float alpha = 1.0f);
  SbColor4f(const SbVec4f& v);
  SbColor4f(const float* const rgba);
  SbColor4f(const float r, const float g, const float b, const float a = 1.0f);

  void setValue(const float r, const float g, const float b,
                const float a = 1.0f);
  void setValue(const float col[4]);
  const float *getValue() const;
  void getValue(float &r, float &g, float &b, float &a);

  SbColor4f& setRGB(const SbColor &col);
  void getRGB(SbColor &color);
  SbColor4f& setHSVValue(float h, float s, float v, float a = 1.0f);
  SbColor4f& setHSVValue(const float hsv[3], float alpha = 1.0f);
  void getHSVValue(float &h, float &s, float &v) const;
  void getHSVValue(float hsv[3]) const;
  SbColor4f& setPackedValue(const uint32_t rgba);
  uint32_t getPackedValue() const;

  float & operator[](int idx);
  const float & operator[](int idx) const;

  SbColor4f &operator*=(const float d);
  SbColor4f &operator/=(const float d);
  SbColor4f &operator+=(const SbColor4f &c);
  SbColor4f &operator-=(const SbColor4f &c);

  friend SbColor4f operator *(const SbColor4f &c, const float d);
  friend SbColor4f operator *(const float d, const SbColor4f &c);
  friend SbColor4f operator /(const SbColor4f &c, const float d);
  friend SbColor4f operator +(const SbColor4f &v1, const SbColor4f &v2);
  friend SbColor4f operator -(const SbColor4f &v1, const SbColor4f &v2);
  friend int operator ==(const SbColor4f &v1, const SbColor4f &v2);
  friend int operator !=(const SbColor4f &v1, const SbColor4f &v2);

private:
  float red() const { return this->vec[0]; }
  float green() const { return this->vec[1]; }
  float blue() const { return this->vec[2]; }
  float alpha() const { return this->vec[3]; }
};

 SbColor4f operator *(const SbColor4f &c, const float d);
 SbColor4f operator *(const float d, const SbColor4f &c);
 SbColor4f operator /(const SbColor4f &c, const float d);
 SbColor4f operator +(const SbColor4f &v1, const SbColor4f &v2);
 SbColor4f operator -(const SbColor4f &v1, const SbColor4f &v2);
 int operator ==(const SbColor4f &v1, const SbColor4f &v2);
 int operator !=(const SbColor4f &v1, const SbColor4f &v2);

typedef class SbColor4f SbColorRGBA;
#line 41 "coin/include/Inventor/elements/SoTextureCombineElement.h"
class SoState;
class SoTextureCombineElementP;

class SoTextureCombineElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoTextureCombineElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoTextureCombineElement::classTypeId.getName()); SoTextureCombineElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoTextureCombineElement();

public:

  enum Source {
    PRIMARY_COLOR = 0x8577,
    TEXTURE = 0x1702,
    CONSTANT = 0x8576,
    PREVIOUS =  0x8578
  };
  enum Operand {
    SRC_COLOR = 0x0300,
    ONE_MINUS_SRC_COLOR = 0x0301,
    SRC_ALPHA = 0x0302,
    ONE_MINUS_SRC_ALPHA = 0x0303
  };
  enum Operation {
    REPLACE = 0x1E01,
    MODULATE = 0x2100,
    ADD = 0x0104,
    ADD_SIGNED = 0x8574,
    SUBTRACT = 0x84E7,
    INTERPOLATE = 0x8575,
    DOT3_RGB = 0x86AE,
    DOT3_RGBA = 0x86AF
  };

  virtual void init(SoState * state);

  static void set(SoState * const state, SoNode * const node,
                  const int unit,
                  const Operation rgboperation,
                  const Operation alphaoperation,
                  const Source * rgbsource,
                  const Source * alphasource,
                  const Operand * rgboperand,
                  const Operand * alphaoperand,
                  const SbColor4f & constantcolor,
                  const float rgbscale,
                  const float alphascale);

  static SbBool isDefault(SoState * const state,
                          const int unit);

  static void get(SoState * const state,
                  const int unit,
                  Operation & rgboperation,
                  Operation & alphaoperation,
                  Source * rgbsource,
                  Source * alphasource,
                  Operand * rgboperand,
                  Operand * alphaoperand,
                  SbColor4f & constantcolor,
                  float & rgbscale,
                  float & alphascale);

  virtual void push(SoState * state);
  virtual SbBool matches(const SoElement * elem) const;
  SoElement * copyMatchInfo(void) const;

  virtual void setElt(const int unit,
                      const SbUniqueId nodeid,
                      const Operation rgboperation,
                      const Operation alphaoperation,
                      const Source * rgbsource,
                      const Source * alphasource,
                      const Operand * rgboperand,
                      const Operand * alphaoperand,
                      const SbColor4f & constantcolor,
                      const float rgbscale,
                      const float alphascale);

  static void apply(SoState * state, const int unit);

  class UnitData {
  public:
    UnitData();
    UnitData(const UnitData & org);

    SbUniqueId nodeid;
    Source rgbsource[3];
    Source alphasource[3];
    Operand rgboperand[3];
    Operand alphaoperand[3];
    Operation rgboperation;
    Operation alphaoperation;
    SbColor4f constantcolor;
    float rgbscale;
    float alphascale;
  };

protected:
  const UnitData & getUnitData(const int unit) const;

private:
  SoTextureCombineElementP * pimpl;
};
#line 43 "coin/include/Inventor/nodes/SoTextureCombine.h"
class SoTextureCombine : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoTextureCombine(void);

  enum Source {
    PRIMARY_COLOR = SoTextureCombineElement::PRIMARY_COLOR,
    TEXTURE = SoTextureCombineElement::TEXTURE,
    CONSTANT = SoTextureCombineElement::CONSTANT,
    PREVIOUS = SoTextureCombineElement::PREVIOUS
  };
  enum Operand {
    SRC_COLOR = SoTextureCombineElement::SRC_COLOR,
    ONE_MINUS_SRC_COLOR = SoTextureCombineElement::ONE_MINUS_SRC_COLOR,
    SRC_ALPHA = SoTextureCombineElement::SRC_ALPHA,
    ONE_MINUS_SRC_ALPHA = SoTextureCombineElement::ONE_MINUS_SRC_ALPHA
  };
  enum Operation {
    REPLACE = SoTextureCombineElement::REPLACE,
    MODULATE = SoTextureCombineElement::MODULATE,
    ADD = SoTextureCombineElement::ADD,
    ADD_SIGNED = SoTextureCombineElement::ADD_SIGNED,
    SUBTRACT = SoTextureCombineElement::SUBTRACT,
    INTERPOLATE = SoTextureCombineElement::INTERPOLATE,
    DOT3_RGB = SoTextureCombineElement::DOT3_RGB,
    DOT3_RGBA = SoTextureCombineElement::DOT3_RGBA
  };

  SoMFEnum rgbSource;
  SoMFEnum alphaSource;

  SoMFEnum rgbOperand;
  SoMFEnum alphaOperand;

  SoSFEnum rgbOperation;
  SoSFEnum alphaOperation;

  SoSFFloat rgbScale;
  SoSFFloat alphaScale;

  SoSFVec4f constantColor;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCombine();
};
#line 42 "coin/include/Inventor/nodes/SoBumpMap.h"
class SoFieldSensor;
class SoSensor;
class SoBumpMapP;

class SoBumpMap : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoBumpMap(void);

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP
  };

  SoSFString filename;
  SoSFImage image;
  SoSFEnum wrapS;
  SoSFEnum wrapT;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void rayPick(SoRayPickAction * action);

protected:
  virtual ~SoBumpMap();

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void notify(SoNotList * list);

private:
  SbBool loadFilename(void);
  static void filenameSensorCB(void *, SoSensor *);

  SoBumpMapP * pimpl;
};
#line 39 "coin/include/Inventor/nodes/SoBumpMapCoordinate.h"
class SoBumpMapCoordinate : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoBumpMapCoordinate(void);

  SoMFVec2f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoBumpMapCoordinate();
};
#line 40 "coin/include/Inventor/nodes/SoBumpMapTransform.h"
class SbMatrix;

class SoBumpMapTransform : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoBumpMapTransform(void);

  SoSFVec2f translation;
  SoSFFloat rotation;
  SoSFVec2f scaleFactor;
  SoSFVec2f center;

  virtual void doAction(SoAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoBumpMapTransform();

private:
  void makeMatrix(SbMatrix & mat);
};
#line 40 "coin/include/Inventor/fields/SoSFVec2s.h"
class SoSFVec2s : public SoSField {
  typedef SoSField inherited;

  public:   SoSFVec2s(void);   virtual ~SoSFVec2s();   private:   static SoType classTypeId;   static void atexit_cleanup(void) { SoType::removeType(SoSFVec2s::classTypeId.getName()); SoSFVec2s::classTypeId = SoType::badType(); } public:   static void * createInstance(void);   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const;    virtual void copyFrom(const SoField & field);   const SoSFVec2s & operator=(const SoSFVec2s & field);   virtual SbBool isSame(const SoField & field) const;   private:   virtual SbBool readValue(SoInput * in);   virtual void writeValue(SoOutput * out) const; protected:   SbVec2s value;  public:   SbVec2s getValue(void) const { this->evaluate(); return this->value; }   void setValue(SbVec2s newvalue);   SbVec2s operator=(SbVec2s newvalue) { this->setValue(newvalue); return this->value; }    int operator==(const SoSFVec2s & field) const;   int operator!=(const SoSFVec2s & field) const { return ! operator==(field); };

public:
  static void initClass(void);

  void setValue(short x, short y);
  void setValue(const short xy[2]);

};
#line 45 "coin/include/Inventor/nodes/SoSceneTexture2.h"
class SoSceneTexture2P;

class SoSceneTexture2 : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSceneTexture2(void);

  enum Model {
    MODULATE = SoMultiTextureImageElement::MODULATE,
    DECAL = SoMultiTextureImageElement::DECAL,
    BLEND = SoMultiTextureImageElement::BLEND,
    REPLACE = SoMultiTextureImageElement::REPLACE
  };

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP,
    CLAMP_TO_BORDER = SoMultiTextureImageElement::CLAMP_TO_BORDER
  };

  enum TransparencyFunction {
    NONE,
    ALPHA_BLEND,
    ALPHA_TEST
  };

  enum Type {
    DEPTH,
    RGBA8,
    RGBA32F,
    RGB32F,
    RGBA16F,
    RGB16F,


    R3_G3_B2,
    RGB,
    RGB4,
    RGB5,
    RGB8,
    RGB10,
    RGB12,
    RGB16,
    RGBA,
    RGBA2,
    RGBA4,
    RGB5_A1,
    RGB10_A2,
    RGBA12,
    RGBA16
  };

  SoSFEnum wrapS;
  SoSFEnum wrapT;
  SoSFEnum model;
  SoSFColor blendColor;

  SoSFVec4f backgroundColor;
  SoSFVec2s size;
  SoSFNode scene;
  SoSFNode sceneTransparencyType;
  SoSFEnum transparencyFunction;

  SoSFEnum type;

  virtual void notify(SoNotList * list);
  virtual void write(SoWriteAction * action);

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void rayPick(SoRayPickAction * action);

protected:
  virtual ~SoSceneTexture2(void);

private:
  SoSceneTexture2P * pimpl;
};
#line 44 "coin/include/Inventor/nodes/SoSceneTextureCubeMap.h"
class SoSensor;
class SoSceneTextureCubeMapP;

class SoSceneTextureCubeMap : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoSceneTextureCubeMap(void);

  enum Model {
    MODULATE = SoMultiTextureImageElement::MODULATE,
    DECAL = SoMultiTextureImageElement::DECAL,
    BLEND = SoMultiTextureImageElement::BLEND,
    REPLACE = SoMultiTextureImageElement::REPLACE
  };

  enum Wrap {
    REPEAT = SoMultiTextureImageElement::REPEAT,
    CLAMP = SoMultiTextureImageElement::CLAMP
  };

  enum TransparencyFunction {
    NONE,
    ALPHA_BLEND,
    ALPHA_TEST
  };

  SoSFVec2s size;
  SoSFNode scene;

  SoSFEnum wrapS;
  SoSFEnum wrapT;
  SoSFEnum wrapR;
  SoSFEnum model;
  SoSFColor backgroundColor;

  SoSFEnum transparencyFunction;
  SoSFColor blendColor;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void rayPick(SoRayPickAction * action);

protected:
  virtual ~SoSceneTextureCubeMap();

  virtual void notify(SoNotList * list);

private:
  SoSceneTextureCubeMapP * pimpl;
};
#line 38 "coin/include/Inventor/elements/SoCacheHintElement.h"
class SoCacheHintElementP;
#line 43 "coin/include/Inventor/elements/SoCacheHintElement.h"
class SoCacheHintElement : public SoElement {
  typedef SoElement inherited;

  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoCacheHintElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoCacheHintElement::classTypeId.getName()); SoCacheHintElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);
public:
  static void initClass(void);
protected:
  virtual ~SoCacheHintElement();

public:

  virtual void init(SoState * state);
  virtual void push(SoState * state);
  virtual void pop(SoState * state, const SoElement * prevtopelement);

  virtual SbBool matches(const SoElement * element) const;
  virtual SoElement * copyMatchInfo(void) const;

  static void set(SoState * state, SoNode * node,
                  const float memvalue,
                  const float gfxvalue);
  static void get(SoState * state, float & memvalue, float & gfxvalue);

protected:

  SoCacheHintElementP * pimpl;
};
#line 45 "coin/include/Inventor/nodes/SoCacheHint.h"
class SoCacheHint : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoCacheHint(void);

  SoSFFloat memValue;
  SoSFFloat gfxValue;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void getBoundingBox(SoGetBoundingBoxAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoCacheHint();
};
#line 40 "coin/include/Inventor/elements/SoDepthBufferElement.h"
class SoDepthBufferElement : public SoElement {
  typedef SoElement inherited;
  public:   static SoType getClassTypeId(void);   static int getClassStackIndex(void); protected:   SoDepthBufferElement(void); private:   static int classStackIndex;   static SoType classTypeId;   static void cleanupClass(void) { SoType::removeType(SoDepthBufferElement::classTypeId.getName()); SoDepthBufferElement::classTypeId = SoType::badType(); }; public:   static void * createInstance(void);

public:
  static void initClass(void);

  enum DepthWriteFunction {
    NEVER,
    ALWAYS,
    LESS,
    LEQUAL,
    EQUAL,
    GEQUAL,
    GREATER,
    NOTEQUAL
  };

  static void set(SoState * state, SbBool test, SbBool write,
                  DepthWriteFunction function, SbVec2f range);

  static void get(SoState * state, SbBool & test_out, SbBool & write_out,
                  DepthWriteFunction & function_out, SbVec2f & range_out);

  static SbBool getTestEnable(SoState * state);
  static SbBool getWriteEnable(SoState * state);
  static DepthWriteFunction getFunction(SoState * state);
  static SbVec2f getRange(SoState * state);

  virtual void init(SoState * state);
  virtual void push(SoState * state);
  virtual void pop(SoState * state,
                   const SoElement * prevTopElement);

  virtual SbBool matches(const SoElement * element) const;
  virtual SoElement * copyMatchInfo(void) const;

protected:
  virtual ~SoDepthBufferElement();

  virtual void setElt(SbBool test, SbBool write,
                      DepthWriteFunction function, SbVec2f range);

  SbBool test;
  SbBool write;
  DepthWriteFunction function;
  SbVec2f range;

};
#line 42 "coin/include/Inventor/nodes/SoDepthBuffer.h"
class SoDepthBuffer : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoDepthBuffer(void);

  enum DepthWriteFunction {
    NEVER = SoDepthBufferElement::NEVER,
    ALWAYS = SoDepthBufferElement::ALWAYS,
    LESS = SoDepthBufferElement::LESS,
    LEQUAL = SoDepthBufferElement::LEQUAL,
    EQUAL = SoDepthBufferElement::EQUAL,
    GEQUAL = SoDepthBufferElement::GEQUAL,
    GREATER = SoDepthBufferElement::GREATER,
    NOTEQUAL = SoDepthBufferElement::NOTEQUAL
  };

  SoSFBool test;
  SoSFBool write;
  SoSFEnum function;
  SoSFVec2f range;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoDepthBuffer();

};
#line 40 "coin/include/Inventor/nodes/SoAlphaTest.h"
class SoAlphaTest : public SoNode {
  typedef SoNode inherited;

  public:   static SoType getClassTypeId(void);   virtual SoType getTypeId(void) const; private:   static SoType classTypeId; protected:   static const SoFieldData ** getFieldDataPtr(void);   virtual const SoFieldData * getFieldData(void) const; private:   static void atexit_cleanup(void);   static const SoFieldData ** parentFieldData;   static SoFieldData * fieldData;   static unsigned int classinstances; private:   static void * createInstance(void);

public:
  static void initClass(void);
  SoAlphaTest(void);

  enum Function {
      NONE,
      NEVER,
      ALWAYS,
      LESS,
      LEQUAL,
      EQUAL,
      GEQUAL,
      GREATER,
      NOTEQUAL
  };

  SoSFEnum function;
  SoSFFloat value;

  virtual void GLRender(SoGLRenderAction * action);

protected:
  virtual ~SoAlphaTest();

};
#line 38 "coin/include/Inventor/engines/SoNodeEngine.h"
class SoEngineOutput;
class SoEngineOutputList;
class SoEngineOutputData;

class SoNodeEngine : public SoNode {
  typedef SoNode inherited;

public:
  static void initClass(void);
  static SoType getClassTypeId(void);

  void evaluateWrapper(void);

  virtual int getOutputs(SoEngineOutputList & l) const;
  SoEngineOutput * getOutput(const SbName & outputname) const;
  SbBool getOutputName(const SoEngineOutput * output, SbName & outputname) const;
  virtual const SoEngineOutputData * getOutputData(void) const = 0;

  SbBool isNotifying(void) const;
  virtual void notify(SoNotList * nl);

  virtual void writeInstance(SoOutput * out);

protected:
  SoNodeEngine(void);
  virtual ~SoNodeEngine(void);
  virtual void evaluate(void) = 0;

  virtual SbBool readInstance(SoInput * in, unsigned short flags);
  virtual void inputChanged(SoField * which);

  static const SoFieldData ** getFieldDataPtr(void);
  static const SoEngineOutputData ** getOutputDataPtr(void);

  void writeOutputTypes(SoOutput * out);

private:
  virtual void destroy(void);

  static SoType classTypeId;
  unsigned int flags;
};
coin/src/nodes/SoNode.cpp:216 error: Include file 'tidbitsp.h' not found
#line 216 "coin/src/nodes/SoNode.cpp"
#include "tidbitsp.h"
coin/src/nodes/SoNode.cpp:217 error: Include file 'misc/SbHash.h' not found
#include "misc/SbHash.h"
coin/src/nodes/SoNode.cpp:218 error: Include file 'rendering/SoGL.h' not found
#include "rendering/SoGL.h"
coin/src/nodes/SoNode.cpp:219 error: Include file 'nodes/SoSubNodeP.h' not found
#include "nodes/SoSubNodeP.h"
coin/src/nodes/SoNode.cpp:220 error: Include file 'nodes/SoUnknownNode.h' not found
#include "nodes/SoUnknownNode.h"
coin/src/nodes/SoNode.cpp:221 error: Include file 'threads/threadsutilp.h' not found
#include "threads/threadsutilp.h"
coin/src/nodes/SoNode.cpp:222 error: Include file 'glue/glp.h' not found
#include "glue/glp.h"
coin/src/nodes/SoNode.cpp:223 error: Include file 'misc/SoDBP.h' not found
#include "misc/SoDBP.h"
#line 342 "coin/src/nodes/SoNode.cpp"
SbUniqueId SoNode::nextUniqueId = 1;
int SoNode::nextActionMethodIndex = 0;
SoType SoNode::classTypeId = SoType::badType();
static void * sonode_mutex = ((void *)0);

typedef SbHash<int16_t, uint32_t> Int16ToUInt32Map;
static Int16ToUInt32Map * compatibility_dict = ((void *)0);

static void init_action_methods(void);
#line 358 "coin/src/nodes/SoNode.cpp"
SoType
SoNode::getClassTypeId(void)
{
  return SoNode::classTypeId;
}
#line 376 "coin/src/nodes/SoNode.cpp"
inline void
SoNode::clearStateFlags(const unsigned int bits)
{
  this->stateflags &= ~bits;
}


inline void
SoNode::setStateFlags(const unsigned int bits)
{
  this->stateflags |= bits;
}


inline SbBool
SoNode::getState(const unsigned int bits) const
{
  return (this->stateflags & bits) != 0;
}
#line 415 "coin/src/nodes/SoNode.cpp"
SoNode::SoNode(void)
{
  CC_MUTEX_LOCK(sonode_mutex);   (this)->uniqueId = SoNode::nextUniqueId++;     if (this->uniqueId == 0) {                     this->uniqueId = SoNode::nextUniqueId++;   }   CC_MUTEX_UNLOCK(sonode_mutex);
  this->stateflags = 0;


  this->setNodeType(SoNode::INVENTOR);
}




SoNode::~SoNode()
{

  SoProtoInstance * inst = SoProtoInstance::findProtoInstance(this);
  if (inst) {

    inst->unref();
  }



}
#line 471 "coin/src/nodes/SoNode.cpp"
SoNode *
SoNode::copy(SbBool copyconnections) const
{



  SoFieldContainer::initCopyDict();
  SoNode * cp = this->addToCopyDict();

  cp->ref();





  (void) SoFieldContainer::findCopy(this, copyconnections);

  SoFieldContainer::copyDone();

  cp->unrefNoDelete();
  return cp;
}



void
SoNode::startNotify(void)
{
  inherited::startNotify();
}


void
SoNode::notify(SoNotList * l)
{
#line 514 "coin/src/nodes/SoNode.cpp"
  if (l->getTimeStamp() > this->uniqueId) {
    CC_MUTEX_LOCK(sonode_mutex);   (this)->uniqueId = SoNode::nextUniqueId++;     if (this->uniqueId == 0) {                     this->uniqueId = SoNode::nextUniqueId++;   }   CC_MUTEX_UNLOCK(sonode_mutex);
    inherited::notify(l);
  }
}




int
SoNode::getActionMethodIndex(const SoType type)
{
  return type.getData();
}
#line 535 "coin/src/nodes/SoNode.cpp"
void
SoNode::setNextActionMethodIndex(int index)
{
  SoNode::nextActionMethodIndex = index;
}
#line 547 "coin/src/nodes/SoNode.cpp"
int
SoNode::getNextActionMethodIndex(void)
{
  return SoNode::nextActionMethodIndex;
}
#line 559 "coin/src/nodes/SoNode.cpp"
void
SoNode::incNextActionMethodIndex(void)
{
  SoNode::nextActionMethodIndex++;
}




void
SoNode::initClass(void)
{

  assert(SoNode::classTypeId == SoType::badType());

  assert(inherited::getClassTypeId() != SoType::badType());

  CC_MUTEX_CONSTRUCT(sonode_mutex);
  SoNode::classTypeId =
    SoType::createType(inherited::getClassTypeId(), "Node", ((void *)0),
                       SoNode::nextActionMethodIndex++);


  compatibility_dict = new Int16ToUInt32Map;
  coin_atexit((coin_atexit_f*)SoNode::cleanupClass, CC_ATEXIT_NORMAL);

  SoNode::setCompatibilityTypes(SoNode::getClassTypeId(),
                                SO_FROM_INVENTOR_1);

  SoNode::initClasses();
#line 593 "coin/src/nodes/SoNode.cpp"
  init_action_methods();
}




void
SoNode::initClasses(void)
{
  SoCamera::initClass();
  SoPerspectiveCamera::initClass();
  SoReversePerspectiveCamera::initClass();
  SoOrthographicCamera::initClass();
  SoFrustumCamera::initClass();
  SoShape::initClass();
  SoAsciiText::initClass();
  SoCone::initClass();
  SoCube::initClass();
  SoCylinder::initClass();
  SoVertexShape::initClass();
  SoNonIndexedShape::initClass();
  SoFaceSet::initClass();
  SoLineSet::initClass();
  SoPointSet::initClass();
  SoMarkerSet::initClass();
  SoQuadMesh::initClass();
  SoTriangleStripSet::initClass();
  SoIndexedShape::initClass();
  SoIndexedFaceSet::initClass();
  SoIndexedLineSet::initClass();
  SoIndexedPointSet::initClass();
  SoIndexedMarkerSet::initClass();
  SoIndexedTriangleStripSet::initClass();
  SoImage::initClass();
  SoIndexedNurbsCurve::initClass();
  SoIndexedNurbsSurface::initClass();
  SoNurbsCurve::initClass();
  SoNurbsSurface::initClass();
  SoSphere::initClass();
  SoText2::initClass();
  SoText3::initClass();
  SoGroup::initClass();
  SoSeparator::initClass();
  SoAnnotation::initClass();
  SoLocateHighlight::initClass();
  SoWWWAnchor::initClass();
  SoArray::initClass();
  SoSwitch::initClass();
  SoBlinker::initClass();
  SoLOD::initClass();
  SoLevelOfDetail::initClass();
  SoMultipleCopy::initClass();
  SoPathSwitch::initClass();
  SoTransformSeparator::initClass();
  SoTransformation::initClass();
  SoMatrixTransform::initClass();
  SoRotation::initClass();
  SoPendulum::initClass();
  SoRotor::initClass();
  SoResetTransform::initClass();
  SoRotationXYZ::initClass();
  SoScale::initClass();
  SoTranslation::initClass();
  SoShuttle::initClass();
  SoTransform::initClass();
  SoUnits::initClass();
  SoBaseColor::initClass();
  SoCallback::initClass();
  SoClipPlane::initClass();
  SoColorIndex::initClass();
  SoComplexity::initClass();
  SoCoordinate3::initClass();
  SoCoordinate4::initClass();
  SoLight::initClass();
  SoDirectionalLight::initClass();
  SoSpotLight::initClass();
  SoPointLight::initClass();
  SoDrawStyle::initClass();
  SoEnvironment::initClass();
  SoEventCallback::initClass();
  SoFile::initClass();
  SoFont::initClass();
  SoFontStyle::initClass();
  SoInfo::initClass();
  SoLabel::initClass();
  SoLightModel::initClass();
  SoProfile::initClass();
  SoLinearProfile::initClass();
  SoNurbsProfile::initClass();
  SoMaterial::initClass();
  SoMaterialBinding::initClass();
  SoVertexAttributeBinding::initClass();
  SoNormal::initClass();
  SoNormalBinding::initClass();
  SoPackedColor::initClass();
  SoPickStyle::initClass();
  SoPolygonOffset::initClass();
  SoProfileCoordinate2::initClass();
  SoProfileCoordinate3::initClass();
  SoShapeHints::initClass();
  SoTexture::initClass();
  SoTexture2::initClass();
  SoTexture3::initClass();
  SoTexture2Transform::initClass();
  SoTexture3Transform::initClass();
  SoTextureMatrixTransform::initClass();
  SoTextureCoordinate2::initClass();
  SoTextureCoordinate3::initClass();
  SoTextureCoordinateBinding::initClass();
  SoTextureCoordinateFunction::initClass();
  SoTextureCoordinateDefault::initClass();
  SoTextureCoordinateEnvironment::initClass();
  SoTextureCoordinatePlane::initClass();
  SoUnknownNode::initClass();
  SoVertexProperty::initClass();
  SoWWWInline::initClass();
  SoListener::initClass();

  SoTransparencyType::initClass();
  SoTextureScalePolicy::initClass();

  SoTextureUnit::initClass();

  SoBumpMap::initClass();
  SoBumpMapCoordinate::initClass();
  SoBumpMapTransform::initClass();

  SoSceneTexture2::initClass();
  SoSceneTextureCubeMap::initClass();

  SoTextureCoordinateCube::initClass();
  SoTextureCoordinateSphere::initClass();
  SoTextureCoordinateCylinder::initClass();

  SoTextureCombine::initClass();
  SoCacheHint::initClass();
  SoTextureCubeMap::initClass();
  SoTextureCoordinateNormalMap::initClass();
  SoTextureCoordinateReflectionMap::initClass();
  SoTextureCoordinateObject::initClass();
  SoVertexAttribute::initClass();

  SoDepthBuffer::initClass();
  SoAlphaTest::initClass();
}
#line 757 "coin/src/nodes/SoNode.cpp"
void
SoNode::setOverride(const SbBool state)
{
  if (state != this->getState(0x80000000)) {


    CC_MUTEX_LOCK(sonode_mutex);   (this)->uniqueId = SoNode::nextUniqueId++;     if (this->uniqueId == 0) {                     this->uniqueId = SoNode::nextUniqueId++;   }   CC_MUTEX_UNLOCK(sonode_mutex);

    if (state) this->setStateFlags(0x80000000);
    else this->clearStateFlags(0x80000000);
  }
}






SbBool
SoNode::isOverride(void) const
{
  return this->getState(0x80000000);
}
#line 791 "coin/src/nodes/SoNode.cpp"
void
SoNode::setNodeType(const NodeType type)
{

  assert((uint32_t) type <= 0x7fffffff);

  this->clearStateFlags(0x7fffffff);

  this->setStateFlags((uint32_t) type);
}
#line 809 "coin/src/nodes/SoNode.cpp"
SoNode::NodeType
SoNode::getNodeType(void) const
{
  uint32_t type = this->stateflags & 0x7fffffff;
  return (NodeType) type;
}






SoNode *
SoNode::getByName(const SbName & name)
{
  SoBase * b = SoBase::getNamedBase(name, SoNode::getClassTypeId());
  if (!b) return ((void *)0);
  return (SoNode *)b;
}
#line 835 "coin/src/nodes/SoNode.cpp"
int
SoNode::getByName(const SbName & name, SoNodeList & l)
{
  SoBaseList bl;
  int nr = SoBase::getNamedBases(name, bl, SoNode::getClassTypeId());
  for (int i=0; i < nr; i++) l.append((SoNode *)bl[i]);
  return nr;
}
#line 853 "coin/src/nodes/SoNode.cpp"
void
SoNode::doAction(SoAction * COIN_UNUSED_ARG(action))
{
}
#line 875 "coin/src/nodes/SoNode.cpp"
SbBool
SoNode::affectsState(void) const
{
  return 1;
}






void
SoNode::getBoundingBoxS(SoAction * action, SoNode * node)
{
  assert(action && node);
  SoGetBoundingBoxAction * bboxaction = (SoGetBoundingBoxAction *)action;
  bboxaction->checkResetBefore();
  node->getBoundingBox(bboxaction);
  bboxaction->checkResetAfter();
}
#line 909 "coin/src/nodes/SoNode.cpp"
void
SoNode::getBoundingBox(SoGetBoundingBoxAction * COIN_UNUSED_ARG(action))
{
}






void
SoNode::getPrimitiveCountS(SoAction * action, SoNode * node)
{
  assert(action && node);
  node->getPrimitiveCount((SoGetPrimitiveCountAction *)action);
}
#line 938 "coin/src/nodes/SoNode.cpp"
void
SoNode::getPrimitiveCount(SoGetPrimitiveCountAction * COIN_UNUSED_ARG(action))
{
}
#line 950 "coin/src/nodes/SoNode.cpp"
void
SoNode::GLRenderS(SoAction * action, SoNode * node)
{
  if ((action->getCurPathCode() != SoAction::OFF_PATH) ||
      node->affectsState()) {
    if (((SoGLRenderAction*)action)->abortNow()) {
      SoCacheElement::invalidate(action->getState());
    }
    else {
      node->GLRender((SoGLRenderAction*)action);
    }
  }

  if (COIN_DEBUG) {
#line 972 "coin/src/nodes/SoNode.cpp"
    cc_string str;
    cc_string_construct(&str);
    const unsigned int errs = coin_catch_gl_errors(&str);
    if (errs > 0) {
      const SbBool extradebug = sogl_glerror_debugging();
      SoDebugError::post("SoNode::GLRenderS",
                         "GL error: '%s', nodetype: %s %s",
                         cc_string_get_text(&str),
                         node->getTypeId().getName().getString(),
                         extradebug ? "" :
                         "(set envvar COIN_GLERROR_DEBUGGING=1 "
                         "and re-run to get more information)");
    }
    cc_string_clean(&str);
  }
}
#line 998 "coin/src/nodes/SoNode.cpp"
void
SoNode::GLRender(SoGLRenderAction * COIN_UNUSED_ARG(action))
{
}
#line 1009 "coin/src/nodes/SoNode.cpp"
void
SoNode::GLRenderBelowPath(SoGLRenderAction * action)
{
  this->GLRender(action);
}
#line 1021 "coin/src/nodes/SoNode.cpp"
void
SoNode::GLRenderInPath(SoGLRenderAction * action)
{
  this->GLRender(action);
}
#line 1033 "coin/src/nodes/SoNode.cpp"
void
SoNode::GLRenderOffPath(SoGLRenderAction * action)
{
  this->GLRender(action);
}
#line 1046 "coin/src/nodes/SoNode.cpp"
void
SoNode::callbackS(SoAction * action, SoNode * node)
{
  assert(action && node);
  SoCallbackAction * const cbAction = (SoCallbackAction *)(action);
  if (cbAction->hasTerminated()) return;
  cbAction->setCurrentNode(node);

  cbAction->invokePreCallbacks(node);
  if (cbAction->getCurrentResponse() == SoCallbackAction::CONTINUE) {
    node->callback(cbAction);
  }
  cbAction->invokePostCallbacks(node);
}
#line 1070 "coin/src/nodes/SoNode.cpp"
void
SoNode::callback(SoCallbackAction * COIN_UNUSED_ARG(action))
{
}






void
SoNode::getMatrixS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId() == SoGetMatrixAction::getClassTypeId());
  SoGetMatrixAction * const getMatrixAction = (SoGetMatrixAction *)(action);
  node->getMatrix(getMatrixAction);
}
#line 1097 "coin/src/nodes/SoNode.cpp"
void
SoNode::getMatrix(SoGetMatrixAction * COIN_UNUSED_ARG(action))
{
}






void
SoNode::handleEventS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoHandleEventAction::getClassTypeId()));
  SoHandleEventAction * handleEventAction = (SoHandleEventAction *)(action);
  node->handleEvent(handleEventAction);
}
#line 1127 "coin/src/nodes/SoNode.cpp"
void
SoNode::handleEvent(SoHandleEventAction * COIN_UNUSED_ARG(action))
{
}






void
SoNode::pickS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoPickAction::getClassTypeId()));
  SoPickAction * const pickAction = (SoPickAction *)(action);
  node->pick(pickAction);
}
#line 1153 "coin/src/nodes/SoNode.cpp"
void
SoNode::pick(SoPickAction * COIN_UNUSED_ARG(action))
{
}






void
SoNode::rayPickS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoRayPickAction::getClassTypeId()));
  SoRayPickAction * const rayPickAction = (SoRayPickAction *)(action);
  node->rayPick(rayPickAction);
}
#line 1183 "coin/src/nodes/SoNode.cpp"
void
SoNode::rayPick(SoRayPickAction * action)
{

  this->pick(action);
}






void
SoNode::searchS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoSearchAction::getClassTypeId()));
  SoSearchAction * const searchAction = (SoSearchAction *)(action);
  node->search(searchAction);
}
#line 1216 "coin/src/nodes/SoNode.cpp"
void
SoNode::search(SoSearchAction * action)
{
  if (action->isFound()) { return; }

  int lookfor = action->getFind();
  SbBool hit = 0;
#line 1235 "coin/src/nodes/SoNode.cpp"
  if (lookfor & SoSearchAction::NODE) {
    hit = this == action->getNode();
    if (!hit) { return; }
  }

  if (lookfor & SoSearchAction::NAME) {
    hit = this->getName() == action->getName();
    if (!hit) { return; }
  }

  if (lookfor & SoSearchAction::TYPE) {
    SbBool chkderived;
    SoType searchtype = action->getType(chkderived);
    hit = (this->getTypeId() == searchtype) ||
      (chkderived && this->getTypeId().isDerivedFrom(searchtype));
    if (!hit) { return; }
  }

  if (hit) { action->addPath(action->getCurPath()->copy()); }
}






void
SoNode::writeS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoWriteAction::getClassTypeId()));
  SoWriteAction * const writeAction = (SoWriteAction *)(action);



  SoProtoInstance * proto = SoProtoInstance::findProtoInstance(node);
  if (proto) {
    node = proto;
  }
  node->write(writeAction);
}
#line 1285 "coin/src/nodes/SoNode.cpp"
void
SoNode::write(SoWriteAction * action)
{
  SoOutput * out = action->getOutput();

  SoNode * node = this;

  SoProtoInstance * proto = SoProtoInstance::findProtoInstance(this);
  if (proto) { node = proto; }

  if (out->getStage() == SoOutput::COUNT_REFS) {
    node->addWriteReference(out, 0);
  }
  else if (out->getStage() == SoOutput::WRITE) {
    if (node->writeHeader(out, 0, 0)) return;
#line 1305 "coin/src/nodes/SoNode.cpp"
    SoProto * proto = out->getCurrentProto();
    if (proto && node->isOfType(SoNodeEngine::getClassTypeId())) {
      SoEngineOutputList l;
      const int num = ((SoNodeEngine*)node)->getOutputs(l);

      for (int i = 0; i < num; i++) {
        SbName name;
        if (((SoNodeEngine*)node)->getOutputName(l[i], name)) {
          SbName pname = proto->findISReference(node, name);
          if (pname.getLength()) {
            out->indent();
            out->write(name.getString());
            out->write(" IS ");
            out->write(pname.getString());
            out->write("\n");
          }
        }
      }
    }
    node->getFieldData()->write(out, node);
    node->writeFooter(out);
  }
  else assert(0 && "unknown stage");
}






void
SoNode::audioRenderS(SoAction * action, SoNode * node)
{
  assert(action && node);
  assert(action->getTypeId().isDerivedFrom(SoAudioRenderAction::getClassTypeId()));
  SoAudioRenderAction * const ara = (SoAudioRenderAction *)(action);
  node->audioRender(ara);
}
#line 1351 "coin/src/nodes/SoNode.cpp"
void
SoNode::audioRender(SoAudioRenderAction * COIN_UNUSED_ARG(action))
{
}






SoChildList *
SoNode::getChildren(void) const
{
  return ((void *)0);
}





void
SoNode::grabEventsSetup(void)
{
}





void
SoNode::grabEventsCleanup(void)
{
}
#line 1400 "coin/src/nodes/SoNode.cpp"
SbUniqueId
SoNode::getNodeId(void) const
{
  return this->uniqueId;
}


void
SoNode::writeInstance(SoOutput * out)
{
  SoNode * node = this;

  SoProtoInstance * proto = SoProtoInstance::findProtoInstance(this);
  if (proto) { node = proto; }



  assert(((out->getStage() == SoOutput::COUNT_REFS) ||
          (out->getStage() == SoOutput::WRITE)) &&
         "unknown write stage");
  SoWriteAction wa(out);
  wa.continueToApply(node);
}
SoNode *
SoNode::addToCopyDict(void) const
{





  SoNode * cp = (SoNode *)SoFieldContainer::checkCopy(this);
  if (!cp) {



    SoProtoInstance * inst = SoProtoInstance::findProtoInstance(this);
    if (inst) {
      SoProto * proto = inst->getProtoDefinition();
      SoProtoInstance * newinst = proto->createProtoInstance();
      if (inst->getName().getLength()) newinst->setName(inst->getName());
      cp = newinst->getRootNode();
      assert(cp);



      SoFieldContainer::addCopy(this, cp);
      newinst->copyContents(inst, 0);
    }
    else {
      if (this->isOfType(SoProto::getClassTypeId())) {



        cp = (SoNode*) this;
      }
      else {
        cp = (SoNode *)this->getTypeId().createInstance();
      }
      assert(cp);
      SoFieldContainer::addCopy(this, cp);

      SoChildList * l = this->getChildren();
      for (int i=0; l && (i < l->getLength()); i++)
        (void)(*l)[i]->addToCopyDict();
    }
  }
  return cp;
}


void
SoNode::copyContents(const SoFieldContainer * from, SbBool copyconnections)
{



  if (!this->isOfType(SoProto::getClassTypeId())) {
    inherited::copyContents(from, copyconnections);

    SoNode * src = (SoNode *)from;
    this->stateflags = src->stateflags;
  }
}


SoFieldContainer *
SoNode::copyThroughConnection(void) const
{
  SoFieldContainer * connfc = SoFieldContainer::checkCopy(this);



  if (connfc) return SoFieldContainer::findCopy(this, 1);

  return (SoFieldContainer*) this;
}
SbUniqueId
SoNode::getNextNodeId(void)
{
  return SoNode::nextUniqueId;
}
const SoFieldData **
SoNode::getFieldDataPtr(void)
{
  return ((void *)0);
}


SbBool
SoNode::readInstance(SoInput * in, unsigned short flags)
{


  SbBool ret = inherited::readInstance(in, flags);
  if (ret) {
    if (in->isFileVRML1()) this->setNodeType(SoNode::VRML1);
    else if (in->isFileVRML2()) this->setNodeType(SoNode::VRML2);
  }
  return ret;
}
uint32_t
SoNode::getCompatibilityTypes(const SoType & nodetype)
{
  assert(compatibility_dict);
  assert(nodetype.isDerivedFrom(SoNode::getClassTypeId()));

  uint32_t tmp;
  if (compatibility_dict->get(nodetype.getKey(), tmp)) { return tmp; }
  return SoNode::EXTENSION;
}
void
SoNode::setCompatibilityTypes(const SoType & nodetype, const uint32_t bitmask)
{
  assert(compatibility_dict);
  assert(nodetype.isDerivedFrom(SoNode::getClassTypeId()));
  compatibility_dict->put(nodetype.getKey(), bitmask);
}




void
SoNode::cleanupClass(void)
{
  delete compatibility_dict;
  SoNode::classTypeId = SoType::badType();
  CC_MUTEX_DESTRUCT(sonode_mutex);
}
static void
init_action_methods(void)
{
  SoCallbackAction::addMethod(SoNode::getClassTypeId(), SoNode::callbackS);
  SoGLRenderAction::addMethod(SoNode::getClassTypeId(), SoNode::GLRenderS);
  SoGetBoundingBoxAction::addMethod(SoNode::getClassTypeId(), SoNode::getBoundingBoxS);
  SoGetMatrixAction::addMethod(SoNode::getClassTypeId(), SoNode::getMatrixS);
  SoGetPrimitiveCountAction::addMethod(SoNode::getClassTypeId(), SoNode::getPrimitiveCountS);
  SoHandleEventAction::addMethod(SoNode::getClassTypeId(), SoNode::handleEventS);
  SoPickAction::addMethod(SoNode::getClassTypeId(), SoNode::pickS);


  SoRayPickAction::addMethod(SoCamera::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoSeparator::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoLOD::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoLevelOfDetail::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoShape::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoTexture2::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoBumpMap::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoImage::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoSceneTexture2::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoSceneTextureCubeMap::getClassTypeId(), SoNode::rayPickS);
  SoRayPickAction::addMethod(SoTextureCubeMap::getClassTypeId(), SoNode::rayPickS);

  SoSearchAction::addMethod(SoNode::getClassTypeId(), SoNode::searchS);
  SoWriteAction::addMethod(SoNode::getClassTypeId(), SoNode::writeS);

  SoAudioRenderAction::addMethod(SoNode::getClassTypeId(),
                                 SoAction::nullAction);
  SoAudioRenderAction::addMethod(SoListener::getClassTypeId(),
                                 SoNode::audioRenderS);
  SoAudioRenderAction::addMethod(SoCamera::getClassTypeId(),
                                 SoNode::audioRenderS);
  SoAudioRenderAction::addMethod(SoGroup::getClassTypeId(),
                                 SoNode::audioRenderS);
  SoAudioRenderAction::addMethod(SoWWWInline::getClassTypeId(),
                                 SoNode::audioRenderS);
  SoAudioRenderAction::addMethod(SoFile::getClassTypeId(),
                                 SoNode::audioRenderS);



  SoAudioRenderAction::addMethod(SoTransformation::getClassTypeId(),
                                 SoAudioRenderAction::callDoAction);
}
