# 1 "freebsd5/support/globals.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/support/globals.c"
# 28 "freebsd5/support/globals.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
#include "num_stacks.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;







typedef int  __attribute__((__mode__(__DI__))) __int64_t;
typedef unsigned int  __attribute__((__mode__(__DI__))) __uint64_t;
# 70 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
typedef unsigned long __clock_t;
typedef unsigned int __cpumask_t;
typedef __int32_t __critical_t;
typedef double __double_t;
typedef double __float_t;
typedef __int32_t __intfptr_t;
typedef __int64_t __intmax_t;
typedef __int32_t __intptr_t;
typedef __int32_t __int_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __int8_t __int_least8_t;
typedef __int16_t __int_least16_t;
typedef __int32_t __int_least32_t;
typedef __int64_t __int_least64_t;
typedef __int32_t __ptrdiff_t;
typedef __int32_t __register_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __size_t;
typedef __int32_t __ssize_t;
typedef __int32_t __time_t;
typedef __uint32_t __uintfptr_t;
typedef __uint64_t __uintmax_t;
typedef __uint32_t __uintptr_t;
typedef __uint32_t __uint_fast8_t;
typedef __uint32_t __uint_fast16_t;
typedef __uint32_t __uint_fast32_t;
typedef __uint64_t __uint_fast64_t;
typedef __uint8_t __uint_least8_t;
typedef __uint16_t __uint_least16_t;
typedef __uint32_t __uint_least32_t;
typedef __uint64_t __uint_least64_t;
typedef __uint32_t __u_register_t;
typedef __uint32_t __vm_offset_t;
typedef __int64_t __vm_ooffset_t;



typedef __uint32_t __vm_paddr_t;

typedef __uint64_t __vm_pindex_t;
typedef __uint32_t __vm_size_t;





typedef __builtin_va_list __va_list;





typedef __va_list __gnuc_va_list;
# 34 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 2




typedef __int32_t __clockid_t;
typedef __uint32_t __fflags_t;
typedef __uint64_t __fsblkcnt_t;
typedef __uint64_t __fsfilcnt_t;
typedef __uint32_t __gid_t;
typedef __int64_t __id_t;
typedef __uint32_t __ino_t;
typedef long __key_t;
typedef __int32_t __lwpid_t;
typedef __uint16_t __mode_t;
typedef int __nl_item;
typedef __uint16_t __nlink_t;
typedef __int64_t __off_t;
typedef __int32_t __pid_t;
typedef __int64_t __rlim_t;
typedef __uint8_t __sa_family_t;
typedef __uint32_t __socklen_t;
typedef long __suseconds_t;
typedef __int32_t __timer_t;
typedef __uint32_t __uid_t;
typedef unsigned int __useconds_t;
# 78 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
typedef int __ct_rune_t;
typedef __ct_rune_t __rune_t;
typedef __ct_rune_t __wchar_t;
typedef __ct_rune_t __wint_t;

typedef __uint32_t __dev_t;

typedef __uint32_t __fixpt_t;





typedef union {
 char __mbstate8[128];
 __int64_t _mbstateL;
} __mbstate_t;
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 2
# 152 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
static __inline __uint64_t
__bswap64(__uint64_t _x)
{

 return ((_x >> 56) | ((_x >> 40) & 0xff00) | ((_x >> 24) & 0xff0000) |
     ((_x >> 8) & 0xff000000) | ((_x << 8) & ((__uint64_t)0xff << 32)) |
     ((_x << 24) & ((__uint64_t)0xff << 40)) |
     ((_x << 40) & ((__uint64_t)0xff << 48)) | ((_x << 56)));
}

static __inline __uint32_t
__bswap32(__uint32_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff000000) >> 24) | (((_x) & 0x00ff0000) >> 8) | (((_x) & 0x0000ff00) << 8) | (((_x) & 0x000000ff) << 24)) : __extension__ ({ register __uint32_t __X = (_x); __asm ("bswap %0" : "+r" (__X)); __X; })));
}

static __inline __uint16_t
__bswap16(__uint16_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff00) >> 8) | (((_x) & 0x00ff) << 8)) : __extension__ ({ register __uint16_t __X = (_x); __asm ("xchgb %h0, %b0" : "+q" (__X)); __X; })));
}
# 45 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
# 62 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __int8_t int8_t;




typedef __int16_t int16_t;




typedef __int32_t int32_t;




typedef __int64_t int64_t;




typedef __uint8_t uint8_t;




typedef __uint16_t uint16_t;




typedef __uint32_t uint32_t;




typedef __uint64_t uint64_t;




typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

typedef __uint64_t u_quad_t;
typedef __int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef const char * c_caddr_t;
typedef volatile char *v_caddr_t;


typedef __clock_t clock_t;




typedef __clockid_t clockid_t;



typedef __critical_t critical_t;
typedef __int64_t daddr_t;


typedef __dev_t dev_t;




typedef __fflags_t fflags_t;



typedef __fixpt_t fixpt_t;


typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __gid_t gid_t;




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;




typedef __id_t id_t;




typedef __ino_t ino_t;




typedef __key_t key_t;




typedef __lwpid_t lwpid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __off_t off_t;




typedef __pid_t pid_t;



typedef __register_t register_t;


typedef __rlim_t rlim_t;



typedef __segsz_t segsz_t;


typedef __size_t size_t;




typedef __ssize_t ssize_t;




typedef __suseconds_t suseconds_t;




typedef __time_t time_t;




typedef __timer_t timer_t;



typedef __u_register_t u_register_t;


typedef __uid_t uid_t;




typedef __useconds_t useconds_t;



typedef __vm_offset_t vm_offset_t;
typedef __vm_ooffset_t vm_ooffset_t;
typedef __vm_paddr_t vm_paddr_t;
typedef __vm_pindex_t vm_pindex_t;
typedef __vm_size_t vm_size_t;


typedef int boolean_t;
typedef __cpumask_t cpumask_t;
typedef __intfptr_t intfptr_t;
# 271 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __uint32_t intrmask_t;

typedef __uintfptr_t uintfptr_t;
typedef __uint64_t uoff_t;
typedef struct vm_page *vm_page_t;
# 287 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/select.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/select.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h" 1
# 51 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h"
typedef struct __sigset {
 __uint32_t __bits[4];
} __sigset_t;
# 39 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h"
struct timeval {
 long tv_sec;
 suseconds_t tv_usec;
};
# 40 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/timespec.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/timespec.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 41 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2

typedef unsigned long __fd_mask;

typedef __fd_mask fd_mask;




typedef __sigset_t sigset_t;
# 71 "freebsd5/freebsd/usr/src/sys/sys/select.h"
typedef struct fd_set {
 __fd_mask __fds_bits[(((1024U) + (((sizeof(__fd_mask) * 8)) - 1)) / ((sizeof(__fd_mask) * 8)))];
} fd_set;
# 288 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2
# 62 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslimits.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 91 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/errno.h" 1
# 92 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/time.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 53 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *bt, uint64_t x)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += x;
 if (u > bt->frac)
  bt->sec++;
}

static __inline void
bintime_add(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += bt2->frac;
 if (u > bt->frac)
  bt->sec++;
 bt->sec += bt2->sec;
}

static __inline void
bintime_sub(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac -= bt2->frac;
 if (u < bt->frac)
  bt->sec--;
 bt->sec -= bt2->sec;
}
# 107 "freebsd5/freebsd/usr/src/sys/sys/time.h"
static __inline void
bintime2timespec(const struct bintime *bt, struct timespec *ts)
{

 ts->tv_sec = bt->sec;
 ts->tv_nsec = ((uint64_t)1000000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *ts, struct bintime *bt)
{

 bt->sec = ts->tv_sec;

 bt->frac = ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *bt, struct timeval *tv)
{

 tv->tv_sec = bt->sec;
 tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *tv, struct bintime *bt)
{

 bt->sec = tv->tv_sec;

 bt->frac = tv->tv_usec * (uint64_t)18446744073709LL;
}
# 219 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int spare;
 int stathz;
 int profhz;
};
# 250 "freebsd5/freebsd/usr/src/sys/sys/time.h"
typedef  time_t  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_time_second[NUM_STACKS];   
typedef  time_t  _GLOBAL_1_T; extern  _GLOBAL_1_T  global_time_uptime[NUM_STACKS];   
typedef  struct timeval   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_boottime[NUM_STACKS];    
# 276 "freebsd5/freebsd/usr/src/sys/sys/time.h"
void binuptime(struct bintime *bt);
void nanouptime(struct timespec *tsp);
void microuptime(struct timeval *tvp);

void bintime(struct bintime *bt);
void nanotime(struct timespec *tsp);
void microtime(struct timeval *tvp);

void getbinuptime(struct bintime *bt);
void getnanouptime(struct timespec *tsp);
void getmicrouptime(struct timeval *tvp);

void getbintime(struct bintime *bt);
void getnanotime(struct timespec *tsp);
void getmicrotime(struct timeval *tvp);


int itimerdecr(struct itimerval *itp, int usec);
int itimerfix(struct timeval *tv);
int ppsratecheck(struct timeval *, int *, int);
int ratecheck(struct timeval *, const struct timeval *);
void timevaladd(struct timeval *t1, const struct timeval *t2);
void timevalsub(struct timeval *t1, const struct timeval *t2);
int tvtohz(struct timeval *tv);
# 93 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/priority.h" 1
# 123 "freebsd5/freebsd/usr/src/sys/sys/priority.h"
struct priority {
 u_char pri_class;
 u_char pri_level;
 u_char pri_native;
 u_char pri_user;
};
# 94 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 105 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 106 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 261 "freebsd5/freebsd/usr/src/sys/sys/param.h"

__uint32_t htonl(__uint32_t);
__uint16_t htons(__uint16_t);
__uint32_t ntohl(__uint32_t);
__uint16_t ntohs(__uint16_t);

# 29 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h" 1
# 149 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_int(volatile u_int *dst, u_int exp, u_int src)
{
 int res = exp;

 __asm volatile (
 "	" "" "	"
 "	cmpxchgl %1,%2 ;	"
 "       setz	%%al ;		"
 "	movzbl	%%al,%0 ;	"
 "1:				"
 "# atomic_cmpset_int"
 : "+a" (res)
 : "r" (src),
   "m" (*(dst))
 : "memory");

 return (res);
}
# 241 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_char(volatile u_char *p, u_char v){ __asm volatile("" "orb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_clear_char(volatile u_char *p, u_char v){ __asm volatile("" "andb %b1,%0" : "+m" (*p) : "iq" (~v)); } struct __hack;
static __inline void atomic_add_char(volatile u_char *p, u_char v){ __asm volatile("" "addb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_subtract_char(volatile u_char *p, u_char v){ __asm volatile("" "subb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;

static __inline void atomic_set_short(volatile u_short *p, u_short v){ __asm volatile("" "orw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_short(volatile u_short *p, u_short v){ __asm volatile("" "andw %w1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_short(volatile u_short *p, u_short v){ __asm volatile("" "addw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_short(volatile u_short *p, u_short v){ __asm volatile("" "subw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_int(volatile u_int *p, u_int v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_int(volatile u_int *p, u_int v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_int(volatile u_int *p, u_int v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_int(volatile u_int *p, u_int v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_long(volatile u_long *p, u_long v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_long(volatile u_long *p, u_long v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_long(volatile u_long *p, u_long v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_long(volatile u_long *p, u_long v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline u_char atomic_load_acq_char(volatile u_char *p) { return (*p); } static __inline void atomic_store_rel_char(volatile u_char *p, u_char v){ *p = v; } struct __hack;
static __inline u_short atomic_load_acq_short(volatile u_short *p) { return (*p); } static __inline void atomic_store_rel_short(volatile u_short *p, u_short v){ *p = v; } struct __hack;
static __inline u_int atomic_load_acq_int(volatile u_int *p) { return (*p); } static __inline void atomic_store_rel_int(volatile u_int *p, u_int v){ *p = v; } struct __hack;
static __inline u_long atomic_load_acq_long(volatile u_long *p) { return (*p); } static __inline void atomic_store_rel_long(volatile u_long *p, u_long v){ *p = v; } struct __hack;
# 363 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_ptr(volatile void *dst, void *exp, void *src)
{

 return (atomic_cmpset_int((volatile u_int *)dst, (u_int)exp,
     (u_int)src));
}

static __inline void *
atomic_load_acq_ptr(volatile void *p)
{




 return ((void *)(intptr_t)atomic_load_acq_int((volatile u_int *)p));
}

static __inline void
atomic_store_rel_ptr(volatile void *p, void *v)
{
 atomic_store_rel_int((volatile u_int *)p, (u_int)v);
}
# 406 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v); } static __inline void atomic_set_acq_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);} static __inline void atomic_set_rel_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);}
static __inline void atomic_clear_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v); } static __inline void atomic_clear_acq_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);} static __inline void atomic_clear_rel_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);}
static __inline void atomic_add_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v); } static __inline void atomic_add_acq_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);} static __inline void atomic_add_rel_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);}
static __inline void atomic_subtract_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v); } static __inline void atomic_subtract_acq_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);} static __inline void atomic_subtract_rel_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);}





static __inline u_int
atomic_readandclear_int(volatile u_int *addr)
{
 u_int result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}

static __inline u_long
atomic_readandclear_long(volatile u_long *addr)
{
 u_long result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h" 1
# 41 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
struct region_descriptor;
# 53 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}

static __inline u_int
bsfl(u_int mask)
{
 u_int result;

 __asm volatile("bsfl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline u_int
bsrl(u_int mask)
{
 u_int result;

 __asm volatile("bsrl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline void
disable_intr(void)
{
 __asm volatile("cli" : : : "memory");
}

static __inline void
do_cpuid(u_int ax, u_int *p)
{
 __asm volatile("cpuid"
    : "=a" (p[0]), "=b" (p[1]), "=c" (p[2]), "=d" (p[3])
    : "0" (ax));
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}





static __inline int
ffs(int mask)
{






  return (mask == 0 ? mask : (int)bsfl((u_int)mask) + 1);
}



static __inline int
fls(int mask)
{
 return (mask == 0 ? mask : (int)bsrl((u_int)mask) + 1);
}



static __inline void
halt(void)
{
 __asm volatile("hlt");
}
# 166 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline u_char
inbc(u_int port)
{
 u_char data;

 __asm volatile("inb %1,%0" : "=a" (data) : "id" ((u_short)(port)));
 return (data);
}

static __inline void
outbc(u_int port, u_char data)
{
 __asm volatile("outb %0,%1" : : "a" (data), "id" ((u_short)(port)));
}



static __inline u_char
inbv(u_int port)
{
 u_char data;





 __asm volatile("inb %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline u_int
inl(u_int port)
{
 u_int data;

 __asm volatile("inl %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
insb(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insb"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insw(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insw"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insl(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insl"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
invd(void)
{
 __asm volatile("invd");
}

static __inline u_short
inw(u_int port)
{
 u_short data;

 __asm volatile("inw %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
outbv(u_int port, u_char data)
{
 u_char al;






 al = data;
 __asm volatile("outb %0,%%dx" : : "a" (al), "d" (port));
}

static __inline void
outl(u_int port, u_int data)
{





 __asm volatile("outl %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
outsb(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsb"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsw(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsw"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsl(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsl"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outw(u_int port, u_short data)
{
 __asm volatile("outw %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
ia32_pause(void)
{
 __asm volatile("pause");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline u_int64_t
rdmsr(u_int msr)
{
 u_int64_t rv;

 __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
 return (rv);
}

static __inline u_int64_t
rdpmc(u_int pmc)
{
 u_int64_t rv;

 __asm volatile("rdpmc" : "=A" (rv) : "c" (pmc));
 return (rv);
}

static __inline u_int64_t
rdtsc(void)
{
 u_int64_t rv;

 __asm volatile("rdtsc" : "=A" (rv));
 return (rv);
}

static __inline void
wbinvd(void)
{
 __asm volatile("wbinvd");
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
 __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline void
load_cr0(u_int data)
{

 __asm volatile("movl %0,%%cr0" : : "r" (data));
}

static __inline u_int
rcr0(void)
{
 u_int data;

 __asm volatile("movl %%cr0,%0" : "=r" (data));
 return (data);
}

static __inline u_int
rcr2(void)
{
 u_int data;

 __asm volatile("movl %%cr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr3(u_int data)
{

 __asm volatile("movl %0,%%cr3" : : "r" (data) : "memory");
}

static __inline u_int
rcr3(void)
{
 u_int data;

 __asm volatile("movl %%cr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr4(u_int data)
{
 __asm volatile("movl %0,%%cr4" : : "r" (data));
}

static __inline u_int
rcr4(void)
{
 u_int data;

 __asm volatile("movl %%cr4,%0" : "=r" (data));
 return (data);
}




static __inline void
invltlb(void)
{

 load_cr3(rcr3());
}





static __inline void
invlpg(u_int addr)
{

 __asm volatile("invlpg %0" : : "m" (*(char *)addr) : "memory");
}

static __inline u_int
rfs(void)
{
 u_int sel;
 __asm volatile("movl %%fs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rgs(void)
{
 u_int sel;
 __asm volatile("movl %%gs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rss(void)
{
 u_int sel;
 __asm volatile("movl %%ss,%0" : "=rm" (sel));
 return (sel);
}

static __inline void
load_fs(u_int sel)
{
 __asm volatile("movl %0,%%fs" : : "rm" (sel));
}

static __inline void
load_gs(u_int sel)
{
 __asm volatile("movl %0,%%gs" : : "rm" (sel));
}

static __inline void
lidt(struct region_descriptor *addr)
{
 __asm volatile("lidt (%0)" : : "r" (addr));
}

static __inline void
lldt(u_short sel)
{
 __asm volatile("lldt %0" : : "r" (sel));
}

static __inline void
ltr(u_short sel)
{
 __asm volatile("ltr %0" : : "r" (sel));
}

static __inline u_int
rdr0(void)
{
 u_int data;
 __asm volatile("movl %%dr0,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr0(u_int dr0)
{
 __asm volatile("movl %0,%%dr0" : : "r" (dr0));
}

static __inline u_int
rdr1(void)
{
 u_int data;
 __asm volatile("movl %%dr1,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr1(u_int dr1)
{
 __asm volatile("movl %0,%%dr1" : : "r" (dr1));
}

static __inline u_int
rdr2(void)
{
 u_int data;
 __asm volatile("movl %%dr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr2(u_int dr2)
{
 __asm volatile("movl %0,%%dr2" : : "r" (dr2));
}

static __inline u_int
rdr3(void)
{
 u_int data;
 __asm volatile("movl %%dr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr3(u_int dr3)
{
 __asm volatile("movl %0,%%dr3" : : "r" (dr3));
}

static __inline u_int
rdr4(void)
{
 u_int data;
 __asm volatile("movl %%dr4,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr4(u_int dr4)
{
 __asm volatile("movl %0,%%dr4" : : "r" (dr4));
}

static __inline u_int
rdr5(void)
{
 u_int data;
 __asm volatile("movl %%dr5,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr5(u_int dr5)
{
 __asm volatile("movl %0,%%dr5" : : "r" (dr5));
}

static __inline u_int
rdr6(void)
{
 u_int data;
 __asm volatile("movl %%dr6,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr6(u_int dr6)
{
 __asm volatile("movl %0,%%dr6" : : "r" (dr6));
}

static __inline u_int
rdr7(void)
{
 u_int data;
 __asm volatile("movl %%dr7,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr7(u_int dr7)
{
 __asm volatile("movl %0,%%dr7" : : "r" (dr7));
}

static __inline register_t
intr_disable(void)
{
 register_t eflags;

 eflags = read_eflags();
 disable_intr();
 return (eflags);
}

static __inline void
intr_restore(register_t eflags)
{
 write_eflags(eflags);
}
# 688 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
void reset_dbregs(void);
# 43 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/queue.h" 1
# 515 "freebsd5/freebsd/usr/src/sys/sys/queue.h"
struct quehead {
 struct quehead *qh_link;
 struct quehead *qh_rlink;
};



static __inline void
insque(void *a, void *b)
{
 struct quehead *element = (struct quehead *)a,
   *head = (struct quehead *)b;

 element->qh_link = head->qh_link;
 element->qh_rlink = head;
 head->qh_link = element;
 element->qh_link->qh_rlink = element;
}

static __inline void
remque(void *a)
{
 struct quehead *element = (struct quehead *)a;

 element->qh_link->qh_rlink = element->qh_rlink;
 element->qh_rlink->qh_link = element->qh_link;
 element->qh_rlink = 0;
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 2

struct callout_list { struct callout *slh_first; };
struct callout_tailq { struct callout *tqh_first; struct callout **tqh_last; };

struct callout {
 union {
  struct { struct callout *sle_next; } sle;
  struct { struct callout *tqe_next; struct callout **tqe_prev; } tqe;
 } c_links;
 int c_time;
 void *c_arg;
 void (*c_func)(void *);
 int c_flags;
};






struct callout_handle {
 struct callout *callout;
};


typedef  struct callout_list   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_4_T; extern  _GLOBAL_4_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_6_T; extern  _GLOBAL_6_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_7_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_0_A[NUM_STACKS];   




void callout_init(struct callout *, int);

void callout_reset(struct callout *, int, void (*)(void *), void *);

int _callout_stop_safe(struct callout *, int);
# 44 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


# 1 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_stdint.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 2
# 77 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;

typedef __int_fast8_t int_fast8_t;
typedef __int_fast16_t int_fast16_t;
typedef __int_fast32_t int_fast32_t;
typedef __int_fast64_t int_fast64_t;

typedef __uint_fast8_t uint_fast8_t;
typedef __uint_fast16_t uint_fast16_t;
typedef __uint_fast32_t uint_fast32_t;
typedef __uint_fast64_t uint_fast64_t;

typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 47 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2

typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_12_T; extern  _GLOBAL_12_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_1_A[NUM_STACKS];  
typedef  char  _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_2_A[NUM_STACKS];  
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_18_T; extern  _GLOBAL_18_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_3_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_4_A[NUM_STACKS];   

typedef  long  _GLOBAL_20_T; extern  _GLOBAL_20_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_23_T; extern  _GLOBAL_23_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_5_A[NUM_STACKS];  

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_6_A[NUM_STACKS];   
typedef  char  _GLOBAL_31_T; extern  _GLOBAL_31_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_7_A[NUM_STACKS];  
typedef  char  _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_8_A[NUM_STACKS];  

typedef  char  _GLOBAL_34_T; extern  _GLOBAL_34_T  * *  global_kenvp[NUM_STACKS];   





struct clockframe;
struct malloc_type;
struct mtx;
struct proc;
struct kse;
struct socket;
struct thread;
struct tty;
struct ucred;
struct uio;
struct _jmp_buf;

int setjmp(struct _jmp_buf *);
void longjmp(struct _jmp_buf *, int) __attribute__((__noreturn__)) ;
int dumpstatus(vm_offset_t addr, off_t count);
int nullop(void);
int eopnotsupp(void);
int ureadc(int, struct uio *);
void hashdestroy(void *, struct malloc_type *, u_long);
void *hashinit(int count, struct malloc_type *type, u_long *hashmask);
void *phashinit(int count, struct malloc_type *type, u_long *nentries);
void g_waitidle(void);




void panic(const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 1, 2))) ;


void cpu_boot(int);
void cpu_rootconf(void);
typedef  uint32_t  _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_9_A[NUM_STACKS];  
uint32_t crc32(const void *buf, size_t size);
void critical_enter(void);
void critical_exit(void);
void init_param1(void);
void init_param2(long physpages);
void init_param3(long kmempages);
void tablefull(const char *);
int kvprintf(char const *, void (*)(int, void*), void *, int,
     __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
void nsc_log(int, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void log_console(struct uio *);
int nsc_printf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int snprintf(char *, size_t, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
int sprintf(char *buf, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int uprintf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int vprintf(const char *, __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
int vsnprintf(char *, size_t, const char *, __va_list) __attribute__((__format__ (__printf__, 3, 0))) ;
int vsnrprintf(char *, size_t, int, const char *, __va_list) __attribute__((__format__ (__printf__, 4, 0))) ;
int vsprintf(char *buf, const char *, __va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
int ttyprintf(struct tty *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char *, char const *, ...)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int vsscanf(const char *, char const *, __va_list)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
long strtol(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_long strtoul(const char *, char **, int) __attribute__((__nonnull__(1))) ;
quad_t strtoq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_quad_t strtouq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
void tprintf(struct proc *p, int pri, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
void hexdump(void *ptr, int length, const char *hdr, int flags);







void bcopy(const void *from, void *to, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
void bzero(void *buf, size_t len) __attribute__((__nonnull__(1))) ;

void *memcpy(void *to, const void *from, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int copystr(const void * restrict kfaddr, void * restrict kdaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyinstr(const void * restrict udaddr, void * restrict kaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyin(const void * restrict udaddr, void * restrict kaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyout(const void * restrict kaddr, void * restrict udaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int fubyte(const void *base);
long fuword(const void *base);
int fuword16(void *base);
int32_t fuword32(const void *base);
int64_t fuword64(const void *base);
int subyte(void *base, int byte);
int suword(void *base, long word);
int suword16(void *base, int word);
int suword32(void *base, int32_t word);
int suword64(void *base, int64_t word);
intptr_t casuptr(intptr_t *p, intptr_t old, intptr_t new);

void realitexpire(void *);

void hardclock(struct clockframe *frame);
void hardclock_process(struct clockframe *frame);
void softclock(void *);
void statclock(struct clockframe *frame);
void profclock(struct clockframe *frame);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void cpu_startprofclock(void);
void cpu_stopprofclock(void);





int suser(struct thread *td);
int suser_cred(struct ucred *cred, int flag);
int cr_cansee(struct ucred *u1, struct ucred *u2);
int cr_canseesocket(struct ucred *cred, struct socket *so);

char *getenv(const char *name);
void freeenv(char *env);
int getenv_int(const char *name, int *data);
long getenv_long(const char *name, long *data);
unsigned long getenv_ulong(const char *name, unsigned long *data);
int getenv_string(const char *name, char *data, int size);
int getenv_quad(const char *name, quad_t *data);
int setenv(const char *name, const char *value);
int unsetenv(const char *name);
int testenv(const char *name);






# 1 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/libkern.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 2



typedef  u_char const   _GLOBAL_36_T; extern  _GLOBAL_36_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_10_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_11_A[NUM_STACKS];   
typedef  char const   _GLOBAL_38_T; extern  _GLOBAL_38_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_12_A[NUM_STACKS];   





static __inline int imax(int a, int b) { return (a > b ? a : b); }
static __inline int imin(int a, int b) { return (a < b ? a : b); }
static __inline long lmax(long a, long b) { return (a > b ? a : b); }
static __inline long lmin(long a, long b) { return (a < b ? a : b); }
static __inline u_int max(u_int a, u_int b) { return (a > b ? a : b); }
static __inline u_int min(u_int a, u_int b) { return (a < b ? a : b); }
static __inline quad_t qmax(quad_t a, quad_t b) { return (a > b ? a : b); }
static __inline quad_t qmin(quad_t a, quad_t b) { return (a < b ? a : b); }
static __inline u_long ulmax(u_long a, u_long b) { return (a > b ? a : b); }
static __inline u_long ulmin(u_long a, u_long b) { return (a < b ? a : b); }

static __inline int abs(int a) { return (a < 0 ? -a : a); }
static __inline long labs(long a) { return (a < 0 ? -a : a); }
static __inline quad_t qabs(quad_t a) { return (a < 0 ? -a : a); }


struct malloc_type;
uint32_t arc4random(void);
void arc4rand(void *ptr, u_int len, int reseed);
int bcmp(const void *, const void *, size_t);
void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));




int ffsl(long);





int flsl(long);

int fnmatch(const char *, const char *, int);
int locc(int, char *, u_int);
void qsort(void *base, size_t nmemb, size_t size,
     int (*compar)(const void *, const void *));
void qsort_r(void *base, size_t nmemb, size_t size, void *thunk,
     int (*compar)(void *, const void *, const void *));
u_long random(void);
char *index(const char *, int);
char *rindex(const char *, int);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, int, char *);
void srandom(u_long);
char *strcat(char * restrict, const char * restrict);
int strcmp(const char *, const char *);
char *strcpy(char * restrict, const char * restrict);
char *strdup(const char *restrict, struct malloc_type *);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlen(const char *);
int strncmp(const char *, const char *, size_t);
char *strncpy(char * restrict, const char * restrict, size_t);
char *strsep(char **, const char *delim);
int strvalid(const char *, size_t);


static __inline int
memcmp(const void *b1, const void *b2, size_t len)
{
 return (bcmp(b1, b2, len));
}

static __inline void *
memset(void *b, int c, size_t len)
{
 char *bb;

 if (c == 0)
  bzero(b, len);
 else
  for (bb = (char *)b; len--; )
   *bb++ = c;
 return (b);
}
# 243 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


void consinit(void);
void cpu_initclocks(void);
void usrinfoinit(void);


void shutdown_nice(int);




void inittodr(time_t base);
void resettodr(void);
void startrtclock(void);


typedef void timeout_t(void *);



void callout_handle_init(struct callout_handle *);
struct callout_handle timeout(timeout_t *, void *, int);
void untimeout(timeout_t *, void *, struct callout_handle);
caddr_t kern_timeout_callwheel_alloc(caddr_t v);
void kern_timeout_callwheel_init(void);


static __inline void spl0(void) { return; }
static __inline intrmask_t splbio(void) { return 0; }
static __inline intrmask_t splcam(void) { return 0; }
static __inline intrmask_t splclock(void) { return 0; }
static __inline intrmask_t splhigh(void) { return 0; }
static __inline intrmask_t splimp(void) { return 0; }
static __inline intrmask_t splnet(void) { return 0; }
static __inline intrmask_t splsoftcam(void) { return 0; }
static __inline intrmask_t splsoftclock(void) { return 0; }
static __inline intrmask_t splsofttty(void) { return 0; }
static __inline intrmask_t splsoftvm(void) { return 0; }
static __inline intrmask_t splsofttq(void) { return 0; }
static __inline intrmask_t splstatclock(void) { return 0; }
static __inline intrmask_t spltty(void) { return 0; }
static __inline intrmask_t splvm(void) { return 0; }
static __inline void splx(intrmask_t ipl __attribute__((__unused__)) ) { return; }
# 299 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef void (*watchdog_tickle_fn)(void);

typedef  watchdog_tickle_fn  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_wdog_tickler[NUM_STACKS];   





int msleep(void *chan, struct mtx *mtx, int pri, const char *wmesg,
     int timo);

void wakeup(void *chan) __attribute__((__nonnull__(1))) ;
void wakeup_one(void *chan) __attribute__((__nonnull__(1))) ;





int major(struct cdev *x);
int minor(struct cdev *x);
dev_t dev2udev(struct cdev *x);
struct cdev *findcdev(dev_t x);
int uminor(dev_t dev);
int umajor(dev_t dev);


void DELAY(int usec);
# 30 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_label.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/_label.h"
struct label {
 int l_flags;
 union {
  void *l_ptr;
  long l_long;
 } l_perpolicy[4];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2
# 59 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct mac {
 size_t m_buflen;
 char *m_string;
};

typedef struct mac *mac_t;
# 108 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct bpf_d;
struct cdev;
struct componentname;
struct devfs_dirent;
struct ifnet;
struct ifreq;
struct inpcb;
struct image_params;
struct inpcb;
struct ipq;
struct m_tag;
struct mbuf;
struct mount;
struct proc;
struct sockaddr;
struct socket;
struct sysctl_oid;
struct sysctl_req;
struct pipepair;
struct thread;
struct timespec;
struct ucred;
struct uio;
struct vattr;
struct vnode;

# 1 "freebsd5/freebsd/usr/src/sys/sys/acl.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
typedef int acl_type_t;
typedef int acl_tag_t;
typedef mode_t acl_perm_t;
typedef mode_t *acl_permset_t;

struct acl_entry {
 acl_tag_t ae_tag;
 uid_t ae_id;
 acl_perm_t ae_perm;
};
typedef struct acl_entry *acl_entry_t;


struct acl {
 int acl_cnt;
 struct acl_entry acl_entry[32];
};


struct acl_t_struct {
 struct acl ats_acl;
 int ats_cur_entry;
};
typedef struct acl_t_struct *acl_t;
# 139 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
acl_perm_t acl_posix1e_mode_to_perm(acl_tag_t tag, mode_t mode);
struct acl_entry acl_posix1e_mode_to_entry(acl_tag_t tag, uid_t uid,
       gid_t gid, mode_t mode);
mode_t acl_posix1e_perms_to_mode(
       struct acl_entry *acl_user_obj_entry,
       struct acl_entry *acl_group_obj_entry,
       struct acl_entry *acl_other_entry);
mode_t acl_posix1e_acl_to_mode(struct acl *acl);
mode_t acl_posix1e_newfilemode(mode_t cmode,
       struct acl *dacl);




int acl_posix1e_check(struct acl *acl);
# 135 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2

struct vop_setlabel_args;




void mac_init_bpfdesc(struct bpf_d *);
void mac_init_cred(struct ucred *);
void mac_init_devfsdirent(struct devfs_dirent *);
void mac_init_ifnet(struct ifnet *);
int mac_init_inpcb(struct inpcb *, int flag);
int mac_init_ipq(struct ipq *, int flag);
int mac_init_socket(struct socket *, int flag);
void mac_init_pipe(struct pipepair *);
int mac_init_mbuf(struct mbuf *mbuf, int flag);
int mac_init_mbuf_tag(struct m_tag *, int flag);
void mac_init_mount(struct mount *);
void mac_init_proc(struct proc *);
void mac_init_vnode(struct vnode *);
void mac_copy_mbuf_tag(struct m_tag *, struct m_tag *);
void mac_copy_vnode_label(struct label *, struct label *label);
void mac_destroy_bpfdesc(struct bpf_d *);
void mac_destroy_cred(struct ucred *);
void mac_destroy_devfsdirent(struct devfs_dirent *);
void mac_destroy_ifnet(struct ifnet *);
void mac_destroy_inpcb(struct inpcb *);
void mac_destroy_ipq(struct ipq *);
void mac_destroy_socket(struct socket *);
void mac_destroy_pipe(struct pipepair *);
void mac_destroy_proc(struct proc *);
void mac_destroy_mbuf_tag(struct m_tag *);
void mac_destroy_mount(struct mount *);
void mac_destroy_vnode(struct vnode *);

struct label *mac_cred_label_alloc(void);
void mac_cred_label_free(struct label *label);
struct label *mac_vnode_label_alloc(void);
void mac_vnode_label_free(struct label *label);





void mac_associate_vnode_devfs(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);
int mac_associate_vnode_extattr(struct mount *mp, struct vnode *vp);
void mac_associate_vnode_singlelabel(struct mount *mp, struct vnode *vp);
void mac_create_devfs_device(struct mount *mp, struct cdev *dev,
     struct devfs_dirent *de);
void mac_create_devfs_directory(struct mount *mp, char *dirname,
     int dirnamelen, struct devfs_dirent *de);
void mac_create_devfs_symlink(struct ucred *cred, struct mount *mp,
     struct devfs_dirent *dd, struct devfs_dirent *de);
int mac_create_vnode_extattr(struct ucred *cred, struct mount *mp,
     struct vnode *dvp, struct vnode *vp, struct componentname *cnp);
void mac_create_mount(struct ucred *cred, struct mount *mp);
void mac_create_root_mount(struct ucred *cred, struct mount *mp);
void mac_relabel_vnode(struct ucred *cred, struct vnode *vp,
     struct label *newlabel);
void mac_update_devfsdirent(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);




void mac_create_mbuf_from_socket(struct socket *so, struct mbuf *m);
void mac_create_socket(struct ucred *cred, struct socket *socket);
void mac_create_socket_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_set_socket_peer_from_mbuf(struct mbuf *mbuf,
     struct socket *socket);
void mac_set_socket_peer_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_create_pipe(struct ucred *cred, struct pipepair *pp);




void mac_create_bpfdesc(struct ucred *cred, struct bpf_d *bpf_d);
void mac_create_ifnet(struct ifnet *ifp);
void mac_create_inpcb_from_socket(struct socket *so, struct inpcb *inp);
void mac_create_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_create_datagram_from_ipq(struct ipq *ipq, struct mbuf *datagram);
void mac_create_fragment(struct mbuf *datagram, struct mbuf *fragment);
void mac_create_mbuf_from_inpcb(struct inpcb *inp, struct mbuf *m);
void mac_create_mbuf_from_mbuf(struct mbuf *oldmbuf, struct mbuf *newmbuf);
void mac_create_mbuf_linklayer(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_from_bpfdesc(struct bpf_d *bpf_d, struct mbuf *m);
void mac_create_mbuf_from_ifnet(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_multicast_encap(struct mbuf *oldmbuf,
     struct ifnet *ifnet, struct mbuf *newmbuf);
void mac_create_mbuf_netlayer(struct mbuf *oldmbuf, struct mbuf *newmbuf);
int mac_fragment_match(struct mbuf *fragment, struct ipq *ipq);
void mac_reflect_mbuf_icmp(struct mbuf *m);
void mac_reflect_mbuf_tcp(struct mbuf *m);
void mac_update_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_inpcb_sosetlabel(struct socket *so, struct inpcb *inp);




void mac_copy_cred(struct ucred *cr1, struct ucred *cr2);
int mac_execve_enter(struct image_params *imgp, struct mac *mac_p);
void mac_execve_exit(struct image_params *imgp);
void mac_execve_transition(struct ucred *old, struct ucred *new,
     struct vnode *vp, struct label *interpvnodelabel,
     struct image_params *imgp);
int mac_execve_will_transition(struct ucred *old, struct vnode *vp,
     struct label *interpvnodelabel, struct image_params *imgp);
void mac_create_proc0(struct ucred *cred);
void mac_create_proc1(struct ucred *cred);
void mac_thread_userret(struct thread *td);


int mac_check_bpfdesc_receive(struct bpf_d *bpf_d, struct ifnet *ifnet);
int mac_check_cred_visible(struct ucred *u1, struct ucred *u2);
int mac_check_ifnet_transmit(struct ifnet *ifnet, struct mbuf *m);
int mac_check_inpcb_deliver(struct inpcb *inp, struct mbuf *m);
int mac_check_kenv_dump(struct ucred *cred);
int mac_check_kenv_get(struct ucred *cred, char *name);
int mac_check_kenv_set(struct ucred *cred, char *name, char *value);
int mac_check_kenv_unset(struct ucred *cred, char *name);
int mac_check_kld_load(struct ucred *cred, struct vnode *vp);
int mac_check_kld_stat(struct ucred *cred);
int mac_check_kld_unload(struct ucred *cred);
int mac_check_mount_stat(struct ucred *cred, struct mount *mp);
int mac_check_pipe_ioctl(struct ucred *cred, struct pipepair *pp,
     unsigned long cmd, void *data);
int mac_check_pipe_poll(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_read(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_stat(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_write(struct ucred *cred, struct pipepair *pp);
int mac_check_proc_debug(struct ucred *cred, struct proc *proc);
int mac_check_proc_sched(struct ucred *cred, struct proc *proc);
int mac_check_proc_signal(struct ucred *cred, struct proc *proc,
     int signum);
int mac_check_socket_bind(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_connect(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_deliver(struct socket *so, struct mbuf *m);
int mac_check_socket_listen(struct ucred *cred, struct socket *so);
int mac_check_socket_receive(struct ucred *cred, struct socket *so);
int mac_check_socket_send(struct ucred *cred, struct socket *so);
int mac_check_socket_visible(struct ucred *cred, struct socket *so);
int mac_check_sysarch_ioperm(struct ucred *cred);
int mac_check_system_acct(struct ucred *cred, struct vnode *vp);
int mac_check_system_nfsd(struct ucred *cred);
int mac_check_system_reboot(struct ucred *cred, int howto);
int mac_check_system_settime(struct ucred *cred);
int mac_check_system_swapon(struct ucred *cred, struct vnode *vp);
int mac_check_system_swapoff(struct ucred *cred, struct vnode *vp);
int mac_check_system_sysctl(struct ucred *cred, struct sysctl_oid *oidp,
     void *arg1, int arg2, struct sysctl_req *req);
int mac_check_vnode_access(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_chdir(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_chroot(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_create(struct ucred *cred, struct vnode *dvp,
     struct componentname *cnp, struct vattr *vap);
int mac_check_vnode_delete(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_deleteacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_deleteextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name);
int mac_check_vnode_exec(struct ucred *cred, struct vnode *vp,
     struct image_params *imgp);
int mac_check_vnode_getacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_getextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_link(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_listextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace);
int mac_check_vnode_lookup(struct ucred *cred, struct vnode *dvp,
      struct componentname *cnp);
int mac_check_vnode_mmap(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_mprotect(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_open(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_poll(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_read(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_readdir(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_readlink(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_rename_from(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_rename_to(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, int samedir, struct componentname *cnp);
int mac_check_vnode_revoke(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_setacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type, struct acl *acl);
int mac_check_vnode_setextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_setflags(struct ucred *cred, struct vnode *vp,
     u_long flags);
int mac_check_vnode_setmode(struct ucred *cred, struct vnode *vp,
     mode_t mode);
int mac_check_vnode_setowner(struct ucred *cred, struct vnode *vp,
     uid_t uid, gid_t gid);
int mac_check_vnode_setutimes(struct ucred *cred, struct vnode *vp,
     struct timespec atime, struct timespec mtime);
int mac_check_vnode_stat(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_write(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_getsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_getsockopt_peerlabel(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_ioctl_ifnet_get(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_ioctl_ifnet_set(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_setsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_pipe_label_set(struct ucred *cred, struct pipepair *pp,
     struct label *label);
void mac_cred_mmapped_drop_perms(struct thread *td, struct ucred *cred);





int vop_stdsetlabel_ea(struct vop_setlabel_args *ap);
# 31 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_lock.h" 1
# 34 "freebsd5/freebsd/usr/src/sys/sys/_lock.h"
struct lock_object {
 struct lock_class *lo_class;
 const char *lo_name;
 const char *lo_type;
 u_int lo_flags;
 struct { struct lock_object *tqe_next; struct lock_object **tqe_prev; } lo_list;
 struct witness *lo_witness;
};
# 38 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
struct malloc_type {
 struct malloc_type *ks_next;
 u_long ks_memuse;
 u_long ks_size;
 u_long ks_inuse;
 uint64_t ks_calls;
 u_long ks_maxused;
 u_long ks_magic;
 const char *ks_shortdesc;
 struct mtx ks_mtx;
};
# 76 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_40_T; extern  _GLOBAL_40_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_13_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_14_A[NUM_STACKS] = { &_GLOBAL_0_M_DEVBUF_I, &_GLOBAL_1_M_DEVBUF_I, &_GLOBAL_2_M_DEVBUF_I, &_GLOBAL_3_M_DEVBUF_I, &_GLOBAL_4_M_DEVBUF_I, &_GLOBAL_5_M_DEVBUF_I, &_GLOBAL_6_M_DEVBUF_I, &_GLOBAL_7_M_DEVBUF_I, &_GLOBAL_8_M_DEVBUF_I, &_GLOBAL_9_M_DEVBUF_I, &_GLOBAL_10_M_DEVBUF_I, &_GLOBAL_11_M_DEVBUF_I, &_GLOBAL_12_M_DEVBUF_I, &_GLOBAL_13_M_DEVBUF_I, &_GLOBAL_14_M_DEVBUF_I, &_GLOBAL_15_M_DEVBUF_I, &_GLOBAL_16_M_DEVBUF_I, &_GLOBAL_17_M_DEVBUF_I, &_GLOBAL_18_M_DEVBUF_I, &_GLOBAL_19_M_DEVBUF_I, &_GLOBAL_20_M_DEVBUF_I, &_GLOBAL_21_M_DEVBUF_I, &_GLOBAL_22_M_DEVBUF_I, &_GLOBAL_23_M_DEVBUF_I, &_GLOBAL_24_M_DEVBUF_I, &_GLOBAL_25_M_DEVBUF_I, &_GLOBAL_26_M_DEVBUF_I, &_GLOBAL_27_M_DEVBUF_I, &_GLOBAL_28_M_DEVBUF_I, &_GLOBAL_29_M_DEVBUF_I, &_GLOBAL_30_M_DEVBUF_I, &_GLOBAL_31_M_DEVBUF_I, &_GLOBAL_32_M_DEVBUF_I, &_GLOBAL_33_M_DEVBUF_I, &_GLOBAL_34_M_DEVBUF_I, &_GLOBAL_35_M_DEVBUF_I, &_GLOBAL_36_M_DEVBUF_I, &_GLOBAL_37_M_DEVBUF_I, &_GLOBAL_38_M_DEVBUF_I, &_GLOBAL_39_M_DEVBUF_I, &_GLOBAL_40_M_DEVBUF_I, &_GLOBAL_41_M_DEVBUF_I, &_GLOBAL_42_M_DEVBUF_I, &_GLOBAL_43_M_DEVBUF_I, &_GLOBAL_44_M_DEVBUF_I, &_GLOBAL_45_M_DEVBUF_I, &_GLOBAL_46_M_DEVBUF_I, &_GLOBAL_47_M_DEVBUF_I, &_GLOBAL_48_M_DEVBUF_I, &_GLOBAL_49_M_DEVBUF_I, };   
typedef  struct malloc_type   _GLOBAL_42_T; extern  _GLOBAL_42_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_15_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };   

typedef  struct malloc_type   _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_16_A[NUM_STACKS] = { &_GLOBAL_0_M_IP6OPT_I, &_GLOBAL_1_M_IP6OPT_I, &_GLOBAL_2_M_IP6OPT_I, &_GLOBAL_3_M_IP6OPT_I, &_GLOBAL_4_M_IP6OPT_I, &_GLOBAL_5_M_IP6OPT_I, &_GLOBAL_6_M_IP6OPT_I, &_GLOBAL_7_M_IP6OPT_I, &_GLOBAL_8_M_IP6OPT_I, &_GLOBAL_9_M_IP6OPT_I, &_GLOBAL_10_M_IP6OPT_I, &_GLOBAL_11_M_IP6OPT_I, &_GLOBAL_12_M_IP6OPT_I, &_GLOBAL_13_M_IP6OPT_I, &_GLOBAL_14_M_IP6OPT_I, &_GLOBAL_15_M_IP6OPT_I, &_GLOBAL_16_M_IP6OPT_I, &_GLOBAL_17_M_IP6OPT_I, &_GLOBAL_18_M_IP6OPT_I, &_GLOBAL_19_M_IP6OPT_I, &_GLOBAL_20_M_IP6OPT_I, &_GLOBAL_21_M_IP6OPT_I, &_GLOBAL_22_M_IP6OPT_I, &_GLOBAL_23_M_IP6OPT_I, &_GLOBAL_24_M_IP6OPT_I, &_GLOBAL_25_M_IP6OPT_I, &_GLOBAL_26_M_IP6OPT_I, &_GLOBAL_27_M_IP6OPT_I, &_GLOBAL_28_M_IP6OPT_I, &_GLOBAL_29_M_IP6OPT_I, &_GLOBAL_30_M_IP6OPT_I, &_GLOBAL_31_M_IP6OPT_I, &_GLOBAL_32_M_IP6OPT_I, &_GLOBAL_33_M_IP6OPT_I, &_GLOBAL_34_M_IP6OPT_I, &_GLOBAL_35_M_IP6OPT_I, &_GLOBAL_36_M_IP6OPT_I, &_GLOBAL_37_M_IP6OPT_I, &_GLOBAL_38_M_IP6OPT_I, &_GLOBAL_39_M_IP6OPT_I, &_GLOBAL_40_M_IP6OPT_I, &_GLOBAL_41_M_IP6OPT_I, &_GLOBAL_42_M_IP6OPT_I, &_GLOBAL_43_M_IP6OPT_I, &_GLOBAL_44_M_IP6OPT_I, &_GLOBAL_45_M_IP6OPT_I, &_GLOBAL_46_M_IP6OPT_I, &_GLOBAL_47_M_IP6OPT_I, &_GLOBAL_48_M_IP6OPT_I, &_GLOBAL_49_M_IP6OPT_I, };   
typedef  struct malloc_type   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_17_A[NUM_STACKS] = { &_GLOBAL_0_M_IP6NDP_I, &_GLOBAL_1_M_IP6NDP_I, &_GLOBAL_2_M_IP6NDP_I, &_GLOBAL_3_M_IP6NDP_I, &_GLOBAL_4_M_IP6NDP_I, &_GLOBAL_5_M_IP6NDP_I, &_GLOBAL_6_M_IP6NDP_I, &_GLOBAL_7_M_IP6NDP_I, &_GLOBAL_8_M_IP6NDP_I, &_GLOBAL_9_M_IP6NDP_I, &_GLOBAL_10_M_IP6NDP_I, &_GLOBAL_11_M_IP6NDP_I, &_GLOBAL_12_M_IP6NDP_I, &_GLOBAL_13_M_IP6NDP_I, &_GLOBAL_14_M_IP6NDP_I, &_GLOBAL_15_M_IP6NDP_I, &_GLOBAL_16_M_IP6NDP_I, &_GLOBAL_17_M_IP6NDP_I, &_GLOBAL_18_M_IP6NDP_I, &_GLOBAL_19_M_IP6NDP_I, &_GLOBAL_20_M_IP6NDP_I, &_GLOBAL_21_M_IP6NDP_I, &_GLOBAL_22_M_IP6NDP_I, &_GLOBAL_23_M_IP6NDP_I, &_GLOBAL_24_M_IP6NDP_I, &_GLOBAL_25_M_IP6NDP_I, &_GLOBAL_26_M_IP6NDP_I, &_GLOBAL_27_M_IP6NDP_I, &_GLOBAL_28_M_IP6NDP_I, &_GLOBAL_29_M_IP6NDP_I, &_GLOBAL_30_M_IP6NDP_I, &_GLOBAL_31_M_IP6NDP_I, &_GLOBAL_32_M_IP6NDP_I, &_GLOBAL_33_M_IP6NDP_I, &_GLOBAL_34_M_IP6NDP_I, &_GLOBAL_35_M_IP6NDP_I, &_GLOBAL_36_M_IP6NDP_I, &_GLOBAL_37_M_IP6NDP_I, &_GLOBAL_38_M_IP6NDP_I, &_GLOBAL_39_M_IP6NDP_I, &_GLOBAL_40_M_IP6NDP_I, &_GLOBAL_41_M_IP6NDP_I, &_GLOBAL_42_M_IP6NDP_I, &_GLOBAL_43_M_IP6NDP_I, &_GLOBAL_44_M_IP6NDP_I, &_GLOBAL_45_M_IP6NDP_I, &_GLOBAL_46_M_IP6NDP_I, &_GLOBAL_47_M_IP6NDP_I, &_GLOBAL_48_M_IP6NDP_I, &_GLOBAL_49_M_IP6NDP_I, };   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_18_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_malloc_mtx[NUM_STACKS];    


void contigfree(void *addr, unsigned long size, struct malloc_type *type);
void *contigmalloc(unsigned long size, struct malloc_type *type, int flags,
     vm_paddr_t low, vm_paddr_t high, unsigned long alignment,
     unsigned long boundary);
void nsc_free(void *addr, struct malloc_type *type);
void *nsc_malloc(unsigned long size, struct malloc_type *type, int flags);
void malloc_init(void *);
int malloc_last_fail(void);
void malloc_type_allocated(struct malloc_type *type, unsigned long size);
void malloc_type_freed(struct malloc_type *type, unsigned long size);
void malloc_uninit(void *);
void *nsc_realloc(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
void *reallocf(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
# 40 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 2






struct uma_zone;

typedef struct uma_zone * uma_zone_t;
# 67 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_ctor)(void *mem, int size, void *arg, int flags);
# 85 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_dtor)(void *mem, int size, void *arg);
# 103 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_init)(void *mem, int size, int flags);
# 120 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_fini)(void *mem, int size);
# 164 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zcreate(char *name, size_t size, uma_ctor ctor, uma_dtor dtor,
   uma_init uminit, uma_fini fini, int align,
   u_int16_t flags);
# 200 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zsecond_create(char *name, uma_ctor ctor, uma_dtor dtor,
      uma_init zinit, uma_fini zfini, uma_zone_t master);
# 245 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zdestroy(uma_zone_t zone);
# 261 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void *uma_zalloc_arg(uma_zone_t zone, void *arg, int flags);







static __inline void *uma_zalloc(uma_zone_t zone, int flags);

static __inline void *
uma_zalloc(uma_zone_t zone, int flags)
{
 return uma_zalloc_arg(zone, ((void *)0), flags);
}
# 289 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zfree_arg(uma_zone_t zone, void *item, void *arg);







static __inline void uma_zfree(uma_zone_t zone, void *item);

static __inline void
uma_zfree(uma_zone_t zone, void *item)
{
 uma_zfree_arg(zone, item, ((void *)0));
}
# 323 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void *(*uma_alloc)(uma_zone_t zone, int size, u_int8_t *pflag, int wait);
# 336 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_free)(void *item, int size, u_int8_t pflag);
# 356 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup(void *bootmem);
# 372 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup2(void);
# 385 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_reclaim(void);
# 404 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
struct vm_object;
int uma_zone_set_obj(uma_zone_t zone, struct vm_object *obj, int size);
# 416 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_max(uma_zone_t zone, int nitems);
# 426 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_init(uma_zone_t zone, uma_init uminit);
void uma_zone_set_fini(uma_zone_t zone, uma_fini fini);
# 437 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_zinit(uma_zone_t zone, uma_init zinit);
void uma_zone_set_zfini(uma_zone_t zone, uma_fini zfini);
# 456 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_allocf(uma_zone_t zone, uma_alloc allocf);
# 469 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_freef(uma_zone_t zone, uma_free freef);
# 493 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_prealloc(uma_zone_t zone, int itemcnt);
# 508 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
u_int32_t *uma_find_refcnt(uma_zone_t zone, void *item);
# 41 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
# 73 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mb_args {
 int flags;
 short type;
};





struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 int mh_len;
 int mh_flags;
 short mh_type;
};




struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
 u_int32_t m_tag_cookie;
 void (*m_tag_free)(struct m_tag *);
};




struct pkthdr {
 struct ifnet *rcvif;
 int len;

 void *header;

 int csum_flags;
 int csum_data;
 struct packet_tags { struct m_tag *slh_first; } tags;
};




struct m_ext {
 caddr_t ext_buf;
 void (*ext_free)
      (void *, void *);
 void *ext_args;
 u_int ext_size;
 volatile u_int *ref_cnt;
 int ext_type;
};





struct mbuf {
 struct m_hdr m_hdr;
 union {
  struct {
   struct pkthdr MH_pkthdr;
   union {
    struct m_ext MH_ext;
    char MH_databuf[((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))];
   } MH_dat;
  } MH;
  char M_databuf[(256 - sizeof(struct m_hdr))];
 } M_dat;
};
# 246 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mbstat {
 u_long m_mbufs;
 u_long m_mclusts;

 u_long m_drain;
 u_long m_mcfail;
 u_long m_mpfail;
 u_long m_msize;
 u_long m_mclbytes;
 u_long m_minclsize;
 u_long m_mlen;
 u_long m_mhlen;


 short m_numtypes;


 u_long sf_iocnt;
 u_long sf_allocfail;
 u_long sf_allocwait;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  uma_zone_t  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_zone_pack[NUM_STACKS];   

static __inline struct mbuf *m_get(int how, short type);
static __inline struct mbuf *m_gethdr(int how, short type);
static __inline struct mbuf *m_getcl(int how, short type, int flags);
static __inline struct mbuf *m_getclr(int how, short type);
static __inline struct mbuf *m_free(struct mbuf *m);
static __inline void m_clget(struct mbuf *m, int how);
static __inline void m_chtype(struct mbuf *m, short new_type);
void mb_free_ext(struct mbuf *);

static __inline
struct mbuf *
m_get(int how, short type)
{
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}


static __inline
struct mbuf *
m_getclr(int how, short type)
{
 struct mbuf *m;
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 m = uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how);
 if (m != ((void *)0))
  bzero(m->m_hdr.mh_data, (256 - sizeof(struct m_hdr)));
 return m;
}

static __inline
struct mbuf *
m_gethdr(int how, short type)
{
 struct mb_args args;

 args.flags = 0x0002;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_getcl(int how, short type, int flags)
{
 struct mb_args args;

 args.flags = flags;
 args.type = type;
 return (uma_zalloc_arg(global_zone_pack[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_free(struct mbuf *m)
{
 struct mbuf *n = m->m_hdr.mh_next;




 if (m->m_hdr.mh_flags & 0x0001)
  mb_free_ext(m);
 else
  uma_zfree(global_zone_mbuf[get_stack_id()], m);
 return n;
}

static __inline
void
m_clget(struct mbuf *m, int how)
{

 m->M_dat.MH.MH_dat.MH_ext.ext_buf = ((void *)0);
 uma_zalloc_arg(global_zone_clust[get_stack_id()], m, how);
}

static __inline
void
m_chtype(struct mbuf *m, short new_type)
{
 m->m_hdr.mh_type = new_type;
}
# 544 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_nmbclusters[NUM_STACKS];   

struct uio;

void m_adj(struct mbuf *, int);
int m_apply(struct mbuf *, int, int,
      int (*)(void *, void *, u_int), void *);
void m_cat(struct mbuf *, struct mbuf *);
void m_extadd(struct mbuf *, caddr_t, u_int,
      void (*)(void *, void *), void *, int, int);
void m_copyback(struct mbuf *, int, int, c_caddr_t);
void m_copydata(const struct mbuf *, int, int, caddr_t);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_copypacket(struct mbuf *, int);
void m_copy_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_defrag(struct mbuf *, int);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
      void (*)(char *, caddr_t, u_int));
struct mbuf *m_dup(struct mbuf *, int);
int m_dup_pkthdr(struct mbuf *, struct mbuf *, int);
u_int m_fixhdr(struct mbuf *);
struct mbuf *m_fragment(struct mbuf *, int, int);
void m_freem(struct mbuf *);
struct mbuf *m_getm(struct mbuf *, int, int, short);
struct mbuf *m_getptr(struct mbuf *, int, int *);
u_int m_length(struct mbuf *, struct mbuf **);
void m_move_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_prepend(struct mbuf *, int, int);
void m_print(const struct mbuf *, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_uiotombuf(struct uio *, int, int);
# 667 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct m_tag *m_tag_alloc(u_int32_t, int, int, int);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_locate(struct mbuf *, u_int32_t, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *, int);
int m_tag_copy_chain(struct mbuf *, struct mbuf *, int);
void m_tag_delete_nonpersistent(struct mbuf *);




static __inline void
m_tag_init(struct mbuf *m)
{
 do { (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = ((void *)0); } while (0);
}
# 691 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
static __inline void
m_tag_setup(struct m_tag *t, u_int32_t cookie, int type, int len)
{
 t->m_tag_id = type;
 t->m_tag_len = len;
 t->m_tag_cookie = cookie;
}




static __inline void
m_tag_free(struct m_tag *t)
{
 (*t->m_tag_free)(t);
}




static __inline struct m_tag *
m_tag_first(struct mbuf *m)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first));
}




static __inline struct m_tag *
m_tag_next(struct mbuf *m, struct m_tag *t)
{
 return (((t)->m_tag_link.sle_next));
}




static __inline void
m_tag_prepend(struct mbuf *m, struct m_tag *t)
{
 do { (((t))->m_tag_link.sle_next) = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = (t); } while (0);
}




static __inline void
m_tag_unlink(struct mbuf *m, struct m_tag *t)
{
 do { if ((((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) == (t)) { do { ((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first) = ((((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first))->m_tag_link.sle_next); } while (0); } else { struct m_tag *curelm = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); while (((curelm)->m_tag_link.sle_next) != (t)) curelm = ((curelm)->m_tag_link.sle_next); ((curelm)->m_tag_link.sle_next) = ((((curelm)->m_tag_link.sle_next))->m_tag_link.sle_next); } } while (0);
}




static __inline struct m_tag *
m_tag_get(int type, int length, int wait)
{
 return (m_tag_alloc(0, type, length, wait));
}

static __inline struct m_tag *
m_tag_find(struct mbuf *m, int type, struct m_tag *start)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first == ((void *)0)) ?
     ((void *)0) : m_tag_locate(m, 0, type, start));
}
# 32 "freebsd5/support/globals.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/domain.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)
  (void);
 int (*dom_externalize)
  (struct mbuf *, struct mbuf **);
 void (*dom_dispose)
  (struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;
 int (*dom_rtattach)
  (void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_56_T; extern  _GLOBAL_56_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 34 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/protosw.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct mbuf;
struct thread;
struct sockaddr;
struct socket;
struct sockopt;
# 67 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
typedef void pr_input_t (struct mbuf *, int);
typedef int pr_input6_t (struct mbuf **, int*, int);
typedef void pr_in_input_t (struct mbuf *, int, int);
typedef int pr_output_t (struct mbuf *, struct socket *);
typedef int pr_in_output_t (struct mbuf *, struct socket *, struct sockaddr *);
typedef void pr_ctlinput_t (int, struct sockaddr *, void *);
typedef int pr_ctloutput_t (struct socket *, struct sockopt *);
typedef void pr_init_t (void);
typedef void pr_fasttimo_t (void);
typedef void pr_slowtimo_t (void);
typedef void pr_drain_t (void);

typedef int pr_usrreq_t(struct socket *, int, struct mbuf *,
        struct mbuf *, struct mbuf *, struct thread *);

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;

 pr_input_t *pr_input;
 pr_output_t *pr_output;
 pr_ctlinput_t *pr_ctlinput;
 pr_ctloutput_t *pr_ctloutput;

 pr_usrreq_t *pr_ousrreq;

 pr_init_t *pr_init;
 pr_fasttimo_t *pr_fasttimo;
 pr_slowtimo_t *pr_slowtimo;
 pr_drain_t *pr_drain;

 struct pr_usrreqs *pr_usrreqs;
};
# 177 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct ifnet;
struct stat;
struct ucred;
struct uio;







struct pr_usrreqs {
 int (*pru_abort)(struct socket *so);
 int (*pru_accept)(struct socket *so, struct sockaddr **nam);
 int (*pru_attach)(struct socket *so, int proto, struct thread *td);
 int (*pru_bind)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect2)(struct socket *so1, struct socket *so2);
 int (*pru_control)(struct socket *so, u_long cmd, caddr_t data,
      struct ifnet *ifp, struct thread *td);
 int (*pru_detach)(struct socket *so);
 int (*pru_disconnect)(struct socket *so);
 int (*pru_listen)(struct socket *so, struct thread *td);
 int (*pru_peeraddr)(struct socket *so, struct sockaddr **nam);
 int (*pru_rcvd)(struct socket *so, int flags);
 int (*pru_rcvoob)(struct socket *so, struct mbuf *m, int flags);
 int (*pru_send)(struct socket *so, int flags, struct mbuf *m,
      struct sockaddr *addr, struct mbuf *control,
      struct thread *td);



 int (*pru_sense)(struct socket *so, struct stat *sb);
 int (*pru_shutdown)(struct socket *so);
 int (*pru_sockaddr)(struct socket *so, struct sockaddr **nam);
# 223 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
 int (*pru_sosend)(struct socket *so, struct sockaddr *addr,
      struct uio *uio, struct mbuf *top, struct mbuf *control,
      int flags, struct thread *td);
 int (*pru_soreceive)(struct socket *so, struct sockaddr **paddr,
      struct uio *uio, struct mbuf **mp0, struct mbuf **controlp,
      int *flagsp);
 int (*pru_sopoll)(struct socket *so, int events,
      struct ucred *cred, struct thread *td);
 void (*pru_sosetlabel)(struct socket *so);
};

int pru_accept_notsupp(struct socket *so, struct sockaddr **nam);
int pru_connect_notsupp(struct socket *so, struct sockaddr *nam,
     struct thread *td);
int pru_connect2_notsupp(struct socket *so1, struct socket *so2);
int pru_control_notsupp(struct socket *so, u_long cmd, caddr_t data,
     struct ifnet *ifp, struct thread *td);
int pru_listen_notsupp(struct socket *so, struct thread *td);
int pru_rcvd_notsupp(struct socket *so, int flags);
int pru_rcvoob_notsupp(struct socket *so, struct mbuf *m, int flags);
int pru_sense_null(struct socket *so, struct stat *sb);
void pru_sosetlabel_null(struct socket *so);
# 318 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
void pfctlinput(int, struct sockaddr *);
void pfctlinput2(int, struct sockaddr *, void *);
struct protosw *pffindproto(int family, int protocol, int type);
struct protosw *pffindtype(int family, int type);
# 35 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2
# 68 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
typedef __sa_family_t sa_family_t;




typedef __socklen_t socklen_t;
# 141 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};


struct accept_filter_arg {
 char af_name[16];
 char af_arg[256-16];
};
# 215 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr {
 unsigned char sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};







struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 243 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr_storage {
 unsigned char ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128U - sizeof(unsigned char) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 376 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 406 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 428 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsgcred {
 pid_t cmcred_pid;
 uid_t cmcred_uid;
 uid_t cmcred_euid;
 gid_t cmcred_gid;
 short cmcred_ngroups;
 gid_t cmcred_groups[16];
};
# 481 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 char *msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 char *msg_accrights;
 int msg_accrightslen;
};
# 510 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};
# 36 "freebsd5/support/globals.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_19_A[NUM_STACKS];  
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_20_A[NUM_STACKS];  
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_21_A[NUM_STACKS];  

typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_tz_dsttime[NUM_STACKS];   
# 103 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
enum sysinit_sub_id {
 SI_SUB_DUMMY = 0x0000000,
 SI_SUB_DONE = 0x0000001,
 SI_SUB_TUNABLES = 0x0700000,
 SI_SUB_CONSOLE = 0x0800000,
 SI_SUB_COPYRIGHT = 0x0800001,
 SI_SUB_SETTINGS = 0x0880000,
 SI_SUB_MTX_POOL_STATIC = 0x0900000,
 SI_SUB_LOCKMGR = 0x0980000,
 SI_SUB_VM = 0x1000000,
 SI_SUB_KMEM = 0x1800000,
 SI_SUB_KVM_RSRC = 0x1A00000,
 SI_SUB_WITNESS = 0x1A80000,
 SI_SUB_MTX_POOL_DYNAMIC = 0x1AC0000,
 SI_SUB_LOCK = 0x1B00000,
 SI_SUB_EVENTHANDLER = 0x1C00000,
 SI_SUB_KLD = 0x2000000,
 SI_SUB_CPU = 0x2100000,
 SI_SUB_MAC = 0x2180000,
 SI_SUB_MAC_POLICY = 0x21C0000,
 SI_SUB_MAC_LATE = 0x21D0000,
 SI_SUB_INTRINSIC = 0x2200000,
 SI_SUB_VM_CONF = 0x2300000,
 SI_SUB_RUN_QUEUE = 0x2400000,
 SI_SUB_KTRACE = 0x2480000,
 SI_SUB_CREATE_INIT = 0x2500000,
 SI_SUB_SCHED_IDLE = 0x2600000,
 SI_SUB_MBUF = 0x2700000,
 SI_SUB_INTR = 0x2800000,
 SI_SUB_SOFTINTR = 0x2800001,
 SI_SUB_DEVFS = 0x2F00000,
 SI_SUB_INIT_IF = 0x3000000,
 SI_SUB_NETGRAPH = 0x3010000,
 SI_SUB_DRIVERS = 0x3100000,
 SI_SUB_CONFIGURE = 0x3800000,
 SI_SUB_VFS = 0x4000000,
 SI_SUB_CLOCKS = 0x4800000,
 SI_SUB_CLIST = 0x5800000,
 SI_SUB_SYSV_SHM = 0x6400000,
 SI_SUB_SYSV_SEM = 0x6800000,
 SI_SUB_SYSV_MSG = 0x6C00000,
 SI_SUB_P1003_1B = 0x6E00000,
 SI_SUB_PSEUDO = 0x7000000,
 SI_SUB_EXEC = 0x7400000,
 SI_SUB_PROTO_BEGIN = 0x8000000,
 SI_SUB_PROTO_IF = 0x8400000,
 SI_SUB_PROTO_DOMAIN = 0x8800000,
 SI_SUB_PROTO_IFATTACHDOMAIN = 0x8800001,
 SI_SUB_PROTO_END = 0x8ffffff,
 SI_SUB_KPROF = 0x9000000,
 SI_SUB_KICK_SCHEDULER = 0xa000000,
 SI_SUB_INT_CONFIG_HOOKS = 0xa800000,
 SI_SUB_ROOT_CONF = 0xb000000,
 SI_SUB_DUMP_CONF = 0xb200000,
 SI_SUB_RAID = 0xb380000,
 SI_SUB_MOUNT_ROOT = 0xb400000,
 SI_SUB_SWAP = 0xc000000,
 SI_SUB_INTRINSIC_POST = 0xd000000,
 SI_SUB_KTHREAD_INIT = 0xe000000,
 SI_SUB_KTHREAD_PAGE = 0xe400000,
 SI_SUB_KTHREAD_VM = 0xe800000,
 SI_SUB_KTHREAD_BUF = 0xea00000,
 SI_SUB_KTHREAD_UPDATE = 0xec00000,
 SI_SUB_KTHREAD_IDLE = 0xee00000,
 SI_SUB_SMP = 0xf000000,
 SI_SUB_RUN_SCHEDULER = 0xfffffff
};





enum sysinit_elem_order {
 SI_ORDER_FIRST = 0x0000000,
 SI_ORDER_SECOND = 0x0000001,
 SI_ORDER_THIRD = 0x0000002,
 SI_ORDER_MIDDLE = 0x1000000,
 SI_ORDER_ANY = 0xfffffff
};
# 207 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef void (*sysinit_nfunc_t)(void *);
typedef void (*sysinit_cfunc_t)(const void *);

struct sysinit {
 enum sysinit_sub_id subsystem;
 enum sysinit_elem_order order;
 sysinit_cfunc_t func;
 const void *udata;
};
# 258 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void sysinit_add(struct sysinit **set, struct sysinit **set_end);
# 273 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_int_init(void *);
struct tunable_int {
 const char *path;
 int *var;
};
# 296 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_long_init(void *);
struct tunable_long {
 const char *path;
 long *var;
};
# 319 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_ulong_init(void *);
struct tunable_ulong {
 const char *path;
 unsigned long *var;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_quad_init(void *);
struct tunable_quad {
 const char *path;
 quad_t *var;
};
# 363 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_str_init(void *);
struct tunable_str {
 const char *path;
 char *var;
 int size;
};
# 386 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void net_warn_not_mpsafe(const char *component);




struct intr_config_hook {
 struct { struct intr_config_hook *tqe_next; struct intr_config_hook **tqe_prev; } ich_links;
 void (*ich_func)(void *arg);
 void *ich_arg;
};

int config_intrhook_establish(struct intr_config_hook *hook);
void config_intrhook_disestablish(struct intr_config_hook *hook);
# 38 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslog.h" 1
# 39 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct thread;
# 60 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 127 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_req {
 struct thread *td;
 int lock;
 void *oldptr;
 size_t oldlen;
 size_t oldidx;
 int (*oldfunc)(struct sysctl_req *, const void *, size_t);
 void *newptr;
 size_t newlen;
 size_t newidx;
 int (*newfunc)(struct sysctl_req *, void *, size_t);
 size_t validlen;
};

struct sysctl_oid_list { struct sysctl_oid *slh_first; };





struct sysctl_oid {
 struct sysctl_oid_list *oid_parent;
 struct { struct sysctl_oid *sle_next; } oid_link;
 int oid_number;
 u_int oid_kind;
 void *oid_arg1;
 int oid_arg2;
 const char *oid_name;
 int (*oid_handler)(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
 const char *oid_fmt;
 int oid_refcnt;
 const char *descr;
};




int sysctl_handle_int(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_long(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_intptr(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_string(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_opaque(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);




void sysctl_register_oid(struct sysctl_oid *oidp);
void sysctl_unregister_oid(struct sysctl_oid *oidp);
# 191 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_ctx_entry {
 struct sysctl_oid *entry;
 struct { struct sysctl_ctx_entry *tqe_next; struct sysctl_ctx_entry **tqe_prev; } link;
};

struct sysctl_ctx_list { struct sysctl_ctx_entry *tqh_first; struct sysctl_ctx_entry **tqh_last; };
# 584 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
typedef  struct sysctl_oid_list   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_25_A[NUM_STACKS];  


struct sysctl_oid *sysctl_add_oid(struct sysctl_ctx_list *clist,
  struct sysctl_oid_list *parent, int nbr, const char *name,
  int kind, void *arg1, int arg2,
  int (*handler) (struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req),
  const char *fmt, const char *descr);
int sysctl_move_oid(struct sysctl_oid *oidp,
  struct sysctl_oid_list *parent);
int sysctl_remove_oid(struct sysctl_oid *oidp, int del, int recurse);
int sysctl_ctx_init(struct sysctl_ctx_list *clist);
int sysctl_ctx_free(struct sysctl_ctx_list *clist);
struct sysctl_ctx_entry *sysctl_ctx_entry_add(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
struct sysctl_ctx_entry *sysctl_ctx_entry_find(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
int sysctl_ctx_entry_del(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);

int kernel_sysctl(struct thread *td, int *name, u_int namelen, void *old,
        size_t *oldlenp, void *new, size_t newlen,
        size_t *retval);
int kernel_sysctlbyname(struct thread *td, char *name,
  void *old, size_t *oldlenp, void *new, size_t newlen,
  size_t *retval);
int userland_sysctl(struct thread *td, int *name, u_int namelen, void *old,
   size_t *oldlenp, int inkernel, void *new, size_t newlen,
   size_t *retval);
int sysctl_find_oid(int *name, u_int namelen, struct sysctl_oid **noid,
   int *nindx, struct sysctl_req *req);
int sysctl_wire_old_buffer(struct sysctl_req *req, size_t len);
# 40 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
struct u_businfo {
 int ub_version;

 int ub_generation;
};




typedef enum device_state {
 DS_NOTPRESENT,
 DS_ALIVE,
 DS_ATTACHED,
 DS_BUSY
} device_state_t;




struct u_device {
 uintptr_t dv_handle;
 uintptr_t dv_parent;

 char dv_name[32];
 char dv_desc[32];
 char dv_drivername[32];
 char dv_pnpinfo[128];
 char dv_location[128];
 uint32_t dv_devflags;
 uint16_t dv_flags;
 device_state_t dv_state;

};




# 1 "freebsd5/freebsd/usr/src/sys/sys/kobj.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
typedef struct kobj *kobj_t;
typedef struct kobj_class *kobj_class_t;
typedef struct kobj_method kobj_method_t;
typedef int (*kobjop_t)(void);
typedef struct kobj_ops *kobj_ops_t;
typedef struct kobjop_desc *kobjop_desc_t;
struct malloc_type;

struct kobj_method {
 kobjop_desc_t desc;
 kobjop_t func;
};
# 62 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
struct kobj_class {
 const char *name; kobj_method_t *methods; size_t size; kobj_class_t *baseclasses; u_int refs; kobj_ops_t ops;
};







struct kobj {
 kobj_ops_t ops;
};







struct kobj_ops {
 kobj_method_t *cache[256];
 kobj_class_t cls;
};

struct kobjop_desc {
 unsigned int id;
 kobj_method_t *deflt;
};
# 172 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
void kobj_class_compile(kobj_class_t cls);





void kobj_class_compile_static(kobj_class_t cls, kobj_ops_t ops);




void kobj_class_free(kobj_class_t cls);




kobj_t kobj_create(kobj_class_t cls,
       struct malloc_type *mtype,
       int mflags);




void kobj_init(kobj_t obj, kobj_class_t cls);




void kobj_delete(kobj_t obj, struct malloc_type *mtype);
# 239 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
kobj_method_t* kobj_lookup_method(kobj_class_t cls,
      kobj_method_t **cep,
      kobjop_desc_t desc);





int kobj_error_method(void);
# 78 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2






void devctl_notify(const char *__system, const char *__subsystem,
    const char *__type, const char *__data);
void devctl_queue_data(char *__data);




typedef struct device *device_t;





typedef struct kobj_class driver_t;
# 119 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
typedef struct devclass *devclass_t;
# 130 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
typedef void driver_intr_t(void*);
# 149 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
enum intr_type {
 INTR_TYPE_TTY = 1,
 INTR_TYPE_BIO = 2,
 INTR_TYPE_NET = 4,
 INTR_TYPE_CAM = 8,
 INTR_TYPE_MISC = 16,
 INTR_TYPE_CLK = 32,
 INTR_TYPE_AV = 64,
 INTR_FAST = 128,
 INTR_EXCL = 256,
 INTR_MPSAFE = 512,
 INTR_ENTROPY = 1024
};

enum intr_trigger {
 INTR_TRIGGER_CONFORM = 0,
 INTR_TRIGGER_EDGE = 1,
 INTR_TRIGGER_LEVEL = 2
};

enum intr_polarity {
 INTR_POLARITY_CONFORM = 0,
 INTR_POLARITY_HIGH = 1,
 INTR_POLARITY_LOW = 2
};

typedef int (*devop_t)(void);







struct driver {
 const char *name; kobj_method_t *methods; size_t size; kobj_class_t *baseclasses; u_int refs; kobj_ops_t ops;
};





struct resource;




struct resource_list_entry {
 struct { struct resource_list_entry *sle_next; } link;
 int type;
 int rid;
 struct resource *res;
 u_long start;
 u_long end;
 u_long count;
};
struct resource_list { struct resource_list_entry *slh_first; };

void resource_list_init(struct resource_list *rl);
void resource_list_free(struct resource_list *rl);
void resource_list_add(struct resource_list *rl,
     int type, int rid,
     u_long start, u_long end, u_long count);
int resource_list_add_next(struct resource_list *rl,
     int type,
     u_long start, u_long end, u_long count);
struct resource_list_entry*
 resource_list_find(struct resource_list *rl,
      int type, int rid);
void resource_list_delete(struct resource_list *rl,
        int type, int rid);
struct resource *
 resource_list_alloc(struct resource_list *rl,
       device_t bus, device_t child,
       int type, int *rid,
       u_long start, u_long end,
       u_long count, u_int flags);
int resource_list_release(struct resource_list *rl,
         device_t bus, device_t child,
         int type, int rid, struct resource *res);
int resource_list_print_type(struct resource_list *rl,
     const char *name, int type,
     const char *format);




typedef  device_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_root_bus[NUM_STACKS];   
typedef  devclass_t  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_root_devclass[NUM_STACKS];   
void root_bus_configure(void);





int bus_generic_activate_resource(device_t dev, device_t child, int type,
          int rid, struct resource *r);
struct resource *
 bus_generic_alloc_resource(device_t bus, device_t child, int type,
       int *rid, u_long start, u_long end,
       u_long count, u_int flags);
int bus_generic_attach(device_t dev);
int bus_generic_child_present(device_t dev, device_t child);
int bus_generic_config_intr(device_t, int, enum intr_trigger,
    enum intr_polarity);
int bus_generic_deactivate_resource(device_t dev, device_t child, int type,
     int rid, struct resource *r);
int bus_generic_detach(device_t dev);
void bus_generic_driver_added(device_t dev, driver_t *driver);
struct resource_list *
 bus_generic_get_resource_list (device_t, device_t);
int bus_print_child_header(device_t dev, device_t child);
int bus_print_child_footer(device_t dev, device_t child);
int bus_generic_print_child(device_t dev, device_t child);
int bus_generic_probe(device_t dev);
int bus_generic_read_ivar(device_t dev, device_t child, int which,
         uintptr_t *result);
int bus_generic_release_resource(device_t bus, device_t child,
         int type, int rid, struct resource *r);
int bus_generic_resume(device_t dev);
int bus_generic_setup_intr(device_t dev, device_t child,
          struct resource *irq, int flags,
          driver_intr_t *intr, void *arg, void **cookiep);

struct resource *
 bus_generic_rl_alloc_resource (device_t, device_t, int, int *,
           u_long, u_long, u_long, u_int);
void bus_generic_rl_delete_resource (device_t, device_t, int, int);
int bus_generic_rl_get_resource (device_t, device_t, int, int, u_long *,
         u_long *);
int bus_generic_rl_set_resource (device_t, device_t, int, int, u_long,
         u_long);
int bus_generic_rl_release_resource (device_t, device_t, int, int,
      struct resource *);

int bus_generic_shutdown(device_t dev);
int bus_generic_suspend(device_t dev);
int bus_generic_teardown_intr(device_t dev, device_t child,
      struct resource *irq, void *cookie);
int bus_generic_write_ivar(device_t dev, device_t child, int which,
          uintptr_t value);





struct resource *bus_alloc_resource(device_t dev, int type, int *rid,
         u_long start, u_long end, u_long count,
         u_int flags);
int bus_activate_resource(device_t dev, int type, int rid,
         struct resource *r);
int bus_deactivate_resource(device_t dev, int type, int rid,
    struct resource *r);
int bus_release_resource(device_t dev, int type, int rid,
        struct resource *r);
int bus_setup_intr(device_t dev, struct resource *r, int flags,
         driver_intr_t handler, void *arg, void **cookiep);
int bus_teardown_intr(device_t dev, struct resource *r, void *cookie);
int bus_set_resource(device_t dev, int type, int rid,
    u_long start, u_long count);
int bus_get_resource(device_t dev, int type, int rid,
    u_long *startp, u_long *countp);
u_long bus_get_resource_start(device_t dev, int type, int rid);
u_long bus_get_resource_count(device_t dev, int type, int rid);
void bus_delete_resource(device_t dev, int type, int rid);
int bus_child_present(device_t child);
int bus_child_pnpinfo_str(device_t child, char *buf, size_t buflen);
int bus_child_location_str(device_t child, char *buf, size_t buflen);

static __inline struct resource *
bus_alloc_resource_any(device_t dev, int type, int *rid, u_int flags)
{
 return (bus_alloc_resource(dev, type, rid, 0ul, ~0ul, 1, flags));
}




device_t device_add_child(device_t dev, const char *name, int unit);
device_t device_add_child_ordered(device_t dev, int order,
      const char *name, int unit);
void device_busy(device_t dev);
int device_delete_child(device_t dev, device_t child);
int device_attach(device_t dev);
int device_detach(device_t dev);
void device_disable(device_t dev);
void device_enable(device_t dev);
device_t device_find_child(device_t dev, const char *classname,
      int unit);
const char *device_get_desc(device_t dev);
devclass_t device_get_devclass(device_t dev);
driver_t *device_get_driver(device_t dev);
u_int32_t device_get_flags(device_t dev);
device_t device_get_parent(device_t dev);
int device_get_children(device_t dev, device_t **listp, int *countp);
void *device_get_ivars(device_t dev);
void device_set_ivars(device_t dev, void *ivars);
const char *device_get_name(device_t dev);
const char *device_get_nameunit(device_t dev);
void *device_get_softc(device_t dev);
device_state_t device_get_state(device_t dev);
int device_get_unit(device_t dev);
struct sysctl_ctx_list *device_get_sysctl_ctx(device_t dev);
struct sysctl_oid *device_get_sysctl_tree(device_t dev);
int device_is_alive(device_t dev);
int device_is_attached(device_t dev);
int device_is_enabled(device_t dev);
int device_is_quiet(device_t dev);
int device_print_prettyname(device_t dev);
int device_printf(device_t dev, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int device_probe_and_attach(device_t dev);
void device_quiet(device_t dev);
void device_set_desc(device_t dev, const char* desc);
void device_set_desc_copy(device_t dev, const char* desc);
int device_set_devclass(device_t dev, const char *classname);
int device_set_driver(device_t dev, driver_t *driver);
void device_set_flags(device_t dev, u_int32_t flags);
void device_set_softc(device_t dev, void *softc);
int device_set_unit(device_t dev, int unit);
int device_shutdown(device_t dev);
void device_unbusy(device_t dev);
void device_verbose(device_t dev);




int devclass_add_driver(devclass_t dc, kobj_class_t driver);
int devclass_delete_driver(devclass_t dc, kobj_class_t driver);
devclass_t devclass_create(const char *classname);
devclass_t devclass_find(const char *classname);
kobj_class_t devclass_find_driver(devclass_t dc, const char *classname);
const char *devclass_get_name(devclass_t dc);
device_t devclass_get_device(devclass_t dc, int unit);
void *devclass_get_softc(devclass_t dc, int unit);
int devclass_get_devices(devclass_t dc, device_t **listp, int *countp);
int devclass_get_drivers(devclass_t dc, driver_t ***listp, int *countp);
int devclass_get_count(devclass_t dc);
int devclass_get_maxunit(devclass_t dc);
int devclass_find_free_unit(devclass_t dc, int unit);
void devclass_set_parent(devclass_t dc, devclass_t pdc);
devclass_t devclass_get_parent(devclass_t dc);
struct sysctl_ctx_list *devclass_get_sysctl_ctx(devclass_t dc);
struct sysctl_oid *devclass_get_sysctl_tree(devclass_t dc);





int resource_int_value(const char *name, int unit, const char *resname,
      int *result);
int resource_long_value(const char *name, int unit, const char *resname,
       long *result);
int resource_string_value(const char *name, int unit, const char *resname,
         const char **result);
int resource_disabled(const char *name, int unit);
int resource_find_match(int *anchor, const char **name, int *unit,
       const char *resname, const char *value);
int resource_find_dev(int *anchor, const char *name, int *unit,
     const char *resname, const char *value);
int resource_set_int(const char *name, int unit, const char *resname,
    int value);
int resource_set_long(const char *name, int unit, const char *resname,
     long value);
int resource_set_string(const char *name, int unit, const char *resname,
       const char *value);




int bus_data_generation_check(int generation);
void bus_data_generation_update(void);
# 456 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h" 1
# 27 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
typedef  struct kobjop_desc   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_device_probe_desc[NUM_STACKS];    

typedef int device_probe_t(device_t dev);
# 102 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_PROBE(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_probe_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_probe_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_device_identify_desc[NUM_STACKS];    

typedef void device_identify_t(driver_t *driver, device_t parent);
# 139 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline void DEVICE_IDENTIFY(driver_t *driver, device_t parent)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_identify_desc[get_stack_id()]; kobj_method_t **_cep = &driver->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(driver->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((device_identify_t *) _m)(driver, parent);
}


typedef  struct kobjop_desc   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_device_attach_desc[NUM_STACKS];    

typedef int device_attach_t(device_t dev);
# 174 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_ATTACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_attach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_attach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_device_detach_desc[NUM_STACKS];    

typedef int device_detach_t(device_t dev);
# 208 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_DETACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_detach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_detach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_device_shutdown_desc[NUM_STACKS];    

typedef int device_shutdown_t(device_t dev);
# 234 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SHUTDOWN(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_shutdown_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_shutdown_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_device_suspend_desc[NUM_STACKS];    

typedef int device_suspend_t(device_t dev);
# 269 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SUSPEND(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_suspend_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_suspend_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_device_resume_desc[NUM_STACKS];    

typedef int device_resume_t(device_t dev);
# 299 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_RESUME(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_resume_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_resume_t *) _m)(dev);
}
# 457 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h" 1
# 24 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
typedef  struct kobjop_desc   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_bus_print_child_desc[NUM_STACKS];    

typedef int bus_print_child_t(device_t _dev, device_t _child);
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_PRINT_CHILD(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_print_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_print_child_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_bus_probe_nomatch_desc[NUM_STACKS];    

typedef void bus_probe_nomatch_t(device_t _dev, device_t _child);
# 63 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_PROBE_NOMATCH(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_probe_nomatch_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_probe_nomatch_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_bus_read_ivar_desc[NUM_STACKS];    

typedef int bus_read_ivar_t(device_t _dev, device_t _child, int _index,
                            uintptr_t *_result);
# 103 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_READ_IVAR(device_t _dev, device_t _child, int _index,
                                  uintptr_t *_result)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_read_ivar_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_read_ivar_t *) _m)(_dev, _child, _index, _result);
}


typedef  struct kobjop_desc   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_bus_write_ivar_desc[NUM_STACKS];    

typedef int bus_write_ivar_t(device_t _dev, device_t _child, int _indx,
                             uintptr_t _value);
# 134 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_WRITE_IVAR(device_t _dev, device_t _child, int _indx,
                                   uintptr_t _value)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_write_ivar_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_write_ivar_t *) _m)(_dev, _child, _indx, _value);
}


typedef  struct kobjop_desc   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_bus_child_detached_desc[NUM_STACKS];    

typedef void bus_child_detached_t(device_t _dev, device_t _child);
# 156 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_CHILD_DETACHED(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_detached_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_child_detached_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_bus_driver_added_desc[NUM_STACKS];    

typedef void bus_driver_added_t(device_t _dev, driver_t *_driver);
# 179 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DRIVER_ADDED(device_t _dev, driver_t *_driver)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_driver_added_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_driver_added_t *) _m)(_dev, _driver);
}


typedef  struct kobjop_desc   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_bus_add_child_desc[NUM_STACKS];    

typedef device_t bus_add_child_t(device_t _dev, int _order, const char *_name,
                                 int _unit);
# 211 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline device_t BUS_ADD_CHILD(device_t _dev, int _order,
                                       const char *_name, int _unit)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_add_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_add_child_t *) _m)(_dev, _order, _name, _unit);
}


typedef  struct kobjop_desc   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_bus_alloc_resource_desc[NUM_STACKS];    

typedef struct resource * bus_alloc_resource_t(device_t _dev, device_t _child,
                                               int _type, int *_rid,
                                               u_long _start, u_long _end,
                                               u_long _count, u_int _flags);
# 255 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline struct resource * BUS_ALLOC_RESOURCE(device_t _dev,
                                                     device_t _child, int _type,
                                                     int *_rid, u_long _start,
                                                     u_long _end, u_long _count,
                                                     u_int _flags)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_alloc_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_alloc_resource_t *) _m)(_dev, _child, _type, _rid, _start, _end, _count, _flags);
}


typedef  struct kobjop_desc   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_bus_activate_resource_desc[NUM_STACKS];    

typedef int bus_activate_resource_t(device_t _dev, device_t _child, int _type,
                                    int _rid, struct resource *_r);
# 285 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_ACTIVATE_RESOURCE(device_t _dev, device_t _child,
                                          int _type, int _rid,
                                          struct resource *_r)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_activate_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_activate_resource_t *) _m)(_dev, _child, _type, _rid, _r);
}


typedef  struct kobjop_desc   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_bus_deactivate_resource_desc[NUM_STACKS];    

typedef int bus_deactivate_resource_t(device_t _dev, device_t _child, int _type,
                                      int _rid, struct resource *_r);
# 313 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_DEACTIVATE_RESOURCE(device_t _dev, device_t _child,
                                            int _type, int _rid,
                                            struct resource *_r)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_deactivate_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_deactivate_resource_t *) _m)(_dev, _child, _type, _rid, _r);
}


typedef  struct kobjop_desc   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_bus_release_resource_desc[NUM_STACKS];    

typedef int bus_release_resource_t(device_t _dev, device_t _child, int _type,
                                   int _rid, struct resource *_res);
# 341 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_RELEASE_RESOURCE(device_t _dev, device_t _child,
                                         int _type, int _rid,
                                         struct resource *_res)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_release_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_release_resource_t *) _m)(_dev, _child, _type, _rid, _res);
}


typedef  struct kobjop_desc   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_bus_setup_intr_desc[NUM_STACKS];    

typedef int bus_setup_intr_t(device_t _dev, device_t _child,
                             struct resource *_irq, int _flags,
                             driver_intr_t *_intr, void *_arg, void **_cookiep);
# 380 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_SETUP_INTR(device_t _dev, device_t _child,
                                   struct resource *_irq, int _flags,
                                   driver_intr_t *_intr, void *_arg,
                                   void **_cookiep)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_setup_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_setup_intr_t *) _m)(_dev, _child, _irq, _flags, _intr, _arg, _cookiep);
}


typedef  struct kobjop_desc   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_bus_teardown_intr_desc[NUM_STACKS];    

typedef int bus_teardown_intr_t(device_t _dev, device_t _child,
                                struct resource *_irq, void *_cookie);
# 409 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_TEARDOWN_INTR(device_t _dev, device_t _child,
                                      struct resource *_irq, void *_cookie)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_teardown_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_teardown_intr_t *) _m)(_dev, _child, _irq, _cookie);
}


typedef  struct kobjop_desc   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_bus_set_resource_desc[NUM_STACKS];    

typedef int bus_set_resource_t(device_t _dev, device_t _child, int _type,
                               int _rid, u_long _start, u_long _count);
# 440 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_SET_RESOURCE(device_t _dev, device_t _child, int _type,
                                     int _rid, u_long _start, u_long _count)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_set_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_set_resource_t *) _m)(_dev, _child, _type, _rid, _start, _count);
}


typedef  struct kobjop_desc   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_bus_get_resource_desc[NUM_STACKS];    

typedef int bus_get_resource_t(device_t _dev, device_t _child, int _type,
                               int _rid, u_long *_startp, u_long *_countp);
# 469 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_GET_RESOURCE(device_t _dev, device_t _child, int _type,
                                     int _rid, u_long *_startp, u_long *_countp)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_get_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_get_resource_t *) _m)(_dev, _child, _type, _rid, _startp, _countp);
}


typedef  struct kobjop_desc   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_bus_delete_resource_desc[NUM_STACKS];    

typedef void bus_delete_resource_t(device_t _dev, device_t _child, int _type,
                                   int _rid);
# 494 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DELETE_RESOURCE(device_t _dev, device_t _child,
                                         int _type, int _rid)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_delete_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_delete_resource_t *) _m)(_dev, _child, _type, _rid);
}


typedef  struct kobjop_desc   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_bus_get_resource_list_desc[NUM_STACKS];    

typedef struct resource_list * bus_get_resource_list_t(device_t _dev,
                                                       device_t _child);
# 518 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline struct resource_list * BUS_GET_RESOURCE_LIST(device_t _dev,
                                                             device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_get_resource_list_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_get_resource_list_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_bus_child_present_desc[NUM_STACKS];    

typedef int bus_child_present_t(device_t _dev, device_t _child);
# 546 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PRESENT(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_present_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_present_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_bus_child_pnpinfo_str_desc[NUM_STACKS];    

typedef int bus_child_pnpinfo_str_t(device_t _dev, device_t _child, char *_buf,
                                    size_t _buflen);
# 571 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PNPINFO_STR(device_t _dev, device_t _child,
                                          char *_buf, size_t _buflen)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_pnpinfo_str_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_pnpinfo_str_t *) _m)(_dev, _child, _buf, _buflen);
}


typedef  struct kobjop_desc   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_bus_child_location_str_desc[NUM_STACKS];    

typedef int bus_child_location_str_t(device_t _dev, device_t _child, char *_buf,
                                     size_t _buflen);
# 597 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_LOCATION_STR(device_t _dev, device_t _child,
                                           char *_buf, size_t _buflen)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_location_str_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_location_str_t *) _m)(_dev, _child, _buf, _buflen);
}


typedef  struct kobjop_desc   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_bus_config_intr_desc[NUM_STACKS];    

typedef int bus_config_intr_t(device_t _dev, int _irq, enum intr_trigger _trig,
                              enum intr_polarity _pol);
# 620 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CONFIG_INTR(device_t _dev, int _irq,
                                    enum intr_trigger _trig,
                                    enum intr_polarity _pol)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_config_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_config_intr_t *) _m)(_dev, _irq, _trig, _pol);
}
# 458 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2

struct module;

int driver_module_handler(struct module *, int, void *);




struct driver_module_data {
 int (*dmd_chainevh)(struct module *, int, void *);
 void *dmd_chainarg;
 const char *dmd_busname;
 kobj_class_t dmd_driver;
 devclass_t *dmd_devclass;
};
# 41 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
struct intrhand {
 driver_intr_t *ih_handler;
 void *ih_argument;
 int ih_flags;
 const char *ih_name;
 struct ithd *ih_ithread;
 int ih_need;
 struct { struct intrhand *tqe_next; struct intrhand **tqe_prev; } ih_next;
 u_char ih_pri;
};
# 64 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
struct ithd {
 struct mtx it_lock;
 struct thread *it_td;
 struct { struct ithd *le_next; struct ithd **le_prev; } it_list;
 struct { struct intrhand *tqh_first; struct intrhand **tqh_last; } it_handlers;
 struct ithd *it_interrupted;
 void (*it_disable)(uintptr_t);
 void (*it_enable)(uintptr_t);
 void *it_md;
 int it_flags;
 int it_need;
 uintptr_t it_vector;
 char it_name[19 + 1];
};
# 101 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
typedef  struct ithd   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_tty_ithd[NUM_STACKS];    
typedef  struct ithd   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_clk_ithd[NUM_STACKS];    
typedef  void  _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_net_ih[NUM_STACKS];   
typedef  void  _GLOBAL_123_T; extern  _GLOBAL_123_T  * global_softclock_ih[NUM_STACKS];   
typedef  void  _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_vm_ih[NUM_STACKS];   


typedef  u_long  _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_1_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_2_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_3_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_4_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_5_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_6_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_7_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_8_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_9_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_10_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_11_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_12_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_13_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_14_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_15_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_16_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_17_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_18_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_19_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_20_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_21_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_22_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_23_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_24_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_25_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_26_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_27_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_28_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_29_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_30_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_31_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_32_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_33_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_34_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_35_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_36_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_37_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_38_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_39_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_40_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_41_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_42_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_43_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_44_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_45_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_46_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_47_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_48_eintrcnt_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_49_eintrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrcnt_I) *_GLOBAL_eintrcnt_26_A[NUM_STACKS];  
typedef  char  _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_eintrnames_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_eintrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrnames_I) *_GLOBAL_eintrnames_27_A[NUM_STACKS];  
typedef  u_long  _GLOBAL_127_T; extern  _GLOBAL_127_T  _GLOBAL_0_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_1_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_2_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_3_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_4_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_5_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_6_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_7_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_8_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_9_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_10_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_11_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_12_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_13_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_14_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_15_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_16_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_17_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_18_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_19_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_20_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_21_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_22_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_23_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_24_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_25_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_26_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_27_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_28_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_29_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_30_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_31_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_32_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_33_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_34_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_35_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_36_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_37_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_38_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_39_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_40_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_41_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_42_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_43_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_44_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_45_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_46_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_47_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_48_intrcnt_I [ ] ; extern  _GLOBAL_127_T  _GLOBAL_49_intrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrcnt_I) *_GLOBAL_intrcnt_28_A[NUM_STACKS];  
typedef  char  _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_1_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_2_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_3_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_4_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_5_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_6_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_7_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_8_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_9_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_10_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_11_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_12_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_13_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_14_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_15_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_16_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_17_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_18_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_19_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_20_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_21_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_22_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_23_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_24_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_25_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_26_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_27_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_28_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_29_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_30_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_31_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_32_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_33_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_34_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_35_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_36_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_37_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_38_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_39_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_40_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_41_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_42_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_43_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_44_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_45_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_46_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_47_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_48_intrnames_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_49_intrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrnames_I) *_GLOBAL_intrnames_29_A[NUM_STACKS];  




int ithread_create(struct ithd **ithread, uintptr_t vector, int flags,
     void (*disable)(uintptr_t), void (*enable)(uintptr_t),
     const char *fmt, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
int ithread_destroy(struct ithd *ithread);
u_char ithread_priority(enum intr_type flags);
int ithread_add_handler(struct ithd *ithread, const char *name,
     driver_intr_t handler, void *arg, u_char pri, enum intr_type flags,
     void **cookiep);
int ithread_remove_handler(void *cookie);
int ithread_schedule(struct ithd *ithread);
int swi_add(struct ithd **ithdp, const char *name,
     driver_intr_t handler, void *arg, int pri, enum intr_type flags,
     void **cookiep);
void swi_sched(void *cookie, int flags);
# 42 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/random.h" 1
# 34 "freebsd5/freebsd/usr/src/sys/sys/random.h"
int read_random(void *, int);





enum esource {
 RANDOM_START = 0,
 RANDOM_WRITE = 0,
 RANDOM_KEYBOARD,
 RANDOM_MOUSE,
 RANDOM_NET,
 RANDOM_INTERRUPT,
 RANDOM_PURE,
 ENTROPYSOURCE
};
void random_harvest(void *, u_int, u_int, u_int, enum esource);




struct harvest_select {
 int ethernet;
 int point_to_point;
 int interrupt;
 int swi;
};

typedef  struct harvest_select   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_harvest[NUM_STACKS];    
# 43 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/event.h" 1
# 54 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct kevent {
 uintptr_t ident;
 short filter;
 u_short flags;
 u_int fflags;
 intptr_t data;
 void *udata;
};
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};





typedef  struct malloc_type   _GLOBAL_130_T; extern  _GLOBAL_130_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_130_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_30_A[NUM_STACKS];   
# 150 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};







struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct knlist *kn_knlist;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
# 179 "freebsd5/freebsd/usr/src/sys/sys/event.h"
 int kn_sfflags;
 intptr_t kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 struct filterops *kn_fop;
 void *kn_hook;







};

struct thread;
struct proc;
struct knlist;

extern void knote(struct knlist *list, long hint, int islocked);
extern void knlist_add(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove_inevent(struct knlist *knl, struct knote *kn);
extern int knlist_empty(struct knlist *knl);
extern void knlist_init(struct knlist *knl, struct mtx *mtx);
extern void knlist_destroy(struct knlist *knl);
extern void knlist_cleardel(struct knlist *knl, struct thread *td,
 int islocked, int killkn);




extern void knote_fdclose(struct thread *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct thread *p, int waitok);
extern int kqueue_add_filteropts(int filt, struct filterops *filtops);
extern int kqueue_del_filteropts(int filt);
# 44 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ucred.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/ucred.h"
struct ucred {
 u_int cr_ref;

 uid_t cr_uid;
 uid_t cr_ruid;
 uid_t cr_svuid;
 short cr_ngroups;
 gid_t cr_groups[16];
 gid_t cr_rgid;
 gid_t cr_svgid;
 struct uidinfo *cr_uidinfo;
 struct uidinfo *cr_ruidinfo;
 struct prison *cr_prison;

 struct label *cr_label;
 struct mtx *cr_mtxp;
};







struct xucred {
 u_int cr_version;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
 void *_cr_unused1;
};






struct thread;

void change_egid(struct ucred *newcred, gid_t egid);
void change_euid(struct ucred *newcred, struct uidinfo *euip);
void change_rgid(struct ucred *newcred, gid_t rgid);
void change_ruid(struct ucred *newcred, struct uidinfo *ruip);
void change_svgid(struct ucred *newcred, gid_t svgid);
void change_svuid(struct ucred *newcred, uid_t svuid);
void crcopy(struct ucred *dest, struct ucred *src);
struct ucred *crdup(struct ucred *cr);
void cred_update_thread(struct thread *td);
void crfree(struct ucred *cr);
struct ucred *crget(void);
struct ucred *crhold(struct ucred *cr);
int crshared(struct ucred *cr);
void cru2x(struct ucred *cr, struct xucred *xcr);
int groupmember(gid_t gid, struct ucred *cred);
# 45 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
struct mtx;






struct lock {
 struct mtx *lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 const char *lk_wmesg;
 int lk_timo;
 struct thread *lk_lockholder;
 struct lock *lk_newlock;
# 68 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
};
# 201 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
void dumplockinfo(struct lock *lkp);
struct thread;

void lockinit(struct lock *, int prio, const char *wmesg,
   int timo, int flags);
void lockdestroy(struct lock *);
# 218 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
int lockmgr(struct lock *, u_int flags,
   struct mtx *, struct thread *p);

void transferlockers(struct lock *, struct lock *);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *, struct thread *);
int lockcount(struct lock *);
# 41 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2



# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct thread;
# 50 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_class {
 const char *lc_name;
 u_int lc_flags;
};
# 97 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_instance {
 struct lock_object *li_lock;
 const char *li_file;
 int li_line;
 u_int li_flags;
};
# 116 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_list_entry {
 struct lock_list_entry *ll_next;
 struct lock_instance ll_children[3];
 u_int ll_count;
};
# 195 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
typedef  struct lock_class   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_lock_class_sx[NUM_STACKS];    

void witness_init(struct lock_object *);
void witness_destroy(struct lock_object *);
int witness_defineorder(struct lock_object *, struct lock_object *);
void witness_checkorder(struct lock_object *, int, const char *, int);
void witness_lock(struct lock_object *, int, const char *, int);
void witness_upgrade(struct lock_object *, int, const char *, int);
void witness_downgrade(struct lock_object *, int, const char *, int);
void witness_unlock(struct lock_object *, int, const char *, int);
void witness_save(struct lock_object *, const char **, int *);
void witness_restore(struct lock_object *, const char *, int);
int witness_list_locks(struct lock_list_entry **);
int witness_warn(int, struct lock_object *, const char *, ...);
void witness_assert(struct lock_object *, int, const char *, int);
void witness_display_spinlock(struct lock_object *, struct thread *);
int witness_line(struct lock_object *);
const char *witness_file(struct lock_object *);
# 45 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/override/sys/pcpu.h" 1
# 45 "freebsd5/override/sys/pcpu.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
struct vmmeter {



 u_int v_swtch;
 u_int v_trap;
 u_int v_syscall;
 u_int v_intr;
 u_int v_soft;



 u_int v_vm_faults;
 u_int v_cow_faults;
 u_int v_cow_optim;
 u_int v_zfod;
 u_int v_ozfod;
 u_int v_swapin;
 u_int v_swapout;
 u_int v_swappgsin;
 u_int v_swappgsout;
 u_int v_vnodein;
 u_int v_vnodeout;
 u_int v_vnodepgsin;
 u_int v_vnodepgsout;
 u_int v_intrans;
 u_int v_reactivated;
 u_int v_pdwakeups;
 u_int v_pdpages;

 u_int v_dfree;
 u_int v_pfree;
 u_int v_tfree;



 u_int v_page_size;
 u_int v_page_count;
 u_int v_free_reserved;
 u_int v_free_target;
 u_int v_free_min;
 u_int v_free_count;
 u_int v_wire_count;
 u_int v_active_count;
 u_int v_inactive_target;
 u_int v_inactive_count;
 u_int v_cache_count;
 u_int v_cache_min;
 u_int v_cache_max;
 u_int v_pageout_free_min;
 u_int v_interrupt_free_min;
 u_int v_free_severe;



 u_int v_forks;
 u_int v_vforks;
 u_int v_rforks;
 u_int v_kthreads;
 u_int v_forkpages;
 u_int v_vforkpages;
 u_int v_rforkpages;
 u_int v_kthreadpages;
};


typedef  struct vmmeter   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_cnt[NUM_STACKS];    





static __inline
int
vm_page_count_reserved(void)
{
    return (global_cnt[get_stack_id()].v_free_reserved > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 125 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_severe(void)
{
    return (global_cnt[get_stack_id()].v_free_severe > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 142 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_min(void)
{
    return (global_cnt[get_stack_id()].v_free_min > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_page_count_target(void)
{
    return (global_cnt[get_stack_id()].v_free_target > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_paging_target(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_target + global_cnt[get_stack_id()].v_cache_min) -
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}





static __inline
int
vm_paging_needed(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_reserved + global_cnt[get_stack_id()].v_cache_min) >
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}




struct vmtotal {
 int16_t t_rq;
 int16_t t_dw;
 int16_t t_pw;
 int16_t t_sl;
 int16_t t_sw;
 int32_t t_vm;
 int32_t t_avm;
 int32_t t_rm;
 int32_t t_arm;
 int32_t t_vmshr;
 int32_t t_avmshr;
 int32_t t_rmshr;
 int32_t t_armshr;
 int32_t t_free;
};
# 46 "freebsd5/override/sys/pcpu.h" 2
# 1 "freebsd5/override/machine/pcpu.h" 1
# 1 "freebsd5/freebsd/usr/include/machine/pcpu.h" 1
# 34 "freebsd5/freebsd/usr/include/machine/pcpu.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h" 1
# 61 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16 ;
 unsigned sd_lobase:24 __attribute__((__packed__)) ;
 unsigned sd_type:5 ;
 unsigned sd_dpl:2 ;
 unsigned sd_p:1 ;
 unsigned sd_hilimit:4 ;
 unsigned sd_xx:2 ;
 unsigned sd_def32:1 ;
 unsigned sd_gran:1 ;
 unsigned sd_hibase:8 ;
} ;




struct gate_descriptor {
 unsigned gd_looffset:16 ;
 unsigned gd_selector:16 ;
 unsigned gd_stkcpy:5 ;
 unsigned gd_xx:3 ;
 unsigned gd_type:5 ;
 unsigned gd_dpl:2 ;
 unsigned gd_p:1 ;
 unsigned gd_hioffset:16 ;
} ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
};
# 138 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct soft_segment_descriptor {
 unsigned ssd_base ;
 unsigned ssd_limit ;
 unsigned ssd_type:5 ;
 unsigned ssd_dpl:2 ;
 unsigned ssd_p:1 ;
 unsigned ssd_xx:4 ;
 unsigned ssd_xx1:2 ;
 unsigned ssd_def32:1 ;
 unsigned ssd_gran:1 ;
};




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32 __attribute__((__packed__)) ;
};
# 236 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_136_T; extern  _GLOBAL_136_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_31_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_137_T; extern  _GLOBAL_137_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_32_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_138_T; extern  _GLOBAL_138_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_139_T; extern  _GLOBAL_139_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_139_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_33_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_140_T  global_r_idt[NUM_STACKS];     

void lgdt(struct region_descriptor *rdp);
void sdtossd(struct segment_descriptor *sdp,
     struct soft_segment_descriptor *ssdp);
void ssdtosd(struct soft_segment_descriptor *ssdp,
     struct segment_descriptor *sdp);
# 35 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h"
struct i386tss {
 int tss_link;
 int tss_esp0;
 int tss_ss0;
 int tss_esp1;
 int tss_ss1;
 int tss_esp2;
 int tss_ss2;
 int tss_cr3;
 int tss_eip;
 int tss_eflags;
 int tss_eax;
 int tss_ecx;
 int tss_edx;
 int tss_ebx;
 int tss_esp;
 int tss_ebp;
 int tss_esi;
 int tss_edi;
 int tss_es;
 int tss_cs;
 int tss_ss;
 int tss_ds;
 int tss_fs;
 int tss_gs;
 int tss_ldt;
 int tss_ioopt;

};
# 36 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 154 "freebsd5/freebsd/usr/include/machine/pcpu.h"
static __inline struct thread *
__curthread(void)
{
 struct thread *td;

 __asm volatile("movl %%fs:0,%0" : "=r" (td));
 return (td);
}
# 2 "freebsd5/override/machine/pcpu.h" 2
# 47 "freebsd5/override/sys/pcpu.h" 2

struct pcb;
struct thread;







struct pcpu {
 struct thread *pc_curthread;
 struct thread *pc_idlethread;
 struct thread *pc_fpcurthread;
 struct thread *pc_deadthread;
 struct pcb *pc_curpcb;
 struct bintime pc_switchtime;
 int pc_switchticks;
 u_int pc_cpuid;
 u_int pc_cpumask;
 u_int pc_other_cpus;
 struct { struct pcpu *sle_next; } pc_allcpu;
 struct lock_list_entry *pc_spinlocks;




 struct pcpu *pc_prvspace; struct pmap *pc_curpmap; struct i386tss pc_common_tss; struct segment_descriptor pc_common_tssd; struct segment_descriptor *pc_tss_gdt; int pc_currentldt; u_int pc_acpi_id; u_int pc_apic_id;
 struct vmmeter pc_cnt;
};

struct cpuhead { struct pcpu *slh_first; };

typedef  struct cpuhead   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_142_T; extern  _GLOBAL_142_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_clock_lock[NUM_STACKS];    
# 48 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
# 99 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
void mtx_init(struct mtx *m, const char *name, const char *type, int opts);
void mtx_destroy(struct mtx *m);
void mtx_sysinit(void *arg);
void mutex_init(void);
void _mtx_lock_sleep(struct mtx *m, struct thread *td, int opts,
     const char *file, int line);
void _mtx_unlock_sleep(struct mtx *m, int opts, const char *file, int line);




void _mtx_unlock_spin(struct mtx *m, int opts, const char *file, int line);
int _mtx_trylock(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_unlock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
void _mtx_unlock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
# 271 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_pool;

struct mtx_pool *mtx_pool_create(const char *mtx_name, int pool_size, int opts);
void mtx_pool_destroy(struct mtx_pool **poolp);
struct mtx *mtx_pool_find(struct mtx_pool *pool, void *ptr);
struct mtx *mtx_pool_alloc(struct mtx_pool *pool);
# 292 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx_pool   _GLOBAL_144_T; extern  _GLOBAL_144_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_145_T; extern  _GLOBAL_145_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 47 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h"
struct selinfo {
 struct { struct selinfo *tqe_next; struct selinfo **tqe_prev; } si_thrlist;
 struct thread *si_thread;
 struct knlist si_note;
 short si_flags;
};






void clear_selinfo_list(struct thread *td);
void selrecord(struct thread *selector, struct selinfo *sip);
void selwakeup(struct selinfo *sip);
void selwakeuppri(struct selinfo *sip, int pri);
# 48 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE,
 UIO_NOCOPY
};




struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 int uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct thread *uio_td;
};
# 81 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
struct vm_object;
struct vm_page;

struct uio *cloneuio(struct uio *uiop);
int copyinfrom(const void * restrict src, void * restrict dst,
     size_t len, int seg);
int copyiniov(struct iovec *iovp, u_int iovcnt, struct iovec **iov,
     int error);
int copyinstrfrom(const void * restrict src, void * restrict dst,
     size_t len, size_t * restrict copied, int seg);
int copyinuio(struct iovec *iovp, u_int iovcnt, struct uio **uiop);
void uio_yield(void);
int uiomove(void *cp, int n, struct uio *uio);
int uiomove_frombuf(void *buf, int buflen, struct uio *uio);
int uiomove_fromphys(struct vm_page *ma[], vm_offset_t offset, int n,
     struct uio *uio);
int uiomoveco(void *cp, int n, struct uio *uio, struct vm_object *obj,
     int disposable);
# 49 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/ktr.h" 1
# 114 "freebsd5/freebsd/usr/src/sys/sys/ktr.h"
struct ktr_entry {
 u_int64_t ktr_timestamp;
 int ktr_cpu;
 int ktr_line;
 const char *ktr_file;
 const char *ktr_desc;
 u_long ktr_parms[6];
};

typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_153_T; extern volatile  _GLOBAL_153_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_34_A[NUM_STACKS];   
# 51 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };





struct buflists { struct buf *tqh_first; struct buf **tqh_last; };

typedef int vop_t(void *);
struct namecache;

struct vpollinfo {
 struct mtx vpi_lock;
 struct selinfo vpi_selinfo;
 short vpi_events;
 short vpi_revents;
};
# 107 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnode {
 struct mtx v_interlock;
 u_long v_iflag;
 int v_usecount;
 long v_numoutput;
 struct thread *v_vxthread;
 int v_holdcnt;
 struct buflists v_cleanblkhd;
 struct buf *v_cleanblkroot;
 int v_cleanbufcnt;
 struct buflists v_dirtyblkhd;
 struct buf *v_dirtyblkroot;
 int v_dirtybufcnt;
 u_long v_vflag;
 int v_writecount;
 struct vm_object *v_object;
 daddr_t v_lastw;
 daddr_t v_cstart;
 daddr_t v_lasta;
 int v_clen;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct {
   struct cdev *vu_cdev;
   struct { struct vnode *sle_next; } vu_specnext;
  } vu_spec;
  struct fifoinfo *vu_fifoinfo;
 } v_un;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_nmntvnodes;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 enum vtype v_type;
 const char *v_tag;
 void *v_data;
 struct lock v_lock;
 struct lock *v_vnlock;
 vop_t **v_op;
 struct mount *v_mount;
 struct { struct namecache *lh_first; } v_cache_src;
 struct { struct namecache *tqh_first; struct namecache **tqh_last; } v_cache_dst;
 u_long v_id;
 struct vnode *v_dd;
 u_long v_ddid;
 struct vpollinfo *v_pollinfo;
 struct label *v_label;




 dev_t v_cachedfs;
 ino_t v_cachedid;
 int v_bsize;
};
# 170 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct xvnode {
 size_t xv_size;
 void *xv_vnode;
 u_long xv_flag;
 int xv_usecount;
 int xv_writecount;
 int xv_holdcnt;
 u_long xv_id;
 void *xv_mount;
 long xv_numoutput;
 enum vtype xv_type;
 union {
  void *xvu_socket;
  void *xvu_fifo;
  dev_t xvu_rdev;
  struct {
   dev_t xvu_dev;
   ino_t xvu_ino;
  } xv_uns;
 } xv_un;
};
# 248 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 dev_t va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 struct timespec va_birthtime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 324 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct malloc_type   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_1_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_2_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_3_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_4_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_5_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_6_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_7_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_8_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_9_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_10_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_11_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_12_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_13_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_14_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_15_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_16_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_17_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_18_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_19_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_20_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_21_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_22_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_23_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_24_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_25_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_26_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_27_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_28_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_29_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_30_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_31_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_32_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_33_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_34_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_35_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_36_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_37_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_38_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_39_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_40_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_41_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_42_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_43_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_44_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_45_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_46_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_47_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_48_M_VNODE_I [ 1 ] ; extern  _GLOBAL_155_T  _GLOBAL_49_M_VNODE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_VNODE_I) *_GLOBAL_M_VNODE_35_A[NUM_STACKS];   






typedef  enum vtype   _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_156_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_36_A[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_37_A[NUM_STACKS];  
# 369 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct vnode   _GLOBAL_158_T; extern  _GLOBAL_158_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_async_io_version[NUM_STACKS];   
typedef  int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_desiredvnodes[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_161_T; extern  _GLOBAL_161_T  * global_namei_zone[NUM_STACKS];    
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_prtactive[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_va_null[NUM_STACKS];    







typedef  void   ( *_GLOBAL_165_T  )  ( int  deltat  ) ; extern  _GLOBAL_165_T global_lease_updatetime[NUM_STACKS];    
# 433 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_thread_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_166_T; extern  _GLOBAL_166_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_166_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_38_A[NUM_STACKS];   
# 470 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 vop_t *opve_impl;
};
struct vnodeopv_desc {

 vop_t ***opv_desc_vector_p;
 struct vnodeopv_entry_desc *opv_desc_ops;
};





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 564 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vmiodirenable[NUM_STACKS];   

static __inline int
vn_canvmio(struct vnode *vp)
{
      if (vp && (vp->v_type == VREG || (global_vmiodirenable[get_stack_id()] && vp->v_type == VDIR)))
  return(1);
 return(0);
}




# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/vnode_if.h" 1







typedef  struct vnodeop_desc   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vop_default_desc[NUM_STACKS];    
struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_vop_islocked_desc[NUM_STACKS];    
static __inline int VOP_ISLOCKED(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_islocked_args a;
 int rc;
 a.a_desc = (& global_vop_islocked_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 rc = (( *(((vp)->v_op)[((((& global_vop_islocked_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vop_lookup_desc[NUM_STACKS];    
static __inline int VOP_LOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_lookup_args a;
 int rc;
 a.a_desc = (& global_vop_lookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;



 rc = (( *(((dvp)->v_op)[((((& global_vop_lookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_cachedlookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_vop_cachedlookup_desc[NUM_STACKS];    
static __inline int VOP_CACHEDLOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_cachedlookup_args a;
 int rc;
 a.a_desc = (& global_vop_cachedlookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_cachedlookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
}
 return (rc);
}
struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_vop_create_desc[NUM_STACKS];    
static __inline int VOP_CREATE(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_create_args a;
 int rc;
 a.a_desc = (& global_vop_create_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_create_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_vop_whiteout_desc[NUM_STACKS];    
static __inline int VOP_WHITEOUT(
 struct vnode *dvp,
 struct componentname *cnp,
 int flags)
{
 struct vop_whiteout_args a;
 int rc;
 a.a_desc = (& global_vop_whiteout_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_cnp = cnp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_whiteout_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_vop_mknod_desc[NUM_STACKS];    
static __inline int VOP_MKNOD(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mknod_args a;
 int rc;
 a.a_desc = (& global_vop_mknod_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mknod_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
 int a_fdidx;
};
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_open_desc[NUM_STACKS];    
static __inline int VOP_OPEN(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td,
 int fdidx)
{
 struct vop_open_args a;
 int rc;
 a.a_desc = (& global_vop_open_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 a.a_fdidx = fdidx;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_open_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_close_desc[NUM_STACKS];    
static __inline int VOP_CLOSE(
 struct vnode *vp,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_close_args a;
 int rc;
 a.a_desc = (& global_vop_close_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_close_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_access_desc[NUM_STACKS];    
static __inline int VOP_ACCESS(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_access_args a;
 int rc;
 a.a_desc = (& global_vop_access_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_access_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_getattr_desc[NUM_STACKS];    
static __inline int VOP_GETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getattr_args a;
 int rc;
 a.a_desc = (& global_vop_getattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_setattr_desc[NUM_STACKS];    
static __inline int VOP_SETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setattr_args a;
 int rc;
 a.a_desc = (& global_vop_setattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_read_desc[NUM_STACKS];    
static __inline int VOP_READ(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_read_args a;
 int rc;
 a.a_desc = (& global_vop_read_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_read_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_write_desc[NUM_STACKS];    
static __inline int VOP_WRITE(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_write_args a;
 int rc;
 a.a_desc = (& global_vop_write_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_write_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_lease_desc[NUM_STACKS];    
static __inline int VOP_LEASE(
 struct vnode *vp,
 struct thread *td,
 struct ucred *cred,
 int flag)
{
 struct vop_lease_args a;
 int rc;
 a.a_desc = (& global_vop_lease_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 a.a_cred = cred;
 a.a_flag = flag;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_lease_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 caddr_t a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_ioctl_desc[NUM_STACKS];    
static __inline int VOP_IOCTL(
 struct vnode *vp,
 u_long command,
 caddr_t data,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_ioctl_args a;
 int rc;
 a.a_desc = (& global_vop_ioctl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_command = command;
 a.a_data = data;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_ioctl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_poll_desc[NUM_STACKS];    
static __inline int VOP_POLL(
 struct vnode *vp,
 int events,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_poll_args a;
 int rc;
 a.a_desc = (& global_vop_poll_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_events = events;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_poll_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_kqfilter_desc[NUM_STACKS];    
static __inline int VOP_KQFILTER(
 struct vnode *vp,
 struct knote *kn)
{
 struct vop_kqfilter_args a;
 int rc;
 a.a_desc = (& global_vop_kqfilter_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_kn = kn;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_kqfilter_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_vop_revoke_desc[NUM_STACKS];    
static __inline int VOP_REVOKE(
 struct vnode *vp,
 int flags)
{
 struct vop_revoke_args a;
 int rc;
 a.a_desc = (& global_vop_revoke_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_revoke_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_vop_fsync_desc[NUM_STACKS];    
static __inline int VOP_FSYNC(
 struct vnode *vp,
 struct ucred *cred,
 int waitfor,
 struct thread *td)
{
 struct vop_fsync_args a;
 int rc;
 a.a_desc = (& global_vop_fsync_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_waitfor = waitfor;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_fsync_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vop_remove_desc[NUM_STACKS];    
static __inline int VOP_REMOVE(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_remove_args a;
 int rc;
 a.a_desc = (& global_vop_remove_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_remove_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_tdvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_vop_link_desc[NUM_STACKS];    
static __inline int VOP_LINK(
 struct vnode *tdvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_link_args a;
 int rc;
 a.a_desc = (& global_vop_link_desc[get_stack_id()]);
 a.a_tdvp = tdvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((tdvp)->v_op)[((((& global_vop_link_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_vop_rename_desc[NUM_STACKS];    
static __inline int VOP_RENAME(
 struct vnode *fdvp,
 struct vnode *fvp,
 struct componentname *fcnp,
 struct vnode *tdvp,
 struct vnode *tvp,
 struct componentname *tcnp)
{
 struct vop_rename_args a;
 int rc;
 a.a_desc = (& global_vop_rename_desc[get_stack_id()]);
 a.a_fdvp = fdvp;
 a.a_fvp = fvp;
 a.a_fcnp = fcnp;
 a.a_tdvp = tdvp;
 a.a_tvp = tvp;
 a.a_tcnp = tcnp;



 rc = (( *(((fdvp)->v_op)[((((& global_vop_rename_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_vop_mkdir_desc[NUM_STACKS];    
static __inline int VOP_MKDIR(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mkdir_args a;
 int rc;
 a.a_desc = (& global_vop_mkdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mkdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_rmdir_desc[NUM_STACKS];    
static __inline int VOP_RMDIR(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_rmdir_args a;
 int rc;
 a.a_desc = (& global_vop_rmdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_rmdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_vop_symlink_desc[NUM_STACKS];    
static __inline int VOP_SYMLINK(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap,
 char *target)
{
 struct vop_symlink_args a;
 int rc;
 a.a_desc = (& global_vop_symlink_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 a.a_target = target;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_symlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_vop_readdir_desc[NUM_STACKS];    
static __inline int VOP_READDIR(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred,
 int *eofflag,
 int *ncookies,
 u_long **cookies)
{
 struct vop_readdir_args a;
 int rc;
 a.a_desc = (& global_vop_readdir_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_eofflag = eofflag;
 a.a_ncookies = ncookies;
 a.a_cookies = cookies;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_vop_readlink_desc[NUM_STACKS];    
static __inline int VOP_READLINK(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred)
{
 struct vop_readlink_args a;
 int rc;
 a.a_desc = (& global_vop_readlink_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_vop_inactive_desc[NUM_STACKS];    
static __inline int VOP_INACTIVE(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_inactive_args a;
 int rc;
 a.a_desc = (& global_vop_inactive_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_inactive_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_vop_reclaim_desc[NUM_STACKS];    
static __inline int VOP_RECLAIM(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_reclaim_args a;
 int rc;
 a.a_desc = (& global_vop_reclaim_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reclaim_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_vop_lock_desc[NUM_STACKS];    
static __inline int VOP_LOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_lock_args a;
 int rc;
 a.a_desc = (& global_vop_lock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_lock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_vop_unlock_desc[NUM_STACKS];    
static __inline int VOP_UNLOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_unlock_args a;
 int rc;
 a.a_desc = (& global_vop_unlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_unlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
 int *a_runb;
};
typedef  struct vnodeop_desc   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_vop_bmap_desc[NUM_STACKS];    
static __inline int VOP_BMAP(
 struct vnode *vp,
 daddr_t bn,
 struct vnode **vpp,
 daddr_t *bnp,
 int *runp,
 int *runb)
{
 struct vop_bmap_args a;
 int rc;
 a.a_desc = (& global_vop_bmap_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bn = bn;
 a.a_vpp = vpp;
 a.a_bnp = bnp;
 a.a_runp = runp;
 a.a_runb = runb;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_bmap_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vop_strategy_desc[NUM_STACKS];    
static __inline int VOP_STRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_strategy_args a;
 int rc;
 a.a_desc = (& global_vop_strategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_strategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_specstrategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_vop_specstrategy_desc[NUM_STACKS];    
static __inline int VOP_SPECSTRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_specstrategy_args a;
 int rc;
 a.a_desc = (& global_vop_specstrategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_specstrategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getwritemount_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct mount **a_mpp;
};
typedef  struct vnodeop_desc   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_vop_getwritemount_desc[NUM_STACKS];    
static __inline int VOP_GETWRITEMOUNT(
 struct vnode *vp,
 struct mount **mpp)
{
 struct vop_getwritemount_args a;
 int rc;
 a.a_desc = (& global_vop_getwritemount_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mpp = mpp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getwritemount_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_vop_print_desc[NUM_STACKS];    
static __inline int VOP_PRINT(
 struct vnode *vp)
{
 struct vop_print_args a;
 int rc;
 a.a_desc = (& global_vop_print_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_print_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_vop_pathconf_desc[NUM_STACKS];    
static __inline int VOP_PATHCONF(
 struct vnode *vp,
 int name,
 register_t *retval)
{
 struct vop_pathconf_args a;
 int rc;
 a.a_desc = (& global_vop_pathconf_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_name = name;
 a.a_retval = retval;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_pathconf_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 caddr_t a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_vop_advlock_desc[NUM_STACKS];    
static __inline int VOP_ADVLOCK(
 struct vnode *vp,
 caddr_t id,
 int op,
 struct flock *fl,
 int flags)
{
 struct vop_advlock_args a;
 int rc;
 a.a_desc = (& global_vop_advlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_id = id;
 a.a_op = op;
 a.a_fl = fl;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_advlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_vop_reallocblks_desc[NUM_STACKS];    
static __inline int VOP_REALLOCBLKS(
 struct vnode *vp,
 struct cluster_save *buflist)
{
 struct vop_reallocblks_args a;
 int rc;
 a.a_desc = (& global_vop_reallocblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_buflist = buflist;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reallocblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_reqpage;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_vop_getpages_desc[NUM_STACKS];    
static __inline int VOP_GETPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int reqpage,
 vm_ooffset_t offset)
{
 struct vop_getpages_args a;
 int rc;
 a.a_desc = (& global_vop_getpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_reqpage = reqpage;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_putpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_sync;
 int *a_rtvals;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_209_T; extern  _GLOBAL_209_T  global_vop_putpages_desc[NUM_STACKS];    
static __inline int VOP_PUTPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int sync,
 int *rtvals,
 vm_ooffset_t offset)
{
 struct vop_putpages_args a;
 int rc;
 a.a_desc = (& global_vop_putpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_sync = sync;
 a.a_rtvals = rtvals;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_putpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_freeblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_addr;
 daddr_t a_length;
};
typedef  struct vnodeop_desc   _GLOBAL_210_T; extern  _GLOBAL_210_T  global_vop_freeblks_desc[NUM_STACKS];    
static __inline int VOP_FREEBLKS(
 struct vnode *vp,
 daddr_t addr,
 daddr_t length)
{
 struct vop_freeblks_args a;
 int rc;
 a.a_desc = (& global_vop_freeblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_addr = addr;
 a.a_length = length;
 rc = (( *(((vp)->v_op)[((((& global_vop_freeblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_211_T; extern  _GLOBAL_211_T  global_vop_getacl_desc[NUM_STACKS];    
static __inline int VOP_GETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getacl_args a;
 int rc;
 a.a_desc = (& global_vop_getacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_vop_setacl_desc[NUM_STACKS];    
static __inline int VOP_SETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setacl_args a;
 int rc;
 a.a_desc = (& global_vop_setacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_aclcheck_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_vop_aclcheck_desc[NUM_STACKS];    
static __inline int VOP_ACLCHECK(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_aclcheck_args a;
 int rc;
 a.a_desc = (& global_vop_aclcheck_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_aclcheck_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_closeextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_commit;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_vop_closeextattr_desc[NUM_STACKS];    
static __inline int VOP_CLOSEEXTATTR(
 struct vnode *vp,
 int commit,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_closeextattr_args a;
 int rc;
 a.a_desc = (& global_vop_closeextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_commit = commit;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_closeextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_vop_getextattr_desc[NUM_STACKS];    
static __inline int VOP_GETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getextattr_args a;
 int rc;
 a.a_desc = (& global_vop_getextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_listextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_216_T; extern  _GLOBAL_216_T  global_vop_listextattr_desc[NUM_STACKS];    
static __inline int VOP_LISTEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_listextattr_args a;
 int rc;
 a.a_desc = (& global_vop_listextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_listextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_openextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_217_T; extern  _GLOBAL_217_T  global_vop_openextattr_desc[NUM_STACKS];    
static __inline int VOP_OPENEXTATTR(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_openextattr_args a;
 int rc;
 a.a_desc = (& global_vop_openextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_openextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_deleteextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_218_T; extern  _GLOBAL_218_T  global_vop_deleteextattr_desc[NUM_STACKS];    
static __inline int VOP_DELETEEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_deleteextattr_args a;
 int rc;
 a.a_desc = (& global_vop_deleteextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_deleteextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_vop_setextattr_desc[NUM_STACKS];    
static __inline int VOP_SETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setextattr_args a;
 int rc;
 a.a_desc = (& global_vop_setextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_createvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_vop_createvobject_desc[NUM_STACKS];    
static __inline int VOP_CREATEVOBJECT(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_createvobject_args a;
 int rc;
 a.a_desc = (& global_vop_createvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_createvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_destroyvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_vop_destroyvobject_desc[NUM_STACKS];    
static __inline int VOP_DESTROYVOBJECT(
 struct vnode *vp)
{
 struct vop_destroyvobject_args a;
 int rc;
 a.a_desc = (& global_vop_destroyvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_destroyvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vm_object **a_objpp;
};
typedef  struct vnodeop_desc   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_vop_getvobject_desc[NUM_STACKS];    
static __inline int VOP_GETVOBJECT(
 struct vnode *vp,
 struct vm_object **objpp)
{
 struct vop_getvobject_args a;
 int rc;
 a.a_desc = (& global_vop_getvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_objpp = objpp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setlabel_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct label *a_label;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_vop_setlabel_desc[NUM_STACKS];    
static __inline int VOP_SETLABEL(
 struct vnode *vp,
 struct label *label,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setlabel_args a;
 int rc;
 a.a_desc = (& global_vop_setlabel_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_label = label;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setlabel_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
# 578 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2




struct componentname;
struct file;
struct mount;
struct nameidata;
struct ostat;
struct thread;
struct proc;
struct stat;
struct nstat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

typedef  int   ( *_GLOBAL_225_T  )  ( struct vop_lease_args   *  ) ; extern  _GLOBAL_225_T global_lease_check_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_227_T  )  ( struct vnode   *  ) ; extern  _GLOBAL_227_T global_softdep_fsync_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_229_T  )  ( struct mount   *  ) ; extern  _GLOBAL_229_T global_softdep_process_worklist_hook[NUM_STACKS];     

struct vnode *addaliasu(struct vnode *vp, dev_t nvp_rdev);
int bdevvp(struct cdev *dev, struct vnode **vpp);

void cache_enter(struct vnode *dvp, struct vnode *vp,
     struct componentname *cnp);
int cache_lookup(struct vnode *dvp, struct vnode **vpp,
     struct componentname *cnp);
void cache_purge(struct vnode *vp);
void cache_purgevfs(struct mount *mp);
int cache_leaf_test(struct vnode *vp);
int change_dir(struct vnode *vp, struct thread *td);
int change_root(struct vnode *vp, struct thread *td);
void cvtstat(struct stat *st, struct ostat *ost);
void cvtnstat(struct stat *sb, struct nstat *nsb);
int getnewvnode(const char *tag, struct mount *mp, vop_t **vops,
     struct vnode **vpp);
int lease_check(struct vop_lease_args *ap);
int spec_vnoperate(struct vop_generic_args *);
int speedup_syncer(void);


int vn_fullpath(struct thread *td, struct vnode *vn,
     char **retbuf, char **freebuf);
int vaccess(enum vtype type, mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred, int *privused);
int vaccess_acl_posix1e(enum vtype type, uid_t file_uid,
     gid_t file_gid, struct acl *acl, mode_t acc_mode,
     struct ucred *cred, int *privused);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
void vdrop(struct vnode *);
void vdropl(struct vnode *);
int vfinddev(struct cdev *dev, struct vnode **vpp);
void vfs_add_vnodeops(const void *);
void vfs_rm_vnodeops(const void *);
int vflush(struct mount *mp, int rootrefs, int flags, struct thread *td);
int vget(struct vnode *vp, int lockflag, struct thread *td);
void vgone(struct vnode *vp);
void vgonel(struct vnode *vp, struct thread *td);
void vhold(struct vnode *);
void vholdl(struct vnode *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct thread *td, int slpflag, int slptimeo);
int vtruncbuf(struct vnode *vp, struct ucred *cred, struct thread *td,
     off_t length, int blksize);
void vprint(char *label, struct vnode *vp);
int vrecycle(struct vnode *vp, void *dummyarg, struct thread *td);
int vn_close(struct vnode *vp,
     int flags, struct ucred *file_cred, struct thread *td);
void vn_finished_write(struct mount *mp);
int vn_isdisk(struct vnode *vp, int *errp);
int vn_lock(struct vnode *vp, int flags, struct thread *td);





int vn_open(struct nameidata *ndp, int *flagp, int cmode, int fdidx);
int vn_open_cred(struct nameidata *ndp, int *flagp, int cmode,
     struct ucred *cred, int fdidx);
void vn_pollevent(struct vnode *vp, int events);
void vn_pollgone(struct vnode *vp);
int vn_pollrecord(struct vnode *vp, struct thread *p, int events);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, int *aresid,
     struct thread *td);
int vn_rdwr_inchunks(enum uio_rw rw, struct vnode *vp, caddr_t base,
     size_t len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, size_t *aresid,
     struct thread *td);
int vn_stat(struct vnode *vp, struct stat *sb, struct ucred *active_cred,
     struct ucred *file_cred, struct thread *td);
int vn_start_write(struct vnode *vp, struct mount **mpp, int flags);
struct cdev *vn_todev(struct vnode *vp);
int vn_write_suspend_wait(struct vnode *vp, struct mount *mp,
     int flags);
int vn_writechk(struct vnode *vp);
int vn_extattr_get(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int *buflen, char *buf, struct thread *td);
int vn_extattr_set(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int buflen, char *buf, struct thread *td);
int vn_extattr_rm(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, struct thread *td);
int vfs_cache_lookup(struct vop_lookup_args *ap);
int vfs_object_create(struct vnode *vp, struct thread *td,
     struct ucred *cred);
void vfs_timestamp(struct timespec *);
void vfs_write_resume(struct mount *mp);
int vfs_write_suspend(struct mount *mp);
int vop_stdbmap(struct vop_bmap_args *);
int vop_stdfsync(struct vop_fsync_args *);
int vop_stdgetwritemount(struct vop_getwritemount_args *);
int vop_stdgetpages(struct vop_getpages_args *);
int vop_stdinactive(struct vop_inactive_args *);
int vop_stdislocked(struct vop_islocked_args *);
int vop_stdlock(struct vop_lock_args *);
int vop_stdputpages(struct vop_putpages_args *);
int vop_stdunlock(struct vop_unlock_args *);
int vop_nopoll(struct vop_poll_args *);
int vop_stdpathconf(struct vop_pathconf_args *);
int vop_stdpoll(struct vop_poll_args *);
int vop_revoke(struct vop_revoke_args *);
int vop_eopnotsupp(struct vop_generic_args *ap);
int vop_ebadf(struct vop_generic_args *ap);
int vop_einval(struct vop_generic_args *ap);
int vop_enotty(struct vop_generic_args *ap);
int vop_defaultop(struct vop_generic_args *ap);
int vop_null(struct vop_generic_args *ap);
int vop_panic(struct vop_generic_args *ap);
int vop_stdcreatevobject(struct vop_createvobject_args *ap);
int vop_stddestroyvobject(struct vop_destroyvobject_args *ap);
int vop_stdgetvobject(struct vop_getvobject_args *ap);

void vfree(struct vnode *);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
void vref(struct vnode *vp);
int vrefcnt(struct vnode *vp);
void vbusy(struct vnode *vp);
void v_addpollinfo(struct vnode *vp);

typedef  vop_t  _GLOBAL_230_T; extern  _GLOBAL_230_T  * *  global_default_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_231_T; extern  _GLOBAL_231_T  * *  global_spec_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_232_T; extern  _GLOBAL_232_T  * *  global_dead_vnodeop_p[NUM_STACKS];   
# 46 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 50 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h"
struct rtprio {
 u_short type;
 u_short prio;
};


struct ksegrp;
int rtp_to_pri(struct rtprio *, struct ksegrp *);
void pri_to_rtp(struct ksegrp *, struct rtprio *);
# 51 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h" 1
# 44 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h"
typedef u_int32_t rqb_word_t;
# 33 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 2

struct kse;
# 46 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
struct rqhead { struct kse *tqh_first; struct kse **tqh_last; };





struct rqbits {
 rqb_word_t rqb_bits[(2)];
};





struct runq {
 struct rqbits rq_status;
 struct rqhead rq_queues[(64)];
};

void runq_add(struct runq *, struct kse *, int flags);
int runq_check(struct runq *);
struct kse *runq_choose(struct runq *);
void runq_init(struct runq *);
void runq_remove(struct runq *, struct kse *);
# 52 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sigio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/sigio.h"
struct sigio {
 union {
  struct proc *siu_proc;
  struct pgrp *siu_pgrp;
 } sio_u;
 struct { struct sigio *sle_next; } sio_pgsigio;
 struct sigio **sio_myref;

 struct ucred *sio_ucred;
 pid_t sio_pgid;
};



struct sigiolst { struct sigio *slh_first; };

pid_t fgetown(struct sigio **sigiop);
int fsetown(pid_t pgid, struct sigio **sigiop);
void funsetown(struct sigio **sigiop);
void funsetownlst(struct sigiolst *sigiolst);
# 53 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
typedef int sig_atomic_t;
# 54 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/trap.h" 1
# 55 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 2
# 96 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
struct sigcontext {
 struct __sigset sc_mask;
 int sc_onstack;
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_isp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;
 int sc_trapno;
 int sc_err;
 int sc_eip;
 int sc_cs;
 int sc_efl;
 int sc_esp;
 int sc_ss;
 int sc_len;




 int sc_fpformat;
 int sc_ownedfp;
 int sc_spare1[1];
 int sc_fpstate[128] __attribute__((__aligned__(16))) ;
 int sc_spare2[8];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 2
# 140 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef void __sighandler_t(int);
# 150 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
union sigval {

 int sigval_int;
 void *sigval_ptr;
};



struct sigevent {
 int sigev_notify;
 union {
  int __sigev_signo;
  int __sigev_notify_kqueue;
 } __sigev_u;
 union sigval sigev_value;



};
# 185 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef struct __siginfo {
 int si_signo;
 int si_errno;






 int si_code;
 __pid_t si_pid;
 __uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 int __spare__[7];
} siginfo_t;



struct __siginfo;




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, struct __siginfo *, void *);
 } __sigaction_u;
 int sa_flags;
 sigset_t sa_mask;
};
# 257 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef __sighandler_t *sig_t;
typedef void __siginfohandler_t(int, struct __siginfo *, void *);







typedef struct sigaltstack {



 char *ss_sp;
 __size_t ss_size;
 int ss_flags;
} stack_t;
# 285 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigvec {
 __sighandler_t *sv_handler;
 int sv_mask;
 int sv_flags;
};
# 312 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigstack {

 char *ss_sp;
 int ss_onstack;
};
# 344 "freebsd5/freebsd/usr/src/sys/sys/signal.h"

__sighandler_t *signal(int, __sighandler_t *);

# 54 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2





# 1 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h" 1
# 34 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h"
typedef struct __mcontext {





 int mc_onstack;
 int mc_gs;
 int mc_fs;
 int mc_es;
 int mc_ds;
 int mc_edi;
 int mc_esi;
 int mc_ebp;
 int mc_isp;
 int mc_ebx;
 int mc_edx;
 int mc_ecx;
 int mc_eax;
 int mc_trapno;
 int mc_err;
 int mc_eip;
 int mc_cs;
 int mc_eflags;
 int mc_esp;
 int mc_ss;

 int mc_len;



 int mc_fpformat;



 int mc_ownedfp;
 int mc_spare1[1];



 int mc_fpstate[128] __attribute__((__aligned__(16))) ;
 int mc_spare2[8];
} mcontext_t;
# 36 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 2

typedef struct __ucontext {
# 46 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
 sigset_t uc_sigmask;
 mcontext_t uc_mcontext;

 struct __ucontext *uc_link;
 stack_t uc_stack;
 int uc_flags;

 int __spare__[4];
} ucontext_t;
# 84 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
struct thread;
# 94 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
int get_mcontext(struct thread *, mcontext_t *, int);
int set_mcontext(struct thread *, const mcontext_t *);
# 60 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h" 1
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h"
struct proc_ldt {
        caddr_t ldt_base;
        int ldt_len;
        int ldt_refcnt;
        u_long ldt_active;
        struct segment_descriptor ldt_sd;
};




struct mdthread {
 register_t md_savecrit;
};

struct mdproc {
 struct proc_ldt *md_ldt;
};



void set_user_ldt(struct mdproc *);
struct proc_ldt *user_ldt_alloc(struct mdproc *, int);
void user_ldt_free(struct thread *);
# 62 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 pid_t s_sid;

 char s_login[((((17)+((sizeof(long))-1))/(sizeof(long)))*(sizeof(long)))];
 struct mtx s_mtx;
};
# 90 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 struct sigiolst pg_sigiolst;
 pid_t pg_id;
 int pg_jobc;
 struct mtx pg_mtx;
};




struct pargs {
 u_int ar_ref;
 u_int ar_length;
 u_char ar_args[1];
};
# 151 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ithd;
struct kg_sched;
struct nlminfo;
struct p_sched;
struct sleepqueue;
struct td_sched;
struct trapframe;
struct turnstile;
# 187 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread;
# 198 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp;
# 208 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct proc;
# 238 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread {
 struct proc *td_proc;
 struct ksegrp *td_ksegrp;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_plist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_kglist;


 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_slpq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_lockq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_runq;

 struct { struct selinfo *tqh_first; struct selinfo **tqh_last; } td_selq;
 struct sleepqueue *td_sleepqueue;
 struct turnstile *td_turnstile;
 lwpid_t td_tid;



 int td_flags;
 int td_inhibitors;
 int td_pflags;
 int td_dupfd;
 void *td_wchan;
 const char *td_wmesg;
 u_char td_lastcpu;
 u_char td_oncpu;
 short td_locks;
 struct turnstile *td_blocked;
 struct ithd *td_ithd;
 const char *td_lockname;
 struct { struct turnstile *lh_first; } td_contested;
 struct lock_list_entry *td_sleeplocks;
 int td_intr_nesting_level;
 int td_pinned;
 struct kse_thr_mailbox *td_mailbox;
 struct ucred *td_ucred;
 struct thread *td_standin;
 u_int td_prticks;
 struct kse_upcall *td_upcall;
 u_int64_t td_sticks;
 u_int td_uuticks;
 u_int td_usticks;
 int td_intrval;
 sigset_t td_oldsigmask;
 sigset_t td_sigmask;
 sigset_t td_siglist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_umtx;
 volatile u_int td_generation;
 stack_t td_sigstk;
 int td_kflags;
 int td_xsig;
 u_long td_profil_addr;
 u_int td_profil_ticks;





 u_char td_base_pri;
 u_char td_priority;






 struct pcb *td_pcb;
 enum {
  TDS_INACTIVE = 0x0,
  TDS_INHIBITED,
  TDS_CAN_RUN,
  TDS_RUNQ,
  TDS_RUNNING
 } td_state;
 register_t td_retval[2];
 struct callout td_slpcallout;
 struct trapframe *td_frame;
 struct vm_object *td_kstack_obj;
 vm_offset_t td_kstack;
 int td_kstack_pages;
 struct vm_object *td_altkstack_obj;
 vm_offset_t td_altkstack;
 int td_altkstack_pages;
 u_int td_critnest;
 struct mdthread td_md;
 struct td_sched *td_sched;
};
# 446 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct kse_upcall {
 struct { struct kse_upcall *tqe_next; struct kse_upcall **tqe_prev; } ku_link;
 struct ksegrp *ku_ksegrp;
 struct thread *ku_owner;
 int ku_flags;
 struct kse_mailbox *ku_mailbox;
 stack_t ku_stack;
 void *ku_func;
 unsigned int ku_mflags;
};
# 465 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp {
 struct proc *kg_proc;
 struct { struct ksegrp *tqe_next; struct ksegrp **tqe_prev; } kg_ksegrp;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_runq;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_slpq;
 struct { struct kse_upcall *tqh_first; struct kse_upcall **tqh_last; } kg_upcalls;

 u_int kg_estcpu;
 u_int kg_slptime;
 int kg_runnable;
 int kg_numupcalls;
 int kg_upsleeps;
 struct kse_thr_mailbox *kg_completed;
 int kg_nextupcall;
 int kg_upquantum;



 u_char kg_pri_class;
 u_char kg_user_pri;

 int kg_numthreads;
 struct kg_sched *kg_sched;
};





struct proc {
 struct { struct proc *le_next; struct proc **le_prev; } p_list;
 struct { struct ksegrp *tqh_first; struct ksegrp **tqh_last; } p_ksegrps;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_suspended;
 struct ucred *p_ucred;
 struct filedesc *p_fd;
 struct filedesc_to_leader *p_fdtol;

 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vm_object *p_unused1;
 struct sigacts *p_sigacts;




 int p_flag;
 int p_sflag;
 enum {
  PRS_NEW = 0,
  PRS_NORMAL,
  PRS_ZOMBIE
 } p_state;
 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;
 struct mtx p_mtx;



 pid_t p_oppid;
 struct vmspace *p_vmspace;
 u_int p_swtime;
 struct itimerval p_realtimer;
 struct bintime p_runtime;
 u_int64_t p_uu;
 u_int64_t p_su;
 u_int64_t p_iu;
 u_int64_t p_uticks;
 u_int64_t p_sticks;
 u_int64_t p_iticks;
 int p_profthreads;
 int p_maxthrwaits;
 int p_traceflag;
 struct vnode *p_tracevp;
 struct ucred *p_tracecred;
 struct vnode *p_textvp;
 sigset_t p_siglist;
 char p_lock;
 struct sigiolst p_sigiolst;
 int p_sigparent;
 int p_sig;
 u_long p_code;
 u_int p_stops;
 u_int p_stype;
 char p_step;
 u_char p_pfsflags;
 struct nlminfo *p_nlminfo;
 void *p_aioinfo;
 struct thread *p_singlethread;
 int p_suspcount;
 struct thread *p_xthread;
 int p_boundary_count;





 u_int p_magic;
 char p_comm[19 + 1];
 struct pgrp *p_pgrp;
 struct sysentvec *p_sysent;
 struct pargs *p_args;
 rlim_t p_cpulimit;
 signed char p_nice;



 u_short p_xstat;
 struct knlist p_klist;
 int p_numthreads;
 int p_numksegrps;
 struct mdproc p_md;
 struct callout p_itcallout;
 struct user *p_unused2;
 u_short p_acflag;
 struct rusage *p_ru;
 struct proc *p_peers;
 struct proc *p_leader;
 void *p_emuldata;
 struct label *p_label;
 struct p_sched *p_sched;
};
# 676 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct malloc_type   _GLOBAL_233_T; extern  _GLOBAL_233_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_233_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_39_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_234_T; extern  _GLOBAL_234_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_234_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_40_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_235_T; extern  _GLOBAL_235_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_235_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_41_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_236_T; extern  _GLOBAL_236_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_236_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_42_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_237_T; extern  _GLOBAL_237_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_237_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_43_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_238_T; extern  _GLOBAL_238_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_239_T; extern  _GLOBAL_239_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_240_T; extern  _GLOBAL_240_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_241_T; extern  _GLOBAL_241_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_242_T; extern  _GLOBAL_242_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_242_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_44_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_243_T; extern  _GLOBAL_243_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_243_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_45_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_244_T; extern  _GLOBAL_244_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_245_T; extern  _GLOBAL_245_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_246_T; extern  _GLOBAL_246_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_247_T; extern  _GLOBAL_247_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_248_T; extern  _GLOBAL_248_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_249_T; extern  _GLOBAL_249_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_249_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_46_A[NUM_STACKS];   
typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_251_T; extern  _GLOBAL_251_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_251_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_252_T; extern  _GLOBAL_252_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_253_T; extern  _GLOBAL_253_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_255_T; extern  _GLOBAL_255_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_256_T; extern  _GLOBAL_256_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_257_T; extern  _GLOBAL_257_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_257_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_258_T; extern  _GLOBAL_258_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_259_T; extern  _GLOBAL_259_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_260_T; extern  _GLOBAL_260_T  global_lastpid[NUM_STACKS];   

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
struct proc *zpfind(pid_t);

void adjustrunqueue(struct thread *, int newpri);
void ast(struct trapframe *framep);
struct thread *choosethread(void);
int cr_cansignal(struct ucred *cred, struct proc *proc, int signum);
int enterpgrp(struct proc *p, pid_t pgid, struct pgrp *pgrp, struct session *sess);
int enterthispgrp(struct proc *p, struct pgrp *pgrp);
void faultin(struct proc *p);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int fork1(struct thread *, int, int, struct proc **);
void fork_exit(void (*)(void *, struct trapframe *), void *,
     struct trapframe *);
void fork_return(struct thread *, struct trapframe *);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
int maybe_preempt(struct thread *td);
void mi_switch(int flags, struct thread *newtd);
int p_candebug(struct thread *td, struct proc *p);
int p_cansee(struct thread *td, struct proc *p);
int p_cansched(struct thread *td, struct proc *p);
int p_cansignal(struct thread *td, struct proc *p, int signum);
struct pargs *pargs_alloc(int len);
void pargs_drop(struct pargs *pa);
void pargs_free(struct pargs *pa);
void pargs_hold(struct pargs *pa);
void procinit(void);
void threadinit(void);
void proc_linkup(struct proc *p, struct ksegrp *kg, struct thread *td);
void proc_reparent(struct proc *child, struct proc *newparent);
struct pstats *pstats_alloc(void);
void pstats_fork(struct pstats *src, struct pstats *dst);
void pstats_free(struct pstats *ps);
int securelevel_ge(struct ucred *cr, int level);
int securelevel_gt(struct ucred *cr, int level);
void setrunnable(struct thread *);
void setrunqueue(struct thread *, int flags);
void setsugid(struct proc *p);
int sigonstack(size_t sp);
void sleepinit(void);
void stopevent(struct proc *, u_int, u_int);
void cpu_idle(void);
typedef  void   ( *_GLOBAL_262_T  )  ( void  ) ; extern  _GLOBAL_262_T global_cpu_idle_hook[NUM_STACKS];   
void cpu_switch(struct thread *old, struct thread *new);
void cpu_throw(struct thread *old, struct thread *new) __attribute__((__noreturn__)) ;
void unsleep(struct thread *);
void userret(struct thread *, struct trapframe *, u_int);

void cpu_exit(struct thread *);
void exit1(struct thread *, int) __attribute__((__noreturn__)) ;
void cpu_fork(struct thread *, struct proc *, struct thread *, int);
void cpu_set_fork_handler(struct thread *, void (*)(void *), void *);


struct ksegrp *ksegrp_alloc(void);
void ksegrp_free(struct ksegrp *kg);
void ksegrp_stash(struct ksegrp *kg);
void kse_GC(void);
void kseinit(void);
void cpu_set_upcall(struct thread *td, struct thread *td0);
void cpu_set_upcall_kse(struct thread *td, struct kse_upcall *ku);
void cpu_thread_clean(struct thread *);
void cpu_thread_exit(struct thread *);
void cpu_thread_setup(struct thread *td);
void cpu_thread_siginfo(int sig, u_long code, siginfo_t *si);
void cpu_thread_swapin(struct thread *);
void cpu_thread_swapout(struct thread *);
void ksegrp_link(struct ksegrp *kg, struct proc *p);
void ksegrp_unlink(struct ksegrp *kg);
void thread_signal_add(struct thread *td, int sig);
struct thread *thread_alloc(void);
void thread_exit(void) __attribute__((__noreturn__)) ;
int thread_export_context(struct thread *td, int willexit);
void thread_free(struct thread *td);
void thread_link(struct thread *td, struct ksegrp *kg);
void thread_reap(void);
struct thread *thread_schedule_upcall(struct thread *td, struct kse_upcall *ku);
int thread_single(int how);
void thread_single_end(void);
int thread_sleep_check(struct thread *td);
void thread_stash(struct thread *td);
int thread_suspend_check(int how);
void thread_suspend_one(struct thread *td);
void thread_unlink(struct thread *td);
void thread_unsuspend(struct proc *p);
void thread_unsuspend_one(struct thread *td);
int thread_upcall_check(struct thread *td);
void thread_unthread(struct thread *td);
int thread_userret(struct thread *td, struct trapframe *frame);
void thread_user_enter(struct thread *td);
void thread_wait(struct proc *p);
int thread_statclock(int user);
struct kse_upcall *upcall_alloc(void);
void upcall_free(struct kse_upcall *ku);
void upcall_link(struct kse_upcall *ku, struct ksegrp *kg);
void upcall_unlink(struct kse_upcall *ku);
void upcall_remove(struct thread *td);
void upcall_stash(struct kse_upcall *ke);
void thread_sanity_check(struct thread *td, char *);
void thread_stopped(struct proc *p);
struct thread *thread_switchout(struct thread *td, int flags,
      struct thread *newtd);
void thread_continued(struct proc *p);
void thr_exit1(void);
# 47 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 1
# 178 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 274 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h" 2
# 52 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 275 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 2
# 283 "freebsd5/freebsd/usr/src/sys/sys/termios.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ttydefaults.h" 1
# 284 "freebsd5/freebsd/usr/src/sys/sys/termios.h" 2
# 50 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2
# 59 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct clist {
 int c_cc;
 int c_cbcount;
 int c_cbmax;
 int c_cbreserved;
 char *c_cf;
 char *c_cl;
};

struct tty;

typedef void t_oproc_t(struct tty *);
typedef void t_stop_t(struct tty *, int);
typedef int t_param_t(struct tty *, struct termios *);
typedef int t_modem_t(struct tty *, int, int);
typedef void t_break_t(struct tty *, int);
typedef int t_ioctl_t(struct tty *, u_long cmd, void * data,
        int fflag, struct thread *td);
# 85 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct tty {
 struct clist t_rawq;
 long t_rawcc;
 struct clist t_canq;
 long t_cancc;
 struct clist t_outq;
 long t_outcc;
 int t_line;
 struct cdev *t_dev;
 int t_state;
 int t_flags;
 int t_timeout;
 struct pgrp *t_pgrp;
 struct session *t_session;
 struct sigio *t_sigio;
 struct selinfo t_rsel;
 struct selinfo t_wsel;
 struct termios t_termios;
 struct winsize t_winsize;
 void *t_sc;
 int t_column;
 int t_rocount, t_rocol;
 int t_ififosize;
 int t_ihiwat;
 int t_ilowat;
 speed_t t_ispeedwat;
 int t_ohiwat;
 int t_olowat;
 speed_t t_ospeedwat;
 int t_gen;
 struct { struct tty *tqe_next; struct tty **tqe_prev; } t_list;

 struct mtx t_mtx;
 int t_refcnt;
 int t_hotchar;
 int t_dtr_wait;


 t_oproc_t *t_oproc;
 t_stop_t *t_stop;
 t_param_t *t_param;
 t_modem_t *t_modem;
 t_break_t *t_break;
 t_ioctl_t *t_ioctl;
};
# 147 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct xtty {
 size_t xt_size;
 long xt_rawcc;
 long xt_cancc;
 long xt_outcc;
 int xt_line;
 dev_t xt_dev;
 int xt_state;
 int xt_flags;
 int xt_timeout;
 pid_t xt_pgid;
 pid_t xt_sid;
 struct termios xt_termios;
 struct winsize xt_winsize;
 int xt_column;
 int xt_rocount, xt_rocol;
 int xt_ififosize;
 int xt_ihiwat;
 int xt_ilowat;
 speed_t xt_ispeedwat;
 int xt_ohiwat;
 int xt_olowat;
 speed_t xt_ospeedwat;
};
# 240 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
struct speedtab {
 int sp_speed;
 int sp_code;
};
# 276 "freebsd5/freebsd/usr/src/sys/sys/tty.h"
typedef  struct malloc_type   _GLOBAL_263_T; extern  _GLOBAL_263_T  _GLOBAL_0_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_1_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_2_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_3_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_4_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_5_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_6_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_7_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_8_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_9_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_10_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_11_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_12_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_13_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_14_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_15_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_16_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_17_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_18_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_19_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_20_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_21_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_22_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_23_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_24_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_25_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_26_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_27_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_28_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_29_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_30_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_31_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_32_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_33_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_34_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_35_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_36_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_37_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_38_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_39_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_40_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_41_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_42_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_43_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_44_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_45_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_46_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_47_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_48_M_TTYS_I [ 1 ] ; extern  _GLOBAL_263_T  _GLOBAL_49_M_TTYS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TTYS_I) *_GLOBAL_M_TTYS_47_A[NUM_STACKS] = { &_GLOBAL_0_M_TTYS_I, &_GLOBAL_1_M_TTYS_I, &_GLOBAL_2_M_TTYS_I, &_GLOBAL_3_M_TTYS_I, &_GLOBAL_4_M_TTYS_I, &_GLOBAL_5_M_TTYS_I, &_GLOBAL_6_M_TTYS_I, &_GLOBAL_7_M_TTYS_I, &_GLOBAL_8_M_TTYS_I, &_GLOBAL_9_M_TTYS_I, &_GLOBAL_10_M_TTYS_I, &_GLOBAL_11_M_TTYS_I, &_GLOBAL_12_M_TTYS_I, &_GLOBAL_13_M_TTYS_I, &_GLOBAL_14_M_TTYS_I, &_GLOBAL_15_M_TTYS_I, &_GLOBAL_16_M_TTYS_I, &_GLOBAL_17_M_TTYS_I, &_GLOBAL_18_M_TTYS_I, &_GLOBAL_19_M_TTYS_I, &_GLOBAL_20_M_TTYS_I, &_GLOBAL_21_M_TTYS_I, &_GLOBAL_22_M_TTYS_I, &_GLOBAL_23_M_TTYS_I, &_GLOBAL_24_M_TTYS_I, &_GLOBAL_25_M_TTYS_I, &_GLOBAL_26_M_TTYS_I, &_GLOBAL_27_M_TTYS_I, &_GLOBAL_28_M_TTYS_I, &_GLOBAL_29_M_TTYS_I, &_GLOBAL_30_M_TTYS_I, &_GLOBAL_31_M_TTYS_I, &_GLOBAL_32_M_TTYS_I, &_GLOBAL_33_M_TTYS_I, &_GLOBAL_34_M_TTYS_I, &_GLOBAL_35_M_TTYS_I, &_GLOBAL_36_M_TTYS_I, &_GLOBAL_37_M_TTYS_I, &_GLOBAL_38_M_TTYS_I, &_GLOBAL_39_M_TTYS_I, &_GLOBAL_40_M_TTYS_I, &_GLOBAL_41_M_TTYS_I, &_GLOBAL_42_M_TTYS_I, &_GLOBAL_43_M_TTYS_I, &_GLOBAL_44_M_TTYS_I, &_GLOBAL_45_M_TTYS_I, &_GLOBAL_46_M_TTYS_I, &_GLOBAL_47_M_TTYS_I, &_GLOBAL_48_M_TTYS_I, &_GLOBAL_49_M_TTYS_I, };   

typedef  struct msgbuf   _GLOBAL_264_T; extern  _GLOBAL_264_T  _GLOBAL_0_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_1_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_2_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_3_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_4_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_5_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_6_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_7_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_8_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_9_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_10_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_11_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_12_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_13_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_14_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_15_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_16_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_17_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_18_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_19_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_20_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_21_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_22_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_23_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_24_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_25_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_26_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_27_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_28_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_29_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_30_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_31_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_32_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_33_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_34_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_35_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_36_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_37_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_38_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_39_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_40_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_41_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_42_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_43_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_44_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_45_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_46_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_47_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_48_consmsgbuf_I; extern  _GLOBAL_264_T  _GLOBAL_49_consmsgbuf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_consmsgbuf_I) *_GLOBAL_consmsgbuf_48_A[NUM_STACKS];   
typedef  struct tty   _GLOBAL_265_T; extern  _GLOBAL_265_T  * global_constty[NUM_STACKS];    
typedef  long  _GLOBAL_266_T; extern  _GLOBAL_266_T  global_tk_cancc[NUM_STACKS];   
typedef  long  _GLOBAL_267_T; extern  _GLOBAL_267_T  global_tk_nin[NUM_STACKS];   
typedef  long  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_tk_nout[NUM_STACKS];   
typedef  long  _GLOBAL_269_T; extern  _GLOBAL_269_T  global_tk_rawcc[NUM_STACKS];   

int b_to_q(char *cp, int cc, struct clist *q);
void catq(struct clist *from, struct clist *to);
void clist_alloc_cblocks(struct clist *q, int ccmax, int ccres);
void clist_free_cblocks(struct clist *q);
void constty_set(struct tty *tp);
void constty_clear(void);
int getc(struct clist *q);
void ndflush(struct clist *q, int cc);
char *nextc(struct clist *q, char *cp, int *c);
void nottystop(struct tty *tp, int rw);
int putc(int c, struct clist *q);
int q_to_b(struct clist *q, char *cp, int cc);
void termioschars(struct termios *t);
int tputchar(int c, struct tty *tp);
int ttcompat(struct tty *tp, u_long com, caddr_t data, int flag);
int ttioctl(struct tty *tp, u_long com, void *data, int flag);
int ttread(struct tty *tp, struct uio *uio, int flag);
void ttrstrt(void *tp);
int ttsetcompat(struct tty *tp, u_long *com, caddr_t data,
     struct termios *term);
void ttsetwater(struct tty *tp);
int ttspeedtab(int speed, struct speedtab *table);
int ttstart(struct tty *tp);
void ttwakeup(struct tty *tp);
int ttwrite(struct tty *tp, struct uio *uio, int flag);
void ttwwakeup(struct tty *tp);
void ttyblock(struct tty *tp);
void ttychars(struct tty *tp);
int ttycheckoutq(struct tty *tp, int wait);
int tty_close(struct tty *tp);
int ttydtrwaitsleep(struct tty *tp);
void ttydtrwaitstart(struct tty *tp);
void ttyflush(struct tty *tp, int rw);
void ttygone(struct tty *tp);
void ttyinfo(struct tty *tp);
int ttyinput(int c, struct tty *tp);
int ttylclose(struct tty *tp, int flag);
void ttyldoptim(struct tty *tp);
struct tty *ttymalloc(struct tty *tp);
int ttymodem(struct tty *tp, int flag);
int tty_open(struct cdev *device, struct tty *tp);
int ttyref(struct tty *tp);
int ttyrel(struct tty *tp);
int ttysleep(struct tty *tp, void *chan, int pri, char *wmesg, int timo);
int ttywait(struct tty *tp);
int unputc(struct clist *q);




# 1 "freebsd5/freebsd/usr/include/sys/linedisc.h" 1
# 45 "freebsd5/freebsd/usr/include/sys/linedisc.h"
struct tty;

typedef int l_open_t(struct cdev *dev, struct tty *tp);
typedef int l_close_t(struct tty *tp, int flag);
typedef int l_read_t(struct tty *tp, struct uio *uio, int flag);
typedef int l_write_t(struct tty *tp, struct uio *uio, int flag);
typedef int l_ioctl_t(struct tty *tp, u_long cmd, caddr_t data,
        int flag, struct thread *td);
typedef int l_rint_t(int c, struct tty *tp);
typedef int l_start_t(struct tty *tp);
typedef int l_modem_t(struct tty *tp, int flag);




struct linesw {
 l_open_t *l_open;
 l_close_t *l_close;
 l_read_t *l_read;
 l_write_t *l_write;
 l_ioctl_t *l_ioctl;
 l_rint_t *l_rint;
 l_start_t *l_start;
 l_modem_t *l_modem;
};

typedef  struct linesw   _GLOBAL_270_T; extern  _GLOBAL_270_T  * _GLOBAL_0_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_1_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_2_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_3_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_4_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_5_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_6_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_7_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_8_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_9_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_10_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_11_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_12_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_13_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_14_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_15_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_16_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_17_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_18_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_19_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_20_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_21_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_22_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_23_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_24_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_25_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_26_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_27_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_28_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_29_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_30_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_31_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_32_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_33_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_34_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_35_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_36_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_37_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_38_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_39_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_40_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_41_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_42_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_43_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_44_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_45_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_46_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_47_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_48_linesw_I [ ]  ; extern  _GLOBAL_270_T  * _GLOBAL_49_linesw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_49_A[NUM_STACKS] = { &_GLOBAL_0_linesw_I, &_GLOBAL_1_linesw_I, &_GLOBAL_2_linesw_I, &_GLOBAL_3_linesw_I, &_GLOBAL_4_linesw_I, &_GLOBAL_5_linesw_I, &_GLOBAL_6_linesw_I, &_GLOBAL_7_linesw_I, &_GLOBAL_8_linesw_I, &_GLOBAL_9_linesw_I, &_GLOBAL_10_linesw_I, &_GLOBAL_11_linesw_I, &_GLOBAL_12_linesw_I, &_GLOBAL_13_linesw_I, &_GLOBAL_14_linesw_I, &_GLOBAL_15_linesw_I, &_GLOBAL_16_linesw_I, &_GLOBAL_17_linesw_I, &_GLOBAL_18_linesw_I, &_GLOBAL_19_linesw_I, &_GLOBAL_20_linesw_I, &_GLOBAL_21_linesw_I, &_GLOBAL_22_linesw_I, &_GLOBAL_23_linesw_I, &_GLOBAL_24_linesw_I, &_GLOBAL_25_linesw_I, &_GLOBAL_26_linesw_I, &_GLOBAL_27_linesw_I, &_GLOBAL_28_linesw_I, &_GLOBAL_29_linesw_I, &_GLOBAL_30_linesw_I, &_GLOBAL_31_linesw_I, &_GLOBAL_32_linesw_I, &_GLOBAL_33_linesw_I, &_GLOBAL_34_linesw_I, &_GLOBAL_35_linesw_I, &_GLOBAL_36_linesw_I, &_GLOBAL_37_linesw_I, &_GLOBAL_38_linesw_I, &_GLOBAL_39_linesw_I, &_GLOBAL_40_linesw_I, &_GLOBAL_41_linesw_I, &_GLOBAL_42_linesw_I, &_GLOBAL_43_linesw_I, &_GLOBAL_44_linesw_I, &_GLOBAL_45_linesw_I, &_GLOBAL_46_linesw_I, &_GLOBAL_47_linesw_I, &_GLOBAL_48_linesw_I, &_GLOBAL_49_linesw_I, };   
typedef  int  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_nlinesw[NUM_STACKS];   

int ldisc_register(int , struct linesw *);
void ldisc_deregister(int);


typedef  l_read_t _GLOBAL_272_T;  _GLOBAL_272_T  l_noread;  
typedef  l_write_t _GLOBAL_273_T;  _GLOBAL_273_T  l_nowrite;  
typedef  l_ioctl_t _GLOBAL_274_T;  _GLOBAL_274_T  l_nullioctl;  

static __inline int
ttyld_open(struct tty *tp, struct cdev *dev)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_open)(dev, tp));
}

static __inline int
ttyld_close(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_close)(tp, flag));
}

static __inline int
ttyld_read(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_read)(tp, uio, flag));
}

static __inline int
ttyld_write(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_write)(tp, uio, flag));
}

static __inline int
ttyld_ioctl(struct tty *tp, u_long cmd, caddr_t data, int flag,
    struct thread *td)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_ioctl)(tp, cmd, data, flag, td));
}

static __inline int
ttyld_rint(struct tty *tp, int c)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_rint)(c, tp));
}

static __inline int
ttyld_start(struct tty *tp)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_start)(tp));
}

static __inline int
ttyld_modem(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_49_A[get_stack_id()])[tp->t_line]->l_modem)(tp, flag));
}
# 336 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2
# 48 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
struct eventhandler_entry {
 struct { struct eventhandler_entry *tqe_next; struct eventhandler_entry **tqe_prev; } ee_link;
 int ee_priority;

 void *ee_arg;
};

struct eventhandler_list {
 char *el_name;
 int el_flags;

 u_int el_runcount;
 struct mtx el_lock;
 struct { struct eventhandler_list *tqe_next; struct eventhandler_list **tqe_prev; } el_link;
 struct { struct eventhandler_entry *tqh_first; struct eventhandler_entry **tqh_last; } el_entries;
};

typedef struct eventhandler_entry *eventhandler_tag;
# 127 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
eventhandler_tag eventhandler_register(struct eventhandler_list *list,
     char *name, void *func, void *arg, int priority);
void eventhandler_deregister(struct eventhandler_list *list,
     eventhandler_tag tag);
struct eventhandler_list *eventhandler_find_list(char *name);
void eventhandler_prune_list(struct eventhandler_list *list);
# 144 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
typedef void (*shutdown_fn)(void *, int);





struct eventhandler_entry_shutdown_pre_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_post_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_final { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;


typedef void (*vm_lowmem_handler_t)(void *, int);

struct eventhandler_entry_vm_lowmem { struct eventhandler_entry ee; vm_lowmem_handler_t eh_func; }; struct __hack;






struct proc;

typedef void (*exitlist_fn)(void *, struct proc *);
typedef void (*forklist_fn)(void *, struct proc *, struct proc *, int);
typedef void (*execlist_fn)(void *, struct proc *);

struct eventhandler_entry_process_exit { struct eventhandler_entry ee; exitlist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_fork { struct eventhandler_entry ee; forklist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_exec { struct eventhandler_entry ee; execlist_fn eh_func; }; struct __hack;
# 45 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 2

struct tty;
struct disk;
struct vnode;
struct buf;
struct snaphead { struct inode *tqh_first; struct inode **tqh_last; };

struct cdev {
 u_int si_flags;
# 64 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
 struct timespec si_atime;
 struct timespec si_ctime;
 struct timespec si_mtime;
 dev_t si_udev;
 int si_refcount;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_list;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_clone;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_hash;
 struct { struct vnode *slh_first; } si_hlist;
 struct { struct cdev *lh_first; } si_children;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_siblings;
 struct cdev *si_parent;
 u_int si_inode;
 char *si_name;
 void *si_drv1, *si_drv2;
 struct cdevsw *si_devsw;
 int si_iosize_max;
 u_int si_stripesize;
 u_int si_stripeoffset;
 uid_t si_uid;
 gid_t si_gid;
 mode_t si_mode;
 u_long si_usecount;
 u_long si_threadcount;
 union {
  struct {
   struct tty *__sit_tty;
  } __si_tty;
  struct {
   struct mount *__sid_mountpoint;
   int __sid_bsize_phys;
   int __sid_bsize_best;
   struct snaphead __sid_snapshots;
   daddr_t __sid_snaplistsize;
   daddr_t *__sid_snapblklist;
   int (*__sid_copyonwrite)(struct vnode *, struct buf *);
  } __si_disk;
 } __si_u;
 char __si_namebuf[63 + 1];
};
# 118 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct bio;
struct buf;
struct thread;
struct uio;
struct knote;
struct clonedevs;
# 141 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef struct thread d_thread_t;

typedef int d_open_t(struct cdev *dev, int oflags, int devtype, struct thread *td);
typedef int d_fdopen_t(struct cdev *dev, int oflags, struct thread *td, int fdidx);
typedef int d_close_t(struct cdev *dev, int fflag, int devtype, struct thread *td);
typedef void d_strategy_t(struct bio *bp);
typedef int d_ioctl_t(struct cdev *dev, u_long cmd, caddr_t data,
        int fflag, struct thread *td);

typedef int d_read_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_write_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_poll_t(struct cdev *dev, int events, struct thread *td);
typedef int d_kqfilter_t(struct cdev *dev, struct knote *kn);
typedef int d_mmap_t(struct cdev *dev, vm_offset_t offset, vm_paddr_t *paddr,
          int nprot);

typedef int d_spare1_t(struct cdev *dev);
typedef int d_spare2_t(struct cdev *dev);

typedef int dumper_t(
 void *priv,
 void *virtual,
 vm_offset_t physical,
 off_t offset,
 size_t length);
# 207 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct cdevsw {
 int d_version;
 int d_maj;
 u_int d_flags;
 const char *d_name;
 d_open_t *d_open;
 d_fdopen_t *d_fdopen;
 d_close_t *d_close;
 d_read_t *d_read;
 d_write_t *d_write;
 d_ioctl_t *d_ioctl;
 d_poll_t *d_poll;
 d_mmap_t *d_mmap;
 d_strategy_t *d_strategy;
 dumper_t *d_dump;
 d_kqfilter_t *d_kqfilter;
 d_spare1_t *d_spare1;
 d_spare2_t *d_spare2;


 struct { struct cdevsw *le_next; struct cdevsw **le_prev; } d_list;
 struct { struct cdev *lh_first; } d_devs;
 int d_refcount;
};
# 244 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct module;

struct devsw_module_data {
 int (*chainevh)(struct module *, int, void *);
 void *chainarg;

};
# 261 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
void clone_setup(struct clonedevs **cdp);
void clone_cleanup(struct clonedevs **);


int clone_create(struct clonedevs **, struct cdevsw *, int *unit, struct cdev **dev, u_int extra);

int count_dev(struct cdev *_dev);
void destroy_dev(struct cdev *_dev);
struct cdevsw *devsw(struct cdev *_dev);
void cdevsw_ref(struct cdevsw *);
void cdevsw_rel(struct cdevsw *);
const char *devtoname(struct cdev *_dev);
int dev_named(struct cdev *_pdev, const char *_name);
void dev_depends(struct cdev *_pdev, struct cdev *_cdev);
void dev_ref(struct cdev *dev);
void dev_rel(struct cdev *dev);
void dev_strategy(struct buf *bp);
struct cdev *makebdev(int _maj, int _min);
struct cdev *make_dev(struct cdevsw *_devsw, int _minor, uid_t _uid, gid_t _gid,
  int _perms, const char *_fmt, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
struct cdev *make_dev_alias(struct cdev *_pdev, const char *_fmt, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int dev2unit(struct cdev *_dev);
int unit2minor(int _unit);
void setconf(void);
struct cdev *getdiskbyname(char *_name);

void devfs_create(struct cdev *dev);
void devfs_destroy(struct cdev *dev);
# 301 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef void (*dev_clone_fn)(void *arg, char *name, int namelen, struct cdev **result);

int dev_stdclone(char *_name, char **_namep, const char *_stem, int *_unit);
struct eventhandler_entry_dev_clone { struct eventhandler_entry ee; dev_clone_fn eh_func; }; struct __hack;



struct dumperinfo {
 dumper_t *dumper;
 void *priv;
 u_int blocksize;
 off_t mediaoffset;
 off_t mediasize;
};

int set_dumper(struct dumperinfo *);
void dumpsys(struct dumperinfo *);
typedef  int  _GLOBAL_275_T; extern  _GLOBAL_275_T  global_dumping[NUM_STACKS];   


typedef  d_ioctl_t _GLOBAL_276_T;  _GLOBAL_276_T  ttyioctl;  
typedef  d_kqfilter_t _GLOBAL_277_T;  _GLOBAL_277_T  ttykqfilter;  
typedef  d_poll_t _GLOBAL_278_T;  _GLOBAL_278_T  ttypoll;  
typedef  d_read_t _GLOBAL_279_T;  _GLOBAL_279_T  ttyread;  
typedef  d_write_t _GLOBAL_280_T;  _GLOBAL_280_T  ttywrite;  
# 49 "freebsd5/support/globals.c" 2


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h" 1
# 46 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h"
typedef __va_list va_list;
# 52 "freebsd5/support/globals.c" 2

# 1 "freebsd5/net/ethernet.h" 1
# 60 "freebsd5/net/ethernet.h"
struct ether_header {
 u_char ether_dhost[6];
 u_char ether_shost[6];
 u_short ether_type;
};




struct ether_addr {
 u_char octet[6];
};
# 348 "freebsd5/net/ethernet.h"
struct ifnet;
struct mbuf;
struct rtentry;
struct sockaddr;

extern uint32_t ether_crc32_le(const uint8_t *, size_t);
extern uint32_t ether_crc32_be(const uint8_t *, size_t);
extern void ether_demux(struct ifnet *, struct mbuf *);
extern void ether_ifattach(struct ifnet *, const u_int8_t *);
extern void ether_ifdetach(struct ifnet *);
extern int ether_ioctl(struct ifnet *, int, caddr_t);
extern int ether_output(struct ifnet *,
     struct mbuf *, struct sockaddr *, struct rtentry *);
extern int ether_output_frame(struct ifnet *, struct mbuf *);
extern char *ether_sprintf(const u_int8_t *);
# 54 "freebsd5/support/globals.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/vm/vm.h" 1
# 64 "freebsd5/freebsd/usr/src/sys/vm/vm.h"
typedef char vm_inherit_t;






typedef u_char vm_prot_t;
# 83 "freebsd5/freebsd/usr/src/sys/vm/vm.h"
union vm_map_object;
typedef union vm_map_object vm_map_object_t;

struct vm_map_entry;
typedef struct vm_map_entry *vm_map_entry_t;

struct vm_map;
typedef struct vm_map *vm_map_t;

struct vm_object;
typedef struct vm_object *vm_object_t;
# 116 "freebsd5/freebsd/usr/src/sys/vm/vm.h"
typedef  int  _GLOBAL_281_T; extern  _GLOBAL_281_T  global_debug_mpsafevm[NUM_STACKS];   
# 130 "freebsd5/freebsd/usr/src/sys/vm/vm.h"
struct kva_md_info {
 vm_offset_t buffer_sva;
 vm_offset_t buffer_eva;
 vm_offset_t clean_sva;
 vm_offset_t clean_eva;
 vm_offset_t pager_sva;
 vm_offset_t pager_eva;
};

typedef  struct kva_md_info   _GLOBAL_282_T; extern  _GLOBAL_282_T  global_kmi[NUM_STACKS];    
extern void vm_ksubmap_init(struct kva_md_info *);
# 56 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h" 1
# 74 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h"
enum obj_type { OBJT_DEFAULT, OBJT_SWAP, OBJT_VNODE, OBJT_DEVICE, OBJT_PHYS,
  OBJT_DEAD };
typedef u_char objtype_t;
# 88 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h"
struct vm_object {
 struct mtx mtx;
 struct { struct vm_object *tqe_next; struct vm_object **tqe_prev; } object_list;
 struct { struct vm_object *lh_first; } shadow_head;
 struct { struct vm_object *le_next; struct vm_object **le_prev; } shadow_list;
 struct { struct vm_page *tqh_first; struct vm_page **tqh_last; } memq;
 vm_page_t root;
 vm_pindex_t size;
 int generation;
 int ref_count;
 int shadow_count;
 objtype_t type;
 u_short flags;
 u_short pg_color;
 u_short paging_in_progress;
 int resident_page_count;
 struct vm_object *backing_object;
 vm_ooffset_t backing_object_offset;
 struct { struct vm_object *tqe_next; struct vm_object **tqe_prev; } pager_object_list;
 void *handle;
 union {





  struct {
   off_t vnp_size;
  } vnp;






  struct {
   struct { struct vm_page *tqh_first; struct vm_page **tqh_last; } devp_pglist;
  } devp;
# 134 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h"
  struct {
   int swp_bcount;
  } swp;
 } un_pager;
};
# 161 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h"
struct object_q { struct vm_object *tqh_first; struct vm_object **tqh_last; };

typedef  struct object_q   _GLOBAL_283_T; extern  _GLOBAL_283_T  global_vm_object_list[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_284_T; extern  _GLOBAL_284_T  global_vm_object_list_mtx[NUM_STACKS];    

typedef  struct vm_object   _GLOBAL_285_T; extern  _GLOBAL_285_T  global_kernel_object_store[NUM_STACKS];    
typedef  struct vm_object   _GLOBAL_286_T; extern  _GLOBAL_286_T  global_kmem_object_store[NUM_STACKS];    
# 186 "freebsd5/freebsd/usr/src/sys/vm/vm_object.h"
static __inline void
vm_object_set_flag(vm_object_t object, u_short bits)
{

 object->flags |= bits;
}

void vm_object_clear_flag(vm_object_t object, u_short bits);
void vm_object_pip_add(vm_object_t object, short i);
void vm_object_pip_subtract(vm_object_t object, short i);
void vm_object_pip_wakeup(vm_object_t object);
void vm_object_pip_wakeupn(vm_object_t object, short i);
void vm_object_pip_wait(vm_object_t object, char *waitid);

vm_object_t vm_object_allocate (objtype_t, vm_pindex_t);
vm_object_t vm_object_allocate_wait (objtype_t, vm_pindex_t, int);
void _vm_object_allocate (objtype_t, vm_pindex_t, vm_object_t);
boolean_t vm_object_coalesce(vm_object_t, vm_ooffset_t, vm_size_t, vm_size_t);
void vm_object_collapse (vm_object_t);
void vm_object_deallocate (vm_object_t);
void vm_object_terminate (vm_object_t);
void vm_object_vndeallocate (vm_object_t);
void vm_object_set_writeable_dirty (vm_object_t);
void vm_object_init (void);
void vm_object_page_clean (vm_object_t, vm_pindex_t, vm_pindex_t, boolean_t);
void vm_object_page_remove (vm_object_t, vm_pindex_t, vm_pindex_t, boolean_t);
void vm_object_reference (vm_object_t);
void vm_object_reference_locked(vm_object_t);
void vm_object_shadow (vm_object_t *, vm_ooffset_t *, vm_size_t);
void vm_object_split(vm_map_entry_t);
void vm_object_sync(vm_object_t, vm_ooffset_t, vm_size_t, boolean_t,
    boolean_t);
void vm_object_madvise (vm_object_t, vm_pindex_t, int, int);
# 57 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h" 1
# 71 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_vmpage.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h" 2


# 1 "freebsd5/freebsd/usr/src/sys/vm/pmap.h" 1
# 76 "freebsd5/freebsd/usr/src/sys/vm/pmap.h"
struct pmap_statistics {
 long resident_count;
 long wired_count;
};
typedef struct pmap_statistics *pmap_statistics_t;

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h" 1
# 154 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
typedef uint32_t pd_entry_t;
typedef uint32_t pt_entry_t;
# 167 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
extern pt_entry_t PTmap[];
extern pd_entry_t PTD[];
typedef  pd_entry_t  _GLOBAL_287_T; extern  _GLOBAL_287_T  _GLOBAL_0_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_1_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_2_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_3_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_4_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_5_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_6_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_7_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_8_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_9_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_10_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_11_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_12_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_13_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_14_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_15_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_16_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_17_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_18_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_19_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_20_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_21_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_22_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_23_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_24_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_25_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_26_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_27_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_28_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_29_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_30_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_31_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_32_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_33_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_34_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_35_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_36_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_37_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_38_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_39_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_40_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_41_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_42_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_43_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_44_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_45_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_46_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_47_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_48_PTDpde_I [ ] ; extern  _GLOBAL_287_T  _GLOBAL_49_PTDpde_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_PTDpde_I) *_GLOBAL_PTDpde_50_A[NUM_STACKS];  




typedef  pd_entry_t  _GLOBAL_288_T; extern  _GLOBAL_288_T  * global_IdlePTD[NUM_STACKS];   
# 192 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
static __inline vm_paddr_t
pmap_kextract(vm_offset_t va)
{
 vm_paddr_t pa;

 if ((pa = PTD[va >> 22]) & 0x080) {
  pa = (pa & ~((1<<22) - 1)) | (va & ((1<<22) - 1));
 } else {
  pa = *(PTmap + ((va) >> 12));
  pa = (pa & (~((vm_paddr_t)((1<<12)-1)))) | (va & ((1<<12)-1));
 }
 return pa;
}
# 243 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
static __inline pt_entry_t
pte_load(pt_entry_t *ptep)
{
 pt_entry_t r;

 r = *ptep;
 return (r);
}

static __inline pt_entry_t
pte_load_store(pt_entry_t *ptep, pt_entry_t pte)
{
 pt_entry_t r;

 __asm volatile(
     "xchgl %0,%1"
     : "=m" (*ptep),
       "=r" (r)
     : "1" (pte),
       "m" (*ptep));
 return (r);
}



static __inline void
pte_store(pt_entry_t *ptep, pt_entry_t pte)
{

 *ptep = pte;
}
# 286 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
struct pv_entry;

struct md_page {
 int pv_list_count;
 struct { struct pv_entry *tqh_first; struct pv_entry **tqh_last; } pv_list;
};

struct pmap {
 struct mtx pm_mtx;
 pd_entry_t *pm_pdir;
 struct { struct pv_entry *tqh_first; struct pv_entry **tqh_last; } pm_pvlist;
 u_int pm_active;
 struct pmap_statistics pm_stats;
 struct { struct pmap *le_next; struct pmap **le_prev; } pm_list;




};

typedef struct pmap *pmap_t;


typedef  struct pmap   _GLOBAL_289_T; extern  _GLOBAL_289_T  global_kernel_pmap_store[NUM_STACKS];    
# 328 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pmap.h"
typedef struct pv_entry {
 pmap_t pv_pmap;
 vm_offset_t pv_va;
 struct { struct pv_entry *tqe_next; struct pv_entry **tqe_prev; } pv_list;
 struct { struct pv_entry *tqe_next; struct pv_entry **tqe_prev; } pv_plist;
} *pv_entry_t;






struct ppro_vmtrr {
 u_int64_t base, mask;
};
typedef  struct ppro_vmtrr   _GLOBAL_290_T; extern  _GLOBAL_290_T  _GLOBAL_0_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_1_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_2_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_3_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_4_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_5_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_6_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_7_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_8_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_9_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_10_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_11_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_12_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_13_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_14_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_15_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_16_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_17_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_18_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_19_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_20_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_21_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_22_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_23_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_24_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_25_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_26_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_27_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_28_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_29_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_30_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_31_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_32_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_33_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_34_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_35_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_36_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_37_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_38_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_39_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_40_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_41_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_42_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_43_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_44_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_45_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_46_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_47_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_48_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_290_T  _GLOBAL_49_PPro_vmtrr_I [ 8 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_PPro_vmtrr_I) *_GLOBAL_PPro_vmtrr_51_A[NUM_STACKS];   

typedef  caddr_t  _GLOBAL_291_T; extern  _GLOBAL_291_T  global_CADDR1[NUM_STACKS];   
typedef  pt_entry_t  _GLOBAL_292_T; extern  _GLOBAL_292_T  * global_CMAP1[NUM_STACKS];   
typedef  vm_paddr_t  _GLOBAL_293_T; extern  _GLOBAL_293_T  global_avail_end[NUM_STACKS];   
typedef  vm_paddr_t  _GLOBAL_294_T; extern  _GLOBAL_294_T  _GLOBAL_0_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_1_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_2_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_3_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_4_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_5_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_6_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_7_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_8_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_9_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_10_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_11_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_12_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_13_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_14_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_15_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_16_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_17_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_18_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_19_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_20_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_21_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_22_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_23_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_24_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_25_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_26_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_27_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_28_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_29_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_30_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_31_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_32_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_33_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_34_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_35_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_36_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_37_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_38_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_39_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_40_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_41_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_42_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_43_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_44_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_45_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_46_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_47_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_48_phys_avail_I [ ] ; extern  _GLOBAL_294_T  _GLOBAL_49_phys_avail_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_phys_avail_I) *_GLOBAL_phys_avail_52_A[NUM_STACKS];  
typedef  int  _GLOBAL_295_T; extern  _GLOBAL_295_T  global_pseflag[NUM_STACKS];   
typedef  int  _GLOBAL_296_T; extern  _GLOBAL_296_T  global_pgeflag[NUM_STACKS];   
typedef  char  _GLOBAL_297_T; extern  _GLOBAL_297_T  * global_ptvmmap[NUM_STACKS];   
typedef  vm_offset_t  _GLOBAL_298_T; extern  _GLOBAL_298_T  global_virtual_avail[NUM_STACKS];   
typedef  vm_offset_t  _GLOBAL_299_T; extern  _GLOBAL_299_T  global_virtual_end[NUM_STACKS];   



void pmap_bootstrap(vm_paddr_t, vm_paddr_t);
void pmap_kenter(vm_offset_t va, vm_paddr_t pa);
void *pmap_kenter_temporary(vm_paddr_t pa, int i);
void pmap_kremove(vm_offset_t);
void *pmap_mapdev(vm_paddr_t, vm_size_t);
void pmap_unmapdev(vm_offset_t, vm_size_t);
pt_entry_t *pmap_pte(pmap_t, vm_offset_t) __attribute__((__const__)) ;
void pmap_set_pg(void);
void pmap_invalidate_page(pmap_t, vm_offset_t);
void pmap_invalidate_range(pmap_t, vm_offset_t, vm_offset_t);
void pmap_invalidate_all(pmap_t);
# 83 "freebsd5/freebsd/usr/src/sys/vm/pmap.h" 2


struct proc;
struct thread;




typedef  vm_offset_t  _GLOBAL_300_T; extern  _GLOBAL_300_T  global_kernel_vm_end[NUM_STACKS];   

typedef  int  _GLOBAL_301_T; extern  _GLOBAL_301_T  global_pmap_pagedaemon_waken[NUM_STACKS];   

void pmap_change_wiring(pmap_t, vm_offset_t, boolean_t);
void pmap_clear_modify(vm_page_t m);
void pmap_clear_reference(vm_page_t m);
void pmap_copy(pmap_t, pmap_t, vm_offset_t, vm_size_t, vm_offset_t);
void pmap_copy_page(vm_page_t, vm_page_t);
void pmap_enter(pmap_t, vm_offset_t, vm_page_t, vm_prot_t,
      boolean_t);
vm_page_t pmap_enter_quick(pmap_t pmap, vm_offset_t va, vm_page_t m,
      vm_page_t mpte);
vm_paddr_t pmap_extract(pmap_t pmap, vm_offset_t va);
vm_page_t pmap_extract_and_hold(pmap_t pmap, vm_offset_t va,
      vm_prot_t prot);
void pmap_growkernel(vm_offset_t);
void pmap_init(void);
boolean_t pmap_is_modified(vm_page_t m);
boolean_t pmap_is_prefaultable(pmap_t pmap, vm_offset_t va);
boolean_t pmap_ts_referenced(vm_page_t m);
vm_offset_t pmap_map(vm_offset_t *, vm_paddr_t, vm_paddr_t, int);
void pmap_object_init_pt(pmap_t pmap, vm_offset_t addr,
      vm_object_t object, vm_pindex_t pindex, vm_size_t size);
boolean_t pmap_page_exists_quick(pmap_t pmap, vm_page_t m);
void pmap_page_protect(vm_page_t m, vm_prot_t prot);
void pmap_pinit(pmap_t);
void pmap_pinit0(pmap_t);
void pmap_protect(pmap_t, vm_offset_t, vm_offset_t, vm_prot_t);
void pmap_qenter(vm_offset_t, vm_page_t *, int);
void pmap_qremove(vm_offset_t, int);
void pmap_release(pmap_t);
void pmap_remove(pmap_t, vm_offset_t, vm_offset_t);
void pmap_remove_all(vm_page_t m);
void pmap_remove_pages(pmap_t, vm_offset_t, vm_offset_t);
void pmap_zero_page(vm_page_t);
void pmap_zero_page_area(vm_page_t, int off, int size);
void pmap_zero_page_idle(vm_page_t);
int pmap_mincore(pmap_t pmap, vm_offset_t addr);
void pmap_activate(struct thread *td);
vm_offset_t pmap_addr_hint(vm_object_t obj, vm_offset_t addr, vm_size_t size);
void pmap_init2(void);
# 75 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h" 2
# 105 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };

struct vm_page {
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } pageq;
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } listq;
 struct vm_page *left;
 struct vm_page *right;

 vm_object_t object;
 vm_pindex_t pindex;
 vm_paddr_t phys_addr;
 struct md_page md;
 u_short queue;
 u_short flags,
  pc;
 u_short wire_count;
 short hold_count;
 u_char act_count;
 u_char busy;



 u_char valid;
 u_char dirty;
# 139 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
 u_int cow;
};
# 214 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
struct vpgqueues {
 struct pglist pl;
 int *cnt;
 int lcnt;
};

typedef  struct vpgqueues   _GLOBAL_302_T; extern  _GLOBAL_302_T  _GLOBAL_0_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_1_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_2_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_3_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_4_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_5_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_6_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_7_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_8_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_9_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_10_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_11_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_12_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_13_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_14_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_15_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_16_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_17_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_18_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_19_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_20_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_21_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_22_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_23_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_24_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_25_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_26_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_27_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_28_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_29_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_30_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_31_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_32_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_33_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_34_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_35_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_36_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_37_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_38_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_39_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_40_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_41_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_42_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_43_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_44_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_45_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_46_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_47_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_48_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; extern  _GLOBAL_302_T  _GLOBAL_49_vm_page_queues_I [ ( 4 + 2 * 32   )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vm_page_queues_I) *_GLOBAL_vm_page_queues_53_A[NUM_STACKS];     
typedef  struct mtx   _GLOBAL_303_T; extern  _GLOBAL_303_T  global_vm_page_queue_free_mtx[NUM_STACKS];    
# 285 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
typedef  int  _GLOBAL_304_T; extern  _GLOBAL_304_T  global_vm_page_zero_count[NUM_STACKS];   

typedef  vm_page_t  _GLOBAL_305_T; extern  _GLOBAL_305_T  global_vm_page_array[NUM_STACKS];   
typedef  int  _GLOBAL_306_T; extern  _GLOBAL_306_T  global_vm_page_array_size[NUM_STACKS];   
typedef  long  _GLOBAL_307_T; extern  _GLOBAL_307_T  global_first_page[NUM_STACKS];   






typedef  struct mtx   _GLOBAL_308_T; extern  _GLOBAL_308_T  global_vm_page_queue_mtx[NUM_STACKS];    
# 321 "freebsd5/freebsd/usr/src/sys/vm/vm_page.h"
void vm_page_flag_set(vm_page_t m, unsigned short bits);
void vm_page_flag_clear(vm_page_t m, unsigned short bits);
void vm_page_busy(vm_page_t m);
void vm_page_flash(vm_page_t m);
void vm_page_io_start(vm_page_t m);
void vm_page_io_finish(vm_page_t m);
void vm_page_hold(vm_page_t mem);
void vm_page_unhold(vm_page_t mem);
void vm_page_free(vm_page_t m);
void vm_page_free_zero(vm_page_t m);
int vm_page_sleep_if_busy(vm_page_t m, int also_m_busy, const char *msg);
void vm_page_dirty(vm_page_t m);
void vm_page_wakeup(vm_page_t m);

void vm_pageq_init(void);
vm_page_t vm_pageq_add_new_page(vm_paddr_t pa);
void vm_pageq_enqueue(int queue, vm_page_t m);
void vm_pageq_remove_nowakeup(vm_page_t m);
void vm_pageq_remove(vm_page_t m);
vm_page_t vm_pageq_find(int basequeue, int index, boolean_t prefer_zero);
void vm_pageq_requeue(vm_page_t m);

void vm_page_activate (vm_page_t);
vm_page_t vm_page_alloc (vm_object_t, vm_pindex_t, int);
vm_page_t vm_page_alloc_contig (vm_pindex_t, vm_paddr_t, vm_paddr_t,
     vm_offset_t, vm_offset_t);
void vm_page_release_contig (vm_page_t, vm_pindex_t);
vm_page_t vm_page_grab (vm_object_t, vm_pindex_t, int);
void vm_page_cache (register vm_page_t);
int vm_page_try_to_cache (vm_page_t);
int vm_page_try_to_free (vm_page_t);
void vm_page_dontneed (register vm_page_t);
void vm_page_deactivate (vm_page_t);
void vm_page_insert (vm_page_t, vm_object_t, vm_pindex_t);
vm_page_t vm_page_lookup (vm_object_t, vm_pindex_t);
void vm_page_remove (vm_page_t);
void vm_page_rename (vm_page_t, vm_object_t, vm_pindex_t);
vm_page_t vm_page_select_cache(int);
vm_page_t vm_page_splay(vm_pindex_t, vm_page_t);
vm_offset_t vm_page_startup(vm_offset_t vaddr);
void vm_page_unmanage (vm_page_t);
void vm_page_unwire (vm_page_t, int);
void vm_page_wire (vm_page_t);
void vm_page_set_validclean (vm_page_t, int, int);
void vm_page_clear_dirty (vm_page_t, int, int);
void vm_page_set_invalid (vm_page_t, int, int);
int vm_page_is_valid (vm_page_t, int, int);
void vm_page_test_dirty (vm_page_t);
int vm_page_bits (int, int);
void vm_page_zero_invalid(vm_page_t m, boolean_t setvalid);
void vm_page_free_toq(vm_page_t m);
void vm_page_zero_idle_wakeup(void);
void vm_page_cowfault (vm_page_t);
void vm_page_cowsetup (vm_page_t);
void vm_page_cowclear (vm_page_t);






static __inline void
vm_page_undirty(vm_page_t m)
{
 m->dirty = 0;
}
# 58 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_param.h" 1
# 70 "freebsd5/freebsd/usr/src/sys/vm/vm_param.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/vmparam.h" 1
# 71 "freebsd5/freebsd/usr/src/sys/vm/vm_param.h" 2
# 108 "freebsd5/freebsd/usr/src/sys/vm/vm_param.h"
struct xswdev {
 u_int xsw_version;
 dev_t xsw_dev;
 int xsw_flags;
 int xsw_nblks;
 int xsw_used;
};
# 133 "freebsd5/freebsd/usr/src/sys/vm/vm_param.h"
typedef  u_quad_t  _GLOBAL_309_T; extern  _GLOBAL_309_T  global_maxtsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_310_T; extern  _GLOBAL_310_T  global_dfldsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_311_T; extern  _GLOBAL_311_T  global_maxdsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_312_T; extern  _GLOBAL_312_T  global_dflssiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_313_T; extern  _GLOBAL_313_T  global_maxssiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_314_T; extern  _GLOBAL_314_T  global_sgrowsiz[NUM_STACKS];   
# 59 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h" 1
# 70 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/sx.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/sx.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/condvar.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/condvar.h"
struct mtx;
struct thread;

struct cv_waitq { struct thread *tqh_first; struct thread **tqh_last; };







struct cv {
 const char *cv_description;
 int cv_waiters;
};


void cv_init(struct cv *cvp, const char *desc);
void cv_destroy(struct cv *cvp);

void cv_wait(struct cv *cvp, struct mtx *mp);
int cv_wait_sig(struct cv *cvp, struct mtx *mp);
int cv_timedwait(struct cv *cvp, struct mtx *mp, int timo);
int cv_timedwait_sig(struct cv *cvp, struct mtx *mp, int timo);

void cv_signal(struct cv *cvp);
void cv_broadcastpri(struct cv *cvp, int pri);
# 36 "freebsd5/freebsd/usr/src/sys/sys/sx.h" 2

struct sx {
 struct lock_object sx_object;
 struct mtx *sx_lock;
 int sx_cnt;
 struct cv sx_shrd_cv;
 int sx_shrd_wcnt;
 struct cv sx_excl_cv;
 int sx_excl_wcnt;
 struct thread *sx_xholder;
};


void sx_sysinit(void *arg);
void sx_init(struct sx *sx, const char *description);
void sx_destroy(struct sx *sx);
void _sx_slock(struct sx *sx, const char *file, int line);
void _sx_xlock(struct sx *sx, const char *file, int line);
int _sx_try_slock(struct sx *sx, const char *file, int line);
int _sx_try_xlock(struct sx *sx, const char *file, int line);
void _sx_sunlock(struct sx *sx, const char *file, int line);
void _sx_xunlock(struct sx *sx, const char *file, int line);
int _sx_try_upgrade(struct sx *sx, const char *file, int line);
void _sx_downgrade(struct sx *sx, const char *file, int line);




struct sx_args {
 struct sx *sa_sx;
 const char *sa_desc;
};
# 71 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h" 2
# 80 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
typedef u_char vm_flags_t;
typedef u_int vm_eflags_t;






union vm_map_object {
 struct vm_object *vm_object;
 struct vm_map *sub_map;
};







struct vm_map_entry {
 struct vm_map_entry *prev;
 struct vm_map_entry *next;
 struct vm_map_entry *left;
 struct vm_map_entry *right;
 vm_offset_t start;
 vm_offset_t end;
 vm_offset_t avail_ssize;
 vm_size_t adj_free;
 vm_size_t max_free;
 union vm_map_object object;
 vm_ooffset_t offset;
 vm_eflags_t eflags;

 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 int wired_count;
 vm_pindex_t lastr;
};
# 142 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
static __inline u_char
vm_map_entry_behavior(vm_map_entry_t entry)
{
 return (entry->eflags & 0x00C0);
}

static __inline int
vm_map_entry_user_wired_count(vm_map_entry_t entry)
{
 if (entry->eflags & 0x0020)
  return (1);
 return (0);
}

static __inline int
vm_map_entry_system_wired_count(vm_map_entry_t entry)
{
 return (entry->wired_count - vm_map_entry_user_wired_count(entry));
}
# 181 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
struct vm_map {
 struct vm_map_entry header;
 struct sx lock;
 struct mtx system_mtx;
 int nentries;
 vm_size_t size;
 u_int timestamp;
 u_char needs_wakeup;
 u_char system_map;
 vm_flags_t flags;
 vm_map_entry_t root;
 pmap_t pmap;


};







static __inline vm_offset_t
vm_map_max(vm_map_t map)
{
 return (map->header.end);
}

static __inline vm_offset_t
vm_map_min(vm_map_t map)
{
 return (map->header.start);
}

static __inline pmap_t
vm_map_pmap(vm_map_t map)
{
 return (map->pmap);
}

static __inline void
vm_map_modflags(vm_map_t map, vm_flags_t set, vm_flags_t clear)
{
 map->flags = (map->flags | set) & ~clear;
}
# 234 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
struct vmspace {
 struct vm_map vm_map;
 struct pmap vm_pmap;
 struct shmmap_state *vm_shm;
 segsz_t vm_swrss;
 segsz_t vm_tsize;
 segsz_t vm_dsize;
 segsz_t vm_ssize;
 caddr_t vm_taddr;
 caddr_t vm_daddr;
 caddr_t vm_maxsaddr;
 int vm_exitingcnt;
 int vm_refcnt;
};


static __inline pmap_t
vmspace_pmap(struct vmspace *vmspace)
{
 return &vmspace->vm_pmap;
}
# 268 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
void _vm_map_lock(vm_map_t map, const char *file, int line);
void _vm_map_unlock(vm_map_t map, const char *file, int line);
void _vm_map_lock_read(vm_map_t map, const char *file, int line);
void _vm_map_unlock_read(vm_map_t map, const char *file, int line);
int _vm_map_trylock(vm_map_t map, const char *file, int line);
int _vm_map_trylock_read(vm_map_t map, const char *file, int line);
int _vm_map_lock_upgrade(vm_map_t map, const char *file, int line);
void _vm_map_lock_downgrade(vm_map_t map, const char *file, int line);
int vm_map_unlock_and_wait(vm_map_t map, boolean_t user_wait);
void vm_map_wakeup(vm_map_t map);
# 291 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
long vmspace_resident_count(struct vmspace *vmspace);
long vmspace_wired_count(struct vmspace *vmspace);
# 334 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h"
boolean_t vm_map_check_protection (vm_map_t, vm_offset_t, vm_offset_t, vm_prot_t);
vm_map_t vm_map_create(pmap_t, vm_offset_t, vm_offset_t);
int vm_map_delete (vm_map_t, vm_offset_t, vm_offset_t);
int vm_map_find (vm_map_t, vm_object_t, vm_ooffset_t, vm_offset_t *, vm_size_t, boolean_t, vm_prot_t, vm_prot_t, int);
int vm_map_findspace (vm_map_t, vm_offset_t, vm_size_t, vm_offset_t *);
int vm_map_inherit (vm_map_t, vm_offset_t, vm_offset_t, vm_inherit_t);
void vm_map_init (struct vm_map *, vm_offset_t, vm_offset_t);
int vm_map_insert (vm_map_t, vm_object_t, vm_ooffset_t, vm_offset_t, vm_offset_t, vm_prot_t, vm_prot_t, int);
int vm_map_lookup (vm_map_t *, vm_offset_t, vm_prot_t, vm_map_entry_t *, vm_object_t *,
    vm_pindex_t *, vm_prot_t *, boolean_t *);
int vm_map_lookup_locked(vm_map_t *, vm_offset_t, vm_prot_t, vm_map_entry_t *, vm_object_t *,
    vm_pindex_t *, vm_prot_t *, boolean_t *);
void vm_map_lookup_done (vm_map_t, vm_map_entry_t);
boolean_t vm_map_lookup_entry (vm_map_t, vm_offset_t, vm_map_entry_t *);
void vm_map_pmap_enter(vm_map_t map, vm_offset_t addr, vm_prot_t prot,
    vm_object_t object, vm_pindex_t pindex, vm_size_t size, int flags);
int vm_map_protect (vm_map_t, vm_offset_t, vm_offset_t, vm_prot_t, boolean_t);
int vm_map_remove (vm_map_t, vm_offset_t, vm_offset_t);
void vm_map_startup (void);
int vm_map_submap (vm_map_t, vm_offset_t, vm_offset_t, vm_map_t);
int vm_map_sync(vm_map_t, vm_offset_t, vm_offset_t, boolean_t, boolean_t);
int vm_map_madvise (vm_map_t, vm_offset_t, vm_offset_t, int);
void vm_map_simplify_entry (vm_map_t, vm_map_entry_t);
void vm_init2 (void);
int vm_map_stack (vm_map_t, vm_offset_t, vm_size_t, vm_prot_t, vm_prot_t, int);
int vm_map_growstack (struct proc *p, vm_offset_t addr);
int vm_map_unwire(vm_map_t map, vm_offset_t start, vm_offset_t end,
    int flags);
int vm_map_wire(vm_map_t map, vm_offset_t start, vm_offset_t end,
    int flags);
int vmspace_swap_count (struct vmspace *vmspace);
# 60 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_kern.h" 1
# 67 "freebsd5/freebsd/usr/src/sys/vm/vm_kern.h"
typedef  vm_map_t  _GLOBAL_315_T; extern  _GLOBAL_315_T  global_buffer_map[NUM_STACKS];   
typedef  vm_map_t  _GLOBAL_316_T; extern  _GLOBAL_316_T  global_kernel_map[NUM_STACKS];   
typedef  vm_map_t  _GLOBAL_317_T; extern  _GLOBAL_317_T  global_kmem_map[NUM_STACKS];   
typedef  vm_map_t  _GLOBAL_318_T; extern  _GLOBAL_318_T  global_clean_map[NUM_STACKS];   
typedef  vm_map_t  _GLOBAL_319_T; extern  _GLOBAL_319_T  global_exec_map[NUM_STACKS];   
typedef  vm_map_t  _GLOBAL_320_T; extern  _GLOBAL_320_T  global_pipe_map[NUM_STACKS];   
typedef  u_int  _GLOBAL_321_T; extern  _GLOBAL_321_T  global_vm_kmem_size[NUM_STACKS];   
# 61 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_extern.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/vm/vm_extern.h"
struct buf;
struct proc;
struct vmspace;
struct vmtotal;
struct mount;
struct vnode;
# 58 "freebsd5/freebsd/usr/src/sys/vm/vm_extern.h"
int kernacc(void *, int, int);
vm_offset_t kmem_alloc(vm_map_t, vm_size_t);
vm_offset_t kmem_alloc_nofault(vm_map_t, vm_size_t);
vm_offset_t kmem_alloc_wait(vm_map_t, vm_size_t);
void kmem_free(vm_map_t, vm_offset_t, vm_size_t);
void kmem_free_wakeup(vm_map_t, vm_offset_t, vm_size_t);
void kmem_init(vm_offset_t, vm_offset_t);
vm_offset_t kmem_malloc(vm_map_t, vm_size_t, boolean_t);
vm_map_t kmem_suballoc(vm_map_t, vm_offset_t *, vm_offset_t *, vm_size_t);
void swapout_procs(int);
int useracc(void *, int, int);
int vm_fault(vm_map_t, vm_offset_t, vm_prot_t, int);
void vm_fault_copy_entry(vm_map_t, vm_map_t, vm_map_entry_t, vm_map_entry_t);
void vm_fault_unwire(vm_map_t, vm_offset_t, vm_offset_t, boolean_t);
int vm_fault_wire(vm_map_t, vm_offset_t, vm_offset_t, boolean_t, boolean_t);
void vm_forkproc(struct thread *, struct proc *, struct thread *, int);
void vm_waitproc(struct proc *);
int vm_mmap(vm_map_t, vm_offset_t *, vm_size_t, vm_prot_t, vm_prot_t, int, void *, vm_ooffset_t);
void vm_set_page_size(void);
struct vmspace *vmspace_alloc(vm_offset_t, vm_offset_t);
struct vmspace *vmspace_fork(struct vmspace *);
void vmspace_exec(struct proc *, vm_offset_t, vm_offset_t);
void vmspace_unshare(struct proc *);
void vmspace_free(struct vmspace *);
void vmspace_exitfree(struct proc *);
void vnode_pager_setsize(struct vnode *, vm_ooffset_t);
int vslock(void *, size_t);
void vsunlock(void *, size_t);
void vm_object_print( long, boolean_t, long,
     char *);
int vm_fault_quick(caddr_t v, int prot);
void vm_proc_new(struct proc *p);
void vm_proc_dispose(struct proc *p);
void vm_thread_dispose(struct thread *td);
void vm_thread_dispose_altkstack(struct thread *td);
void vm_thread_new(struct thread *td, int pages);
void vm_thread_new_altkstack(struct thread *td, int pages);
void vm_thread_swapin(struct thread *td);
void vm_thread_swapout(struct thread *td);
# 62 "freebsd5/support/globals.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h" 1
# 153 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h"
struct slabhead { struct uma_slab *slh_first; };

struct uma_hash {
 struct slabhead *uh_slab_hash;
 int uh_hashsize;
 int uh_hashmask;
};





struct uma_bucket {
 struct { struct uma_bucket *le_next; struct uma_bucket **le_prev; } ub_link;
 int16_t ub_cnt;
 int16_t ub_entries;
 void *ub_bucket[];
};

typedef struct uma_bucket * uma_bucket_t;

struct uma_cache {
 uma_bucket_t uc_freebucket;
 uma_bucket_t uc_allocbucket;
 u_int64_t uc_allocs;
};

typedef struct uma_cache * uma_cache_t;







struct uma_keg {
 struct { struct uma_keg *le_next; struct uma_keg **le_prev; } uk_link;

 struct mtx uk_lock;
 struct uma_hash uk_hash;

 struct { struct uma_zone *lh_first; } uk_zones;
 struct { struct uma_slab *lh_first; } uk_part_slab;
 struct { struct uma_slab *lh_first; } uk_free_slab;
 struct { struct uma_slab *lh_first; } uk_full_slab;

 u_int32_t uk_recurse;
 u_int32_t uk_align;
 u_int32_t uk_pages;
 u_int32_t uk_free;
 u_int32_t uk_size;
 u_int32_t uk_rsize;
 u_int32_t uk_maxpages;

 uma_init uk_init;
 uma_fini uk_fini;
 uma_alloc uk_allocf;
 uma_free uk_freef;

 struct vm_object *uk_obj;
 vm_offset_t uk_kva;
 uma_zone_t uk_slabzone;

 u_int16_t uk_pgoff;
 u_int16_t uk_ppera;
 u_int16_t uk_ipers;
 u_int16_t uk_flags;
};


typedef struct uma_keg * uma_keg_t;




struct uma_slab_head {
 uma_keg_t us_keg;
 union {
  struct { struct uma_slab *le_next; struct uma_slab **le_prev; } _us_link;
  unsigned long _us_size;
 } us_type;
 struct { struct uma_slab *sle_next; } us_hlink;
 u_int8_t *us_data;
 u_int8_t us_flags;
 u_int8_t us_freecount;
 u_int8_t us_firstfree;
};


struct uma_slab {
 struct uma_slab_head us_head;
 struct {
  u_int8_t us_item;
 } us_freelist[1];
};





struct uma_slab_refcnt {
 struct uma_slab_head us_head;
 struct {
  u_int8_t us_item;
  u_int32_t us_refcnt;
 } us_freelist[1];
};
# 270 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h"
typedef struct uma_slab * uma_slab_t;
typedef struct uma_slab_refcnt * uma_slabrefcnt_t;
# 289 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h"
struct uma_zone {
 char *uz_name;
 struct mtx *uz_lock;
 uma_keg_t uz_keg;

 struct { struct uma_zone *le_next; struct uma_zone **le_prev; } uz_link;
 struct { struct uma_bucket *lh_first; } uz_full_bucket;
 struct { struct uma_bucket *lh_first; } uz_free_bucket;

 uma_ctor uz_ctor;
 uma_dtor uz_dtor;
 uma_init uz_init;
 uma_fini uz_fini;

 u_int64_t uz_allocs;
 uint16_t uz_fills;
 uint16_t uz_count;





 struct uma_cache uz_cpu[1];
};
# 323 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h"
static __inline uma_slab_t hash_sfind(struct uma_hash *hash, u_int8_t *data);
void *uma_large_malloc(int size, int wait);
void uma_large_free(uma_slab_t slab);
# 364 "freebsd5/freebsd/usr/src/sys/vm/uma_int.h"
static __inline uma_slab_t
hash_sfind(struct uma_hash *hash, u_int8_t *data)
{
        uma_slab_t slab;
        int hval;

        hval = ((((unsigned long)data) >> 12) & (hash)->uh_hashmask);

        for ((slab) = (((&hash->uh_slab_hash[hval]))->slh_first); (slab); (slab) = (((slab))->us_head.us_hlink.sle_next)) {
                if ((u_int8_t *)slab->us_head.us_data == data)
                        return (slab);
        }
        return (((void *)0));
}

static __inline uma_slab_t
vtoslab(vm_offset_t va)
{
 vm_page_t p;
 uma_slab_t slab;

 p = (&global_vm_page_array[get_stack_id()][((pmap_kextract(va)) >> 12) - global_first_page[get_stack_id()] ]);
 slab = (uma_slab_t )p->object;

 if (p->flags & 0x2000)
  return (slab);
 else
  return (((void *)0));
}

static __inline void
vsetslab(vm_offset_t va, uma_slab_t slab)
{
 vm_page_t p;

 p = (&global_vm_page_array[get_stack_id()][((pmap_kextract((vm_offset_t)va)) >> 12) - global_first_page[get_stack_id()] ]);
 p->object = (vm_object_t)slab;
 p->flags |= 0x2000;
}

static __inline void
vsetobj(vm_offset_t va, vm_object_t obj)
{
 vm_page_t p;

 p = (&global_vm_page_array[get_stack_id()][((pmap_kextract((vm_offset_t)va)) >> 12) - global_first_page[get_stack_id()] ]);
 p->object = obj;
 p->flags &= ~0x2000;
}






void *uma_small_alloc(uma_zone_t zone, int bytes, u_int8_t *pflag, int wait);
void uma_small_free(void *mem, int size, u_int8_t flags);
# 64 "freebsd5/support/globals.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma_dbg.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/vm/uma_dbg.h"
int trash_ctor(void *mem, int size, void *arg, int flags);
void trash_dtor(void *mem, int size, void *arg);
int trash_init(void *mem, int size, int flags);
void trash_fini(void *mem, int size);


int mtrash_ctor(void *mem, int size, void *arg, int flags);
void mtrash_dtor(void *mem, int size, void *arg);
int mtrash_init(void *mem, int size, int flags);
void mtrash_fini(void *mem, int size);

void uma_dbg_free(uma_zone_t zone, uma_slab_t slab, void *item);
void uma_dbg_alloc(uma_zone_t zone, uma_slab_t slab, void *item);
# 65 "freebsd5/support/globals.c" 2

# 1 "sim/num_stacks.h" 1
# 30 "sim/num_stacks.h"
int get_stack_id(void);
# 67 "freebsd5/support/globals.c" 2


typedef  struct mtx  _GLOBAL_322_T;  _GLOBAL_322_T  global_Giant[NUM_STACKS];   


typedef  int  ( *_GLOBAL_324_T  )  ( struct ifnet   *  , struct ether_header   * eh    , struct mbuf   * m    ) ;  _GLOBAL_324_T global_ef_inputp[NUM_STACKS];         
typedef  int  ( *_GLOBAL_326_T  )  ( struct ifnet   * ifp   , struct mbuf   * *  mp    , struct sockaddr   * dst    , short  * tp    , int  * hlen    ) ;  _GLOBAL_326_T global_ef_outputp[NUM_STACKS];       
        


typedef  long _GLOBAL_327_T;  _GLOBAL_327_T  global_tk_nin[NUM_STACKS];  
typedef  int _GLOBAL_328_T;  _GLOBAL_328_T  global_ticks[NUM_STACKS];  


typedef  struct thread  _GLOBAL_329_T;  _GLOBAL_329_T  global_thread0[NUM_STACKS];   
typedef  struct proc  _GLOBAL_330_T;  _GLOBAL_330_T  global_proc0[NUM_STACKS];   
typedef  int _GLOBAL_331_T;  _GLOBAL_331_T  global_bootverbose[NUM_STACKS];  






typedef  const char  _GLOBAL_332_T;  _GLOBAL_332_T  * global_panicstr[NUM_STACKS];   
# 103 "freebsd5/support/globals.c"
typedef  char _GLOBAL_333_T;  _GLOBAL_333_T  _GLOBAL_0_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_1_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_2_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_3_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_4_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_5_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_6_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_7_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_8_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_9_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_10_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_11_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_12_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_13_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_14_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_15_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_16_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_17_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_18_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_19_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_20_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_21_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_22_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_23_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_24_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_25_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_26_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_27_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_28_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_29_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_30_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_31_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_32_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_33_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_34_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_35_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_36_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_37_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_38_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_39_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_40_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_41_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_42_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_43_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_44_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_45_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_46_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_47_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_48_kern_ident_I [ ]  = "nsc" ;  _GLOBAL_333_T  _GLOBAL_49_kern_ident_I [ ]  = "nsc" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_54_A[NUM_STACKS] = { &_GLOBAL_0_kern_ident_I, &_GLOBAL_1_kern_ident_I, &_GLOBAL_2_kern_ident_I, &_GLOBAL_3_kern_ident_I, &_GLOBAL_4_kern_ident_I, &_GLOBAL_5_kern_ident_I, &_GLOBAL_6_kern_ident_I, &_GLOBAL_7_kern_ident_I, &_GLOBAL_8_kern_ident_I, &_GLOBAL_9_kern_ident_I, &_GLOBAL_10_kern_ident_I, &_GLOBAL_11_kern_ident_I, &_GLOBAL_12_kern_ident_I, &_GLOBAL_13_kern_ident_I, &_GLOBAL_14_kern_ident_I, &_GLOBAL_15_kern_ident_I, &_GLOBAL_16_kern_ident_I, &_GLOBAL_17_kern_ident_I, &_GLOBAL_18_kern_ident_I, &_GLOBAL_19_kern_ident_I, &_GLOBAL_20_kern_ident_I, &_GLOBAL_21_kern_ident_I, &_GLOBAL_22_kern_ident_I, &_GLOBAL_23_kern_ident_I, &_GLOBAL_24_kern_ident_I, &_GLOBAL_25_kern_ident_I, &_GLOBAL_26_kern_ident_I, &_GLOBAL_27_kern_ident_I, &_GLOBAL_28_kern_ident_I, &_GLOBAL_29_kern_ident_I, &_GLOBAL_30_kern_ident_I, &_GLOBAL_31_kern_ident_I, &_GLOBAL_32_kern_ident_I, &_GLOBAL_33_kern_ident_I, &_GLOBAL_34_kern_ident_I, &_GLOBAL_35_kern_ident_I, &_GLOBAL_36_kern_ident_I, &_GLOBAL_37_kern_ident_I, &_GLOBAL_38_kern_ident_I, &_GLOBAL_39_kern_ident_I, &_GLOBAL_40_kern_ident_I, &_GLOBAL_41_kern_ident_I, &_GLOBAL_42_kern_ident_I, &_GLOBAL_43_kern_ident_I, &_GLOBAL_44_kern_ident_I, &_GLOBAL_45_kern_ident_I, &_GLOBAL_46_kern_ident_I, &_GLOBAL_47_kern_ident_I, &_GLOBAL_48_kern_ident_I, &_GLOBAL_49_kern_ident_I, };   


typedef  char _GLOBAL_334_T;  _GLOBAL_334_T  _GLOBAL_0_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_1_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_2_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_3_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_4_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_5_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_6_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_7_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_8_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_9_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_10_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_11_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_12_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_13_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_14_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_15_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_16_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_17_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_18_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_19_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_20_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_21_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_22_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_23_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_24_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_25_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_26_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_27_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_28_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_29_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_30_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_31_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_32_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_33_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_34_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_35_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_36_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_37_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_38_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_39_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_40_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_41_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_42_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_43_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_44_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_45_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_46_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_47_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_48_version_I [ ]  = "freebsd-5.3 (mostly)" ;  _GLOBAL_334_T  _GLOBAL_49_version_I [ ]  = "freebsd-5.3 (mostly)" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_55_A[NUM_STACKS] = { &_GLOBAL_0_version_I, &_GLOBAL_1_version_I, &_GLOBAL_2_version_I, &_GLOBAL_3_version_I, &_GLOBAL_4_version_I, &_GLOBAL_5_version_I, &_GLOBAL_6_version_I, &_GLOBAL_7_version_I, &_GLOBAL_8_version_I, &_GLOBAL_9_version_I, &_GLOBAL_10_version_I, &_GLOBAL_11_version_I, &_GLOBAL_12_version_I, &_GLOBAL_13_version_I, &_GLOBAL_14_version_I, &_GLOBAL_15_version_I, &_GLOBAL_16_version_I, &_GLOBAL_17_version_I, &_GLOBAL_18_version_I, &_GLOBAL_19_version_I, &_GLOBAL_20_version_I, &_GLOBAL_21_version_I, &_GLOBAL_22_version_I, &_GLOBAL_23_version_I, &_GLOBAL_24_version_I, &_GLOBAL_25_version_I, &_GLOBAL_26_version_I, &_GLOBAL_27_version_I, &_GLOBAL_28_version_I, &_GLOBAL_29_version_I, &_GLOBAL_30_version_I, &_GLOBAL_31_version_I, &_GLOBAL_32_version_I, &_GLOBAL_33_version_I, &_GLOBAL_34_version_I, &_GLOBAL_35_version_I, &_GLOBAL_36_version_I, &_GLOBAL_37_version_I, &_GLOBAL_38_version_I, &_GLOBAL_39_version_I, &_GLOBAL_40_version_I, &_GLOBAL_41_version_I, &_GLOBAL_42_version_I, &_GLOBAL_43_version_I, &_GLOBAL_44_version_I, &_GLOBAL_45_version_I, &_GLOBAL_46_version_I, &_GLOBAL_47_version_I, &_GLOBAL_48_version_I, &_GLOBAL_49_version_I, };   
typedef  int _GLOBAL_335_T;  _GLOBAL_335_T  global_osreldate[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  long _GLOBAL_336_T;  _GLOBAL_336_T  global_physmem[NUM_STACKS];  
typedef  long _GLOBAL_337_T;  _GLOBAL_337_T  global_realmem[NUM_STACKS];  
typedef  int _GLOBAL_338_T;  _GLOBAL_338_T  global_elf32_fallback_brand[NUM_STACKS] = {  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  };    
typedef  struct vmmeter  _GLOBAL_339_T;  _GLOBAL_339_T  global_cnt[NUM_STACKS];   
# 123 "freebsd5/support/globals.c"
typedef  struct linesw  _GLOBAL_340_T;  _GLOBAL_340_T  * _GLOBAL_0_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_1_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_2_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_3_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_4_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_5_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_6_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_7_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_8_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_9_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_10_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_11_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_12_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_13_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_14_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_15_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_16_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_17_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_18_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_19_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_20_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_21_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_22_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_23_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_24_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_25_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_26_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_27_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_28_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_29_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_30_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_31_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_32_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_33_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_34_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_35_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_36_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_37_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_38_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_39_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_40_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_41_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_42_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_43_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_44_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_45_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_46_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_47_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_48_linesw_I [ 9 ]  ;  _GLOBAL_340_T  * _GLOBAL_49_linesw_I [ 9 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_56_A[NUM_STACKS] = { &_GLOBAL_0_linesw_I, &_GLOBAL_1_linesw_I, &_GLOBAL_2_linesw_I, &_GLOBAL_3_linesw_I, &_GLOBAL_4_linesw_I, &_GLOBAL_5_linesw_I, &_GLOBAL_6_linesw_I, &_GLOBAL_7_linesw_I, &_GLOBAL_8_linesw_I, &_GLOBAL_9_linesw_I, &_GLOBAL_10_linesw_I, &_GLOBAL_11_linesw_I, &_GLOBAL_12_linesw_I, &_GLOBAL_13_linesw_I, &_GLOBAL_14_linesw_I, &_GLOBAL_15_linesw_I, &_GLOBAL_16_linesw_I, &_GLOBAL_17_linesw_I, &_GLOBAL_18_linesw_I, &_GLOBAL_19_linesw_I, &_GLOBAL_20_linesw_I, &_GLOBAL_21_linesw_I, &_GLOBAL_22_linesw_I, &_GLOBAL_23_linesw_I, &_GLOBAL_24_linesw_I, &_GLOBAL_25_linesw_I, &_GLOBAL_26_linesw_I, &_GLOBAL_27_linesw_I, &_GLOBAL_28_linesw_I, &_GLOBAL_29_linesw_I, &_GLOBAL_30_linesw_I, &_GLOBAL_31_linesw_I, &_GLOBAL_32_linesw_I, &_GLOBAL_33_linesw_I, &_GLOBAL_34_linesw_I, &_GLOBAL_35_linesw_I, &_GLOBAL_36_linesw_I, &_GLOBAL_37_linesw_I, &_GLOBAL_38_linesw_I, &_GLOBAL_39_linesw_I, &_GLOBAL_40_linesw_I, &_GLOBAL_41_linesw_I, &_GLOBAL_42_linesw_I, &_GLOBAL_43_linesw_I, &_GLOBAL_44_linesw_I, &_GLOBAL_45_linesw_I, &_GLOBAL_46_linesw_I, &_GLOBAL_47_linesw_I, &_GLOBAL_48_linesw_I, &_GLOBAL_49_linesw_I, };  
# 148 "freebsd5/support/globals.c"
typedef  vm_map_t _GLOBAL_341_T;  _GLOBAL_341_T  global_kmem_map[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };  



typedef  char const  _GLOBAL_342_T;  _GLOBAL_342_T  _GLOBAL_0_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_1_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_2_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_3_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_4_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_5_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_6_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_7_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_8_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_9_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_10_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_11_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_12_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_13_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_14_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_15_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_16_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_17_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_18_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_19_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_20_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_21_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_22_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_23_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_24_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_25_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_26_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_27_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_28_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_29_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_30_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_31_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_32_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_33_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_34_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_35_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_36_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_37_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_38_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_39_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_40_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_41_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_42_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_43_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_44_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_45_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_46_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_47_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_48_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ;  _GLOBAL_342_T  _GLOBAL_49_hex2ascii_data_I [ ]  = "0123456789abcdefghijklmnopqrstuvwxyz" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_57_A[NUM_STACKS] = { &_GLOBAL_0_hex2ascii_data_I, &_GLOBAL_1_hex2ascii_data_I, &_GLOBAL_2_hex2ascii_data_I, &_GLOBAL_3_hex2ascii_data_I, &_GLOBAL_4_hex2ascii_data_I, &_GLOBAL_5_hex2ascii_data_I, &_GLOBAL_6_hex2ascii_data_I, &_GLOBAL_7_hex2ascii_data_I, &_GLOBAL_8_hex2ascii_data_I, &_GLOBAL_9_hex2ascii_data_I, &_GLOBAL_10_hex2ascii_data_I, &_GLOBAL_11_hex2ascii_data_I, &_GLOBAL_12_hex2ascii_data_I, &_GLOBAL_13_hex2ascii_data_I, &_GLOBAL_14_hex2ascii_data_I, &_GLOBAL_15_hex2ascii_data_I, &_GLOBAL_16_hex2ascii_data_I, &_GLOBAL_17_hex2ascii_data_I, &_GLOBAL_18_hex2ascii_data_I, &_GLOBAL_19_hex2ascii_data_I, &_GLOBAL_20_hex2ascii_data_I, &_GLOBAL_21_hex2ascii_data_I, &_GLOBAL_22_hex2ascii_data_I, &_GLOBAL_23_hex2ascii_data_I, &_GLOBAL_24_hex2ascii_data_I, &_GLOBAL_25_hex2ascii_data_I, &_GLOBAL_26_hex2ascii_data_I, &_GLOBAL_27_hex2ascii_data_I, &_GLOBAL_28_hex2ascii_data_I, &_GLOBAL_29_hex2ascii_data_I, &_GLOBAL_30_hex2ascii_data_I, &_GLOBAL_31_hex2ascii_data_I, &_GLOBAL_32_hex2ascii_data_I, &_GLOBAL_33_hex2ascii_data_I, &_GLOBAL_34_hex2ascii_data_I, &_GLOBAL_35_hex2ascii_data_I, &_GLOBAL_36_hex2ascii_data_I, &_GLOBAL_37_hex2ascii_data_I, &_GLOBAL_38_hex2ascii_data_I, &_GLOBAL_39_hex2ascii_data_I, &_GLOBAL_40_hex2ascii_data_I, &_GLOBAL_41_hex2ascii_data_I, &_GLOBAL_42_hex2ascii_data_I, &_GLOBAL_43_hex2ascii_data_I, &_GLOBAL_44_hex2ascii_data_I, &_GLOBAL_45_hex2ascii_data_I, &_GLOBAL_46_hex2ascii_data_I, &_GLOBAL_47_hex2ascii_data_I, &_GLOBAL_48_hex2ascii_data_I, &_GLOBAL_49_hex2ascii_data_I, };    



typedef  struct harvest_select  _GLOBAL_343_T;  _GLOBAL_343_T  global_harvest[NUM_STACKS] = {  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  { 0 , 0  , 0  } ,  };         


typedef  struct malloc_type  _GLOBAL_344_T;  _GLOBAL_344_T  _GLOBAL_0_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_1_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_2_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_3_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_4_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_5_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_6_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_7_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_8_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_9_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_10_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_11_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_12_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_13_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_14_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_15_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_16_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_17_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_18_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_19_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_20_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_21_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_22_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_23_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_24_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_25_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_26_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_27_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_28_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_29_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_30_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_31_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_32_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_33_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_34_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_35_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_36_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_37_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_38_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_39_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_40_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_41_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_42_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_43_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_44_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_45_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_46_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_47_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_48_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ;  _GLOBAL_344_T  _GLOBAL_49_M_TTYS_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ttys"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TTYS_I) *_GLOBAL_M_TTYS_58_A[NUM_STACKS] = { &_GLOBAL_0_M_TTYS_I, &_GLOBAL_1_M_TTYS_I, &_GLOBAL_2_M_TTYS_I, &_GLOBAL_3_M_TTYS_I, &_GLOBAL_4_M_TTYS_I, &_GLOBAL_5_M_TTYS_I, &_GLOBAL_6_M_TTYS_I, &_GLOBAL_7_M_TTYS_I, &_GLOBAL_8_M_TTYS_I, &_GLOBAL_9_M_TTYS_I, &_GLOBAL_10_M_TTYS_I, &_GLOBAL_11_M_TTYS_I, &_GLOBAL_12_M_TTYS_I, &_GLOBAL_13_M_TTYS_I, &_GLOBAL_14_M_TTYS_I, &_GLOBAL_15_M_TTYS_I, &_GLOBAL_16_M_TTYS_I, &_GLOBAL_17_M_TTYS_I, &_GLOBAL_18_M_TTYS_I, &_GLOBAL_19_M_TTYS_I, &_GLOBAL_20_M_TTYS_I, &_GLOBAL_21_M_TTYS_I, &_GLOBAL_22_M_TTYS_I, &_GLOBAL_23_M_TTYS_I, &_GLOBAL_24_M_TTYS_I, &_GLOBAL_25_M_TTYS_I, &_GLOBAL_26_M_TTYS_I, &_GLOBAL_27_M_TTYS_I, &_GLOBAL_28_M_TTYS_I, &_GLOBAL_29_M_TTYS_I, &_GLOBAL_30_M_TTYS_I, &_GLOBAL_31_M_TTYS_I, &_GLOBAL_32_M_TTYS_I, &_GLOBAL_33_M_TTYS_I, &_GLOBAL_34_M_TTYS_I, &_GLOBAL_35_M_TTYS_I, &_GLOBAL_36_M_TTYS_I, &_GLOBAL_37_M_TTYS_I, &_GLOBAL_38_M_TTYS_I, &_GLOBAL_39_M_TTYS_I, &_GLOBAL_40_M_TTYS_I, &_GLOBAL_41_M_TTYS_I, &_GLOBAL_42_M_TTYS_I, &_GLOBAL_43_M_TTYS_I, &_GLOBAL_44_M_TTYS_I, &_GLOBAL_45_M_TTYS_I, &_GLOBAL_46_M_TTYS_I, &_GLOBAL_47_M_TTYS_I, &_GLOBAL_48_M_TTYS_I, &_GLOBAL_49_M_TTYS_I, };                  typedef  struct sysinit   _GLOBAL_345_T; static  _GLOBAL_345_T  global_M_TTYS_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_TTYS_I )   )   } ,  };             typedef  void const   _GLOBAL_346_T; static  _GLOBAL_346_T  * const  _global_section_0___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[0] ;static  _GLOBAL_346_T  * const  _global_section_1___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[1] ;static  _GLOBAL_346_T  * const  _global_section_2___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[2] ;static  _GLOBAL_346_T  * const  _global_section_3___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[3] ;static  _GLOBAL_346_T  * const  _global_section_4___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[4] ;static  _GLOBAL_346_T  * const  _global_section_5___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[5] ;static  _GLOBAL_346_T  * const  _global_section_6___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[6] ;static  _GLOBAL_346_T  * const  _global_section_7___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[7] ;static  _GLOBAL_346_T  * const  _global_section_8___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[8] ;static  _GLOBAL_346_T  * const  _global_section_9___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[9] ;static  _GLOBAL_346_T  * const  _global_section_10___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[10] ;static  _GLOBAL_346_T  * const  _global_section_11___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[11] ;static  _GLOBAL_346_T  * const  _global_section_12___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[12] ;static  _GLOBAL_346_T  * const  _global_section_13___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[13] ;static  _GLOBAL_346_T  * const  _global_section_14___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[14] ;static  _GLOBAL_346_T  * const  _global_section_15___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[15] ;static  _GLOBAL_346_T  * const  _global_section_16___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[16] ;static  _GLOBAL_346_T  * const  _global_section_17___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[17] ;static  _GLOBAL_346_T  * const  _global_section_18___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[18] ;static  _GLOBAL_346_T  * const  _global_section_19___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[19] ;static  _GLOBAL_346_T  * const  _global_section_20___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[20] ;static  _GLOBAL_346_T  * const  _global_section_21___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[21] ;static  _GLOBAL_346_T  * const  _global_section_22___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[22] ;static  _GLOBAL_346_T  * const  _global_section_23___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[23] ;static  _GLOBAL_346_T  * const  _global_section_24___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[24] ;static  _GLOBAL_346_T  * const  _global_section_25___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[25] ;static  _GLOBAL_346_T  * const  _global_section_26___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[26] ;static  _GLOBAL_346_T  * const  _global_section_27___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[27] ;static  _GLOBAL_346_T  * const  _global_section_28___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[28] ;static  _GLOBAL_346_T  * const  _global_section_29___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[29] ;static  _GLOBAL_346_T  * const  _global_section_30___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[30] ;static  _GLOBAL_346_T  * const  _global_section_31___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[31] ;static  _GLOBAL_346_T  * const  _global_section_32___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[32] ;static  _GLOBAL_346_T  * const  _global_section_33___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[33] ;static  _GLOBAL_346_T  * const  _global_section_34___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[34] ;static  _GLOBAL_346_T  * const  _global_section_35___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[35] ;static  _GLOBAL_346_T  * const  _global_section_36___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[36] ;static  _GLOBAL_346_T  * const  _global_section_37___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[37] ;static  _GLOBAL_346_T  * const  _global_section_38___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[38] ;static  _GLOBAL_346_T  * const  _global_section_39___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[39] ;static  _GLOBAL_346_T  * const  _global_section_40___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[40] ;static  _GLOBAL_346_T  * const  _global_section_41___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[41] ;static  _GLOBAL_346_T  * const  _global_section_42___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[42] ;static  _GLOBAL_346_T  * const  _global_section_43___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[43] ;static  _GLOBAL_346_T  * const  _global_section_44___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[44] ;static  _GLOBAL_346_T  * const  _global_section_45___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[45] ;static  _GLOBAL_346_T  * const  _global_section_46___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[46] ;static  _GLOBAL_346_T  * const  _global_section_47___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[47] ;static  _GLOBAL_346_T  * const  _global_section_48___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[48] ;static  _GLOBAL_346_T  * const  _global_section_49___set_sysinit_set_sym_M_TTYS_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_TTYS_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_347_T; static  _GLOBAL_347_T  global_M_TTYS_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_TTYS_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_TTYS_I )   )   } ,  };             typedef  void const   _GLOBAL_348_T; static  _GLOBAL_348_T  * const  global___set_sysuninit_set_sym_M_TTYS_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_TTYS_uninit_sys_uninit[0] ,  & global_M_TTYS_uninit_sys_uninit[1] ,  & global_M_TTYS_uninit_sys_uninit[2] ,  & global_M_TTYS_uninit_sys_uninit[3] ,  & global_M_TTYS_uninit_sys_uninit[4] ,  & global_M_TTYS_uninit_sys_uninit[5] ,  & global_M_TTYS_uninit_sys_uninit[6] ,  & global_M_TTYS_uninit_sys_uninit[7] ,  & global_M_TTYS_uninit_sys_uninit[8] ,  & global_M_TTYS_uninit_sys_uninit[9] ,  & global_M_TTYS_uninit_sys_uninit[10] ,  & global_M_TTYS_uninit_sys_uninit[11] ,  & global_M_TTYS_uninit_sys_uninit[12] ,  & global_M_TTYS_uninit_sys_uninit[13] ,  & global_M_TTYS_uninit_sys_uninit[14] ,  & global_M_TTYS_uninit_sys_uninit[15] ,  & global_M_TTYS_uninit_sys_uninit[16] ,  & global_M_TTYS_uninit_sys_uninit[17] ,  & global_M_TTYS_uninit_sys_uninit[18] ,  & global_M_TTYS_uninit_sys_uninit[19] ,  & global_M_TTYS_uninit_sys_uninit[20] ,  & global_M_TTYS_uninit_sys_uninit[21] ,  & global_M_TTYS_uninit_sys_uninit[22] ,  & global_M_TTYS_uninit_sys_uninit[23] ,  & global_M_TTYS_uninit_sys_uninit[24] ,  & global_M_TTYS_uninit_sys_uninit[25] ,  & global_M_TTYS_uninit_sys_uninit[26] ,  & global_M_TTYS_uninit_sys_uninit[27] ,  & global_M_TTYS_uninit_sys_uninit[28] ,  & global_M_TTYS_uninit_sys_uninit[29] ,  & global_M_TTYS_uninit_sys_uninit[30] ,  & global_M_TTYS_uninit_sys_uninit[31] ,  & global_M_TTYS_uninit_sys_uninit[32] ,  & global_M_TTYS_uninit_sys_uninit[33] ,  & global_M_TTYS_uninit_sys_uninit[34] ,  & global_M_TTYS_uninit_sys_uninit[35] ,  & global_M_TTYS_uninit_sys_uninit[36] ,  & global_M_TTYS_uninit_sys_uninit[37] ,  & global_M_TTYS_uninit_sys_uninit[38] ,  & global_M_TTYS_uninit_sys_uninit[39] ,  & global_M_TTYS_uninit_sys_uninit[40] ,  & global_M_TTYS_uninit_sys_uninit[41] ,  & global_M_TTYS_uninit_sys_uninit[42] ,  & global_M_TTYS_uninit_sys_uninit[43] ,  & global_M_TTYS_uninit_sys_uninit[44] ,  & global_M_TTYS_uninit_sys_uninit[45] ,  & global_M_TTYS_uninit_sys_uninit[46] ,  & global_M_TTYS_uninit_sys_uninit[47] ,  & global_M_TTYS_uninit_sys_uninit[48] ,  & global_M_TTYS_uninit_sys_uninit[49] ,  };          


typedef  struct malloc_type  _GLOBAL_349_T;  _GLOBAL_349_T  _GLOBAL_0_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_1_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_2_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_3_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_4_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_5_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_6_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_7_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_8_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_9_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_10_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_11_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_12_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_13_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_14_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_15_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_16_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_17_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_18_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_19_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_20_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_21_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_22_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_23_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_24_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_25_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_26_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_27_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_28_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_29_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_30_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_31_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_32_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_33_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_34_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_35_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_36_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_37_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_38_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_39_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_40_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_41_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_42_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_43_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_44_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_45_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_46_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_47_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_48_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ;  _GLOBAL_349_T  _GLOBAL_49_M_TEMP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "temp"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_59_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };                  typedef  struct sysinit   _GLOBAL_350_T; static  _GLOBAL_350_T  global_M_TEMP_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_TEMP_I )   )   } ,  };             typedef  void const   _GLOBAL_351_T; static  _GLOBAL_351_T  * const  _global_section_0___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[0] ;static  _GLOBAL_351_T  * const  _global_section_1___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[1] ;static  _GLOBAL_351_T  * const  _global_section_2___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[2] ;static  _GLOBAL_351_T  * const  _global_section_3___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[3] ;static  _GLOBAL_351_T  * const  _global_section_4___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[4] ;static  _GLOBAL_351_T  * const  _global_section_5___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[5] ;static  _GLOBAL_351_T  * const  _global_section_6___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[6] ;static  _GLOBAL_351_T  * const  _global_section_7___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[7] ;static  _GLOBAL_351_T  * const  _global_section_8___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[8] ;static  _GLOBAL_351_T  * const  _global_section_9___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[9] ;static  _GLOBAL_351_T  * const  _global_section_10___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[10] ;static  _GLOBAL_351_T  * const  _global_section_11___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[11] ;static  _GLOBAL_351_T  * const  _global_section_12___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[12] ;static  _GLOBAL_351_T  * const  _global_section_13___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[13] ;static  _GLOBAL_351_T  * const  _global_section_14___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[14] ;static  _GLOBAL_351_T  * const  _global_section_15___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[15] ;static  _GLOBAL_351_T  * const  _global_section_16___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[16] ;static  _GLOBAL_351_T  * const  _global_section_17___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[17] ;static  _GLOBAL_351_T  * const  _global_section_18___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[18] ;static  _GLOBAL_351_T  * const  _global_section_19___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[19] ;static  _GLOBAL_351_T  * const  _global_section_20___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[20] ;static  _GLOBAL_351_T  * const  _global_section_21___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[21] ;static  _GLOBAL_351_T  * const  _global_section_22___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[22] ;static  _GLOBAL_351_T  * const  _global_section_23___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[23] ;static  _GLOBAL_351_T  * const  _global_section_24___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[24] ;static  _GLOBAL_351_T  * const  _global_section_25___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[25] ;static  _GLOBAL_351_T  * const  _global_section_26___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[26] ;static  _GLOBAL_351_T  * const  _global_section_27___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[27] ;static  _GLOBAL_351_T  * const  _global_section_28___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[28] ;static  _GLOBAL_351_T  * const  _global_section_29___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[29] ;static  _GLOBAL_351_T  * const  _global_section_30___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[30] ;static  _GLOBAL_351_T  * const  _global_section_31___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[31] ;static  _GLOBAL_351_T  * const  _global_section_32___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[32] ;static  _GLOBAL_351_T  * const  _global_section_33___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[33] ;static  _GLOBAL_351_T  * const  _global_section_34___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[34] ;static  _GLOBAL_351_T  * const  _global_section_35___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[35] ;static  _GLOBAL_351_T  * const  _global_section_36___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[36] ;static  _GLOBAL_351_T  * const  _global_section_37___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[37] ;static  _GLOBAL_351_T  * const  _global_section_38___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[38] ;static  _GLOBAL_351_T  * const  _global_section_39___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[39] ;static  _GLOBAL_351_T  * const  _global_section_40___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[40] ;static  _GLOBAL_351_T  * const  _global_section_41___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[41] ;static  _GLOBAL_351_T  * const  _global_section_42___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[42] ;static  _GLOBAL_351_T  * const  _global_section_43___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[43] ;static  _GLOBAL_351_T  * const  _global_section_44___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[44] ;static  _GLOBAL_351_T  * const  _global_section_45___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[45] ;static  _GLOBAL_351_T  * const  _global_section_46___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[46] ;static  _GLOBAL_351_T  * const  _global_section_47___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[47] ;static  _GLOBAL_351_T  * const  _global_section_48___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[48] ;static  _GLOBAL_351_T  * const  _global_section_49___set_sysinit_set_sym_M_TEMP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_TEMP_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_352_T; static  _GLOBAL_352_T  global_M_TEMP_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_TEMP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_TEMP_I )   )   } ,  };             typedef  void const   _GLOBAL_353_T; static  _GLOBAL_353_T  * const  global___set_sysuninit_set_sym_M_TEMP_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_TEMP_uninit_sys_uninit[0] ,  & global_M_TEMP_uninit_sys_uninit[1] ,  & global_M_TEMP_uninit_sys_uninit[2] ,  & global_M_TEMP_uninit_sys_uninit[3] ,  & global_M_TEMP_uninit_sys_uninit[4] ,  & global_M_TEMP_uninit_sys_uninit[5] ,  & global_M_TEMP_uninit_sys_uninit[6] ,  & global_M_TEMP_uninit_sys_uninit[7] ,  & global_M_TEMP_uninit_sys_uninit[8] ,  & global_M_TEMP_uninit_sys_uninit[9] ,  & global_M_TEMP_uninit_sys_uninit[10] ,  & global_M_TEMP_uninit_sys_uninit[11] ,  & global_M_TEMP_uninit_sys_uninit[12] ,  & global_M_TEMP_uninit_sys_uninit[13] ,  & global_M_TEMP_uninit_sys_uninit[14] ,  & global_M_TEMP_uninit_sys_uninit[15] ,  & global_M_TEMP_uninit_sys_uninit[16] ,  & global_M_TEMP_uninit_sys_uninit[17] ,  & global_M_TEMP_uninit_sys_uninit[18] ,  & global_M_TEMP_uninit_sys_uninit[19] ,  & global_M_TEMP_uninit_sys_uninit[20] ,  & global_M_TEMP_uninit_sys_uninit[21] ,  & global_M_TEMP_uninit_sys_uninit[22] ,  & global_M_TEMP_uninit_sys_uninit[23] ,  & global_M_TEMP_uninit_sys_uninit[24] ,  & global_M_TEMP_uninit_sys_uninit[25] ,  & global_M_TEMP_uninit_sys_uninit[26] ,  & global_M_TEMP_uninit_sys_uninit[27] ,  & global_M_TEMP_uninit_sys_uninit[28] ,  & global_M_TEMP_uninit_sys_uninit[29] ,  & global_M_TEMP_uninit_sys_uninit[30] ,  & global_M_TEMP_uninit_sys_uninit[31] ,  & global_M_TEMP_uninit_sys_uninit[32] ,  & global_M_TEMP_uninit_sys_uninit[33] ,  & global_M_TEMP_uninit_sys_uninit[34] ,  & global_M_TEMP_uninit_sys_uninit[35] ,  & global_M_TEMP_uninit_sys_uninit[36] ,  & global_M_TEMP_uninit_sys_uninit[37] ,  & global_M_TEMP_uninit_sys_uninit[38] ,  & global_M_TEMP_uninit_sys_uninit[39] ,  & global_M_TEMP_uninit_sys_uninit[40] ,  & global_M_TEMP_uninit_sys_uninit[41] ,  & global_M_TEMP_uninit_sys_uninit[42] ,  & global_M_TEMP_uninit_sys_uninit[43] ,  & global_M_TEMP_uninit_sys_uninit[44] ,  & global_M_TEMP_uninit_sys_uninit[45] ,  & global_M_TEMP_uninit_sys_uninit[46] ,  & global_M_TEMP_uninit_sys_uninit[47] ,  & global_M_TEMP_uninit_sys_uninit[48] ,  & global_M_TEMP_uninit_sys_uninit[49] ,  };          
typedef  struct malloc_type  _GLOBAL_354_T;  _GLOBAL_354_T  _GLOBAL_0_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_1_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_2_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_3_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_4_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_5_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_6_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_7_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_8_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_9_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_10_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_11_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_12_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_13_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_14_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_15_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_16_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_17_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_18_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_19_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_20_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_21_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_22_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_23_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_24_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_25_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_26_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_27_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_28_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_29_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_30_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_31_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_32_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_33_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_34_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_35_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_36_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_37_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_38_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_39_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_40_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_41_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_42_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_43_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_44_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_45_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_46_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_47_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_48_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ;  _GLOBAL_354_T  _GLOBAL_49_M_IP6OPT_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6opt"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_60_A[NUM_STACKS] = { &_GLOBAL_0_M_IP6OPT_I, &_GLOBAL_1_M_IP6OPT_I, &_GLOBAL_2_M_IP6OPT_I, &_GLOBAL_3_M_IP6OPT_I, &_GLOBAL_4_M_IP6OPT_I, &_GLOBAL_5_M_IP6OPT_I, &_GLOBAL_6_M_IP6OPT_I, &_GLOBAL_7_M_IP6OPT_I, &_GLOBAL_8_M_IP6OPT_I, &_GLOBAL_9_M_IP6OPT_I, &_GLOBAL_10_M_IP6OPT_I, &_GLOBAL_11_M_IP6OPT_I, &_GLOBAL_12_M_IP6OPT_I, &_GLOBAL_13_M_IP6OPT_I, &_GLOBAL_14_M_IP6OPT_I, &_GLOBAL_15_M_IP6OPT_I, &_GLOBAL_16_M_IP6OPT_I, &_GLOBAL_17_M_IP6OPT_I, &_GLOBAL_18_M_IP6OPT_I, &_GLOBAL_19_M_IP6OPT_I, &_GLOBAL_20_M_IP6OPT_I, &_GLOBAL_21_M_IP6OPT_I, &_GLOBAL_22_M_IP6OPT_I, &_GLOBAL_23_M_IP6OPT_I, &_GLOBAL_24_M_IP6OPT_I, &_GLOBAL_25_M_IP6OPT_I, &_GLOBAL_26_M_IP6OPT_I, &_GLOBAL_27_M_IP6OPT_I, &_GLOBAL_28_M_IP6OPT_I, &_GLOBAL_29_M_IP6OPT_I, &_GLOBAL_30_M_IP6OPT_I, &_GLOBAL_31_M_IP6OPT_I, &_GLOBAL_32_M_IP6OPT_I, &_GLOBAL_33_M_IP6OPT_I, &_GLOBAL_34_M_IP6OPT_I, &_GLOBAL_35_M_IP6OPT_I, &_GLOBAL_36_M_IP6OPT_I, &_GLOBAL_37_M_IP6OPT_I, &_GLOBAL_38_M_IP6OPT_I, &_GLOBAL_39_M_IP6OPT_I, &_GLOBAL_40_M_IP6OPT_I, &_GLOBAL_41_M_IP6OPT_I, &_GLOBAL_42_M_IP6OPT_I, &_GLOBAL_43_M_IP6OPT_I, &_GLOBAL_44_M_IP6OPT_I, &_GLOBAL_45_M_IP6OPT_I, &_GLOBAL_46_M_IP6OPT_I, &_GLOBAL_47_M_IP6OPT_I, &_GLOBAL_48_M_IP6OPT_I, &_GLOBAL_49_M_IP6OPT_I, };                  typedef  struct sysinit   _GLOBAL_355_T; static  _GLOBAL_355_T  global_M_IP6OPT_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_IP6OPT_I )   )   } ,  };             typedef  void const   _GLOBAL_356_T; static  _GLOBAL_356_T  * const  _global_section_0___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[0] ;static  _GLOBAL_356_T  * const  _global_section_1___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[1] ;static  _GLOBAL_356_T  * const  _global_section_2___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[2] ;static  _GLOBAL_356_T  * const  _global_section_3___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[3] ;static  _GLOBAL_356_T  * const  _global_section_4___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[4] ;static  _GLOBAL_356_T  * const  _global_section_5___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[5] ;static  _GLOBAL_356_T  * const  _global_section_6___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[6] ;static  _GLOBAL_356_T  * const  _global_section_7___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[7] ;static  _GLOBAL_356_T  * const  _global_section_8___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[8] ;static  _GLOBAL_356_T  * const  _global_section_9___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[9] ;static  _GLOBAL_356_T  * const  _global_section_10___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[10] ;static  _GLOBAL_356_T  * const  _global_section_11___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[11] ;static  _GLOBAL_356_T  * const  _global_section_12___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[12] ;static  _GLOBAL_356_T  * const  _global_section_13___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[13] ;static  _GLOBAL_356_T  * const  _global_section_14___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[14] ;static  _GLOBAL_356_T  * const  _global_section_15___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[15] ;static  _GLOBAL_356_T  * const  _global_section_16___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[16] ;static  _GLOBAL_356_T  * const  _global_section_17___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[17] ;static  _GLOBAL_356_T  * const  _global_section_18___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[18] ;static  _GLOBAL_356_T  * const  _global_section_19___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[19] ;static  _GLOBAL_356_T  * const  _global_section_20___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[20] ;static  _GLOBAL_356_T  * const  _global_section_21___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[21] ;static  _GLOBAL_356_T  * const  _global_section_22___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[22] ;static  _GLOBAL_356_T  * const  _global_section_23___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[23] ;static  _GLOBAL_356_T  * const  _global_section_24___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[24] ;static  _GLOBAL_356_T  * const  _global_section_25___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[25] ;static  _GLOBAL_356_T  * const  _global_section_26___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[26] ;static  _GLOBAL_356_T  * const  _global_section_27___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[27] ;static  _GLOBAL_356_T  * const  _global_section_28___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[28] ;static  _GLOBAL_356_T  * const  _global_section_29___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[29] ;static  _GLOBAL_356_T  * const  _global_section_30___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[30] ;static  _GLOBAL_356_T  * const  _global_section_31___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[31] ;static  _GLOBAL_356_T  * const  _global_section_32___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[32] ;static  _GLOBAL_356_T  * const  _global_section_33___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[33] ;static  _GLOBAL_356_T  * const  _global_section_34___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[34] ;static  _GLOBAL_356_T  * const  _global_section_35___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[35] ;static  _GLOBAL_356_T  * const  _global_section_36___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[36] ;static  _GLOBAL_356_T  * const  _global_section_37___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[37] ;static  _GLOBAL_356_T  * const  _global_section_38___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[38] ;static  _GLOBAL_356_T  * const  _global_section_39___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[39] ;static  _GLOBAL_356_T  * const  _global_section_40___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[40] ;static  _GLOBAL_356_T  * const  _global_section_41___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[41] ;static  _GLOBAL_356_T  * const  _global_section_42___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[42] ;static  _GLOBAL_356_T  * const  _global_section_43___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[43] ;static  _GLOBAL_356_T  * const  _global_section_44___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[44] ;static  _GLOBAL_356_T  * const  _global_section_45___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[45] ;static  _GLOBAL_356_T  * const  _global_section_46___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[46] ;static  _GLOBAL_356_T  * const  _global_section_47___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[47] ;static  _GLOBAL_356_T  * const  _global_section_48___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[48] ;static  _GLOBAL_356_T  * const  _global_section_49___set_sysinit_set_sym_M_IP6OPT_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_IP6OPT_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_357_T; static  _GLOBAL_357_T  global_M_IP6OPT_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_IP6OPT_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_IP6OPT_I )   )   } ,  };             typedef  void const   _GLOBAL_358_T; static  _GLOBAL_358_T  * const  global___set_sysuninit_set_sym_M_IP6OPT_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_IP6OPT_uninit_sys_uninit[0] ,  & global_M_IP6OPT_uninit_sys_uninit[1] ,  & global_M_IP6OPT_uninit_sys_uninit[2] ,  & global_M_IP6OPT_uninit_sys_uninit[3] ,  & global_M_IP6OPT_uninit_sys_uninit[4] ,  & global_M_IP6OPT_uninit_sys_uninit[5] ,  & global_M_IP6OPT_uninit_sys_uninit[6] ,  & global_M_IP6OPT_uninit_sys_uninit[7] ,  & global_M_IP6OPT_uninit_sys_uninit[8] ,  & global_M_IP6OPT_uninit_sys_uninit[9] ,  & global_M_IP6OPT_uninit_sys_uninit[10] ,  & global_M_IP6OPT_uninit_sys_uninit[11] ,  & global_M_IP6OPT_uninit_sys_uninit[12] ,  & global_M_IP6OPT_uninit_sys_uninit[13] ,  & global_M_IP6OPT_uninit_sys_uninit[14] ,  & global_M_IP6OPT_uninit_sys_uninit[15] ,  & global_M_IP6OPT_uninit_sys_uninit[16] ,  & global_M_IP6OPT_uninit_sys_uninit[17] ,  & global_M_IP6OPT_uninit_sys_uninit[18] ,  & global_M_IP6OPT_uninit_sys_uninit[19] ,  & global_M_IP6OPT_uninit_sys_uninit[20] ,  & global_M_IP6OPT_uninit_sys_uninit[21] ,  & global_M_IP6OPT_uninit_sys_uninit[22] ,  & global_M_IP6OPT_uninit_sys_uninit[23] ,  & global_M_IP6OPT_uninit_sys_uninit[24] ,  & global_M_IP6OPT_uninit_sys_uninit[25] ,  & global_M_IP6OPT_uninit_sys_uninit[26] ,  & global_M_IP6OPT_uninit_sys_uninit[27] ,  & global_M_IP6OPT_uninit_sys_uninit[28] ,  & global_M_IP6OPT_uninit_sys_uninit[29] ,  & global_M_IP6OPT_uninit_sys_uninit[30] ,  & global_M_IP6OPT_uninit_sys_uninit[31] ,  & global_M_IP6OPT_uninit_sys_uninit[32] ,  & global_M_IP6OPT_uninit_sys_uninit[33] ,  & global_M_IP6OPT_uninit_sys_uninit[34] ,  & global_M_IP6OPT_uninit_sys_uninit[35] ,  & global_M_IP6OPT_uninit_sys_uninit[36] ,  & global_M_IP6OPT_uninit_sys_uninit[37] ,  & global_M_IP6OPT_uninit_sys_uninit[38] ,  & global_M_IP6OPT_uninit_sys_uninit[39] ,  & global_M_IP6OPT_uninit_sys_uninit[40] ,  & global_M_IP6OPT_uninit_sys_uninit[41] ,  & global_M_IP6OPT_uninit_sys_uninit[42] ,  & global_M_IP6OPT_uninit_sys_uninit[43] ,  & global_M_IP6OPT_uninit_sys_uninit[44] ,  & global_M_IP6OPT_uninit_sys_uninit[45] ,  & global_M_IP6OPT_uninit_sys_uninit[46] ,  & global_M_IP6OPT_uninit_sys_uninit[47] ,  & global_M_IP6OPT_uninit_sys_uninit[48] ,  & global_M_IP6OPT_uninit_sys_uninit[49] ,  };          
typedef  struct malloc_type  _GLOBAL_359_T;  _GLOBAL_359_T  _GLOBAL_0_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_1_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_2_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_3_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_4_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_5_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_6_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_7_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_8_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_9_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_10_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_11_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_12_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_13_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_14_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_15_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_16_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_17_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_18_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_19_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_20_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_21_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_22_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_23_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_24_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_25_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_26_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_27_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_28_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_29_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_30_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_31_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_32_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_33_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_34_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_35_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_36_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_37_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_38_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_39_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_40_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_41_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_42_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_43_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_44_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_45_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_46_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_47_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_48_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ;  _GLOBAL_359_T  _GLOBAL_49_M_IP6NDP_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ip6ndp"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_61_A[NUM_STACKS] = { &_GLOBAL_0_M_IP6NDP_I, &_GLOBAL_1_M_IP6NDP_I, &_GLOBAL_2_M_IP6NDP_I, &_GLOBAL_3_M_IP6NDP_I, &_GLOBAL_4_M_IP6NDP_I, &_GLOBAL_5_M_IP6NDP_I, &_GLOBAL_6_M_IP6NDP_I, &_GLOBAL_7_M_IP6NDP_I, &_GLOBAL_8_M_IP6NDP_I, &_GLOBAL_9_M_IP6NDP_I, &_GLOBAL_10_M_IP6NDP_I, &_GLOBAL_11_M_IP6NDP_I, &_GLOBAL_12_M_IP6NDP_I, &_GLOBAL_13_M_IP6NDP_I, &_GLOBAL_14_M_IP6NDP_I, &_GLOBAL_15_M_IP6NDP_I, &_GLOBAL_16_M_IP6NDP_I, &_GLOBAL_17_M_IP6NDP_I, &_GLOBAL_18_M_IP6NDP_I, &_GLOBAL_19_M_IP6NDP_I, &_GLOBAL_20_M_IP6NDP_I, &_GLOBAL_21_M_IP6NDP_I, &_GLOBAL_22_M_IP6NDP_I, &_GLOBAL_23_M_IP6NDP_I, &_GLOBAL_24_M_IP6NDP_I, &_GLOBAL_25_M_IP6NDP_I, &_GLOBAL_26_M_IP6NDP_I, &_GLOBAL_27_M_IP6NDP_I, &_GLOBAL_28_M_IP6NDP_I, &_GLOBAL_29_M_IP6NDP_I, &_GLOBAL_30_M_IP6NDP_I, &_GLOBAL_31_M_IP6NDP_I, &_GLOBAL_32_M_IP6NDP_I, &_GLOBAL_33_M_IP6NDP_I, &_GLOBAL_34_M_IP6NDP_I, &_GLOBAL_35_M_IP6NDP_I, &_GLOBAL_36_M_IP6NDP_I, &_GLOBAL_37_M_IP6NDP_I, &_GLOBAL_38_M_IP6NDP_I, &_GLOBAL_39_M_IP6NDP_I, &_GLOBAL_40_M_IP6NDP_I, &_GLOBAL_41_M_IP6NDP_I, &_GLOBAL_42_M_IP6NDP_I, &_GLOBAL_43_M_IP6NDP_I, &_GLOBAL_44_M_IP6NDP_I, &_GLOBAL_45_M_IP6NDP_I, &_GLOBAL_46_M_IP6NDP_I, &_GLOBAL_47_M_IP6NDP_I, &_GLOBAL_48_M_IP6NDP_I, &_GLOBAL_49_M_IP6NDP_I, };                  typedef  struct sysinit   _GLOBAL_360_T; static  _GLOBAL_360_T  global_M_IP6NDP_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_IP6NDP_I )   )   } ,  };             typedef  void const   _GLOBAL_361_T; static  _GLOBAL_361_T  * const  _global_section_0___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[0] ;static  _GLOBAL_361_T  * const  _global_section_1___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[1] ;static  _GLOBAL_361_T  * const  _global_section_2___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[2] ;static  _GLOBAL_361_T  * const  _global_section_3___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[3] ;static  _GLOBAL_361_T  * const  _global_section_4___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[4] ;static  _GLOBAL_361_T  * const  _global_section_5___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[5] ;static  _GLOBAL_361_T  * const  _global_section_6___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[6] ;static  _GLOBAL_361_T  * const  _global_section_7___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[7] ;static  _GLOBAL_361_T  * const  _global_section_8___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[8] ;static  _GLOBAL_361_T  * const  _global_section_9___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[9] ;static  _GLOBAL_361_T  * const  _global_section_10___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[10] ;static  _GLOBAL_361_T  * const  _global_section_11___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[11] ;static  _GLOBAL_361_T  * const  _global_section_12___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[12] ;static  _GLOBAL_361_T  * const  _global_section_13___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[13] ;static  _GLOBAL_361_T  * const  _global_section_14___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[14] ;static  _GLOBAL_361_T  * const  _global_section_15___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[15] ;static  _GLOBAL_361_T  * const  _global_section_16___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[16] ;static  _GLOBAL_361_T  * const  _global_section_17___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[17] ;static  _GLOBAL_361_T  * const  _global_section_18___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[18] ;static  _GLOBAL_361_T  * const  _global_section_19___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[19] ;static  _GLOBAL_361_T  * const  _global_section_20___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[20] ;static  _GLOBAL_361_T  * const  _global_section_21___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[21] ;static  _GLOBAL_361_T  * const  _global_section_22___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[22] ;static  _GLOBAL_361_T  * const  _global_section_23___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[23] ;static  _GLOBAL_361_T  * const  _global_section_24___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[24] ;static  _GLOBAL_361_T  * const  _global_section_25___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[25] ;static  _GLOBAL_361_T  * const  _global_section_26___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[26] ;static  _GLOBAL_361_T  * const  _global_section_27___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[27] ;static  _GLOBAL_361_T  * const  _global_section_28___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[28] ;static  _GLOBAL_361_T  * const  _global_section_29___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[29] ;static  _GLOBAL_361_T  * const  _global_section_30___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[30] ;static  _GLOBAL_361_T  * const  _global_section_31___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[31] ;static  _GLOBAL_361_T  * const  _global_section_32___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[32] ;static  _GLOBAL_361_T  * const  _global_section_33___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[33] ;static  _GLOBAL_361_T  * const  _global_section_34___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[34] ;static  _GLOBAL_361_T  * const  _global_section_35___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[35] ;static  _GLOBAL_361_T  * const  _global_section_36___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[36] ;static  _GLOBAL_361_T  * const  _global_section_37___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[37] ;static  _GLOBAL_361_T  * const  _global_section_38___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[38] ;static  _GLOBAL_361_T  * const  _global_section_39___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[39] ;static  _GLOBAL_361_T  * const  _global_section_40___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[40] ;static  _GLOBAL_361_T  * const  _global_section_41___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[41] ;static  _GLOBAL_361_T  * const  _global_section_42___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[42] ;static  _GLOBAL_361_T  * const  _global_section_43___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[43] ;static  _GLOBAL_361_T  * const  _global_section_44___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[44] ;static  _GLOBAL_361_T  * const  _global_section_45___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[45] ;static  _GLOBAL_361_T  * const  _global_section_46___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[46] ;static  _GLOBAL_361_T  * const  _global_section_47___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[47] ;static  _GLOBAL_361_T  * const  _global_section_48___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[48] ;static  _GLOBAL_361_T  * const  _global_section_49___set_sysinit_set_sym_M_IP6NDP_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_IP6NDP_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_362_T; static  _GLOBAL_362_T  global_M_IP6NDP_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_IP6NDP_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_IP6NDP_I )   )   } ,  };             typedef  void const   _GLOBAL_363_T; static  _GLOBAL_363_T  * const  global___set_sysuninit_set_sym_M_IP6NDP_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_IP6NDP_uninit_sys_uninit[0] ,  & global_M_IP6NDP_uninit_sys_uninit[1] ,  & global_M_IP6NDP_uninit_sys_uninit[2] ,  & global_M_IP6NDP_uninit_sys_uninit[3] ,  & global_M_IP6NDP_uninit_sys_uninit[4] ,  & global_M_IP6NDP_uninit_sys_uninit[5] ,  & global_M_IP6NDP_uninit_sys_uninit[6] ,  & global_M_IP6NDP_uninit_sys_uninit[7] ,  & global_M_IP6NDP_uninit_sys_uninit[8] ,  & global_M_IP6NDP_uninit_sys_uninit[9] ,  & global_M_IP6NDP_uninit_sys_uninit[10] ,  & global_M_IP6NDP_uninit_sys_uninit[11] ,  & global_M_IP6NDP_uninit_sys_uninit[12] ,  & global_M_IP6NDP_uninit_sys_uninit[13] ,  & global_M_IP6NDP_uninit_sys_uninit[14] ,  & global_M_IP6NDP_uninit_sys_uninit[15] ,  & global_M_IP6NDP_uninit_sys_uninit[16] ,  & global_M_IP6NDP_uninit_sys_uninit[17] ,  & global_M_IP6NDP_uninit_sys_uninit[18] ,  & global_M_IP6NDP_uninit_sys_uninit[19] ,  & global_M_IP6NDP_uninit_sys_uninit[20] ,  & global_M_IP6NDP_uninit_sys_uninit[21] ,  & global_M_IP6NDP_uninit_sys_uninit[22] ,  & global_M_IP6NDP_uninit_sys_uninit[23] ,  & global_M_IP6NDP_uninit_sys_uninit[24] ,  & global_M_IP6NDP_uninit_sys_uninit[25] ,  & global_M_IP6NDP_uninit_sys_uninit[26] ,  & global_M_IP6NDP_uninit_sys_uninit[27] ,  & global_M_IP6NDP_uninit_sys_uninit[28] ,  & global_M_IP6NDP_uninit_sys_uninit[29] ,  & global_M_IP6NDP_uninit_sys_uninit[30] ,  & global_M_IP6NDP_uninit_sys_uninit[31] ,  & global_M_IP6NDP_uninit_sys_uninit[32] ,  & global_M_IP6NDP_uninit_sys_uninit[33] ,  & global_M_IP6NDP_uninit_sys_uninit[34] ,  & global_M_IP6NDP_uninit_sys_uninit[35] ,  & global_M_IP6NDP_uninit_sys_uninit[36] ,  & global_M_IP6NDP_uninit_sys_uninit[37] ,  & global_M_IP6NDP_uninit_sys_uninit[38] ,  & global_M_IP6NDP_uninit_sys_uninit[39] ,  & global_M_IP6NDP_uninit_sys_uninit[40] ,  & global_M_IP6NDP_uninit_sys_uninit[41] ,  & global_M_IP6NDP_uninit_sys_uninit[42] ,  & global_M_IP6NDP_uninit_sys_uninit[43] ,  & global_M_IP6NDP_uninit_sys_uninit[44] ,  & global_M_IP6NDP_uninit_sys_uninit[45] ,  & global_M_IP6NDP_uninit_sys_uninit[46] ,  & global_M_IP6NDP_uninit_sys_uninit[47] ,  & global_M_IP6NDP_uninit_sys_uninit[48] ,  & global_M_IP6NDP_uninit_sys_uninit[49] ,  };          
typedef  struct malloc_type  _GLOBAL_364_T;  _GLOBAL_364_T  _GLOBAL_0_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_1_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_2_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_3_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_4_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_5_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_6_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_7_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_8_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_9_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_10_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_11_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_12_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_13_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_14_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_15_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_16_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_17_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_18_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_19_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_20_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_21_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_22_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_23_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_24_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_25_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_26_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_27_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_28_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_29_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_30_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_31_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_32_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_33_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_34_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_35_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_36_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_37_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_38_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_39_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_40_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_41_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_42_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_43_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_44_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_45_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_46_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_47_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_48_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ;  _GLOBAL_364_T  _GLOBAL_49_M_DEVBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "devbuf"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_62_A[NUM_STACKS] = { &_GLOBAL_0_M_DEVBUF_I, &_GLOBAL_1_M_DEVBUF_I, &_GLOBAL_2_M_DEVBUF_I, &_GLOBAL_3_M_DEVBUF_I, &_GLOBAL_4_M_DEVBUF_I, &_GLOBAL_5_M_DEVBUF_I, &_GLOBAL_6_M_DEVBUF_I, &_GLOBAL_7_M_DEVBUF_I, &_GLOBAL_8_M_DEVBUF_I, &_GLOBAL_9_M_DEVBUF_I, &_GLOBAL_10_M_DEVBUF_I, &_GLOBAL_11_M_DEVBUF_I, &_GLOBAL_12_M_DEVBUF_I, &_GLOBAL_13_M_DEVBUF_I, &_GLOBAL_14_M_DEVBUF_I, &_GLOBAL_15_M_DEVBUF_I, &_GLOBAL_16_M_DEVBUF_I, &_GLOBAL_17_M_DEVBUF_I, &_GLOBAL_18_M_DEVBUF_I, &_GLOBAL_19_M_DEVBUF_I, &_GLOBAL_20_M_DEVBUF_I, &_GLOBAL_21_M_DEVBUF_I, &_GLOBAL_22_M_DEVBUF_I, &_GLOBAL_23_M_DEVBUF_I, &_GLOBAL_24_M_DEVBUF_I, &_GLOBAL_25_M_DEVBUF_I, &_GLOBAL_26_M_DEVBUF_I, &_GLOBAL_27_M_DEVBUF_I, &_GLOBAL_28_M_DEVBUF_I, &_GLOBAL_29_M_DEVBUF_I, &_GLOBAL_30_M_DEVBUF_I, &_GLOBAL_31_M_DEVBUF_I, &_GLOBAL_32_M_DEVBUF_I, &_GLOBAL_33_M_DEVBUF_I, &_GLOBAL_34_M_DEVBUF_I, &_GLOBAL_35_M_DEVBUF_I, &_GLOBAL_36_M_DEVBUF_I, &_GLOBAL_37_M_DEVBUF_I, &_GLOBAL_38_M_DEVBUF_I, &_GLOBAL_39_M_DEVBUF_I, &_GLOBAL_40_M_DEVBUF_I, &_GLOBAL_41_M_DEVBUF_I, &_GLOBAL_42_M_DEVBUF_I, &_GLOBAL_43_M_DEVBUF_I, &_GLOBAL_44_M_DEVBUF_I, &_GLOBAL_45_M_DEVBUF_I, &_GLOBAL_46_M_DEVBUF_I, &_GLOBAL_47_M_DEVBUF_I, &_GLOBAL_48_M_DEVBUF_I, &_GLOBAL_49_M_DEVBUF_I, };                  typedef  struct sysinit   _GLOBAL_365_T; static  _GLOBAL_365_T  global_M_DEVBUF_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_DEVBUF_I )   )   } ,  };             typedef  void const   _GLOBAL_366_T; static  _GLOBAL_366_T  * const  _global_section_0___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[0] ;static  _GLOBAL_366_T  * const  _global_section_1___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[1] ;static  _GLOBAL_366_T  * const  _global_section_2___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[2] ;static  _GLOBAL_366_T  * const  _global_section_3___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[3] ;static  _GLOBAL_366_T  * const  _global_section_4___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[4] ;static  _GLOBAL_366_T  * const  _global_section_5___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[5] ;static  _GLOBAL_366_T  * const  _global_section_6___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[6] ;static  _GLOBAL_366_T  * const  _global_section_7___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[7] ;static  _GLOBAL_366_T  * const  _global_section_8___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[8] ;static  _GLOBAL_366_T  * const  _global_section_9___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[9] ;static  _GLOBAL_366_T  * const  _global_section_10___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[10] ;static  _GLOBAL_366_T  * const  _global_section_11___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[11] ;static  _GLOBAL_366_T  * const  _global_section_12___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[12] ;static  _GLOBAL_366_T  * const  _global_section_13___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[13] ;static  _GLOBAL_366_T  * const  _global_section_14___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[14] ;static  _GLOBAL_366_T  * const  _global_section_15___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[15] ;static  _GLOBAL_366_T  * const  _global_section_16___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[16] ;static  _GLOBAL_366_T  * const  _global_section_17___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[17] ;static  _GLOBAL_366_T  * const  _global_section_18___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[18] ;static  _GLOBAL_366_T  * const  _global_section_19___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[19] ;static  _GLOBAL_366_T  * const  _global_section_20___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[20] ;static  _GLOBAL_366_T  * const  _global_section_21___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[21] ;static  _GLOBAL_366_T  * const  _global_section_22___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[22] ;static  _GLOBAL_366_T  * const  _global_section_23___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[23] ;static  _GLOBAL_366_T  * const  _global_section_24___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[24] ;static  _GLOBAL_366_T  * const  _global_section_25___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[25] ;static  _GLOBAL_366_T  * const  _global_section_26___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[26] ;static  _GLOBAL_366_T  * const  _global_section_27___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[27] ;static  _GLOBAL_366_T  * const  _global_section_28___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[28] ;static  _GLOBAL_366_T  * const  _global_section_29___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[29] ;static  _GLOBAL_366_T  * const  _global_section_30___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[30] ;static  _GLOBAL_366_T  * const  _global_section_31___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[31] ;static  _GLOBAL_366_T  * const  _global_section_32___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[32] ;static  _GLOBAL_366_T  * const  _global_section_33___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[33] ;static  _GLOBAL_366_T  * const  _global_section_34___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[34] ;static  _GLOBAL_366_T  * const  _global_section_35___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[35] ;static  _GLOBAL_366_T  * const  _global_section_36___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[36] ;static  _GLOBAL_366_T  * const  _global_section_37___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[37] ;static  _GLOBAL_366_T  * const  _global_section_38___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[38] ;static  _GLOBAL_366_T  * const  _global_section_39___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[39] ;static  _GLOBAL_366_T  * const  _global_section_40___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[40] ;static  _GLOBAL_366_T  * const  _global_section_41___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[41] ;static  _GLOBAL_366_T  * const  _global_section_42___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[42] ;static  _GLOBAL_366_T  * const  _global_section_43___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[43] ;static  _GLOBAL_366_T  * const  _global_section_44___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[44] ;static  _GLOBAL_366_T  * const  _global_section_45___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[45] ;static  _GLOBAL_366_T  * const  _global_section_46___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[46] ;static  _GLOBAL_366_T  * const  _global_section_47___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[47] ;static  _GLOBAL_366_T  * const  _global_section_48___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[48] ;static  _GLOBAL_366_T  * const  _global_section_49___set_sysinit_set_sym_M_DEVBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_DEVBUF_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_367_T; static  _GLOBAL_367_T  global_M_DEVBUF_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_DEVBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_DEVBUF_I )   )   } ,  };             typedef  void const   _GLOBAL_368_T; static  _GLOBAL_368_T  * const  global___set_sysuninit_set_sym_M_DEVBUF_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_DEVBUF_uninit_sys_uninit[0] ,  & global_M_DEVBUF_uninit_sys_uninit[1] ,  & global_M_DEVBUF_uninit_sys_uninit[2] ,  & global_M_DEVBUF_uninit_sys_uninit[3] ,  & global_M_DEVBUF_uninit_sys_uninit[4] ,  & global_M_DEVBUF_uninit_sys_uninit[5] ,  & global_M_DEVBUF_uninit_sys_uninit[6] ,  & global_M_DEVBUF_uninit_sys_uninit[7] ,  & global_M_DEVBUF_uninit_sys_uninit[8] ,  & global_M_DEVBUF_uninit_sys_uninit[9] ,  & global_M_DEVBUF_uninit_sys_uninit[10] ,  & global_M_DEVBUF_uninit_sys_uninit[11] ,  & global_M_DEVBUF_uninit_sys_uninit[12] ,  & global_M_DEVBUF_uninit_sys_uninit[13] ,  & global_M_DEVBUF_uninit_sys_uninit[14] ,  & global_M_DEVBUF_uninit_sys_uninit[15] ,  & global_M_DEVBUF_uninit_sys_uninit[16] ,  & global_M_DEVBUF_uninit_sys_uninit[17] ,  & global_M_DEVBUF_uninit_sys_uninit[18] ,  & global_M_DEVBUF_uninit_sys_uninit[19] ,  & global_M_DEVBUF_uninit_sys_uninit[20] ,  & global_M_DEVBUF_uninit_sys_uninit[21] ,  & global_M_DEVBUF_uninit_sys_uninit[22] ,  & global_M_DEVBUF_uninit_sys_uninit[23] ,  & global_M_DEVBUF_uninit_sys_uninit[24] ,  & global_M_DEVBUF_uninit_sys_uninit[25] ,  & global_M_DEVBUF_uninit_sys_uninit[26] ,  & global_M_DEVBUF_uninit_sys_uninit[27] ,  & global_M_DEVBUF_uninit_sys_uninit[28] ,  & global_M_DEVBUF_uninit_sys_uninit[29] ,  & global_M_DEVBUF_uninit_sys_uninit[30] ,  & global_M_DEVBUF_uninit_sys_uninit[31] ,  & global_M_DEVBUF_uninit_sys_uninit[32] ,  & global_M_DEVBUF_uninit_sys_uninit[33] ,  & global_M_DEVBUF_uninit_sys_uninit[34] ,  & global_M_DEVBUF_uninit_sys_uninit[35] ,  & global_M_DEVBUF_uninit_sys_uninit[36] ,  & global_M_DEVBUF_uninit_sys_uninit[37] ,  & global_M_DEVBUF_uninit_sys_uninit[38] ,  & global_M_DEVBUF_uninit_sys_uninit[39] ,  & global_M_DEVBUF_uninit_sys_uninit[40] ,  & global_M_DEVBUF_uninit_sys_uninit[41] ,  & global_M_DEVBUF_uninit_sys_uninit[42] ,  & global_M_DEVBUF_uninit_sys_uninit[43] ,  & global_M_DEVBUF_uninit_sys_uninit[44] ,  & global_M_DEVBUF_uninit_sys_uninit[45] ,  & global_M_DEVBUF_uninit_sys_uninit[46] ,  & global_M_DEVBUF_uninit_sys_uninit[47] ,  & global_M_DEVBUF_uninit_sys_uninit[48] ,  & global_M_DEVBUF_uninit_sys_uninit[49] ,  };          


typedef  unsigned char  _GLOBAL_369_T;  _GLOBAL_369_T  _GLOBAL_0_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_1_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_2_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_3_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_4_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_5_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_6_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_7_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_8_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_9_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_10_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_11_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_12_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_13_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_14_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_15_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_16_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_17_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_18_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_19_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_20_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_21_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_22_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_23_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_24_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_25_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_26_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_27_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_28_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_29_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_30_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_31_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_32_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_33_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_34_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_35_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_36_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_37_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_38_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_39_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_40_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_41_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_42_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_43_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_44_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_45_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_46_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_47_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_48_reserved_majors_I [ 256 ] ;  _GLOBAL_369_T  _GLOBAL_49_reserved_majors_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_reserved_majors_I) *_GLOBAL_reserved_majors_63_A[NUM_STACKS] = { &_GLOBAL_0_reserved_majors_I, &_GLOBAL_1_reserved_majors_I, &_GLOBAL_2_reserved_majors_I, &_GLOBAL_3_reserved_majors_I, &_GLOBAL_4_reserved_majors_I, &_GLOBAL_5_reserved_majors_I, &_GLOBAL_6_reserved_majors_I, &_GLOBAL_7_reserved_majors_I, &_GLOBAL_8_reserved_majors_I, &_GLOBAL_9_reserved_majors_I, &_GLOBAL_10_reserved_majors_I, &_GLOBAL_11_reserved_majors_I, &_GLOBAL_12_reserved_majors_I, &_GLOBAL_13_reserved_majors_I, &_GLOBAL_14_reserved_majors_I, &_GLOBAL_15_reserved_majors_I, &_GLOBAL_16_reserved_majors_I, &_GLOBAL_17_reserved_majors_I, &_GLOBAL_18_reserved_majors_I, &_GLOBAL_19_reserved_majors_I, &_GLOBAL_20_reserved_majors_I, &_GLOBAL_21_reserved_majors_I, &_GLOBAL_22_reserved_majors_I, &_GLOBAL_23_reserved_majors_I, &_GLOBAL_24_reserved_majors_I, &_GLOBAL_25_reserved_majors_I, &_GLOBAL_26_reserved_majors_I, &_GLOBAL_27_reserved_majors_I, &_GLOBAL_28_reserved_majors_I, &_GLOBAL_29_reserved_majors_I, &_GLOBAL_30_reserved_majors_I, &_GLOBAL_31_reserved_majors_I, &_GLOBAL_32_reserved_majors_I, &_GLOBAL_33_reserved_majors_I, &_GLOBAL_34_reserved_majors_I, &_GLOBAL_35_reserved_majors_I, &_GLOBAL_36_reserved_majors_I, &_GLOBAL_37_reserved_majors_I, &_GLOBAL_38_reserved_majors_I, &_GLOBAL_39_reserved_majors_I, &_GLOBAL_40_reserved_majors_I, &_GLOBAL_41_reserved_majors_I, &_GLOBAL_42_reserved_majors_I, &_GLOBAL_43_reserved_majors_I, &_GLOBAL_44_reserved_majors_I, &_GLOBAL_45_reserved_majors_I, &_GLOBAL_46_reserved_majors_I, &_GLOBAL_47_reserved_majors_I, &_GLOBAL_48_reserved_majors_I, &_GLOBAL_49_reserved_majors_I, };  

typedef  char _GLOBAL_370_T;  _GLOBAL_370_T  _GLOBAL_0_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_1_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_2_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_3_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_4_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_5_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_6_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_7_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_8_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_9_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_10_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_11_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_12_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_13_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_14_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_15_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_16_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_17_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_18_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_19_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_20_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_21_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_22_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_23_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_24_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_25_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_26_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_27_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_28_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_29_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_30_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_31_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_32_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_33_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_34_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_35_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_36_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_37_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_38_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_39_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_40_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_41_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_42_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_43_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_44_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_45_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_46_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_47_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_48_ostype_I [ ]  = "???" ;  _GLOBAL_370_T  _GLOBAL_49_ostype_I [ ]  = "???" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_64_A[NUM_STACKS] = { &_GLOBAL_0_ostype_I, &_GLOBAL_1_ostype_I, &_GLOBAL_2_ostype_I, &_GLOBAL_3_ostype_I, &_GLOBAL_4_ostype_I, &_GLOBAL_5_ostype_I, &_GLOBAL_6_ostype_I, &_GLOBAL_7_ostype_I, &_GLOBAL_8_ostype_I, &_GLOBAL_9_ostype_I, &_GLOBAL_10_ostype_I, &_GLOBAL_11_ostype_I, &_GLOBAL_12_ostype_I, &_GLOBAL_13_ostype_I, &_GLOBAL_14_ostype_I, &_GLOBAL_15_ostype_I, &_GLOBAL_16_ostype_I, &_GLOBAL_17_ostype_I, &_GLOBAL_18_ostype_I, &_GLOBAL_19_ostype_I, &_GLOBAL_20_ostype_I, &_GLOBAL_21_ostype_I, &_GLOBAL_22_ostype_I, &_GLOBAL_23_ostype_I, &_GLOBAL_24_ostype_I, &_GLOBAL_25_ostype_I, &_GLOBAL_26_ostype_I, &_GLOBAL_27_ostype_I, &_GLOBAL_28_ostype_I, &_GLOBAL_29_ostype_I, &_GLOBAL_30_ostype_I, &_GLOBAL_31_ostype_I, &_GLOBAL_32_ostype_I, &_GLOBAL_33_ostype_I, &_GLOBAL_34_ostype_I, &_GLOBAL_35_ostype_I, &_GLOBAL_36_ostype_I, &_GLOBAL_37_ostype_I, &_GLOBAL_38_ostype_I, &_GLOBAL_39_ostype_I, &_GLOBAL_40_ostype_I, &_GLOBAL_41_ostype_I, &_GLOBAL_42_ostype_I, &_GLOBAL_43_ostype_I, &_GLOBAL_44_ostype_I, &_GLOBAL_45_ostype_I, &_GLOBAL_46_ostype_I, &_GLOBAL_47_ostype_I, &_GLOBAL_48_ostype_I, &_GLOBAL_49_ostype_I, };   
typedef  char _GLOBAL_371_T;  _GLOBAL_371_T  _GLOBAL_0_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_1_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_2_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_3_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_4_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_5_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_6_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_7_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_8_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_9_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_10_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_11_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_12_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_13_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_14_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_15_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_16_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_17_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_18_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_19_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_20_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_21_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_22_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_23_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_24_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_25_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_26_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_27_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_28_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_29_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_30_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_31_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_32_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_33_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_34_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_35_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_36_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_37_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_38_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_39_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_40_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_41_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_42_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_43_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_44_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_45_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_46_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_47_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_48_osrelease_I [ ]  = "???" ;  _GLOBAL_371_T  _GLOBAL_49_osrelease_I [ ]  = "???" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_65_A[NUM_STACKS] = { &_GLOBAL_0_osrelease_I, &_GLOBAL_1_osrelease_I, &_GLOBAL_2_osrelease_I, &_GLOBAL_3_osrelease_I, &_GLOBAL_4_osrelease_I, &_GLOBAL_5_osrelease_I, &_GLOBAL_6_osrelease_I, &_GLOBAL_7_osrelease_I, &_GLOBAL_8_osrelease_I, &_GLOBAL_9_osrelease_I, &_GLOBAL_10_osrelease_I, &_GLOBAL_11_osrelease_I, &_GLOBAL_12_osrelease_I, &_GLOBAL_13_osrelease_I, &_GLOBAL_14_osrelease_I, &_GLOBAL_15_osrelease_I, &_GLOBAL_16_osrelease_I, &_GLOBAL_17_osrelease_I, &_GLOBAL_18_osrelease_I, &_GLOBAL_19_osrelease_I, &_GLOBAL_20_osrelease_I, &_GLOBAL_21_osrelease_I, &_GLOBAL_22_osrelease_I, &_GLOBAL_23_osrelease_I, &_GLOBAL_24_osrelease_I, &_GLOBAL_25_osrelease_I, &_GLOBAL_26_osrelease_I, &_GLOBAL_27_osrelease_I, &_GLOBAL_28_osrelease_I, &_GLOBAL_29_osrelease_I, &_GLOBAL_30_osrelease_I, &_GLOBAL_31_osrelease_I, &_GLOBAL_32_osrelease_I, &_GLOBAL_33_osrelease_I, &_GLOBAL_34_osrelease_I, &_GLOBAL_35_osrelease_I, &_GLOBAL_36_osrelease_I, &_GLOBAL_37_osrelease_I, &_GLOBAL_38_osrelease_I, &_GLOBAL_39_osrelease_I, &_GLOBAL_40_osrelease_I, &_GLOBAL_41_osrelease_I, &_GLOBAL_42_osrelease_I, &_GLOBAL_43_osrelease_I, &_GLOBAL_44_osrelease_I, &_GLOBAL_45_osrelease_I, &_GLOBAL_46_osrelease_I, &_GLOBAL_47_osrelease_I, &_GLOBAL_48_osrelease_I, &_GLOBAL_49_osrelease_I, };   
typedef  char _GLOBAL_372_T;  _GLOBAL_372_T  _GLOBAL_0_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_1_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_2_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_3_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_4_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_5_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_6_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_7_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_8_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_9_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_10_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_11_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_12_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_13_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_14_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_15_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_16_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_17_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_18_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_19_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_20_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_21_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_22_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_23_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_24_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_25_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_26_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_27_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_28_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_29_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_30_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_31_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_32_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_33_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_34_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_35_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_36_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_37_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_38_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_39_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_40_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_41_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_42_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_43_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_44_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_45_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_46_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_47_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_48_machine_I [ ]  = "???" ;  _GLOBAL_372_T  _GLOBAL_49_machine_I [ ]  = "???" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_66_A[NUM_STACKS] = { &_GLOBAL_0_machine_I, &_GLOBAL_1_machine_I, &_GLOBAL_2_machine_I, &_GLOBAL_3_machine_I, &_GLOBAL_4_machine_I, &_GLOBAL_5_machine_I, &_GLOBAL_6_machine_I, &_GLOBAL_7_machine_I, &_GLOBAL_8_machine_I, &_GLOBAL_9_machine_I, &_GLOBAL_10_machine_I, &_GLOBAL_11_machine_I, &_GLOBAL_12_machine_I, &_GLOBAL_13_machine_I, &_GLOBAL_14_machine_I, &_GLOBAL_15_machine_I, &_GLOBAL_16_machine_I, &_GLOBAL_17_machine_I, &_GLOBAL_18_machine_I, &_GLOBAL_19_machine_I, &_GLOBAL_20_machine_I, &_GLOBAL_21_machine_I, &_GLOBAL_22_machine_I, &_GLOBAL_23_machine_I, &_GLOBAL_24_machine_I, &_GLOBAL_25_machine_I, &_GLOBAL_26_machine_I, &_GLOBAL_27_machine_I, &_GLOBAL_28_machine_I, &_GLOBAL_29_machine_I, &_GLOBAL_30_machine_I, &_GLOBAL_31_machine_I, &_GLOBAL_32_machine_I, &_GLOBAL_33_machine_I, &_GLOBAL_34_machine_I, &_GLOBAL_35_machine_I, &_GLOBAL_36_machine_I, &_GLOBAL_37_machine_I, &_GLOBAL_38_machine_I, &_GLOBAL_39_machine_I, &_GLOBAL_40_machine_I, &_GLOBAL_41_machine_I, &_GLOBAL_42_machine_I, &_GLOBAL_43_machine_I, &_GLOBAL_44_machine_I, &_GLOBAL_45_machine_I, &_GLOBAL_46_machine_I, &_GLOBAL_47_machine_I, &_GLOBAL_48_machine_I, &_GLOBAL_49_machine_I, };   

typedef  void  ( *_GLOBAL_374_T  )  ( struct ifnet   *  , int   ) ;  _GLOBAL_374_T global_vlan_link_state_p[NUM_STACKS];     

typedef  struct mtx  _GLOBAL_375_T;  _GLOBAL_375_T  global_sched_lock[NUM_STACKS];   



typedef  struct sysctl_oid_list  _GLOBAL_376_T;  _GLOBAL_376_T  global_sysctl__net_inet6_ipsec6_children[NUM_STACKS];  _GLOBAL_376_T  global_sysctl__net_inet_ipsec_children[NUM_STACKS];   
                       

