# 1 "freebsd5/kern/subr_taskqueue.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/subr_taskqueue.c"
# 27 "freebsd5/kern/subr_taskqueue.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 28 "freebsd5/kern/subr_taskqueue.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/subr_taskqueue.c,v 1.24 2004/08/08 02:37:21 jmg Exp $" "\"");

# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
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

# 31 "freebsd5/kern/subr_taskqueue.c" 2
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
# 32 "freebsd5/kern/subr_taskqueue.c" 2
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




typedef  device_t  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_root_bus[NUM_STACKS];   
typedef  devclass_t  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_root_devclass[NUM_STACKS];   
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
typedef  struct kobjop_desc   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_device_probe_desc[NUM_STACKS];    

typedef int device_probe_t(device_t dev);
# 102 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_PROBE(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_probe_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_probe_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_device_identify_desc[NUM_STACKS];    

typedef void device_identify_t(driver_t *driver, device_t parent);
# 139 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline void DEVICE_IDENTIFY(driver_t *driver, device_t parent)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_identify_desc[get_stack_id()]; kobj_method_t **_cep = &driver->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(driver->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((device_identify_t *) _m)(driver, parent);
}


typedef  struct kobjop_desc   _GLOBAL_44_T; extern  _GLOBAL_44_T  global_device_attach_desc[NUM_STACKS];    

typedef int device_attach_t(device_t dev);
# 174 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_ATTACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_attach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_attach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_device_detach_desc[NUM_STACKS];    

typedef int device_detach_t(device_t dev);
# 208 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_DETACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_detach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_detach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_device_shutdown_desc[NUM_STACKS];    

typedef int device_shutdown_t(device_t dev);
# 234 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SHUTDOWN(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_shutdown_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_shutdown_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_47_T; extern  _GLOBAL_47_T  global_device_suspend_desc[NUM_STACKS];    

typedef int device_suspend_t(device_t dev);
# 269 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SUSPEND(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_suspend_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_suspend_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_48_T; extern  _GLOBAL_48_T  global_device_resume_desc[NUM_STACKS];    

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
typedef  struct kobjop_desc   _GLOBAL_49_T; extern  _GLOBAL_49_T  global_bus_print_child_desc[NUM_STACKS];    

typedef int bus_print_child_t(device_t _dev, device_t _child);
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_PRINT_CHILD(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_print_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_print_child_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_50_T; extern  _GLOBAL_50_T  global_bus_probe_nomatch_desc[NUM_STACKS];    

typedef void bus_probe_nomatch_t(device_t _dev, device_t _child);
# 63 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_PROBE_NOMATCH(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_probe_nomatch_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_probe_nomatch_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_bus_read_ivar_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_bus_write_ivar_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_53_T; extern  _GLOBAL_53_T  global_bus_child_detached_desc[NUM_STACKS];    

typedef void bus_child_detached_t(device_t _dev, device_t _child);
# 156 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_CHILD_DETACHED(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_detached_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_child_detached_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_bus_driver_added_desc[NUM_STACKS];    

typedef void bus_driver_added_t(device_t _dev, driver_t *_driver);
# 179 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DRIVER_ADDED(device_t _dev, driver_t *_driver)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_driver_added_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_driver_added_t *) _m)(_dev, _driver);
}


typedef  struct kobjop_desc   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_bus_add_child_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_bus_alloc_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_bus_activate_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_bus_deactivate_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_bus_release_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_bus_setup_intr_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_61_T; extern  _GLOBAL_61_T  global_bus_teardown_intr_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_bus_set_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_bus_get_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_bus_delete_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_bus_get_resource_list_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_bus_child_present_desc[NUM_STACKS];    

typedef int bus_child_present_t(device_t _dev, device_t _child);
# 546 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PRESENT(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_present_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_present_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_bus_child_pnpinfo_str_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_bus_child_location_str_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_bus_config_intr_desc[NUM_STACKS];    

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
# 33 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
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
# 33 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 34 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 2







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
typedef  struct ithd   _GLOBAL_70_T; extern  _GLOBAL_70_T  * global_tty_ithd[NUM_STACKS];    
typedef  struct ithd   _GLOBAL_71_T; extern  _GLOBAL_71_T  * global_clk_ithd[NUM_STACKS];    
typedef  void  _GLOBAL_72_T; extern  _GLOBAL_72_T  * global_net_ih[NUM_STACKS];   
typedef  void  _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_softclock_ih[NUM_STACKS];   
typedef  void  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_vm_ih[NUM_STACKS];   


typedef  u_long  _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_eintrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrcnt_I) *_GLOBAL_eintrcnt_13_A[NUM_STACKS];  
typedef  char  _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_eintrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrnames_I) *_GLOBAL_eintrnames_14_A[NUM_STACKS];  
typedef  u_long  _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_intrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrcnt_I) *_GLOBAL_intrcnt_15_A[NUM_STACKS];  
typedef  char  _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_1_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_2_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_3_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_4_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_5_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_6_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_7_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_8_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_9_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_10_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_11_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_12_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_13_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_14_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_15_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_16_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_17_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_18_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_19_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_20_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_21_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_22_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_23_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_24_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_25_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_26_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_27_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_28_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_29_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_30_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_31_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_32_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_33_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_34_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_35_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_36_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_37_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_38_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_39_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_40_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_41_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_42_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_43_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_44_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_45_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_46_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_47_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_48_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_49_intrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrnames_I) *_GLOBAL_intrnames_16_A[NUM_STACKS];  




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
# 34 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_17_A[NUM_STACKS];  
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_82_T; extern  _GLOBAL_82_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_18_A[NUM_STACKS];  
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_19_A[NUM_STACKS];  

typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_tz_dsttime[NUM_STACKS];   
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
# 35 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kthread.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/kthread.h"
struct kproc_desc {
 char *arg0;
 void (*func)(void);
 struct proc **global_procpp;
};

void kproc_shutdown(void *, int);
void kproc_start(const void *);
int kthread_create(void (*)(void *), void *, struct proc **,
     int flags, int pages, const char *, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
void kthread_exit(int) __attribute__((__noreturn__)) ;
int kthread_resume(struct proc *);
int kthread_suspend(struct proc *, int);
void kthread_suspend_check(struct proc *);
# 36 "freebsd5/kern/subr_taskqueue.c" 2
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
typedef  struct lock_class   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_lock_class_sx[NUM_STACKS];    

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
# 37 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
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
typedef  struct malloc_type   _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_20_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_21_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_22_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_23_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_24_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_25_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_malloc_mtx[NUM_STACKS];    


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
# 38 "freebsd5/kern/subr_taskqueue.c" 2
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


typedef  struct vmmeter   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_106_T; extern  _GLOBAL_106_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_107_T; extern  _GLOBAL_107_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_26_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_108_T; extern  _GLOBAL_108_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_27_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_110_T; extern  _GLOBAL_110_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_110_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_28_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_111_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_113_T; extern  _GLOBAL_113_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_115_T; extern  _GLOBAL_115_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_116_T; extern  _GLOBAL_116_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 39 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
# 1 "freebsd5/freebsd/usr/include/sys/_task.h" 1
# 40 "freebsd5/freebsd/usr/include/sys/_task.h"
typedef void task_fn_t(void *context, int pending);

struct task {
 struct { struct task *stqe_next; } ta_link;
 int ta_pending;
 int ta_priority;
 task_fn_t *ta_func;
 void *ta_context;
};
# 38 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h" 2

struct taskqueue;
# 48 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
typedef void (*taskqueue_enqueue_fn)(void *context);

struct taskqueue *taskqueue_create(const char *name, int mflags,
        taskqueue_enqueue_fn enqueue,
        void *context);
int taskqueue_enqueue(struct taskqueue *queue, struct task *task);
struct taskqueue *taskqueue_find(const char *name);
void taskqueue_free(struct taskqueue *queue);
void taskqueue_run(struct taskqueue *queue);




void taskqueue_thread_loop(void *arg);
void taskqueue_thread_enqueue(void *context);
# 110 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
typedef  struct taskqueue   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_taskqueue_swi_giant[NUM_STACKS];    
typedef  struct taskqueue   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_taskqueue_swi[NUM_STACKS];    





typedef  struct taskqueue   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_taskqueue_thread[NUM_STACKS];    







typedef  struct taskqueue   _GLOBAL_123_T; extern  _GLOBAL_123_T  * global_taskqueue_fast[NUM_STACKS];    
int taskqueue_enqueue_fast(struct taskqueue *queue, struct task *task);
# 40 "freebsd5/kern/subr_taskqueue.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/unistd.h" 1
# 41 "freebsd5/kern/subr_taskqueue.c" 2

typedef  struct malloc_type   _GLOBAL_124_T; static  _GLOBAL_124_T  _GLOBAL_0_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_1_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_2_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_3_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_4_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_5_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_6_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_7_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_8_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_9_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_10_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_11_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_12_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_13_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_14_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_15_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_16_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_17_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_18_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_19_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_20_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_21_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_22_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_23_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_24_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_25_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_26_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_27_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_28_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_29_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_30_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_31_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_32_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_33_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_34_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_35_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_36_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_37_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_38_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_39_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_40_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_41_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_42_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_43_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_44_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_45_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_46_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_47_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_48_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static  _GLOBAL_124_T  _GLOBAL_49_M_TASKQUEUE_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "taskqueue"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TASKQUEUE_I) *_GLOBAL_M_TASKQUEUE_29_A[NUM_STACKS] = { &_GLOBAL_0_M_TASKQUEUE_I, &_GLOBAL_1_M_TASKQUEUE_I, &_GLOBAL_2_M_TASKQUEUE_I, &_GLOBAL_3_M_TASKQUEUE_I, &_GLOBAL_4_M_TASKQUEUE_I, &_GLOBAL_5_M_TASKQUEUE_I, &_GLOBAL_6_M_TASKQUEUE_I, &_GLOBAL_7_M_TASKQUEUE_I, &_GLOBAL_8_M_TASKQUEUE_I, &_GLOBAL_9_M_TASKQUEUE_I, &_GLOBAL_10_M_TASKQUEUE_I, &_GLOBAL_11_M_TASKQUEUE_I, &_GLOBAL_12_M_TASKQUEUE_I, &_GLOBAL_13_M_TASKQUEUE_I, &_GLOBAL_14_M_TASKQUEUE_I, &_GLOBAL_15_M_TASKQUEUE_I, &_GLOBAL_16_M_TASKQUEUE_I, &_GLOBAL_17_M_TASKQUEUE_I, &_GLOBAL_18_M_TASKQUEUE_I, &_GLOBAL_19_M_TASKQUEUE_I, &_GLOBAL_20_M_TASKQUEUE_I, &_GLOBAL_21_M_TASKQUEUE_I, &_GLOBAL_22_M_TASKQUEUE_I, &_GLOBAL_23_M_TASKQUEUE_I, &_GLOBAL_24_M_TASKQUEUE_I, &_GLOBAL_25_M_TASKQUEUE_I, &_GLOBAL_26_M_TASKQUEUE_I, &_GLOBAL_27_M_TASKQUEUE_I, &_GLOBAL_28_M_TASKQUEUE_I, &_GLOBAL_29_M_TASKQUEUE_I, &_GLOBAL_30_M_TASKQUEUE_I, &_GLOBAL_31_M_TASKQUEUE_I, &_GLOBAL_32_M_TASKQUEUE_I, &_GLOBAL_33_M_TASKQUEUE_I, &_GLOBAL_34_M_TASKQUEUE_I, &_GLOBAL_35_M_TASKQUEUE_I, &_GLOBAL_36_M_TASKQUEUE_I, &_GLOBAL_37_M_TASKQUEUE_I, &_GLOBAL_38_M_TASKQUEUE_I, &_GLOBAL_39_M_TASKQUEUE_I, &_GLOBAL_40_M_TASKQUEUE_I, &_GLOBAL_41_M_TASKQUEUE_I, &_GLOBAL_42_M_TASKQUEUE_I, &_GLOBAL_43_M_TASKQUEUE_I, &_GLOBAL_44_M_TASKQUEUE_I, &_GLOBAL_45_M_TASKQUEUE_I, &_GLOBAL_46_M_TASKQUEUE_I, &_GLOBAL_47_M_TASKQUEUE_I, &_GLOBAL_48_M_TASKQUEUE_I, &_GLOBAL_49_M_TASKQUEUE_I, };                   typedef  struct sysinit   _GLOBAL_125_T; static  _GLOBAL_125_T  global_M_TASKQUEUE_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_TASKQUEUE_I )   )   } ,  };             typedef  void const   _GLOBAL_126_T; static  _GLOBAL_126_T  * const  _global_section_0___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[0] ;static  _GLOBAL_126_T  * const  _global_section_1___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[1] ;static  _GLOBAL_126_T  * const  _global_section_2___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[2] ;static  _GLOBAL_126_T  * const  _global_section_3___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[3] ;static  _GLOBAL_126_T  * const  _global_section_4___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[4] ;static  _GLOBAL_126_T  * const  _global_section_5___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[5] ;static  _GLOBAL_126_T  * const  _global_section_6___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[6] ;static  _GLOBAL_126_T  * const  _global_section_7___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[7] ;static  _GLOBAL_126_T  * const  _global_section_8___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[8] ;static  _GLOBAL_126_T  * const  _global_section_9___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[9] ;static  _GLOBAL_126_T  * const  _global_section_10___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[10] ;static  _GLOBAL_126_T  * const  _global_section_11___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[11] ;static  _GLOBAL_126_T  * const  _global_section_12___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[12] ;static  _GLOBAL_126_T  * const  _global_section_13___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[13] ;static  _GLOBAL_126_T  * const  _global_section_14___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[14] ;static  _GLOBAL_126_T  * const  _global_section_15___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[15] ;static  _GLOBAL_126_T  * const  _global_section_16___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[16] ;static  _GLOBAL_126_T  * const  _global_section_17___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[17] ;static  _GLOBAL_126_T  * const  _global_section_18___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[18] ;static  _GLOBAL_126_T  * const  _global_section_19___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[19] ;static  _GLOBAL_126_T  * const  _global_section_20___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[20] ;static  _GLOBAL_126_T  * const  _global_section_21___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[21] ;static  _GLOBAL_126_T  * const  _global_section_22___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[22] ;static  _GLOBAL_126_T  * const  _global_section_23___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[23] ;static  _GLOBAL_126_T  * const  _global_section_24___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[24] ;static  _GLOBAL_126_T  * const  _global_section_25___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[25] ;static  _GLOBAL_126_T  * const  _global_section_26___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[26] ;static  _GLOBAL_126_T  * const  _global_section_27___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[27] ;static  _GLOBAL_126_T  * const  _global_section_28___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[28] ;static  _GLOBAL_126_T  * const  _global_section_29___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[29] ;static  _GLOBAL_126_T  * const  _global_section_30___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[30] ;static  _GLOBAL_126_T  * const  _global_section_31___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[31] ;static  _GLOBAL_126_T  * const  _global_section_32___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[32] ;static  _GLOBAL_126_T  * const  _global_section_33___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[33] ;static  _GLOBAL_126_T  * const  _global_section_34___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[34] ;static  _GLOBAL_126_T  * const  _global_section_35___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[35] ;static  _GLOBAL_126_T  * const  _global_section_36___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[36] ;static  _GLOBAL_126_T  * const  _global_section_37___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[37] ;static  _GLOBAL_126_T  * const  _global_section_38___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[38] ;static  _GLOBAL_126_T  * const  _global_section_39___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[39] ;static  _GLOBAL_126_T  * const  _global_section_40___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[40] ;static  _GLOBAL_126_T  * const  _global_section_41___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[41] ;static  _GLOBAL_126_T  * const  _global_section_42___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[42] ;static  _GLOBAL_126_T  * const  _global_section_43___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[43] ;static  _GLOBAL_126_T  * const  _global_section_44___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[44] ;static  _GLOBAL_126_T  * const  _global_section_45___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[45] ;static  _GLOBAL_126_T  * const  _global_section_46___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[46] ;static  _GLOBAL_126_T  * const  _global_section_47___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[47] ;static  _GLOBAL_126_T  * const  _global_section_48___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[48] ;static  _GLOBAL_126_T  * const  _global_section_49___set_sysinit_set_sym_M_TASKQUEUE_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_TASKQUEUE_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_127_T; static  _GLOBAL_127_T  global_M_TASKQUEUE_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_TASKQUEUE_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_TASKQUEUE_I )   )   } ,  };             typedef  void const   _GLOBAL_128_T; static  _GLOBAL_128_T  * const  global___set_sysuninit_set_sym_M_TASKQUEUE_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_TASKQUEUE_uninit_sys_uninit[0] ,  & global_M_TASKQUEUE_uninit_sys_uninit[1] ,  & global_M_TASKQUEUE_uninit_sys_uninit[2] ,  & global_M_TASKQUEUE_uninit_sys_uninit[3] ,  & global_M_TASKQUEUE_uninit_sys_uninit[4] ,  & global_M_TASKQUEUE_uninit_sys_uninit[5] ,  & global_M_TASKQUEUE_uninit_sys_uninit[6] ,  & global_M_TASKQUEUE_uninit_sys_uninit[7] ,  & global_M_TASKQUEUE_uninit_sys_uninit[8] ,  & global_M_TASKQUEUE_uninit_sys_uninit[9] ,  & global_M_TASKQUEUE_uninit_sys_uninit[10] ,  & global_M_TASKQUEUE_uninit_sys_uninit[11] ,  & global_M_TASKQUEUE_uninit_sys_uninit[12] ,  & global_M_TASKQUEUE_uninit_sys_uninit[13] ,  & global_M_TASKQUEUE_uninit_sys_uninit[14] ,  & global_M_TASKQUEUE_uninit_sys_uninit[15] ,  & global_M_TASKQUEUE_uninit_sys_uninit[16] ,  & global_M_TASKQUEUE_uninit_sys_uninit[17] ,  & global_M_TASKQUEUE_uninit_sys_uninit[18] ,  & global_M_TASKQUEUE_uninit_sys_uninit[19] ,  & global_M_TASKQUEUE_uninit_sys_uninit[20] ,  & global_M_TASKQUEUE_uninit_sys_uninit[21] ,  & global_M_TASKQUEUE_uninit_sys_uninit[22] ,  & global_M_TASKQUEUE_uninit_sys_uninit[23] ,  & global_M_TASKQUEUE_uninit_sys_uninit[24] ,  & global_M_TASKQUEUE_uninit_sys_uninit[25] ,  & global_M_TASKQUEUE_uninit_sys_uninit[26] ,  & global_M_TASKQUEUE_uninit_sys_uninit[27] ,  & global_M_TASKQUEUE_uninit_sys_uninit[28] ,  & global_M_TASKQUEUE_uninit_sys_uninit[29] ,  & global_M_TASKQUEUE_uninit_sys_uninit[30] ,  & global_M_TASKQUEUE_uninit_sys_uninit[31] ,  & global_M_TASKQUEUE_uninit_sys_uninit[32] ,  & global_M_TASKQUEUE_uninit_sys_uninit[33] ,  & global_M_TASKQUEUE_uninit_sys_uninit[34] ,  & global_M_TASKQUEUE_uninit_sys_uninit[35] ,  & global_M_TASKQUEUE_uninit_sys_uninit[36] ,  & global_M_TASKQUEUE_uninit_sys_uninit[37] ,  & global_M_TASKQUEUE_uninit_sys_uninit[38] ,  & global_M_TASKQUEUE_uninit_sys_uninit[39] ,  & global_M_TASKQUEUE_uninit_sys_uninit[40] ,  & global_M_TASKQUEUE_uninit_sys_uninit[41] ,  & global_M_TASKQUEUE_uninit_sys_uninit[42] ,  & global_M_TASKQUEUE_uninit_sys_uninit[43] ,  & global_M_TASKQUEUE_uninit_sys_uninit[44] ,  & global_M_TASKQUEUE_uninit_sys_uninit[45] ,  & global_M_TASKQUEUE_uninit_sys_uninit[46] ,  & global_M_TASKQUEUE_uninit_sys_uninit[47] ,  & global_M_TASKQUEUE_uninit_sys_uninit[48] ,  & global_M_TASKQUEUE_uninit_sys_uninit[49] ,  };          
typedef  void  _GLOBAL_129_T; static  _GLOBAL_129_T  * global_taskqueue_giant_ih[NUM_STACKS];   
typedef  void  _GLOBAL_130_T; static  _GLOBAL_130_T  * global_taskqueue_ih[NUM_STACKS];   
typedef  struct taskqueue_list { struct taskqueue   * stqh_first  ;  struct taskqueue   * *  stqh_last  ;   }   _GLOBAL_131_T; static  _GLOBAL_131_T  global_taskqueue_queues[NUM_STACKS];            
typedef  struct mtx   _GLOBAL_132_T; static  _GLOBAL_132_T  global_taskqueue_queues_mutex[NUM_STACKS];    

struct taskqueue {
 struct { struct taskqueue *stqe_next; } tq_link;
 struct { struct task *stqh_first; struct task **stqh_last; } tq_queue;
 const char *tq_name;
 taskqueue_enqueue_fn tq_enqueue;
 void *tq_context;
 struct mtx tq_mutex;
};

static void init_taskqueue_list(void *data);

static void
init_taskqueue_list(void *data __attribute__((__unused__)) )
{

 mtx_init(&global_taskqueue_queues_mutex[get_stack_id()], "taskqueue list", ((void *)0), 0x00000000);
 do { (((&global_taskqueue_queues[get_stack_id()]))->stqh_first) = ((void *)0); (&global_taskqueue_queues[get_stack_id()])->stqh_last = &(((&global_taskqueue_queues[get_stack_id()]))->stqh_first); } while (0);
}
typedef  struct sysinit   _GLOBAL_133_T; static  _GLOBAL_133_T  global_taskqueue_list_sys_init[NUM_STACKS] = {  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) init_taskqueue_list    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 66 "freebsd5/kern/subr_taskqueue.c"
          typedef  void const   _GLOBAL_134_T; static  _GLOBAL_134_T  * const  _global_section_0___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[0] ;static  _GLOBAL_134_T  * const  _global_section_1___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[1] ;static  _GLOBAL_134_T  * const  _global_section_2___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[2] ;static  _GLOBAL_134_T  * const  _global_section_3___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[3] ;static  _GLOBAL_134_T  * const  _global_section_4___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[4] ;static  _GLOBAL_134_T  * const  _global_section_5___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[5] ;static  _GLOBAL_134_T  * const  _global_section_6___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[6] ;static  _GLOBAL_134_T  * const  _global_section_7___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[7] ;static  _GLOBAL_134_T  * const  _global_section_8___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[8] ;static  _GLOBAL_134_T  * const  _global_section_9___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[9] ;static  _GLOBAL_134_T  * const  _global_section_10___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[10] ;static  _GLOBAL_134_T  * const  _global_section_11___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[11] ;static  _GLOBAL_134_T  * const  _global_section_12___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[12] ;static  _GLOBAL_134_T  * const  _global_section_13___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[13] ;static  _GLOBAL_134_T  * const  _global_section_14___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[14] ;static  _GLOBAL_134_T  * const  _global_section_15___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[15] ;static  _GLOBAL_134_T  * const  _global_section_16___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[16] ;static  _GLOBAL_134_T  * const  _global_section_17___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[17] ;static  _GLOBAL_134_T  * const  _global_section_18___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[18] ;static  _GLOBAL_134_T  * const  _global_section_19___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[19] ;static  _GLOBAL_134_T  * const  _global_section_20___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[20] ;static  _GLOBAL_134_T  * const  _global_section_21___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[21] ;static  _GLOBAL_134_T  * const  _global_section_22___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[22] ;static  _GLOBAL_134_T  * const  _global_section_23___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[23] ;static  _GLOBAL_134_T  * const  _global_section_24___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[24] ;static  _GLOBAL_134_T  * const  _global_section_25___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[25] ;static  _GLOBAL_134_T  * const  _global_section_26___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[26] ;static  _GLOBAL_134_T  * const  _global_section_27___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[27] ;static  _GLOBAL_134_T  * const  _global_section_28___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[28] ;static  _GLOBAL_134_T  * const  _global_section_29___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[29] ;static  _GLOBAL_134_T  * const  _global_section_30___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[30] ;static  _GLOBAL_134_T  * const  _global_section_31___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[31] ;static  _GLOBAL_134_T  * const  _global_section_32___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[32] ;static  _GLOBAL_134_T  * const  _global_section_33___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[33] ;static  _GLOBAL_134_T  * const  _global_section_34___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[34] ;static  _GLOBAL_134_T  * const  _global_section_35___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[35] ;static  _GLOBAL_134_T  * const  _global_section_36___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[36] ;static  _GLOBAL_134_T  * const  _global_section_37___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[37] ;static  _GLOBAL_134_T  * const  _global_section_38___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[38] ;static  _GLOBAL_134_T  * const  _global_section_39___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[39] ;static  _GLOBAL_134_T  * const  _global_section_40___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[40] ;static  _GLOBAL_134_T  * const  _global_section_41___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[41] ;static  _GLOBAL_134_T  * const  _global_section_42___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[42] ;static  _GLOBAL_134_T  * const  _global_section_43___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[43] ;static  _GLOBAL_134_T  * const  _global_section_44___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[44] ;static  _GLOBAL_134_T  * const  _global_section_45___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[45] ;static  _GLOBAL_134_T  * const  _global_section_46___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[46] ;static  _GLOBAL_134_T  * const  _global_section_47___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[47] ;static  _GLOBAL_134_T  * const  _global_section_48___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[48] ;static  _GLOBAL_134_T  * const  _global_section_49___set_sysinit_set_sym_taskqueue_list_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_taskqueue_list_sys_init[49] ;    
 
# 66 "freebsd5/kern/subr_taskqueue.c"
    
         ;

struct taskqueue *
taskqueue_create(const char *name, int mflags,
   taskqueue_enqueue_fn enqueue, void *context)
{
 struct taskqueue *queue;

 queue = nsc_malloc(sizeof(struct taskqueue), (*_GLOBAL_M_TASKQUEUE_29_A[get_stack_id()]), mflags | 0x0100);
 if (!queue)
  return 0;

 do { (((&queue->tq_queue))->stqh_first) = ((void *)0); (&queue->tq_queue)->stqh_last = &(((&queue->tq_queue))->stqh_first); } while (0);
 queue->tq_name = name;
 queue->tq_enqueue = enqueue;
 queue->tq_context = context;
 mtx_init(&queue->tq_mutex, "taskqueue", ((void *)0), 0x00000000);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { (((queue))->tq_link.stqe_next) = ((void *)0); *(&global_taskqueue_queues[get_stack_id()])->stqh_last = (queue); (&global_taskqueue_queues[get_stack_id()])->stqh_last = &(((queue))->tq_link.stqe_next); } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

 return queue;
}

void
taskqueue_free(struct taskqueue *queue)
{

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { if ((((&global_taskqueue_queues[get_stack_id()]))->stqh_first) == (queue)) { do { if ((((((&global_taskqueue_queues[get_stack_id()])))->stqh_first) = ((((((&global_taskqueue_queues[get_stack_id()])))->stqh_first))->tq_link.stqe_next)) == ((void *)0)) ((&global_taskqueue_queues[get_stack_id()]))->stqh_last = &((((&global_taskqueue_queues[get_stack_id()])))->stqh_first); } while (0); } else { struct taskqueue *curelm = (((&global_taskqueue_queues[get_stack_id()]))->stqh_first); while (((curelm)->tq_link.stqe_next) != (queue)) curelm = ((curelm)->tq_link.stqe_next); if ((((curelm)->tq_link.stqe_next) = ((((curelm)->tq_link.stqe_next))->tq_link.stqe_next)) == ((void *)0)) (&global_taskqueue_queues[get_stack_id()])->stqh_last = &(((curelm))->tq_link.stqe_next); } } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&queue->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 taskqueue_run(queue);
 mtx_destroy(&queue->tq_mutex);
 nsc_free(queue, (*_GLOBAL_M_TASKQUEUE_29_A[get_stack_id()]));
}




struct taskqueue *
taskqueue_find(const char *name)
{
 struct taskqueue *queue;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for((queue) = (((&global_taskqueue_queues[get_stack_id()]))->stqh_first); (queue); (queue) = (((queue))->tq_link.stqe_next)) {
  if (strcmp(queue->tq_name, name) == 0) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&queue->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   do { if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   return queue;
  }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return ((void *)0);
}

int
taskqueue_enqueue(struct taskqueue *queue, struct task *task)
{
 struct task *ins;
 struct task *prev;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&queue->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);




 if (task->ta_pending) {
  task->ta_pending++;
  do { if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&queue->tq_mutex))), ((0)), (((void *)0)), (0)); } while (0);
  return 0;
 }




 prev = ((((&queue->tq_queue))->stqh_first == ((void *)0)) ? ((void *)0) : ((struct task *) ((char *)((&queue->tq_queue)->stqh_last) - ((size_t)(&((struct task *)0)->ta_link)))));
 if (!prev || prev->ta_priority >= task->ta_priority) {
  do { (((task))->ta_link.stqe_next) = ((void *)0); *(&queue->tq_queue)->stqh_last = (task); (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); } while (0);
 } else {
  prev = 0;
  for (ins = ((&queue->tq_queue)->stqh_first); ins;
       prev = ins, ins = ((ins)->ta_link.stqe_next))
   if (ins->ta_priority < task->ta_priority)
    break;

  if (prev)
   do { if (((((task))->ta_link.stqe_next) = (((prev))->ta_link.stqe_next)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); (((prev))->ta_link.stqe_next) = (task); } while (0);
  else
   do { if (((((task))->ta_link.stqe_next) = (((&queue->tq_queue))->stqh_first)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); (((&queue->tq_queue))->stqh_first) = (task); } while (0);
 }

 task->ta_pending = 1;
 if (queue->tq_enqueue)
  queue->tq_enqueue(queue->tq_context);

 do { if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&queue->tq_mutex))), ((0)), (((void *)0)), (0)); } while (0);

 return 0;
}

void
taskqueue_run(struct taskqueue *queue)
{
 struct task *task;
 int owned, pending;

 owned = (((&queue->tq_mutex)->mtx_lock & ~(0x00000001 | 0x00000002)) == (uintptr_t)global___pcpu[get_stack_id()].pc_curthread);
 if (!owned)
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&queue->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 while (((&queue->tq_queue)->stqh_first)) {




  task = ((&queue->tq_queue)->stqh_first);
  do { if (((((&queue->tq_queue))->stqh_first) = (((((&queue->tq_queue))->stqh_first))->ta_link.stqe_next)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((&queue->tq_queue))->stqh_first); } while (0);
  pending = task->ta_pending;
  task->ta_pending = 0;
  do { if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&queue->tq_mutex))), ((0)), (((void *)0)), (0)); } while (0);

  task->ta_func(task->ta_context, pending);

  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&queue->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 }





 if (!owned)
 do { if (!atomic_cmpset_ptr(&((((&queue->tq_mutex))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&queue->tq_mutex))), ((0)), (((void *)0)), (0)); } while (0);
}

static void
taskqueue_swi_enqueue(void *context)
{
 swi_sched(global_taskqueue_ih[get_stack_id()], 0);
}

static void
taskqueue_swi_run(void *dummy)
{
 taskqueue_run(global_taskqueue_swi[get_stack_id()]);
}

static void
taskqueue_swi_giant_enqueue(void *context)
{
 swi_sched(global_taskqueue_giant_ih[get_stack_id()], 0);
}

static void
taskqueue_swi_giant_run(void *dummy)
{
 taskqueue_run(global_taskqueue_swi_giant[get_stack_id()]);
}

void
taskqueue_thread_loop(void *arg)
{
 struct taskqueue **tqp, *tq;

 tqp = arg;
 tq = *tqp;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tq->tq_mutex))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tq->tq_mutex))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for (;;) {
  taskqueue_run(tq);
  msleep(tq, &tq->tq_mutex, ((64) + 28), "-", 0);
 }
}

void
taskqueue_thread_enqueue(void *context)
{
 struct taskqueue **tqp, *tq;

 tqp = context;
 tq = *tqp;

 ;
 wakeup(tq);
}

typedef  struct taskqueue  _GLOBAL_135_T;  _GLOBAL_135_T  * global_taskqueue_swi[NUM_STACKS];   

 
# 254 "freebsd5/kern/subr_taskqueue.c"
  static void

 taskqueue_define_swi
# 254 "freebsd5/kern/subr_taskqueue.c"
 (void *arg) {

 global_taskqueue_swi[get_stack_id()]
# 254 "freebsd5/kern/subr_taskqueue.c"
 = taskqueue_create("swi", 0x0001, (taskqueue_swi_enqueue), (0)); swi_add(((void *)0), "task queue", taskqueue_swi_run, ((void *)0), 6, INTR_MPSAFE, &global_taskqueue_ih[get_stack_id()]); } typedef  struct sysinit   _GLOBAL_136_T; static  _GLOBAL_136_T  global_taskqueue_swi_sys_init[NUM_STACKS] = {  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   

 
# 254 "freebsd5/kern/subr_taskqueue.c"
          typedef  void const   _GLOBAL_137_T; static  _GLOBAL_137_T  * const  _global_section_0___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[0] ;static  _GLOBAL_137_T  * const  _global_section_1___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[1] ;static  _GLOBAL_137_T  * const  _global_section_2___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[2] ;static  _GLOBAL_137_T  * const  _global_section_3___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[3] ;static  _GLOBAL_137_T  * const  _global_section_4___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[4] ;static  _GLOBAL_137_T  * const  _global_section_5___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[5] ;static  _GLOBAL_137_T  * const  _global_section_6___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[6] ;static  _GLOBAL_137_T  * const  _global_section_7___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[7] ;static  _GLOBAL_137_T  * const  _global_section_8___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[8] ;static  _GLOBAL_137_T  * const  _global_section_9___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[9] ;static  _GLOBAL_137_T  * const  _global_section_10___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[10] ;static  _GLOBAL_137_T  * const  _global_section_11___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[11] ;static  _GLOBAL_137_T  * const  _global_section_12___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[12] ;static  _GLOBAL_137_T  * const  _global_section_13___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[13] ;static  _GLOBAL_137_T  * const  _global_section_14___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[14] ;static  _GLOBAL_137_T  * const  _global_section_15___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[15] ;static  _GLOBAL_137_T  * const  _global_section_16___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[16] ;static  _GLOBAL_137_T  * const  _global_section_17___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[17] ;static  _GLOBAL_137_T  * const  _global_section_18___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[18] ;static  _GLOBAL_137_T  * const  _global_section_19___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[19] ;static  _GLOBAL_137_T  * const  _global_section_20___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[20] ;static  _GLOBAL_137_T  * const  _global_section_21___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[21] ;static  _GLOBAL_137_T  * const  _global_section_22___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[22] ;static  _GLOBAL_137_T  * const  _global_section_23___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[23] ;static  _GLOBAL_137_T  * const  _global_section_24___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[24] ;static  _GLOBAL_137_T  * const  _global_section_25___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[25] ;static  _GLOBAL_137_T  * const  _global_section_26___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[26] ;static  _GLOBAL_137_T  * const  _global_section_27___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[27] ;static  _GLOBAL_137_T  * const  _global_section_28___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[28] ;static  _GLOBAL_137_T  * const  _global_section_29___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[29] ;static  _GLOBAL_137_T  * const  _global_section_30___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[30] ;static  _GLOBAL_137_T  * const  _global_section_31___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[31] ;static  _GLOBAL_137_T  * const  _global_section_32___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[32] ;static  _GLOBAL_137_T  * const  _global_section_33___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[33] ;static  _GLOBAL_137_T  * const  _global_section_34___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[34] ;static  _GLOBAL_137_T  * const  _global_section_35___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[35] ;static  _GLOBAL_137_T  * const  _global_section_36___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[36] ;static  _GLOBAL_137_T  * const  _global_section_37___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[37] ;static  _GLOBAL_137_T  * const  _global_section_38___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[38] ;static  _GLOBAL_137_T  * const  _global_section_39___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[39] ;static  _GLOBAL_137_T  * const  _global_section_40___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[40] ;static  _GLOBAL_137_T  * const  _global_section_41___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[41] ;static  _GLOBAL_137_T  * const  _global_section_42___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[42] ;static  _GLOBAL_137_T  * const  _global_section_43___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[43] ;static  _GLOBAL_137_T  * const  _global_section_44___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[44] ;static  _GLOBAL_137_T  * const  _global_section_45___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[45] ;static  _GLOBAL_137_T  * const  _global_section_46___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[46] ;static  _GLOBAL_137_T  * const  _global_section_47___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[47] ;static  _GLOBAL_137_T  * const  _global_section_48___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[48] ;static  _GLOBAL_137_T  * const  _global_section_49___set_sysinit_set_sym_taskqueue_swi_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_sys_init[49] ;    

 
# 254 "freebsd5/kern/subr_taskqueue.c"
     struct __hack

                                   ;

typedef  struct taskqueue  _GLOBAL_138_T;  _GLOBAL_138_T  * global_taskqueue_swi_giant[NUM_STACKS];   

 
# 258 "freebsd5/kern/subr_taskqueue.c"
  static void

 taskqueue_define_swi_giant
# 258 "freebsd5/kern/subr_taskqueue.c"
 (void *arg) {

 global_taskqueue_swi_giant[get_stack_id()]
# 258 "freebsd5/kern/subr_taskqueue.c"
 = taskqueue_create("swi_giant", 0x0001, (taskqueue_swi_giant_enqueue), (0)); swi_add(((void *)0), "Giant task queue", taskqueue_swi_giant_run, ((void *)0), 6, 0, &global_taskqueue_giant_ih[get_stack_id()]); } typedef  struct sysinit   _GLOBAL_139_T; static  _GLOBAL_139_T  global_taskqueue_swi_giant_sys_init[NUM_STACKS] = {  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_swi_giant    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   

 
# 258 "freebsd5/kern/subr_taskqueue.c"
          typedef  void const   _GLOBAL_140_T; static  _GLOBAL_140_T  * const  _global_section_0___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[0] ;static  _GLOBAL_140_T  * const  _global_section_1___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[1] ;static  _GLOBAL_140_T  * const  _global_section_2___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[2] ;static  _GLOBAL_140_T  * const  _global_section_3___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[3] ;static  _GLOBAL_140_T  * const  _global_section_4___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[4] ;static  _GLOBAL_140_T  * const  _global_section_5___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[5] ;static  _GLOBAL_140_T  * const  _global_section_6___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[6] ;static  _GLOBAL_140_T  * const  _global_section_7___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[7] ;static  _GLOBAL_140_T  * const  _global_section_8___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[8] ;static  _GLOBAL_140_T  * const  _global_section_9___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[9] ;static  _GLOBAL_140_T  * const  _global_section_10___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[10] ;static  _GLOBAL_140_T  * const  _global_section_11___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[11] ;static  _GLOBAL_140_T  * const  _global_section_12___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[12] ;static  _GLOBAL_140_T  * const  _global_section_13___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[13] ;static  _GLOBAL_140_T  * const  _global_section_14___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[14] ;static  _GLOBAL_140_T  * const  _global_section_15___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[15] ;static  _GLOBAL_140_T  * const  _global_section_16___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[16] ;static  _GLOBAL_140_T  * const  _global_section_17___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[17] ;static  _GLOBAL_140_T  * const  _global_section_18___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[18] ;static  _GLOBAL_140_T  * const  _global_section_19___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[19] ;static  _GLOBAL_140_T  * const  _global_section_20___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[20] ;static  _GLOBAL_140_T  * const  _global_section_21___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[21] ;static  _GLOBAL_140_T  * const  _global_section_22___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[22] ;static  _GLOBAL_140_T  * const  _global_section_23___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[23] ;static  _GLOBAL_140_T  * const  _global_section_24___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[24] ;static  _GLOBAL_140_T  * const  _global_section_25___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[25] ;static  _GLOBAL_140_T  * const  _global_section_26___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[26] ;static  _GLOBAL_140_T  * const  _global_section_27___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[27] ;static  _GLOBAL_140_T  * const  _global_section_28___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[28] ;static  _GLOBAL_140_T  * const  _global_section_29___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[29] ;static  _GLOBAL_140_T  * const  _global_section_30___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[30] ;static  _GLOBAL_140_T  * const  _global_section_31___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[31] ;static  _GLOBAL_140_T  * const  _global_section_32___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[32] ;static  _GLOBAL_140_T  * const  _global_section_33___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[33] ;static  _GLOBAL_140_T  * const  _global_section_34___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[34] ;static  _GLOBAL_140_T  * const  _global_section_35___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[35] ;static  _GLOBAL_140_T  * const  _global_section_36___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[36] ;static  _GLOBAL_140_T  * const  _global_section_37___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[37] ;static  _GLOBAL_140_T  * const  _global_section_38___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[38] ;static  _GLOBAL_140_T  * const  _global_section_39___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[39] ;static  _GLOBAL_140_T  * const  _global_section_40___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[40] ;static  _GLOBAL_140_T  * const  _global_section_41___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[41] ;static  _GLOBAL_140_T  * const  _global_section_42___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[42] ;static  _GLOBAL_140_T  * const  _global_section_43___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[43] ;static  _GLOBAL_140_T  * const  _global_section_44___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[44] ;static  _GLOBAL_140_T  * const  _global_section_45___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[45] ;static  _GLOBAL_140_T  * const  _global_section_46___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[46] ;static  _GLOBAL_140_T  * const  _global_section_47___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[47] ;static  _GLOBAL_140_T  * const  _global_section_48___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[48] ;static  _GLOBAL_140_T  * const  _global_section_49___set_sysinit_set_sym_taskqueue_swi_giant_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_taskqueue_swi_giant_sys_init[49] ;    

 
# 258 "freebsd5/kern/subr_taskqueue.c"
     struct __hack

                                                   ;

typedef  struct proc   _GLOBAL_141_T; static  _GLOBAL_141_T  * global_taskqueue_thread_proc[NUM_STACKS];     typedef  struct taskqueue  _GLOBAL_142_T;  _GLOBAL_142_T  * global_taskqueue_thread[NUM_STACKS];    static void taskqueue_define_thread(void *arg) { global_taskqueue_thread[get_stack_id()] = taskqueue_create("thread", 0x0001, (taskqueue_thread_enqueue), (&global_taskqueue_thread[get_stack_id()])); kthread_create(taskqueue_thread_loop, &global_taskqueue_thread[get_stack_id()], &global_taskqueue_thread_proc[get_stack_id()], 0, 0, "thread" " taskq"); } typedef  struct sysinit   _GLOBAL_143_T; static  _GLOBAL_143_T  global_taskqueue_thread_sys_init[NUM_STACKS] = {  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_thread    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_144_T; static  _GLOBAL_144_T  * const  _global_section_0___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[0] ;static  _GLOBAL_144_T  * const  _global_section_1___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[1] ;static  _GLOBAL_144_T  * const  _global_section_2___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[2] ;static  _GLOBAL_144_T  * const  _global_section_3___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[3] ;static  _GLOBAL_144_T  * const  _global_section_4___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[4] ;static  _GLOBAL_144_T  * const  _global_section_5___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[5] ;static  _GLOBAL_144_T  * const  _global_section_6___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[6] ;static  _GLOBAL_144_T  * const  _global_section_7___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[7] ;static  _GLOBAL_144_T  * const  _global_section_8___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[8] ;static  _GLOBAL_144_T  * const  _global_section_9___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[9] ;static  _GLOBAL_144_T  * const  _global_section_10___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[10] ;static  _GLOBAL_144_T  * const  _global_section_11___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[11] ;static  _GLOBAL_144_T  * const  _global_section_12___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[12] ;static  _GLOBAL_144_T  * const  _global_section_13___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[13] ;static  _GLOBAL_144_T  * const  _global_section_14___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[14] ;static  _GLOBAL_144_T  * const  _global_section_15___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[15] ;static  _GLOBAL_144_T  * const  _global_section_16___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[16] ;static  _GLOBAL_144_T  * const  _global_section_17___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[17] ;static  _GLOBAL_144_T  * const  _global_section_18___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[18] ;static  _GLOBAL_144_T  * const  _global_section_19___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[19] ;static  _GLOBAL_144_T  * const  _global_section_20___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[20] ;static  _GLOBAL_144_T  * const  _global_section_21___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[21] ;static  _GLOBAL_144_T  * const  _global_section_22___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[22] ;static  _GLOBAL_144_T  * const  _global_section_23___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[23] ;static  _GLOBAL_144_T  * const  _global_section_24___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[24] ;static  _GLOBAL_144_T  * const  _global_section_25___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[25] ;static  _GLOBAL_144_T  * const  _global_section_26___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[26] ;static  _GLOBAL_144_T  * const  _global_section_27___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[27] ;static  _GLOBAL_144_T  * const  _global_section_28___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[28] ;static  _GLOBAL_144_T  * const  _global_section_29___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[29] ;static  _GLOBAL_144_T  * const  _global_section_30___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[30] ;static  _GLOBAL_144_T  * const  _global_section_31___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[31] ;static  _GLOBAL_144_T  * const  _global_section_32___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[32] ;static  _GLOBAL_144_T  * const  _global_section_33___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[33] ;static  _GLOBAL_144_T  * const  _global_section_34___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[34] ;static  _GLOBAL_144_T  * const  _global_section_35___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[35] ;static  _GLOBAL_144_T  * const  _global_section_36___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[36] ;static  _GLOBAL_144_T  * const  _global_section_37___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[37] ;static  _GLOBAL_144_T  * const  _global_section_38___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[38] ;static  _GLOBAL_144_T  * const  _global_section_39___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[39] ;static  _GLOBAL_144_T  * const  _global_section_40___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[40] ;static  _GLOBAL_144_T  * const  _global_section_41___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[41] ;static  _GLOBAL_144_T  * const  _global_section_42___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[42] ;static  _GLOBAL_144_T  * const  _global_section_43___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[43] ;static  _GLOBAL_144_T  * const  _global_section_44___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[44] ;static  _GLOBAL_144_T  * const  _global_section_45___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[45] ;static  _GLOBAL_144_T  * const  _global_section_46___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[46] ;static  _GLOBAL_144_T  * const  _global_section_47___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[47] ;static  _GLOBAL_144_T  * const  _global_section_48___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[48] ;static  _GLOBAL_144_T  * const  _global_section_49___set_sysinit_set_sym_taskqueue_thread_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_taskqueue_thread_sys_init[49] ;          struct __hack;

int
taskqueue_enqueue_fast(struct taskqueue *queue, struct task *task)
{
 struct task *ins;
 struct task *prev;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); critical_enter(); if ((((&queue->tq_mutex)))->mtx_lock == (uintptr_t)_tid) (((&queue->tq_mutex)))->mtx_recurse++; else { ; (((&queue->tq_mutex)))->mtx_lock = (uintptr_t)_tid; } } while (0);




 if (task->ta_pending) {
  task->ta_pending++;
  do { if ((((((&queue->tq_mutex))))->mtx_recurse != 0)) (((&queue->tq_mutex)))->mtx_recurse--; else (((&queue->tq_mutex)))->mtx_lock = 0x00000004; critical_exit(); } while (0);
  return 0;
 }




 prev = ((((&queue->tq_queue))->stqh_first == ((void *)0)) ? ((void *)0) : ((struct task *) ((char *)((&queue->tq_queue)->stqh_last) - ((size_t)(&((struct task *)0)->ta_link)))));
 if (!prev || prev->ta_priority >= task->ta_priority) {
  do { (((task))->ta_link.stqe_next) = ((void *)0); *(&queue->tq_queue)->stqh_last = (task); (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); } while (0);
 } else {
  prev = 0;
  for (ins = ((&queue->tq_queue)->stqh_first); ins;
       prev = ins, ins = ((ins)->ta_link.stqe_next))
   if (ins->ta_priority < task->ta_priority)
    break;

  if (prev)
   do { if (((((task))->ta_link.stqe_next) = (((prev))->ta_link.stqe_next)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); (((prev))->ta_link.stqe_next) = (task); } while (0);
  else
   do { if (((((task))->ta_link.stqe_next) = (((&queue->tq_queue))->stqh_first)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((task))->ta_link.stqe_next); (((&queue->tq_queue))->stqh_first) = (task); } while (0);
 }

 task->ta_pending = 1;
 if (queue->tq_enqueue)
  queue->tq_enqueue(queue->tq_context);

 do { if ((((((&queue->tq_mutex))))->mtx_recurse != 0)) (((&queue->tq_mutex)))->mtx_recurse--; else (((&queue->tq_mutex)))->mtx_lock = 0x00000004; critical_exit(); } while (0);

 return 0;
}

static void
taskqueue_run_fast(struct taskqueue *queue)
{
 struct task *task;
 int pending;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); critical_enter(); if ((((&queue->tq_mutex)))->mtx_lock == (uintptr_t)_tid) (((&queue->tq_mutex)))->mtx_recurse++; else { ; (((&queue->tq_mutex)))->mtx_lock = (uintptr_t)_tid; } } while (0);
 while (((&queue->tq_queue)->stqh_first)) {




  task = ((&queue->tq_queue)->stqh_first);
  do { if (((((&queue->tq_queue))->stqh_first) = (((((&queue->tq_queue))->stqh_first))->ta_link.stqe_next)) == ((void *)0)) (&queue->tq_queue)->stqh_last = &(((&queue->tq_queue))->stqh_first); } while (0);
  pending = task->ta_pending;
  task->ta_pending = 0;
  do { if ((((((&queue->tq_mutex))))->mtx_recurse != 0)) (((&queue->tq_mutex)))->mtx_recurse--; else (((&queue->tq_mutex)))->mtx_lock = 0x00000004; critical_exit(); } while (0);

  task->ta_func(task->ta_context, pending);

  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); critical_enter(); if ((((&queue->tq_mutex)))->mtx_lock == (uintptr_t)_tid) (((&queue->tq_mutex)))->mtx_recurse++; else { ; (((&queue->tq_mutex)))->mtx_lock = (uintptr_t)_tid; } } while (0);
 }
 do { if ((((((&queue->tq_mutex))))->mtx_recurse != 0)) (((&queue->tq_mutex)))->mtx_recurse--; else (((&queue->tq_mutex)))->mtx_lock = 0x00000004; critical_exit(); } while (0);
}

typedef  struct taskqueue  _GLOBAL_145_T;  _GLOBAL_145_T  * global_taskqueue_fast[NUM_STACKS];   
typedef  void  _GLOBAL_146_T; static  _GLOBAL_146_T  * global_taskqueue_fast_ih[NUM_STACKS];   

static void
taskqueue_fast_schedule(void *context)
{
 swi_sched(global_taskqueue_fast_ih[get_stack_id()], 0);
}

static void
taskqueue_fast_run(void *dummy)
{
 taskqueue_run_fast(global_taskqueue_fast[get_stack_id()]);
}

static void
taskqueue_define_fast(void *arg)
{

 global_taskqueue_fast[get_stack_id()] = nsc_malloc(sizeof(struct taskqueue), (*_GLOBAL_M_TASKQUEUE_29_A[get_stack_id()]),
     0x0001 | 0x0100);
 if (!global_taskqueue_fast[get_stack_id()]) {
  nsc_printf("%s: Unable to allocate fast task queue!\n", __func__);
  return;
 }

 do { (((&global_taskqueue_fast[get_stack_id()]->tq_queue))->stqh_first) = ((void *)0); (&global_taskqueue_fast[get_stack_id()]->tq_queue)->stqh_last = &(((&global_taskqueue_fast[get_stack_id()]->tq_queue))->stqh_first); } while (0);
 global_taskqueue_fast[get_stack_id()]->tq_name = "fast";
 global_taskqueue_fast[get_stack_id()]->tq_enqueue = taskqueue_fast_schedule;
 mtx_init(&global_taskqueue_fast[get_stack_id()]->tq_mutex, "taskqueue_fast", ((void *)0), 0x00000001);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { (((global_taskqueue_fast[get_stack_id()]))->tq_link.stqe_next) = ((void *)0); *(&global_taskqueue_queues[get_stack_id()])->stqh_last = (global_taskqueue_fast[get_stack_id()]); (&global_taskqueue_queues[get_stack_id()])->stqh_last = &(((global_taskqueue_fast[get_stack_id()]))->tq_link.stqe_next); } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_taskqueue_queues_mutex[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_taskqueue_queues_mutex[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

 swi_add(((void *)0), "Fast task queue", taskqueue_fast_run,
  ((void *)0), 6, 0, &global_taskqueue_fast_ih[get_stack_id()]);
}
typedef  struct sysinit   _GLOBAL_147_T; static  _GLOBAL_147_T  global_taskqueue_fast_sys_init[NUM_STACKS] = {  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CONFIGURE , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) taskqueue_define_fast    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 372 "freebsd5/kern/subr_taskqueue.c"
          typedef  void const   _GLOBAL_148_T; static  _GLOBAL_148_T  * const  _global_section_0___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[0] ;static  _GLOBAL_148_T  * const  _global_section_1___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[1] ;static  _GLOBAL_148_T  * const  _global_section_2___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[2] ;static  _GLOBAL_148_T  * const  _global_section_3___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[3] ;static  _GLOBAL_148_T  * const  _global_section_4___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[4] ;static  _GLOBAL_148_T  * const  _global_section_5___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[5] ;static  _GLOBAL_148_T  * const  _global_section_6___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[6] ;static  _GLOBAL_148_T  * const  _global_section_7___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[7] ;static  _GLOBAL_148_T  * const  _global_section_8___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[8] ;static  _GLOBAL_148_T  * const  _global_section_9___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[9] ;static  _GLOBAL_148_T  * const  _global_section_10___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[10] ;static  _GLOBAL_148_T  * const  _global_section_11___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[11] ;static  _GLOBAL_148_T  * const  _global_section_12___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[12] ;static  _GLOBAL_148_T  * const  _global_section_13___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[13] ;static  _GLOBAL_148_T  * const  _global_section_14___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[14] ;static  _GLOBAL_148_T  * const  _global_section_15___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[15] ;static  _GLOBAL_148_T  * const  _global_section_16___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[16] ;static  _GLOBAL_148_T  * const  _global_section_17___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[17] ;static  _GLOBAL_148_T  * const  _global_section_18___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[18] ;static  _GLOBAL_148_T  * const  _global_section_19___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[19] ;static  _GLOBAL_148_T  * const  _global_section_20___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[20] ;static  _GLOBAL_148_T  * const  _global_section_21___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[21] ;static  _GLOBAL_148_T  * const  _global_section_22___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[22] ;static  _GLOBAL_148_T  * const  _global_section_23___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[23] ;static  _GLOBAL_148_T  * const  _global_section_24___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[24] ;static  _GLOBAL_148_T  * const  _global_section_25___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[25] ;static  _GLOBAL_148_T  * const  _global_section_26___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[26] ;static  _GLOBAL_148_T  * const  _global_section_27___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[27] ;static  _GLOBAL_148_T  * const  _global_section_28___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[28] ;static  _GLOBAL_148_T  * const  _global_section_29___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[29] ;static  _GLOBAL_148_T  * const  _global_section_30___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[30] ;static  _GLOBAL_148_T  * const  _global_section_31___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[31] ;static  _GLOBAL_148_T  * const  _global_section_32___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[32] ;static  _GLOBAL_148_T  * const  _global_section_33___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[33] ;static  _GLOBAL_148_T  * const  _global_section_34___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[34] ;static  _GLOBAL_148_T  * const  _global_section_35___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[35] ;static  _GLOBAL_148_T  * const  _global_section_36___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[36] ;static  _GLOBAL_148_T  * const  _global_section_37___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[37] ;static  _GLOBAL_148_T  * const  _global_section_38___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[38] ;static  _GLOBAL_148_T  * const  _global_section_39___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[39] ;static  _GLOBAL_148_T  * const  _global_section_40___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[40] ;static  _GLOBAL_148_T  * const  _global_section_41___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[41] ;static  _GLOBAL_148_T  * const  _global_section_42___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[42] ;static  _GLOBAL_148_T  * const  _global_section_43___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[43] ;static  _GLOBAL_148_T  * const  _global_section_44___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[44] ;static  _GLOBAL_148_T  * const  _global_section_45___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[45] ;static  _GLOBAL_148_T  * const  _global_section_46___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[46] ;static  _GLOBAL_148_T  * const  _global_section_47___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[47] ;static  _GLOBAL_148_T  * const  _global_section_48___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[48] ;static  _GLOBAL_148_T  * const  _global_section_49___set_sysinit_set_sym_taskqueue_fast_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_taskqueue_fast_sys_init[49] ;    
 
# 372 "freebsd5/kern/subr_taskqueue.c"
    
                                ;

