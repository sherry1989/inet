# 1 "freebsd5/kern/kern_ntptime.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/kern_ntptime.c"
# 32 "freebsd5/kern/kern_ntptime.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 33 "freebsd5/kern/kern_ntptime.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/kern_ntptime.c,v 1.54 2004/03/14 15:23:05 phk Exp $" "\"");

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ntp.h" 1
# 36 "freebsd5/kern/kern_ntptime.c" 2

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

# 38 "freebsd5/kern/kern_ntptime.c" 2
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
# 39 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 1
# 12 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h"
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

# 13 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2
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
# 14 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/thr.h" 1
# 15 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/umtx.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/umtx.h"
struct umtx {
 void *u_owner;
};
# 16 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/posix4/_semaphore.h" 1
# 31 "freebsd5/freebsd/usr/src/sys/posix4/_semaphore.h"
typedef intptr_t semid_t;
struct timespec;
# 17 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2

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
# 19 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 2

struct proc;

struct thread;
# 35 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h"
struct nosys_args {
 register_t dummy;
};
struct sys_exit_args {
 char rval_l_[0]; int rval; char rval_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct fork_args {
 register_t dummy;
};
struct read_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; void * buf; char buf_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbyte_l_[0]; size_t nbyte; char nbyte_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct write_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; const void * buf; char buf_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char nbyte_l_[0]; size_t nbyte; char nbyte_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct open_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct close_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct wait_args {
 char pid_l_[0]; int pid; char pid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char status_l_[0]; int * status; char status_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
 char options_l_[0]; int options; char options_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char rusage_l_[0]; struct rusage * rusage; char rusage_r_[(sizeof(register_t) <= sizeof(struct rusage *) ? 0 : sizeof(register_t) - sizeof(struct rusage *))];
};
struct link_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char link_l_[0]; char * link; char link_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct unlink_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct chdir_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct fchdir_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct mknod_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char dev_l_[0]; int dev; char dev_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct chmod_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct chown_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char uid_l_[0]; int uid; char uid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char gid_l_[0]; int gid; char gid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct obreak_args {
 char nsize_l_[0]; char * nsize; char nsize_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct getpid_args {
 register_t dummy;
};
struct mount_args {
 char type_l_[0]; char * type; char type_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; caddr_t data; char data_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
};
struct unmount_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setuid_args {
 char uid_l_[0]; uid_t uid; char uid_r_[(sizeof(register_t) <= sizeof(uid_t) ? 0 : sizeof(register_t) - sizeof(uid_t))];
};
struct getuid_args {
 register_t dummy;
};
struct geteuid_args {
 register_t dummy;
};
struct ptrace_args {
 char req_l_[0]; int req; char req_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char addr_l_[0]; caddr_t addr; char addr_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char data_l_[0]; int data; char data_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct recvmsg_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char msg_l_[0]; struct msghdr * msg; char msg_r_[(sizeof(register_t) <= sizeof(struct msghdr *) ? 0 : sizeof(register_t) - sizeof(struct msghdr *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sendmsg_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char msg_l_[0]; struct msghdr * msg; char msg_r_[(sizeof(register_t) <= sizeof(struct msghdr *) ? 0 : sizeof(register_t) - sizeof(struct msghdr *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct recvfrom_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; caddr_t buf; char buf_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char from_l_[0]; struct sockaddr *restrict from; char from_r_[(sizeof(register_t) <= sizeof(struct sockaddr *restrict) ? 0 : sizeof(register_t) - sizeof(struct sockaddr *restrict))];
 char fromlenaddr_l_[0]; __socklen_t *restrict fromlenaddr; char fromlenaddr_r_[(sizeof(register_t) <= sizeof(__socklen_t *restrict) ? 0 : sizeof(register_t) - sizeof(__socklen_t *restrict))];
};
struct accept_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; struct sockaddr *restrict name; char name_r_[(sizeof(register_t) <= sizeof(struct sockaddr *restrict) ? 0 : sizeof(register_t) - sizeof(struct sockaddr *restrict))];
 char anamelen_l_[0]; __socklen_t *restrict anamelen; char anamelen_r_[(sizeof(register_t) <= sizeof(__socklen_t *restrict) ? 0 : sizeof(register_t) - sizeof(__socklen_t *restrict))];
};
struct getpeername_args {
 char fdes_l_[0]; int fdes; char fdes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char asa_l_[0]; struct sockaddr *restrict asa; char asa_r_[(sizeof(register_t) <= sizeof(struct sockaddr *restrict) ? 0 : sizeof(register_t) - sizeof(struct sockaddr *restrict))];
 char alen_l_[0]; __socklen_t *restrict alen; char alen_r_[(sizeof(register_t) <= sizeof(__socklen_t *restrict) ? 0 : sizeof(register_t) - sizeof(__socklen_t *restrict))];
};
struct getsockname_args {
 char fdes_l_[0]; int fdes; char fdes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char asa_l_[0]; struct sockaddr *restrict asa; char asa_r_[(sizeof(register_t) <= sizeof(struct sockaddr *restrict) ? 0 : sizeof(register_t) - sizeof(struct sockaddr *restrict))];
 char alen_l_[0]; __socklen_t *restrict alen; char alen_r_[(sizeof(register_t) <= sizeof(__socklen_t *restrict) ? 0 : sizeof(register_t) - sizeof(__socklen_t *restrict))];
};
struct access_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct chflags_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct fchflags_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sync_args {
 register_t dummy;
};
struct kill_args {
 char pid_l_[0]; int pid; char pid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char signum_l_[0]; int signum; char signum_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct getppid_args {
 register_t dummy;
};
struct dup_args {
 char fd_l_[0]; u_int fd; char fd_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct pipe_args {
 register_t dummy;
};
struct getegid_args {
 register_t dummy;
};
struct profil_args {
 char samples_l_[0]; caddr_t samples; char samples_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char size_l_[0]; size_t size; char size_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char offset_l_[0]; size_t offset; char offset_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char scale_l_[0]; u_int scale; char scale_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct ktrace_args {
 char fname_l_[0]; const char * fname; char fname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char ops_l_[0]; int ops; char ops_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char facs_l_[0]; int facs; char facs_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pid_l_[0]; int pid; char pid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct getgid_args {
 register_t dummy;
};
struct getlogin_args {
 char namebuf_l_[0]; char * namebuf; char namebuf_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char namelen_l_[0]; u_int namelen; char namelen_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct setlogin_args {
 char namebuf_l_[0]; char * namebuf; char namebuf_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct acct_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct osigpending_args {
 register_t dummy;
};
struct sigaltstack_args {
 char ss_l_[0]; stack_t * ss; char ss_r_[(sizeof(register_t) <= sizeof(stack_t *) ? 0 : sizeof(register_t) - sizeof(stack_t *))];
 char oss_l_[0]; stack_t * oss; char oss_r_[(sizeof(register_t) <= sizeof(stack_t *) ? 0 : sizeof(register_t) - sizeof(stack_t *))];
};
struct ioctl_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char com_l_[0]; u_long com; char com_r_[(sizeof(register_t) <= sizeof(u_long) ? 0 : sizeof(register_t) - sizeof(u_long))];
 char data_l_[0]; caddr_t data; char data_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
};
struct reboot_args {
 char opt_l_[0]; int opt; char opt_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct revoke_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct symlink_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char link_l_[0]; char * link; char link_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct readlink_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char buf_l_[0]; char * buf; char buf_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char count_l_[0]; int count; char count_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct execve_args {
 char fname_l_[0]; char * fname; char fname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char argv_l_[0]; char ** argv; char argv_r_[(sizeof(register_t) <= sizeof(char **) ? 0 : sizeof(register_t) - sizeof(char **))];
 char envv_l_[0]; char ** envv; char envv_r_[(sizeof(register_t) <= sizeof(char **) ? 0 : sizeof(register_t) - sizeof(char **))];
};
struct umask_args {
 char newmask_l_[0]; int newmask; char newmask_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct chroot_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct getpagesize_args {
 register_t dummy;
};
struct msync_args {
 char addr_l_[0]; void * addr; char addr_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct vfork_args {
 register_t dummy;
};
struct sbrk_args {
 char incr_l_[0]; int incr; char incr_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sstk_args {
 char incr_l_[0]; int incr; char incr_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct ovadvise_args {
 char anom_l_[0]; int anom; char anom_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct munmap_args {
 char addr_l_[0]; void * addr; char addr_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct mprotect_args {
 char addr_l_[0]; const void * addr; char addr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char prot_l_[0]; int prot; char prot_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct madvise_args {
 char addr_l_[0]; void * addr; char addr_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char behav_l_[0]; int behav; char behav_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct mincore_args {
 char addr_l_[0]; const void * addr; char addr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char vec_l_[0]; char * vec; char vec_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct getgroups_args {
 char gidsetsize_l_[0]; u_int gidsetsize; char gidsetsize_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char gidset_l_[0]; gid_t * gidset; char gidset_r_[(sizeof(register_t) <= sizeof(gid_t *) ? 0 : sizeof(register_t) - sizeof(gid_t *))];
};
struct setgroups_args {
 char gidsetsize_l_[0]; u_int gidsetsize; char gidsetsize_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char gidset_l_[0]; gid_t * gidset; char gidset_r_[(sizeof(register_t) <= sizeof(gid_t *) ? 0 : sizeof(register_t) - sizeof(gid_t *))];
};
struct getpgrp_args {
 register_t dummy;
};
struct setpgid_args {
 char pid_l_[0]; int pid; char pid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pgid_l_[0]; int pgid; char pgid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setitimer_args {
 char which_l_[0]; u_int which; char which_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char itv_l_[0]; struct itimerval * itv; char itv_r_[(sizeof(register_t) <= sizeof(struct itimerval *) ? 0 : sizeof(register_t) - sizeof(struct itimerval *))];
 char oitv_l_[0]; struct itimerval * oitv; char oitv_r_[(sizeof(register_t) <= sizeof(struct itimerval *) ? 0 : sizeof(register_t) - sizeof(struct itimerval *))];
};
struct owait_args {
 register_t dummy;
};
struct swapon_args {
 char name_l_[0]; char * name; char name_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct getitimer_args {
 char which_l_[0]; u_int which; char which_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char itv_l_[0]; struct itimerval * itv; char itv_r_[(sizeof(register_t) <= sizeof(struct itimerval *) ? 0 : sizeof(register_t) - sizeof(struct itimerval *))];
};
struct getdtablesize_args {
 register_t dummy;
};
struct dup2_args {
 char from_l_[0]; u_int from; char from_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char to_l_[0]; u_int to; char to_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct fcntl_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char arg_l_[0]; long arg; char arg_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
};
struct select_args {
 char nd_l_[0]; int nd; char nd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char in_l_[0]; fd_set * in; char in_r_[(sizeof(register_t) <= sizeof(fd_set *) ? 0 : sizeof(register_t) - sizeof(fd_set *))];
 char ou_l_[0]; fd_set * ou; char ou_r_[(sizeof(register_t) <= sizeof(fd_set *) ? 0 : sizeof(register_t) - sizeof(fd_set *))];
 char ex_l_[0]; fd_set * ex; char ex_r_[(sizeof(register_t) <= sizeof(fd_set *) ? 0 : sizeof(register_t) - sizeof(fd_set *))];
 char tv_l_[0]; struct timeval * tv; char tv_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
};
struct fsync_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setpriority_args {
 char which_l_[0]; int which; char which_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char who_l_[0]; int who; char who_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char prio_l_[0]; int prio; char prio_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct socket_args {
 char domain_l_[0]; int domain; char domain_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; int type; char type_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char protocol_l_[0]; int protocol; char protocol_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct connect_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; caddr_t name; char name_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char namelen_l_[0]; int namelen; char namelen_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct getpriority_args {
 char which_l_[0]; int which; char which_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char who_l_[0]; int who; char who_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct bind_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; caddr_t name; char name_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char namelen_l_[0]; int namelen; char namelen_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setsockopt_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char level_l_[0]; int level; char level_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; int name; char name_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char val_l_[0]; caddr_t val; char val_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char valsize_l_[0]; int valsize; char valsize_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct listen_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char backlog_l_[0]; int backlog; char backlog_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct gettimeofday_args {
 char tp_l_[0]; struct timeval * tp; char tp_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
 char tzp_l_[0]; struct timezone * tzp; char tzp_r_[(sizeof(register_t) <= sizeof(struct timezone *) ? 0 : sizeof(register_t) - sizeof(struct timezone *))];
};
struct getrusage_args {
 char who_l_[0]; int who; char who_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char rusage_l_[0]; struct rusage * rusage; char rusage_r_[(sizeof(register_t) <= sizeof(struct rusage *) ? 0 : sizeof(register_t) - sizeof(struct rusage *))];
};
struct getsockopt_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char level_l_[0]; int level; char level_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; int name; char name_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char val_l_[0]; caddr_t val; char val_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char avalsize_l_[0]; int * avalsize; char avalsize_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
};
struct readv_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char iovp_l_[0]; struct iovec * iovp; char iovp_r_[(sizeof(register_t) <= sizeof(struct iovec *) ? 0 : sizeof(register_t) - sizeof(struct iovec *))];
 char iovcnt_l_[0]; u_int iovcnt; char iovcnt_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct writev_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char iovp_l_[0]; struct iovec * iovp; char iovp_r_[(sizeof(register_t) <= sizeof(struct iovec *) ? 0 : sizeof(register_t) - sizeof(struct iovec *))];
 char iovcnt_l_[0]; u_int iovcnt; char iovcnt_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct settimeofday_args {
 char tv_l_[0]; struct timeval * tv; char tv_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
 char tzp_l_[0]; struct timezone * tzp; char tzp_r_[(sizeof(register_t) <= sizeof(struct timezone *) ? 0 : sizeof(register_t) - sizeof(struct timezone *))];
};
struct fchown_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char uid_l_[0]; int uid; char uid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char gid_l_[0]; int gid; char gid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct fchmod_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setreuid_args {
 char ruid_l_[0]; int ruid; char ruid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char euid_l_[0]; int euid; char euid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setregid_args {
 char rgid_l_[0]; int rgid; char rgid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char egid_l_[0]; int egid; char egid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct rename_args {
 char from_l_[0]; char * from; char from_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char to_l_[0]; char * to; char to_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct flock_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char how_l_[0]; int how; char how_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct mkfifo_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sendto_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; caddr_t buf; char buf_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char to_l_[0]; caddr_t to; char to_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char tolen_l_[0]; int tolen; char tolen_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct shutdown_args {
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char how_l_[0]; int how; char how_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct socketpair_args {
 char domain_l_[0]; int domain; char domain_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; int type; char type_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char protocol_l_[0]; int protocol; char protocol_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char rsv_l_[0]; int * rsv; char rsv_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
};
struct mkdir_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct rmdir_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct utimes_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char tptr_l_[0]; struct timeval * tptr; char tptr_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
};
struct adjtime_args {
 char delta_l_[0]; struct timeval * delta; char delta_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
 char olddelta_l_[0]; struct timeval * olddelta; char olddelta_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
};
struct ogethostid_args {
 register_t dummy;
};
struct setsid_args {
 register_t dummy;
};
struct quotactl_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char uid_l_[0]; int uid; char uid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char arg_l_[0]; caddr_t arg; char arg_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
};
struct oquota_args {
 register_t dummy;
};
struct nfssvc_args {
 char flag_l_[0]; int flag; char flag_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char argp_l_[0]; caddr_t argp; char argp_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
};
struct lgetfh_args {
 char fname_l_[0]; char * fname; char fname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char fhp_l_[0]; struct fhandle * fhp; char fhp_r_[(sizeof(register_t) <= sizeof(struct fhandle *) ? 0 : sizeof(register_t) - sizeof(struct fhandle *))];
};
struct getfh_args {
 char fname_l_[0]; char * fname; char fname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char fhp_l_[0]; struct fhandle * fhp; char fhp_r_[(sizeof(register_t) <= sizeof(struct fhandle *) ? 0 : sizeof(register_t) - sizeof(struct fhandle *))];
};
struct getdomainname_args {
 char domainname_l_[0]; char * domainname; char domainname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char len_l_[0]; int len; char len_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct setdomainname_args {
 char domainname_l_[0]; char * domainname; char domainname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char len_l_[0]; int len; char len_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct uname_args {
 char name_l_[0]; struct utsname * name; char name_r_[(sizeof(register_t) <= sizeof(struct utsname *) ? 0 : sizeof(register_t) - sizeof(struct utsname *))];
};
struct sysarch_args {
 char op_l_[0]; int op; char op_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char parms_l_[0]; char * parms; char parms_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct rtprio_args {
 char function_l_[0]; int function; char function_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char rtp_l_[0]; struct rtprio * rtp; char rtp_r_[(sizeof(register_t) <= sizeof(struct rtprio *) ? 0 : sizeof(register_t) - sizeof(struct rtprio *))];
};
struct semsys_args {
 char which_l_[0]; int which; char which_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a2_l_[0]; int a2; char a2_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a3_l_[0]; int a3; char a3_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a4_l_[0]; int a4; char a4_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a5_l_[0]; int a5; char a5_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct msgsys_args {
 char which_l_[0]; int which; char which_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a2_l_[0]; int a2; char a2_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a3_l_[0]; int a3; char a3_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a4_l_[0]; int a4; char a4_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a5_l_[0]; int a5; char a5_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a6_l_[0]; int a6; char a6_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct shmsys_args {
 char which_l_[0]; int which; char which_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a2_l_[0]; int a2; char a2_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a3_l_[0]; int a3; char a3_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char a4_l_[0]; int a4; char a4_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct pread_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; void * buf; char buf_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbyte_l_[0]; size_t nbyte; char nbyte_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char offset_l_[0]; off_t offset; char offset_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
};
struct pwrite_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; const void * buf; char buf_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char nbyte_l_[0]; size_t nbyte; char nbyte_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char offset_l_[0]; off_t offset; char offset_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
};
struct ntp_adjtime_args {
 char tp_l_[0]; struct timex * tp; char tp_r_[(sizeof(register_t) <= sizeof(struct timex *) ? 0 : sizeof(register_t) - sizeof(struct timex *))];
};
struct setgid_args {
 char gid_l_[0]; gid_t gid; char gid_r_[(sizeof(register_t) <= sizeof(gid_t) ? 0 : sizeof(register_t) - sizeof(gid_t))];
};
struct setegid_args {
 char egid_l_[0]; gid_t egid; char egid_r_[(sizeof(register_t) <= sizeof(gid_t) ? 0 : sizeof(register_t) - sizeof(gid_t))];
};
struct seteuid_args {
 char euid_l_[0]; uid_t euid; char euid_r_[(sizeof(register_t) <= sizeof(uid_t) ? 0 : sizeof(register_t) - sizeof(uid_t))];
};
struct stat_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char ub_l_[0]; struct stat * ub; char ub_r_[(sizeof(register_t) <= sizeof(struct stat *) ? 0 : sizeof(register_t) - sizeof(struct stat *))];
};
struct fstat_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char sb_l_[0]; struct stat * sb; char sb_r_[(sizeof(register_t) <= sizeof(struct stat *) ? 0 : sizeof(register_t) - sizeof(struct stat *))];
};
struct lstat_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char ub_l_[0]; struct stat * ub; char ub_r_[(sizeof(register_t) <= sizeof(struct stat *) ? 0 : sizeof(register_t) - sizeof(struct stat *))];
};
struct pathconf_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char name_l_[0]; int name; char name_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct fpathconf_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; int name; char name_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct __getrlimit_args {
 char which_l_[0]; u_int which; char which_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char rlp_l_[0]; struct rlimit * rlp; char rlp_r_[(sizeof(register_t) <= sizeof(struct rlimit *) ? 0 : sizeof(register_t) - sizeof(struct rlimit *))];
};
struct __setrlimit_args {
 char which_l_[0]; u_int which; char which_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char rlp_l_[0]; struct rlimit * rlp; char rlp_r_[(sizeof(register_t) <= sizeof(struct rlimit *) ? 0 : sizeof(register_t) - sizeof(struct rlimit *))];
};
struct getdirentries_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; char * buf; char buf_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char count_l_[0]; u_int count; char count_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char basep_l_[0]; long * basep; char basep_r_[(sizeof(register_t) <= sizeof(long *) ? 0 : sizeof(register_t) - sizeof(long *))];
};
struct mmap_args {
 char addr_l_[0]; caddr_t addr; char addr_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char prot_l_[0]; int prot; char prot_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pos_l_[0]; off_t pos; char pos_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
};
struct lseek_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char offset_l_[0]; off_t offset; char offset_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
 char whence_l_[0]; int whence; char whence_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct truncate_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char length_l_[0]; off_t length; char length_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
};
struct ftruncate_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char pad_l_[0]; int pad; char pad_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char length_l_[0]; off_t length; char length_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
};
struct sysctl_args {
 char name_l_[0]; int * name; char name_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
 char namelen_l_[0]; u_int namelen; char namelen_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char old_l_[0]; void * old; char old_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char oldlenp_l_[0]; size_t * oldlenp; char oldlenp_r_[(sizeof(register_t) <= sizeof(size_t *) ? 0 : sizeof(register_t) - sizeof(size_t *))];
 char new_l_[0]; void * new; char new_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char newlen_l_[0]; size_t newlen; char newlen_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct mlock_args {
 char addr_l_[0]; const void * addr; char addr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct munlock_args {
 char addr_l_[0]; const void * addr; char addr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct undelete_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
};
struct futimes_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char tptr_l_[0]; struct timeval * tptr; char tptr_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
};
struct getpgid_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
};
struct poll_args {
 char fds_l_[0]; struct pollfd * fds; char fds_r_[(sizeof(register_t) <= sizeof(struct pollfd *) ? 0 : sizeof(register_t) - sizeof(struct pollfd *))];
 char nfds_l_[0]; u_int nfds; char nfds_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char timeout_l_[0]; int timeout; char timeout_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct __semctl_args {
 char semid_l_[0]; int semid; char semid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char semnum_l_[0]; int semnum; char semnum_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char arg_l_[0]; union semun * arg; char arg_r_[(sizeof(register_t) <= sizeof(union semun *) ? 0 : sizeof(register_t) - sizeof(union semun *))];
};
struct semget_args {
 char key_l_[0]; key_t key; char key_r_[(sizeof(register_t) <= sizeof(key_t) ? 0 : sizeof(register_t) - sizeof(key_t))];
 char nsems_l_[0]; int nsems; char nsems_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char semflg_l_[0]; int semflg; char semflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct semop_args {
 char semid_l_[0]; int semid; char semid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char sops_l_[0]; struct sembuf * sops; char sops_r_[(sizeof(register_t) <= sizeof(struct sembuf *) ? 0 : sizeof(register_t) - sizeof(struct sembuf *))];
 char nsops_l_[0]; size_t nsops; char nsops_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct msgctl_args {
 char msqid_l_[0]; int msqid; char msqid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; struct msqid_ds * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct msqid_ds *) ? 0 : sizeof(register_t) - sizeof(struct msqid_ds *))];
};
struct msgget_args {
 char key_l_[0]; key_t key; char key_r_[(sizeof(register_t) <= sizeof(key_t) ? 0 : sizeof(register_t) - sizeof(key_t))];
 char msgflg_l_[0]; int msgflg; char msgflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct msgsnd_args {
 char msqid_l_[0]; int msqid; char msqid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char msgp_l_[0]; const void * msgp; char msgp_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char msgsz_l_[0]; size_t msgsz; char msgsz_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char msgflg_l_[0]; int msgflg; char msgflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct msgrcv_args {
 char msqid_l_[0]; int msqid; char msqid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char msgp_l_[0]; void * msgp; char msgp_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char msgsz_l_[0]; size_t msgsz; char msgsz_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char msgtyp_l_[0]; long msgtyp; char msgtyp_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
 char msgflg_l_[0]; int msgflg; char msgflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct shmat_args {
 char shmid_l_[0]; int shmid; char shmid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char shmaddr_l_[0]; const void * shmaddr; char shmaddr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char shmflg_l_[0]; int shmflg; char shmflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct shmctl_args {
 char shmid_l_[0]; int shmid; char shmid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; struct shmid_ds * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct shmid_ds *) ? 0 : sizeof(register_t) - sizeof(struct shmid_ds *))];
};
struct shmdt_args {
 char shmaddr_l_[0]; const void * shmaddr; char shmaddr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
};
struct shmget_args {
 char key_l_[0]; key_t key; char key_r_[(sizeof(register_t) <= sizeof(key_t) ? 0 : sizeof(register_t) - sizeof(key_t))];
 char size_l_[0]; size_t size; char size_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char shmflg_l_[0]; int shmflg; char shmflg_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct clock_gettime_args {
 char clock_id_l_[0]; clockid_t clock_id; char clock_id_r_[(sizeof(register_t) <= sizeof(clockid_t) ? 0 : sizeof(register_t) - sizeof(clockid_t))];
 char tp_l_[0]; struct timespec * tp; char tp_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct clock_settime_args {
 char clock_id_l_[0]; clockid_t clock_id; char clock_id_r_[(sizeof(register_t) <= sizeof(clockid_t) ? 0 : sizeof(register_t) - sizeof(clockid_t))];
 char tp_l_[0]; const struct timespec * tp; char tp_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
};
struct clock_getres_args {
 char clock_id_l_[0]; clockid_t clock_id; char clock_id_r_[(sizeof(register_t) <= sizeof(clockid_t) ? 0 : sizeof(register_t) - sizeof(clockid_t))];
 char tp_l_[0]; struct timespec * tp; char tp_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct nanosleep_args {
 char rqtp_l_[0]; const struct timespec * rqtp; char rqtp_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
 char rmtp_l_[0]; struct timespec * rmtp; char rmtp_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct minherit_args {
 char addr_l_[0]; void * addr; char addr_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char inherit_l_[0]; int inherit; char inherit_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct rfork_args {
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct openbsd_poll_args {
 char fds_l_[0]; struct pollfd * fds; char fds_r_[(sizeof(register_t) <= sizeof(struct pollfd *) ? 0 : sizeof(register_t) - sizeof(struct pollfd *))];
 char nfds_l_[0]; u_int nfds; char nfds_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
 char timeout_l_[0]; int timeout; char timeout_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct issetugid_args {
 register_t dummy;
};
struct lchown_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char uid_l_[0]; int uid; char uid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char gid_l_[0]; int gid; char gid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct getdents_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; char * buf; char buf_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char count_l_[0]; size_t count; char count_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct lchmod_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char mode_l_[0]; mode_t mode; char mode_r_[(sizeof(register_t) <= sizeof(mode_t) ? 0 : sizeof(register_t) - sizeof(mode_t))];
};
struct lutimes_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char tptr_l_[0]; struct timeval * tptr; char tptr_r_[(sizeof(register_t) <= sizeof(struct timeval *) ? 0 : sizeof(register_t) - sizeof(struct timeval *))];
};
struct nstat_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char ub_l_[0]; struct nstat * ub; char ub_r_[(sizeof(register_t) <= sizeof(struct nstat *) ? 0 : sizeof(register_t) - sizeof(struct nstat *))];
};
struct nfstat_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char sb_l_[0]; struct nstat * sb; char sb_r_[(sizeof(register_t) <= sizeof(struct nstat *) ? 0 : sizeof(register_t) - sizeof(struct nstat *))];
};
struct nlstat_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char ub_l_[0]; struct nstat * ub; char ub_r_[(sizeof(register_t) <= sizeof(struct nstat *) ? 0 : sizeof(register_t) - sizeof(struct nstat *))];
};
struct fhopen_args {
 char u_fhp_l_[0]; const struct fhandle * u_fhp; char u_fhp_r_[(sizeof(register_t) <= sizeof(const struct fhandle *) ? 0 : sizeof(register_t) - sizeof(const struct fhandle *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct fhstat_args {
 char u_fhp_l_[0]; const struct fhandle * u_fhp; char u_fhp_r_[(sizeof(register_t) <= sizeof(const struct fhandle *) ? 0 : sizeof(register_t) - sizeof(const struct fhandle *))];
 char sb_l_[0]; struct stat * sb; char sb_r_[(sizeof(register_t) <= sizeof(struct stat *) ? 0 : sizeof(register_t) - sizeof(struct stat *))];
};
struct modnext_args {
 char modid_l_[0]; int modid; char modid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct modstat_args {
 char modid_l_[0]; int modid; char modid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char stat_l_[0]; struct module_stat * stat; char stat_r_[(sizeof(register_t) <= sizeof(struct module_stat *) ? 0 : sizeof(register_t) - sizeof(struct module_stat *))];
};
struct modfnext_args {
 char modid_l_[0]; int modid; char modid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct modfind_args {
 char name_l_[0]; const char * name; char name_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct kldload_args {
 char file_l_[0]; const char * file; char file_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct kldunload_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct kldfind_args {
 char file_l_[0]; const char * file; char file_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct kldnext_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct kldstat_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char stat_l_[0]; struct kld_file_stat * stat; char stat_r_[(sizeof(register_t) <= sizeof(struct kld_file_stat *) ? 0 : sizeof(register_t) - sizeof(struct kld_file_stat *))];
};
struct kldfirstmod_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct getsid_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
};
struct setresuid_args {
 char ruid_l_[0]; uid_t ruid; char ruid_r_[(sizeof(register_t) <= sizeof(uid_t) ? 0 : sizeof(register_t) - sizeof(uid_t))];
 char euid_l_[0]; uid_t euid; char euid_r_[(sizeof(register_t) <= sizeof(uid_t) ? 0 : sizeof(register_t) - sizeof(uid_t))];
 char suid_l_[0]; uid_t suid; char suid_r_[(sizeof(register_t) <= sizeof(uid_t) ? 0 : sizeof(register_t) - sizeof(uid_t))];
};
struct setresgid_args {
 char rgid_l_[0]; gid_t rgid; char rgid_r_[(sizeof(register_t) <= sizeof(gid_t) ? 0 : sizeof(register_t) - sizeof(gid_t))];
 char egid_l_[0]; gid_t egid; char egid_r_[(sizeof(register_t) <= sizeof(gid_t) ? 0 : sizeof(register_t) - sizeof(gid_t))];
 char sgid_l_[0]; gid_t sgid; char sgid_r_[(sizeof(register_t) <= sizeof(gid_t) ? 0 : sizeof(register_t) - sizeof(gid_t))];
};
struct aio_return_args {
 char aiocbp_l_[0]; struct aiocb * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *))];
};
struct aio_suspend_args {
 char aiocbp_l_[0]; struct aiocb *const * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *const *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *const *))];
 char nent_l_[0]; int nent; char nent_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char timeout_l_[0]; const struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
};
struct aio_cancel_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char aiocbp_l_[0]; struct aiocb * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *))];
};
struct aio_error_args {
 char aiocbp_l_[0]; struct aiocb * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *))];
};
struct aio_read_args {
 char aiocbp_l_[0]; struct aiocb * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *))];
};
struct aio_write_args {
 char aiocbp_l_[0]; struct aiocb * aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *))];
};
struct lio_listio_args {
 char mode_l_[0]; int mode; char mode_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char acb_list_l_[0]; struct aiocb *const * acb_list; char acb_list_r_[(sizeof(register_t) <= sizeof(struct aiocb *const *) ? 0 : sizeof(register_t) - sizeof(struct aiocb *const *))];
 char nent_l_[0]; int nent; char nent_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char sig_l_[0]; struct sigevent * sig; char sig_r_[(sizeof(register_t) <= sizeof(struct sigevent *) ? 0 : sizeof(register_t) - sizeof(struct sigevent *))];
};
struct yield_args {
 register_t dummy;
};
struct mlockall_args {
 char how_l_[0]; int how; char how_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct munlockall_args {
 register_t dummy;
};
struct __getcwd_args {
 char buf_l_[0]; u_char * buf; char buf_r_[(sizeof(register_t) <= sizeof(u_char *) ? 0 : sizeof(register_t) - sizeof(u_char *))];
 char buflen_l_[0]; u_int buflen; char buflen_r_[(sizeof(register_t) <= sizeof(u_int) ? 0 : sizeof(register_t) - sizeof(u_int))];
};
struct sched_setparam_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char param_l_[0]; const struct sched_param * param; char param_r_[(sizeof(register_t) <= sizeof(const struct sched_param *) ? 0 : sizeof(register_t) - sizeof(const struct sched_param *))];
};
struct sched_getparam_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char param_l_[0]; struct sched_param * param; char param_r_[(sizeof(register_t) <= sizeof(struct sched_param *) ? 0 : sizeof(register_t) - sizeof(struct sched_param *))];
};
struct sched_setscheduler_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char policy_l_[0]; int policy; char policy_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char param_l_[0]; const struct sched_param * param; char param_r_[(sizeof(register_t) <= sizeof(const struct sched_param *) ? 0 : sizeof(register_t) - sizeof(const struct sched_param *))];
};
struct sched_getscheduler_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
};
struct sched_yield_args {
 register_t dummy;
};
struct sched_get_priority_max_args {
 char policy_l_[0]; int policy; char policy_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sched_get_priority_min_args {
 char policy_l_[0]; int policy; char policy_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sched_rr_get_interval_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char interval_l_[0]; struct timespec * interval; char interval_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct utrace_args {
 char addr_l_[0]; const void * addr; char addr_r_[(sizeof(register_t) <= sizeof(const void *) ? 0 : sizeof(register_t) - sizeof(const void *))];
 char len_l_[0]; size_t len; char len_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct kldsym_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
};
struct jail_args {
 char jail_l_[0]; struct jail * jail; char jail_r_[(sizeof(register_t) <= sizeof(struct jail *) ? 0 : sizeof(register_t) - sizeof(struct jail *))];
};
struct sigprocmask_args {
 char how_l_[0]; int how; char how_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char set_l_[0]; const sigset_t * set; char set_r_[(sizeof(register_t) <= sizeof(const sigset_t *) ? 0 : sizeof(register_t) - sizeof(const sigset_t *))];
 char oset_l_[0]; sigset_t * oset; char oset_r_[(sizeof(register_t) <= sizeof(sigset_t *) ? 0 : sizeof(register_t) - sizeof(sigset_t *))];
};
struct sigsuspend_args {
 char sigmask_l_[0]; const sigset_t * sigmask; char sigmask_r_[(sizeof(register_t) <= sizeof(const sigset_t *) ? 0 : sizeof(register_t) - sizeof(const sigset_t *))];
};
struct sigpending_args {
 char set_l_[0]; sigset_t * set; char set_r_[(sizeof(register_t) <= sizeof(sigset_t *) ? 0 : sizeof(register_t) - sizeof(sigset_t *))];
};
struct sigtimedwait_args {
 char set_l_[0]; const sigset_t * set; char set_r_[(sizeof(register_t) <= sizeof(const sigset_t *) ? 0 : sizeof(register_t) - sizeof(const sigset_t *))];
 char info_l_[0]; siginfo_t * info; char info_r_[(sizeof(register_t) <= sizeof(siginfo_t *) ? 0 : sizeof(register_t) - sizeof(siginfo_t *))];
 char timeout_l_[0]; const struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
};
struct sigwaitinfo_args {
 char set_l_[0]; const sigset_t * set; char set_r_[(sizeof(register_t) <= sizeof(const sigset_t *) ? 0 : sizeof(register_t) - sizeof(const sigset_t *))];
 char info_l_[0]; siginfo_t * info; char info_r_[(sizeof(register_t) <= sizeof(siginfo_t *) ? 0 : sizeof(register_t) - sizeof(siginfo_t *))];
};
struct __acl_get_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_set_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_get_fd_args {
 char filedes_l_[0]; int filedes; char filedes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_set_fd_args {
 char filedes_l_[0]; int filedes; char filedes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_delete_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
};
struct __acl_delete_fd_args {
 char filedes_l_[0]; int filedes; char filedes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
};
struct __acl_aclcheck_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_aclcheck_fd_args {
 char filedes_l_[0]; int filedes; char filedes_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct extattrctl_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char filename_l_[0]; const char * filename; char filename_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct extattr_set_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_get_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_delete_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct aio_waitcomplete_args {
 char aiocbp_l_[0]; struct aiocb ** aiocbp; char aiocbp_r_[(sizeof(register_t) <= sizeof(struct aiocb **) ? 0 : sizeof(register_t) - sizeof(struct aiocb **))];
 char timeout_l_[0]; struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct getresuid_args {
 char ruid_l_[0]; uid_t * ruid; char ruid_r_[(sizeof(register_t) <= sizeof(uid_t *) ? 0 : sizeof(register_t) - sizeof(uid_t *))];
 char euid_l_[0]; uid_t * euid; char euid_r_[(sizeof(register_t) <= sizeof(uid_t *) ? 0 : sizeof(register_t) - sizeof(uid_t *))];
 char suid_l_[0]; uid_t * suid; char suid_r_[(sizeof(register_t) <= sizeof(uid_t *) ? 0 : sizeof(register_t) - sizeof(uid_t *))];
};
struct getresgid_args {
 char rgid_l_[0]; gid_t * rgid; char rgid_r_[(sizeof(register_t) <= sizeof(gid_t *) ? 0 : sizeof(register_t) - sizeof(gid_t *))];
 char egid_l_[0]; gid_t * egid; char egid_r_[(sizeof(register_t) <= sizeof(gid_t *) ? 0 : sizeof(register_t) - sizeof(gid_t *))];
 char sgid_l_[0]; gid_t * sgid; char sgid_r_[(sizeof(register_t) <= sizeof(gid_t *) ? 0 : sizeof(register_t) - sizeof(gid_t *))];
};
struct kqueue_args {
 register_t dummy;
};
struct kevent_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char changelist_l_[0]; struct kevent * changelist; char changelist_r_[(sizeof(register_t) <= sizeof(struct kevent *) ? 0 : sizeof(register_t) - sizeof(struct kevent *))];
 char nchanges_l_[0]; int nchanges; char nchanges_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char eventlist_l_[0]; struct kevent * eventlist; char eventlist_r_[(sizeof(register_t) <= sizeof(struct kevent *) ? 0 : sizeof(register_t) - sizeof(struct kevent *))];
 char nevents_l_[0]; int nevents; char nevents_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char timeout_l_[0]; const struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
};
struct extattr_set_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_get_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_delete_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct __setugid_args {
 char flag_l_[0]; int flag; char flag_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct nfsclnt_args {
 char flag_l_[0]; int flag; char flag_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char argp_l_[0]; caddr_t argp; char argp_r_[(sizeof(register_t) <= sizeof(caddr_t) ? 0 : sizeof(register_t) - sizeof(caddr_t))];
};
struct eaccess_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct nmount_args {
 char iovp_l_[0]; struct iovec * iovp; char iovp_r_[(sizeof(register_t) <= sizeof(struct iovec *) ? 0 : sizeof(register_t) - sizeof(struct iovec *))];
 char iovcnt_l_[0]; unsigned int iovcnt; char iovcnt_r_[(sizeof(register_t) <= sizeof(unsigned int) ? 0 : sizeof(register_t) - sizeof(unsigned int))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct kse_exit_args {
 register_t dummy;
};
struct kse_wakeup_args {
 char mbx_l_[0]; struct kse_mailbox * mbx; char mbx_r_[(sizeof(register_t) <= sizeof(struct kse_mailbox *) ? 0 : sizeof(register_t) - sizeof(struct kse_mailbox *))];
};
struct kse_create_args {
 char mbx_l_[0]; struct kse_mailbox * mbx; char mbx_r_[(sizeof(register_t) <= sizeof(struct kse_mailbox *) ? 0 : sizeof(register_t) - sizeof(struct kse_mailbox *))];
 char newgroup_l_[0]; int newgroup; char newgroup_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct kse_thr_interrupt_args {
 char tmbx_l_[0]; struct kse_thr_mailbox * tmbx; char tmbx_r_[(sizeof(register_t) <= sizeof(struct kse_thr_mailbox *) ? 0 : sizeof(register_t) - sizeof(struct kse_thr_mailbox *))];
 char cmd_l_[0]; int cmd; char cmd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; long data; char data_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
};
struct kse_release_args {
 char timeout_l_[0]; struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct __mac_get_proc_args {
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_set_proc_args {
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_get_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_get_file_args {
 char path_p_l_[0]; const char * path_p; char path_p_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_set_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_set_file_args {
 char path_p_l_[0]; const char * path_p; char path_p_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct kenv_args {
 char what_l_[0]; int what; char what_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char name_l_[0]; const char * name; char name_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char value_l_[0]; char * value; char value_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char len_l_[0]; int len; char len_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct lchflags_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct uuidgen_args {
 char store_l_[0]; struct uuid * store; char store_r_[(sizeof(register_t) <= sizeof(struct uuid *) ? 0 : sizeof(register_t) - sizeof(struct uuid *))];
 char count_l_[0]; int count; char count_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct sendfile_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char s_l_[0]; int s; char s_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char offset_l_[0]; off_t offset; char offset_r_[(sizeof(register_t) <= sizeof(off_t) ? 0 : sizeof(register_t) - sizeof(off_t))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
 char hdtr_l_[0]; struct sf_hdtr * hdtr; char hdtr_r_[(sizeof(register_t) <= sizeof(struct sf_hdtr *) ? 0 : sizeof(register_t) - sizeof(struct sf_hdtr *))];
 char sbytes_l_[0]; off_t * sbytes; char sbytes_r_[(sizeof(register_t) <= sizeof(off_t *) ? 0 : sizeof(register_t) - sizeof(off_t *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct mac_syscall_args {
 char policy_l_[0]; const char * policy; char policy_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char call_l_[0]; int call; char call_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char arg_l_[0]; void * arg; char arg_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
};
struct getfsstat_args {
 char buf_l_[0]; struct statfs * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct statfs *) ? 0 : sizeof(register_t) - sizeof(struct statfs *))];
 char bufsize_l_[0]; long bufsize; char bufsize_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct statfs_args {
 char path_l_[0]; char * path; char path_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char buf_l_[0]; struct statfs * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct statfs *) ? 0 : sizeof(register_t) - sizeof(struct statfs *))];
};
struct fstatfs_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char buf_l_[0]; struct statfs * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct statfs *) ? 0 : sizeof(register_t) - sizeof(struct statfs *))];
};
struct fhstatfs_args {
 char u_fhp_l_[0]; const struct fhandle * u_fhp; char u_fhp_r_[(sizeof(register_t) <= sizeof(const struct fhandle *) ? 0 : sizeof(register_t) - sizeof(const struct fhandle *))];
 char buf_l_[0]; struct statfs * buf; char buf_r_[(sizeof(register_t) <= sizeof(struct statfs *) ? 0 : sizeof(register_t) - sizeof(struct statfs *))];
};
struct ksem_close_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
};
struct ksem_post_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
};
struct ksem_wait_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
};
struct ksem_trywait_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
};
struct ksem_init_args {
 char idp_l_[0]; semid_t * idp; char idp_r_[(sizeof(register_t) <= sizeof(semid_t *) ? 0 : sizeof(register_t) - sizeof(semid_t *))];
 char value_l_[0]; unsigned int value; char value_r_[(sizeof(register_t) <= sizeof(unsigned int) ? 0 : sizeof(register_t) - sizeof(unsigned int))];
};
struct ksem_open_args {
 char idp_l_[0]; semid_t * idp; char idp_r_[(sizeof(register_t) <= sizeof(semid_t *) ? 0 : sizeof(register_t) - sizeof(semid_t *))];
 char name_l_[0]; const char * name; char name_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char oflag_l_[0]; int oflag; char oflag_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char mode_l_[0]; mode_t mode; char mode_r_[(sizeof(register_t) <= sizeof(mode_t) ? 0 : sizeof(register_t) - sizeof(mode_t))];
 char value_l_[0]; unsigned int value; char value_r_[(sizeof(register_t) <= sizeof(unsigned int) ? 0 : sizeof(register_t) - sizeof(unsigned int))];
};
struct ksem_unlink_args {
 char name_l_[0]; const char * name; char name_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct ksem_getvalue_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
 char val_l_[0]; int * val; char val_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
};
struct ksem_destroy_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
};
struct __mac_get_pid_args {
 char pid_l_[0]; pid_t pid; char pid_r_[(sizeof(register_t) <= sizeof(pid_t) ? 0 : sizeof(register_t) - sizeof(pid_t))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_get_link_args {
 char path_p_l_[0]; const char * path_p; char path_p_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct __mac_set_link_args {
 char path_p_l_[0]; const char * path_p; char path_p_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct extattr_set_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_get_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_delete_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrname_l_[0]; const char * attrname; char attrname_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct __mac_execve_args {
 char fname_l_[0]; char * fname; char fname_r_[(sizeof(register_t) <= sizeof(char *) ? 0 : sizeof(register_t) - sizeof(char *))];
 char argv_l_[0]; char ** argv; char argv_r_[(sizeof(register_t) <= sizeof(char **) ? 0 : sizeof(register_t) - sizeof(char **))];
 char envv_l_[0]; char ** envv; char envv_r_[(sizeof(register_t) <= sizeof(char **) ? 0 : sizeof(register_t) - sizeof(char **))];
 char mac_p_l_[0]; struct mac * mac_p; char mac_p_r_[(sizeof(register_t) <= sizeof(struct mac *) ? 0 : sizeof(register_t) - sizeof(struct mac *))];
};
struct sigaction_args {
 char sig_l_[0]; int sig; char sig_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char act_l_[0]; const struct sigaction * act; char act_r_[(sizeof(register_t) <= sizeof(const struct sigaction *) ? 0 : sizeof(register_t) - sizeof(const struct sigaction *))];
 char oact_l_[0]; struct sigaction * oact; char oact_r_[(sizeof(register_t) <= sizeof(struct sigaction *) ? 0 : sizeof(register_t) - sizeof(struct sigaction *))];
};
struct sigreturn_args {
 char sigcntxp_l_[0]; const struct __ucontext * sigcntxp; char sigcntxp_r_[(sizeof(register_t) <= sizeof(const struct __ucontext *) ? 0 : sizeof(register_t) - sizeof(const struct __ucontext *))];
};
struct getcontext_args {
 char ucp_l_[0]; struct __ucontext * ucp; char ucp_r_[(sizeof(register_t) <= sizeof(struct __ucontext *) ? 0 : sizeof(register_t) - sizeof(struct __ucontext *))];
};
struct setcontext_args {
 char ucp_l_[0]; const struct __ucontext * ucp; char ucp_r_[(sizeof(register_t) <= sizeof(const struct __ucontext *) ? 0 : sizeof(register_t) - sizeof(const struct __ucontext *))];
};
struct swapcontext_args {
 char oucp_l_[0]; struct __ucontext * oucp; char oucp_r_[(sizeof(register_t) <= sizeof(struct __ucontext *) ? 0 : sizeof(register_t) - sizeof(struct __ucontext *))];
 char ucp_l_[0]; const struct __ucontext * ucp; char ucp_r_[(sizeof(register_t) <= sizeof(const struct __ucontext *) ? 0 : sizeof(register_t) - sizeof(const struct __ucontext *))];
};
struct swapoff_args {
 char name_l_[0]; const char * name; char name_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
};
struct __acl_get_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_set_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct __acl_delete_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
};
struct __acl_aclcheck_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char type_l_[0]; acl_type_t type; char type_r_[(sizeof(register_t) <= sizeof(acl_type_t) ? 0 : sizeof(register_t) - sizeof(acl_type_t))];
 char aclp_l_[0]; struct acl * aclp; char aclp_r_[(sizeof(register_t) <= sizeof(struct acl *) ? 0 : sizeof(register_t) - sizeof(struct acl *))];
};
struct sigwait_args {
 char set_l_[0]; const sigset_t * set; char set_r_[(sizeof(register_t) <= sizeof(const sigset_t *) ? 0 : sizeof(register_t) - sizeof(const sigset_t *))];
 char sig_l_[0]; int * sig; char sig_r_[(sizeof(register_t) <= sizeof(int *) ? 0 : sizeof(register_t) - sizeof(int *))];
};
struct thr_create_args {
 char ctx_l_[0]; ucontext_t * ctx; char ctx_r_[(sizeof(register_t) <= sizeof(ucontext_t *) ? 0 : sizeof(register_t) - sizeof(ucontext_t *))];
 char id_l_[0]; long * id; char id_r_[(sizeof(register_t) <= sizeof(long *) ? 0 : sizeof(register_t) - sizeof(long *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct thr_exit_args {
 char state_l_[0]; long * state; char state_r_[(sizeof(register_t) <= sizeof(long *) ? 0 : sizeof(register_t) - sizeof(long *))];
};
struct thr_self_args {
 char id_l_[0]; long * id; char id_r_[(sizeof(register_t) <= sizeof(long *) ? 0 : sizeof(register_t) - sizeof(long *))];
};
struct thr_kill_args {
 char id_l_[0]; long id; char id_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
 char sig_l_[0]; int sig; char sig_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct _umtx_lock_args {
 char umtx_l_[0]; struct umtx * umtx; char umtx_r_[(sizeof(register_t) <= sizeof(struct umtx *) ? 0 : sizeof(register_t) - sizeof(struct umtx *))];
};
struct _umtx_unlock_args {
 char umtx_l_[0]; struct umtx * umtx; char umtx_r_[(sizeof(register_t) <= sizeof(struct umtx *) ? 0 : sizeof(register_t) - sizeof(struct umtx *))];
};
struct jail_attach_args {
 char jid_l_[0]; int jid; char jid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct extattr_list_fd_args {
 char fd_l_[0]; int fd; char fd_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_list_file_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct extattr_list_link_args {
 char path_l_[0]; const char * path; char path_r_[(sizeof(register_t) <= sizeof(const char *) ? 0 : sizeof(register_t) - sizeof(const char *))];
 char attrnamespace_l_[0]; int attrnamespace; char attrnamespace_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char data_l_[0]; void * data; char data_r_[(sizeof(register_t) <= sizeof(void *) ? 0 : sizeof(register_t) - sizeof(void *))];
 char nbytes_l_[0]; size_t nbytes; char nbytes_r_[(sizeof(register_t) <= sizeof(size_t) ? 0 : sizeof(register_t) - sizeof(size_t))];
};
struct kse_switchin_args {
 char tmbx_l_[0]; struct kse_thr_mailbox * tmbx; char tmbx_r_[(sizeof(register_t) <= sizeof(struct kse_thr_mailbox *) ? 0 : sizeof(register_t) - sizeof(struct kse_thr_mailbox *))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
struct ksem_timedwait_args {
 char id_l_[0]; semid_t id; char id_r_[(sizeof(register_t) <= sizeof(semid_t) ? 0 : sizeof(register_t) - sizeof(semid_t))];
 char abstime_l_[0]; struct timespec * abstime; char abstime_r_[(sizeof(register_t) <= sizeof(struct timespec *) ? 0 : sizeof(register_t) - sizeof(struct timespec *))];
};
struct thr_suspend_args {
 char timeout_l_[0]; const struct timespec * timeout; char timeout_r_[(sizeof(register_t) <= sizeof(const struct timespec *) ? 0 : sizeof(register_t) - sizeof(const struct timespec *))];
};
struct thr_wake_args {
 char id_l_[0]; long id; char id_r_[(sizeof(register_t) <= sizeof(long) ? 0 : sizeof(register_t) - sizeof(long))];
};
struct kldunloadf_args {
 char fileid_l_[0]; int fileid; char fileid_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
 char flags_l_[0]; int flags; char flags_r_[(sizeof(register_t) <= sizeof(int) ? 0 : sizeof(register_t) - sizeof(int))];
};
int nosys(struct thread *, struct nosys_args *);
void sys_exit(struct thread *, struct sys_exit_args *);
int fork(struct thread *, struct fork_args *);
int read(struct thread *, struct read_args *);
int write(struct thread *, struct write_args *);
int open(struct thread *, struct open_args *);
int close(struct thread *, struct close_args *);
int wait4(struct thread *, struct wait_args *);
int link(struct thread *, struct link_args *);
int unlink(struct thread *, struct unlink_args *);
int chdir(struct thread *, struct chdir_args *);
int fchdir(struct thread *, struct fchdir_args *);
int mknod(struct thread *, struct mknod_args *);
int chmod(struct thread *, struct chmod_args *);
int chown(struct thread *, struct chown_args *);
int obreak(struct thread *, struct obreak_args *);
int getpid(struct thread *, struct getpid_args *);
int mount(struct thread *, struct mount_args *);
int unmount(struct thread *, struct unmount_args *);
int setuid(struct thread *, struct setuid_args *);
int getuid(struct thread *, struct getuid_args *);
int geteuid(struct thread *, struct geteuid_args *);
int ptrace(struct thread *, struct ptrace_args *);
int recvmsg(struct thread *, struct recvmsg_args *);
int sendmsg(struct thread *, struct sendmsg_args *);
int recvfrom(struct thread *, struct recvfrom_args *);
int accept(struct thread *, struct accept_args *);
int getpeername(struct thread *, struct getpeername_args *);
int getsockname(struct thread *, struct getsockname_args *);
int access(struct thread *, struct access_args *);
int chflags(struct thread *, struct chflags_args *);
int fchflags(struct thread *, struct fchflags_args *);
int sync(struct thread *, struct sync_args *);
int kill(struct thread *, struct kill_args *);
int getppid(struct thread *, struct getppid_args *);
int dup(struct thread *, struct dup_args *);
int pipe(struct thread *, struct pipe_args *);
int getegid(struct thread *, struct getegid_args *);
int profil(struct thread *, struct profil_args *);
int ktrace(struct thread *, struct ktrace_args *);
int getgid(struct thread *, struct getgid_args *);
int getlogin(struct thread *, struct getlogin_args *);
int setlogin(struct thread *, struct setlogin_args *);
int acct(struct thread *, struct acct_args *);
int sigaltstack(struct thread *, struct sigaltstack_args *);
int ioctl(struct thread *, struct ioctl_args *);
int reboot(struct thread *, struct reboot_args *);
int revoke(struct thread *, struct revoke_args *);
int symlink(struct thread *, struct symlink_args *);
int readlink(struct thread *, struct readlink_args *);
int execve(struct thread *, struct execve_args *);
int umask(struct thread *, struct umask_args *);
int chroot(struct thread *, struct chroot_args *);
int msync(struct thread *, struct msync_args *);
int vfork(struct thread *, struct vfork_args *);
int sbrk(struct thread *, struct sbrk_args *);
int sstk(struct thread *, struct sstk_args *);
int ovadvise(struct thread *, struct ovadvise_args *);
int munmap(struct thread *, struct munmap_args *);
int mprotect(struct thread *, struct mprotect_args *);
int madvise(struct thread *, struct madvise_args *);
int mincore(struct thread *, struct mincore_args *);
int getgroups(struct thread *, struct getgroups_args *);
int setgroups(struct thread *, struct setgroups_args *);
int getpgrp(struct thread *, struct getpgrp_args *);
int setpgid(struct thread *, struct setpgid_args *);
int setitimer(struct thread *, struct setitimer_args *);
int swapon(struct thread *, struct swapon_args *);
int getitimer(struct thread *, struct getitimer_args *);
int getdtablesize(struct thread *, struct getdtablesize_args *);
int dup2(struct thread *, struct dup2_args *);
int fcntl(struct thread *, struct fcntl_args *);
int select(struct thread *, struct select_args *);
int fsync(struct thread *, struct fsync_args *);
int setpriority(struct thread *, struct setpriority_args *);
int socket(struct thread *, struct socket_args *);
int connect(struct thread *, struct connect_args *);
int getpriority(struct thread *, struct getpriority_args *);
int bind(struct thread *, struct bind_args *);
int setsockopt(struct thread *, struct setsockopt_args *);
int listen(struct thread *, struct listen_args *);
int gettimeofday(struct thread *, struct gettimeofday_args *);
int getrusage(struct thread *, struct getrusage_args *);
int getsockopt(struct thread *, struct getsockopt_args *);
int readv(struct thread *, struct readv_args *);
int writev(struct thread *, struct writev_args *);
int settimeofday(struct thread *, struct settimeofday_args *);
int fchown(struct thread *, struct fchown_args *);
int fchmod(struct thread *, struct fchmod_args *);
int setreuid(struct thread *, struct setreuid_args *);
int setregid(struct thread *, struct setregid_args *);
int rename(struct thread *, struct rename_args *);
int flock(struct thread *, struct flock_args *);
int mkfifo(struct thread *, struct mkfifo_args *);
int sendto(struct thread *, struct sendto_args *);
int shutdown(struct thread *, struct shutdown_args *);
int socketpair(struct thread *, struct socketpair_args *);
int mkdir(struct thread *, struct mkdir_args *);
int rmdir(struct thread *, struct rmdir_args *);
int utimes(struct thread *, struct utimes_args *);
int adjtime(struct thread *, struct adjtime_args *);
int setsid(struct thread *, struct setsid_args *);
int quotactl(struct thread *, struct quotactl_args *);
int nfssvc(struct thread *, struct nfssvc_args *);
int lgetfh(struct thread *, struct lgetfh_args *);
int getfh(struct thread *, struct getfh_args *);
int getdomainname(struct thread *, struct getdomainname_args *);
int setdomainname(struct thread *, struct setdomainname_args *);
int uname(struct thread *, struct uname_args *);
int sysarch(struct thread *, struct sysarch_args *);
int rtprio(struct thread *, struct rtprio_args *);
int semsys(struct thread *, struct semsys_args *);
int msgsys(struct thread *, struct msgsys_args *);
int shmsys(struct thread *, struct shmsys_args *);
int pread(struct thread *, struct pread_args *);
int pwrite(struct thread *, struct pwrite_args *);
int ntp_adjtime(struct thread *, struct ntp_adjtime_args *);
int setgid(struct thread *, struct setgid_args *);
int setegid(struct thread *, struct setegid_args *);
int seteuid(struct thread *, struct seteuid_args *);
int stat(struct thread *, struct stat_args *);
int fstat(struct thread *, struct fstat_args *);
int lstat(struct thread *, struct lstat_args *);
int pathconf(struct thread *, struct pathconf_args *);
int fpathconf(struct thread *, struct fpathconf_args *);
int getrlimit(struct thread *, struct __getrlimit_args *);
int setrlimit(struct thread *, struct __setrlimit_args *);
int getdirentries(struct thread *, struct getdirentries_args *);
int mmap(struct thread *, struct mmap_args *);
int lseek(struct thread *, struct lseek_args *);
int truncate(struct thread *, struct truncate_args *);
int ftruncate(struct thread *, struct ftruncate_args *);
int __sysctl(struct thread *, struct sysctl_args *);
int mlock(struct thread *, struct mlock_args *);
int munlock(struct thread *, struct munlock_args *);
int undelete(struct thread *, struct undelete_args *);
int futimes(struct thread *, struct futimes_args *);
int getpgid(struct thread *, struct getpgid_args *);
int poll(struct thread *, struct poll_args *);
int lkmnosys(struct thread *, struct nosys_args *);
int __semctl(struct thread *, struct __semctl_args *);
int semget(struct thread *, struct semget_args *);
int semop(struct thread *, struct semop_args *);
int msgctl(struct thread *, struct msgctl_args *);
int msgget(struct thread *, struct msgget_args *);
int msgsnd(struct thread *, struct msgsnd_args *);
int msgrcv(struct thread *, struct msgrcv_args *);
int shmat(struct thread *, struct shmat_args *);
int shmctl(struct thread *, struct shmctl_args *);
int shmdt(struct thread *, struct shmdt_args *);
int shmget(struct thread *, struct shmget_args *);
int clock_gettime(struct thread *, struct clock_gettime_args *);
int clock_settime(struct thread *, struct clock_settime_args *);
int clock_getres(struct thread *, struct clock_getres_args *);
int nanosleep(struct thread *, struct nanosleep_args *);
int minherit(struct thread *, struct minherit_args *);
int rfork(struct thread *, struct rfork_args *);
int openbsd_poll(struct thread *, struct openbsd_poll_args *);
int issetugid(struct thread *, struct issetugid_args *);
int lchown(struct thread *, struct lchown_args *);
int getdents(struct thread *, struct getdents_args *);
int lchmod(struct thread *, struct lchmod_args *);
int lutimes(struct thread *, struct lutimes_args *);
int nstat(struct thread *, struct nstat_args *);
int nfstat(struct thread *, struct nfstat_args *);
int nlstat(struct thread *, struct nlstat_args *);
int fhopen(struct thread *, struct fhopen_args *);
int fhstat(struct thread *, struct fhstat_args *);
int modnext(struct thread *, struct modnext_args *);
int modstat(struct thread *, struct modstat_args *);
int modfnext(struct thread *, struct modfnext_args *);
int modfind(struct thread *, struct modfind_args *);
int kldload(struct thread *, struct kldload_args *);
int kldunload(struct thread *, struct kldunload_args *);
int kldfind(struct thread *, struct kldfind_args *);
int kldnext(struct thread *, struct kldnext_args *);
int kldstat(struct thread *, struct kldstat_args *);
int kldfirstmod(struct thread *, struct kldfirstmod_args *);
int getsid(struct thread *, struct getsid_args *);
int setresuid(struct thread *, struct setresuid_args *);
int setresgid(struct thread *, struct setresgid_args *);
int aio_return(struct thread *, struct aio_return_args *);
int aio_suspend(struct thread *, struct aio_suspend_args *);
int aio_cancel(struct thread *, struct aio_cancel_args *);
int aio_error(struct thread *, struct aio_error_args *);
int aio_read(struct thread *, struct aio_read_args *);
int aio_write(struct thread *, struct aio_write_args *);
int lio_listio(struct thread *, struct lio_listio_args *);
int yield(struct thread *, struct yield_args *);
int mlockall(struct thread *, struct mlockall_args *);
int munlockall(struct thread *, struct munlockall_args *);
int __getcwd(struct thread *, struct __getcwd_args *);
int sched_setparam(struct thread *, struct sched_setparam_args *);
int sched_getparam(struct thread *, struct sched_getparam_args *);
int sched_setscheduler(struct thread *, struct sched_setscheduler_args *);
int sched_getscheduler(struct thread *, struct sched_getscheduler_args *);
int sched_yield(struct thread *, struct sched_yield_args *);
int sched_get_priority_max(struct thread *, struct sched_get_priority_max_args *);
int sched_get_priority_min(struct thread *, struct sched_get_priority_min_args *);
int sched_rr_get_interval(struct thread *, struct sched_rr_get_interval_args *);
int utrace(struct thread *, struct utrace_args *);
int kldsym(struct thread *, struct kldsym_args *);
int jail(struct thread *, struct jail_args *);
int sigprocmask(struct thread *, struct sigprocmask_args *);
int sigsuspend(struct thread *, struct sigsuspend_args *);
int sigpending(struct thread *, struct sigpending_args *);
int sigtimedwait(struct thread *, struct sigtimedwait_args *);
int sigwaitinfo(struct thread *, struct sigwaitinfo_args *);
int __acl_get_file(struct thread *, struct __acl_get_file_args *);
int __acl_set_file(struct thread *, struct __acl_set_file_args *);
int __acl_get_fd(struct thread *, struct __acl_get_fd_args *);
int __acl_set_fd(struct thread *, struct __acl_set_fd_args *);
int __acl_delete_file(struct thread *, struct __acl_delete_file_args *);
int __acl_delete_fd(struct thread *, struct __acl_delete_fd_args *);
int __acl_aclcheck_file(struct thread *, struct __acl_aclcheck_file_args *);
int __acl_aclcheck_fd(struct thread *, struct __acl_aclcheck_fd_args *);
int extattrctl(struct thread *, struct extattrctl_args *);
int extattr_set_file(struct thread *, struct extattr_set_file_args *);
int extattr_get_file(struct thread *, struct extattr_get_file_args *);
int extattr_delete_file(struct thread *, struct extattr_delete_file_args *);
int aio_waitcomplete(struct thread *, struct aio_waitcomplete_args *);
int getresuid(struct thread *, struct getresuid_args *);
int getresgid(struct thread *, struct getresgid_args *);
int kqueue(struct thread *, struct kqueue_args *);
int kevent(struct thread *, struct kevent_args *);
int lkmressys(struct thread *, struct nosys_args *);
int extattr_set_fd(struct thread *, struct extattr_set_fd_args *);
int extattr_get_fd(struct thread *, struct extattr_get_fd_args *);
int extattr_delete_fd(struct thread *, struct extattr_delete_fd_args *);
int __setugid(struct thread *, struct __setugid_args *);
int nfsclnt(struct thread *, struct nfsclnt_args *);
int eaccess(struct thread *, struct eaccess_args *);
int nmount(struct thread *, struct nmount_args *);
int kse_exit(struct thread *, struct kse_exit_args *);
int kse_wakeup(struct thread *, struct kse_wakeup_args *);
int kse_create(struct thread *, struct kse_create_args *);
int kse_thr_interrupt(struct thread *, struct kse_thr_interrupt_args *);
int kse_release(struct thread *, struct kse_release_args *);
int __mac_get_proc(struct thread *, struct __mac_get_proc_args *);
int __mac_set_proc(struct thread *, struct __mac_set_proc_args *);
int __mac_get_fd(struct thread *, struct __mac_get_fd_args *);
int __mac_get_file(struct thread *, struct __mac_get_file_args *);
int __mac_set_fd(struct thread *, struct __mac_set_fd_args *);
int __mac_set_file(struct thread *, struct __mac_set_file_args *);
int kenv(struct thread *, struct kenv_args *);
int lchflags(struct thread *, struct lchflags_args *);
int uuidgen(struct thread *, struct uuidgen_args *);
int sendfile(struct thread *, struct sendfile_args *);
int mac_syscall(struct thread *, struct mac_syscall_args *);
int getfsstat(struct thread *, struct getfsstat_args *);
int statfs(struct thread *, struct statfs_args *);
int fstatfs(struct thread *, struct fstatfs_args *);
int fhstatfs(struct thread *, struct fhstatfs_args *);
int ksem_close(struct thread *, struct ksem_close_args *);
int ksem_post(struct thread *, struct ksem_post_args *);
int ksem_wait(struct thread *, struct ksem_wait_args *);
int ksem_trywait(struct thread *, struct ksem_trywait_args *);
int ksem_init(struct thread *, struct ksem_init_args *);
int ksem_open(struct thread *, struct ksem_open_args *);
int ksem_unlink(struct thread *, struct ksem_unlink_args *);
int ksem_getvalue(struct thread *, struct ksem_getvalue_args *);
int ksem_destroy(struct thread *, struct ksem_destroy_args *);
int __mac_get_pid(struct thread *, struct __mac_get_pid_args *);
int __mac_get_link(struct thread *, struct __mac_get_link_args *);
int __mac_set_link(struct thread *, struct __mac_set_link_args *);
int extattr_set_link(struct thread *, struct extattr_set_link_args *);
int extattr_get_link(struct thread *, struct extattr_get_link_args *);
int extattr_delete_link(struct thread *, struct extattr_delete_link_args *);
int __mac_execve(struct thread *, struct __mac_execve_args *);
int sigaction(struct thread *, struct sigaction_args *);
int sigreturn(struct thread *, struct sigreturn_args *);
int getcontext(struct thread *, struct getcontext_args *);
int setcontext(struct thread *, struct setcontext_args *);
int swapcontext(struct thread *, struct swapcontext_args *);
int swapoff(struct thread *, struct swapoff_args *);
int __acl_get_link(struct thread *, struct __acl_get_link_args *);
int __acl_set_link(struct thread *, struct __acl_set_link_args *);
int __acl_delete_link(struct thread *, struct __acl_delete_link_args *);
int __acl_aclcheck_link(struct thread *, struct __acl_aclcheck_link_args *);
int sigwait(struct thread *, struct sigwait_args *);
int thr_create(struct thread *, struct thr_create_args *);
int thr_exit(struct thread *, struct thr_exit_args *);
int thr_self(struct thread *, struct thr_self_args *);
int thr_kill(struct thread *, struct thr_kill_args *);
int _umtx_lock(struct thread *, struct _umtx_lock_args *);
int _umtx_unlock(struct thread *, struct _umtx_unlock_args *);
int jail_attach(struct thread *, struct jail_attach_args *);
int extattr_list_fd(struct thread *, struct extattr_list_fd_args *);
int extattr_list_file(struct thread *, struct extattr_list_file_args *);
int extattr_list_link(struct thread *, struct extattr_list_link_args *);
int kse_switchin(struct thread *, struct kse_switchin_args *);
int ksem_timedwait(struct thread *, struct ksem_timedwait_args *);
int thr_suspend(struct thread *, struct thr_suspend_args *);
int thr_wake(struct thread *, struct thr_wake_args *);
int kldunloadf(struct thread *, struct kldunloadf_args *);
# 40 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_13_A[NUM_STACKS];  
typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_14_A[NUM_STACKS];  
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_15_A[NUM_STACKS];  

typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_tz_dsttime[NUM_STACKS];   
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
# 41 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
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
# 122 "freebsd5/freebsd/usr/src/sys/sys/event.h"
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
# 123 "freebsd5/freebsd/usr/src/sys/sys/event.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h" 2
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2







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


typedef  struct vmmeter   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_16_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_59_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_17_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_60_T; extern  _GLOBAL_60_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_61_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_18_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_62_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_64_T; extern  _GLOBAL_64_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 58 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2


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
# 61 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
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
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_65_T; extern  _GLOBAL_65_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_67_T; extern  _GLOBAL_67_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_69_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_19_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_70_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_20_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_76_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_21_A[NUM_STACKS];   
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_78_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_84_T; extern  _GLOBAL_84_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_84_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_85_T; extern  _GLOBAL_85_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_86_T; extern  _GLOBAL_86_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_89_T  )  ( void  ) ; extern  _GLOBAL_89_T global_cpu_idle_hook[NUM_STACKS];   
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
# 42 "freebsd5/kern/kern_ntptime.c" 2
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
typedef  struct lock_class   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lock_class_sx[NUM_STACKS];    

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
# 43 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_94_T; extern  _GLOBAL_94_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_95_T; extern  _GLOBAL_95_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 44 "freebsd5/kern/kern_ntptime.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/timex.h" 1
# 101 "freebsd5/freebsd/usr/src/sys/sys/timex.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/syscall.h" 1
# 102 "freebsd5/freebsd/usr/src/sys/sys/timex.h" 2
# 179 "freebsd5/freebsd/usr/src/sys/sys/timex.h"
struct ntptimeval {
 struct timespec time;
 long maxerror;
 long esterror;
 long tai;
 int time_state;
};
# 194 "freebsd5/freebsd/usr/src/sys/sys/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;







 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;
};




void ntp_update_second(int64_t *adjustment, time_t *newsec);
# 46 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/timetc.h" 1
# 30 "freebsd5/freebsd/usr/src/sys/sys/timetc.h"
struct timecounter;
typedef u_int timecounter_get_t(struct timecounter *);
typedef void timecounter_pps_t(struct timecounter *);

struct timecounter {
 timecounter_get_t *tc_get_timecount;





 timecounter_pps_t *tc_poll_pps;






 u_int tc_counter_mask;

 u_int64_t tc_frequency;

 char *tc_name;

 int tc_quality;






 void *tc_priv;

 struct timecounter *tc_next;

};

typedef  struct timecounter   _GLOBAL_99_T; extern  _GLOBAL_99_T  * global_timecounter[NUM_STACKS];    

u_int64_t tc_getfrequency(void);
void tc_init(struct timecounter *tc);
void tc_setclock(struct timespec *ts);
void tc_ticktock(void);
# 47 "freebsd5/kern/kern_ntptime.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/timepps.h" 1
# 18 "freebsd5/freebsd/usr/src/sys/sys/timepps.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 19 "freebsd5/freebsd/usr/src/sys/sys/timepps.h" 2




typedef int pps_handle_t;

typedef unsigned pps_seq_t;

typedef struct ntp_fp {
 unsigned int integral;
 unsigned int fractional;
} ntp_fp_t;

typedef union pps_timeu {
 struct timespec tspec;
 ntp_fp_t ntpfp;
 unsigned long longpad[3];
} pps_timeu_t;

typedef struct {
 pps_seq_t assert_sequence;
 pps_seq_t clear_sequence;
 pps_timeu_t assert_tu;
 pps_timeu_t clear_tu;
 int current_mode;
} pps_info_t;







typedef struct {
 int api_version;
 int mode;
 pps_timeu_t assert_off_tu;
 pps_timeu_t clear_off_tu;
} pps_params_t;
# 86 "freebsd5/freebsd/usr/src/sys/sys/timepps.h"
struct pps_fetch_args {
 int tsformat;
 pps_info_t pps_info_buf;
 struct timespec timeout;
};

struct pps_kcbind_args {
 int kernel_consumer;
 int edge;
 int tsformat;
};
# 108 "freebsd5/freebsd/usr/src/sys/sys/timepps.h"
struct pps_state {

 struct timehands *capth;
 unsigned capgen;
 unsigned capcount;


 pps_params_t ppsparam;
 pps_info_t ppsinfo;
 int kcmode;
 int ppscap;
 struct timecounter *ppstc;
 unsigned ppscount[3];
};

void pps_capture(struct pps_state *pps);
void pps_event(struct pps_state *pps, int event);
void pps_init(struct pps_state *pps);
int pps_ioctl(unsigned long cmd, caddr_t data, struct pps_state *pps);
void hardpps(struct timespec *tsp, long nsec);
# 48 "freebsd5/kern/kern_ntptime.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_113_T; extern  _GLOBAL_113_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_113_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_115_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_25_A[NUM_STACKS];  


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
# 49 "freebsd5/kern/kern_ntptime.c" 2




typedef int64_t l_fp;
# 142 "freebsd5/kern/kern_ntptime.c"
typedef  int  _GLOBAL_116_T; static  _GLOBAL_116_T  global_time_state[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  int  _GLOBAL_117_T; static  _GLOBAL_117_T  global_time_status[NUM_STACKS] = {  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  0x0040,  };     
typedef  long  _GLOBAL_118_T; static  _GLOBAL_118_T  global_time_tai[NUM_STACKS];   
typedef  long  _GLOBAL_119_T; static  _GLOBAL_119_T  global_time_monitor[NUM_STACKS];   
typedef  long  _GLOBAL_120_T; static  _GLOBAL_120_T  global_time_constant[NUM_STACKS];   
typedef  long  _GLOBAL_121_T; static  _GLOBAL_121_T  global_time_precision[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  long  _GLOBAL_122_T; static  _GLOBAL_122_T  global_time_maxerror[NUM_STACKS] = {  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  };       
typedef  long  _GLOBAL_123_T; static  _GLOBAL_123_T  global_time_esterror[NUM_STACKS] = {  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  500000000L / 1000 ,  };       
typedef  long  _GLOBAL_124_T; static  _GLOBAL_124_T  global_time_reftime[NUM_STACKS];   
typedef  l_fp  _GLOBAL_125_T; static  _GLOBAL_125_T  global_time_offset[NUM_STACKS];   
typedef  l_fp  _GLOBAL_126_T; static  _GLOBAL_126_T  global_time_freq[NUM_STACKS];   
typedef  l_fp  _GLOBAL_127_T; static  _GLOBAL_127_T  global_time_adj[NUM_STACKS];   

typedef  int64_t  _GLOBAL_128_T; static  _GLOBAL_128_T  global_time_adjtime[NUM_STACKS];   
# 195 "freebsd5/kern/kern_ntptime.c"
static void ntp_init(void);
static void hardupdate(long offset);
# 205 "freebsd5/kern/kern_ntptime.c"
static int
ntp_sysctl(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 struct ntptimeval ntv;
 struct timespec atv;

 nanotime(&atv);
 ntv.time.tv_sec = atv.tv_sec;
 ntv.time.tv_nsec = atv.tv_nsec;
 ntv.maxerror = global_time_maxerror[get_stack_id()];
 ntv.esterror = global_time_esterror[get_stack_id()];
 ntv.tai = global_time_tai[get_stack_id()];
 ntv.time_state = global_time_state[get_stack_id()];
# 227 "freebsd5/kern/kern_ntptime.c"
 if ((global_time_status[get_stack_id()] & (0x0040 | 0x1000)) ||





     (global_time_status[get_stack_id()] & (0x0002 | 0x0004) &&
     !(global_time_status[get_stack_id()] & 0x0100)) ||




     (global_time_status[get_stack_id()] & 0x0004 &&
     global_time_status[get_stack_id()] & 0x0200) ||





     (global_time_status[get_stack_id()] & 0x0002 &&
     global_time_status[get_stack_id()] & (0x0400 | 0x0800)))
  ntv.time_state = 5;
 return (sysctl_handle_opaque(oidp, &ntv, sizeof ntv, req));
}

typedef  struct sysctl_oid_list  _GLOBAL_129_T;  _GLOBAL_129_T  global_sysctl__kern_ntp_pll_children[NUM_STACKS];    typedef  struct sysctl_oid   _GLOBAL_130_T; static  _GLOBAL_130_T  global_sysctl___kern_ntp_pll[NUM_STACKS] = {  { & global_sysctl__kern_children[0]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[0]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[1]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[1]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[2]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[2]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[3]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[3]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[4]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[4]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[5]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[5]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[6]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[6]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[7]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[7]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[8]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[8]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[9]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[9]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[10]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[10]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[11]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[11]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[12]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[12]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[13]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[13]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[14]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[14]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[15]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[15]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[16]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[16]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[17]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[17]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[18]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[18]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[19]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[19]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[20]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[20]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[21]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[21]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[22]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[22]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[23]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[23]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[24]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[24]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[25]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[25]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[26]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[26]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[27]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[27]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[28]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[28]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[29]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[29]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[30]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[30]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[31]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[31]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[32]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[32]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[33]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[33]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[34]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[34]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[35]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[35]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[36]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[36]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[37]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[37]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[38]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[38]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[39]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[39]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[40]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[40]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[41]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[41]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[42]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[42]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[43]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[43]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[44]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[44]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[45]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[45]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[46]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[46]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[47]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[47]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[48]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[48]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  { & global_sysctl__kern_children[49]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__kern_ntp_pll_children[49]    , 0  , "ntp_pll"  , 0  , "N"  , 0  , ""  } ,  };                     typedef  void const   _GLOBAL_131_T; static  _GLOBAL_131_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[0] ;static  _GLOBAL_131_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[1] ;static  _GLOBAL_131_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[2] ;static  _GLOBAL_131_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[3] ;static  _GLOBAL_131_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[4] ;static  _GLOBAL_131_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[5] ;static  _GLOBAL_131_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[6] ;static  _GLOBAL_131_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[7] ;static  _GLOBAL_131_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[8] ;static  _GLOBAL_131_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[9] ;static  _GLOBAL_131_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[10] ;static  _GLOBAL_131_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[11] ;static  _GLOBAL_131_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[12] ;static  _GLOBAL_131_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[13] ;static  _GLOBAL_131_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[14] ;static  _GLOBAL_131_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[15] ;static  _GLOBAL_131_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[16] ;static  _GLOBAL_131_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[17] ;static  _GLOBAL_131_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[18] ;static  _GLOBAL_131_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[19] ;static  _GLOBAL_131_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[20] ;static  _GLOBAL_131_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[21] ;static  _GLOBAL_131_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[22] ;static  _GLOBAL_131_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[23] ;static  _GLOBAL_131_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[24] ;static  _GLOBAL_131_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[25] ;static  _GLOBAL_131_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[26] ;static  _GLOBAL_131_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[27] ;static  _GLOBAL_131_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[28] ;static  _GLOBAL_131_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[29] ;static  _GLOBAL_131_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[30] ;static  _GLOBAL_131_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[31] ;static  _GLOBAL_131_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[32] ;static  _GLOBAL_131_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[33] ;static  _GLOBAL_131_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[34] ;static  _GLOBAL_131_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[35] ;static  _GLOBAL_131_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[36] ;static  _GLOBAL_131_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[37] ;static  _GLOBAL_131_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[38] ;static  _GLOBAL_131_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[39] ;static  _GLOBAL_131_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[40] ;static  _GLOBAL_131_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[41] ;static  _GLOBAL_131_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[42] ;static  _GLOBAL_131_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[43] ;static  _GLOBAL_131_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[44] ;static  _GLOBAL_131_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[45] ;static  _GLOBAL_131_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[46] ;static  _GLOBAL_131_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[47] ;static  _GLOBAL_131_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[48] ;static  _GLOBAL_131_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ntp_pll __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll[49] ;         
typedef  struct sysctl_oid   _GLOBAL_132_T; static  _GLOBAL_132_T  global_sysctl___kern_ntp_pll_gettime[NUM_STACKS] = {  { & global_sysctl__kern_ntp_pll_children[0]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[1]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[2]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[3]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[4]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[5]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[6]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[7]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[8]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[9]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[10]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[11]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[12]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[13]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[14]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[15]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[16]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[17]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[18]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[19]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[20]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[21]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[22]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[23]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[24]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[25]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[26]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[27]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[28]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[29]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[30]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[31]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[32]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[33]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[34]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[35]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[36]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[37]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[38]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[39]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[40]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[41]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[42]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[43]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[44]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[45]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[46]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[47]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[48]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  { & global_sysctl__kern_ntp_pll_children[49]  , { 0 }   , ( - 1  )   , ( 5 | 0x80000000  )   , 0  , sizeof ( struct ntptimeval  )   , "gettime"  , ntp_sysctl  , "S,ntptimeval"  , 0  , ""  } ,  };   
 
# 253 "freebsd5/kern/kern_ntptime.c"
   
 
# 253 "freebsd5/kern/kern_ntptime.c"
                typedef  void const   _GLOBAL_133_T; static  _GLOBAL_133_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[0] ;static  _GLOBAL_133_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[1] ;static  _GLOBAL_133_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[2] ;static  _GLOBAL_133_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[3] ;static  _GLOBAL_133_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[4] ;static  _GLOBAL_133_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[5] ;static  _GLOBAL_133_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[6] ;static  _GLOBAL_133_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[7] ;static  _GLOBAL_133_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[8] ;static  _GLOBAL_133_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[9] ;static  _GLOBAL_133_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[10] ;static  _GLOBAL_133_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[11] ;static  _GLOBAL_133_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[12] ;static  _GLOBAL_133_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[13] ;static  _GLOBAL_133_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[14] ;static  _GLOBAL_133_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[15] ;static  _GLOBAL_133_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[16] ;static  _GLOBAL_133_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[17] ;static  _GLOBAL_133_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[18] ;static  _GLOBAL_133_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[19] ;static  _GLOBAL_133_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[20] ;static  _GLOBAL_133_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[21] ;static  _GLOBAL_133_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[22] ;static  _GLOBAL_133_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[23] ;static  _GLOBAL_133_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[24] ;static  _GLOBAL_133_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[25] ;static  _GLOBAL_133_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[26] ;static  _GLOBAL_133_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[27] ;static  _GLOBAL_133_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[28] ;static  _GLOBAL_133_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[29] ;static  _GLOBAL_133_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[30] ;static  _GLOBAL_133_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[31] ;static  _GLOBAL_133_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[32] ;static  _GLOBAL_133_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[33] ;static  _GLOBAL_133_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[34] ;static  _GLOBAL_133_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[35] ;static  _GLOBAL_133_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[36] ;static  _GLOBAL_133_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[37] ;static  _GLOBAL_133_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[38] ;static  _GLOBAL_133_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[39] ;static  _GLOBAL_133_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[40] ;static  _GLOBAL_133_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[41] ;static  _GLOBAL_133_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[42] ;static  _GLOBAL_133_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[43] ;static  _GLOBAL_133_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[44] ;static  _GLOBAL_133_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[45] ;static  _GLOBAL_133_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[46] ;static  _GLOBAL_133_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[47] ;static  _GLOBAL_133_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[48] ;static  _GLOBAL_133_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ntp_pll_gettime __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ntp_pll_gettime[49] ;    
 
# 253 "freebsd5/kern/kern_ntptime.c"
    
                                                               
# 280 "freebsd5/kern/kern_ntptime.c"
int
ntp_adjtime(struct thread *td, struct ntp_adjtime_args *uap)
{
 struct timex ntv;
 long freq;
 int modes;
 int s;
 int error;

 error = copyin((caddr_t)uap->tp, (caddr_t)&ntv, sizeof(ntv));
 if (error)
  return(error);
# 302 "freebsd5/kern/kern_ntptime.c"
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 modes = ntv.modes;
 if (modes)
  error = suser(td);
 if (error)
  goto done2;
 s = splclock();
 if (modes & 0x0004)
  global_time_maxerror[get_stack_id()] = ntv.maxerror;
 if (modes & 0x0008)
  global_time_esterror[get_stack_id()] = ntv.esterror;
 if (modes & 0x0010) {
  if (global_time_status[get_stack_id()] & 0x0001 && !(ntv.status & 0x0001)) {
   global_time_state[get_stack_id()] = 0;
   global_time_status[get_stack_id()] = 0x0040;



  }
  global_time_status[get_stack_id()] &= (0x0100 | 0x0200 | 0x0400 | 0x0800 | 0x1000 | 0x2000 | 0x4000 | 0x8000);
  global_time_status[get_stack_id()] |= ntv.status & ~(0x0100 | 0x0200 | 0x0400 | 0x0800 | 0x1000 | 0x2000 | 0x4000 | 0x8000);
 }
 if (modes & 0x0020) {
  if (ntv.constant < 0)
   global_time_constant[get_stack_id()] = 0;
  else if (ntv.constant > 10)
   global_time_constant[get_stack_id()] = 10;
  else
   global_time_constant[get_stack_id()] = ntv.constant;
 }
 if (modes & 0x0080) {
  if (ntv.constant > 0)
   global_time_tai[get_stack_id()] = ntv.constant;
 }
# 346 "freebsd5/kern/kern_ntptime.c"
 if (modes & 0x2000)
  global_time_status[get_stack_id()] |= 0x2000;
 if (modes & 0x1000)
  global_time_status[get_stack_id()] &= ~0x2000;
 if (modes & 0x4000)
  global_time_status[get_stack_id()] |= 0x8000;
 if (modes & 0x8000)
  global_time_status[get_stack_id()] &= ~0x8000;
 if (modes & 0x0002) {
  freq = (ntv.freq * 1000LL) >> 16;
  if (freq > 500000L)
   ((global_time_freq[get_stack_id()]) = (int64_t)(500000L) << 32);
  else if (freq < -500000L)
   ((global_time_freq[get_stack_id()]) = (int64_t)(-500000L) << 32);
  else {




   global_time_freq[get_stack_id()] = ntv.freq * 1000LL * 65536LL;
  }



 }
 if (modes & 0x0001) {
  if (global_time_status[get_stack_id()] & 0x2000)
   hardupdate(ntv.offset);
  else
   hardupdate(ntv.offset * 1000);
 }





 if (global_time_status[get_stack_id()] & 0x2000)
  ntv.offset = ((global_time_offset[get_stack_id()]) < 0 ? -(-(global_time_offset[get_stack_id()]) >> 32) : (global_time_offset[get_stack_id()]) >> 32);
 else
  ntv.offset = ((global_time_offset[get_stack_id()]) < 0 ? -(-(global_time_offset[get_stack_id()]) >> 32) : (global_time_offset[get_stack_id()]) >> 32) / 1000;
 ntv.freq = (((global_time_freq[get_stack_id()] / 1000LL) << 16) < 0 ? -(-((global_time_freq[get_stack_id()] / 1000LL) << 16) >> 32) : ((global_time_freq[get_stack_id()] / 1000LL) << 16) >> 32);
 ntv.maxerror = global_time_maxerror[get_stack_id()];
 ntv.esterror = global_time_esterror[get_stack_id()];
 ntv.status = global_time_status[get_stack_id()];
 ntv.constant = global_time_constant[get_stack_id()];
 if (global_time_status[get_stack_id()] & 0x2000)
  ntv.precision = global_time_precision[get_stack_id()];
 else
  ntv.precision = global_time_precision[get_stack_id()] / 1000;
 ntv.tolerance = 500000L * (65536 / 1000);
# 409 "freebsd5/kern/kern_ntptime.c"
 splx(s);

 error = copyout((caddr_t)&ntv, (caddr_t)uap->tp, sizeof(ntv));
 if (error)
  goto done2;





 if ((global_time_status[get_stack_id()] & (0x0040 | 0x1000)) ||
     (global_time_status[get_stack_id()] & (0x0002 | 0x0004) &&
     !(global_time_status[get_stack_id()] & 0x0100)) ||
     (global_time_status[get_stack_id()] & 0x0004 &&
     global_time_status[get_stack_id()] & 0x0200) ||
     (global_time_status[get_stack_id()] & 0x0002 &&
     global_time_status[get_stack_id()] & (0x0400 | 0x0800))) {
  td->td_retval[0] = 5;
 } else {
  td->td_retval[0] = global_time_state[get_stack_id()];
 }
done2:
 do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (error);
}
# 443 "freebsd5/kern/kern_ntptime.c"
void
ntp_update_second(int64_t *adjustment, time_t *newsec)
{
 int tickrate;
 l_fp ftemp;
# 456 "freebsd5/kern/kern_ntptime.c"
 global_time_maxerror[get_stack_id()] += 500000L / 1000;
# 466 "freebsd5/kern/kern_ntptime.c"
 switch (global_time_state[get_stack_id()]) {




  case 0:
  if (global_time_status[get_stack_id()] & 0x0010)
   global_time_state[get_stack_id()] = 1;
  else if (global_time_status[get_stack_id()] & 0x0020)
   global_time_state[get_stack_id()] = 2;
  break;





  case 1:
  if (!(global_time_status[get_stack_id()] & 0x0010))
   global_time_state[get_stack_id()] = 0;
  else if ((*newsec) % 86400 == 0) {
   (*newsec)--;
   global_time_state[get_stack_id()] = 3;
   global_time_tai[get_stack_id()]++;
  }
  break;




  case 2:
  if (!(global_time_status[get_stack_id()] & 0x0020))
   global_time_state[get_stack_id()] = 0;
  else if (((*newsec) + 1) % 86400 == 0) {
   (*newsec)++;
   global_time_tai[get_stack_id()]--;
   global_time_state[get_stack_id()] = 4;
  }
  break;




  case 3:
   global_time_state[get_stack_id()] = 4;
  break;




  case 4:
  if (!(global_time_status[get_stack_id()] & (0x0010 | 0x0020)))
   global_time_state[get_stack_id()] = 0;
 }
# 527 "freebsd5/kern/kern_ntptime.c"
 ftemp = global_time_offset[get_stack_id()];
# 536 "freebsd5/kern/kern_ntptime.c"
  do { if ((ftemp) < 0) (ftemp) = -(-(ftemp) >> (4 + global_time_constant[get_stack_id()])); else (ftemp) = (ftemp) >> (4 + global_time_constant[get_stack_id()]); } while (0);

 global_time_adj[get_stack_id()] = ftemp;
 ((global_time_offset[get_stack_id()]) -= (ftemp));
 ((global_time_adj[get_stack_id()]) += (global_time_freq[get_stack_id()]));






 if (global_time_adjtime[get_stack_id()] != 0) {
  if (global_time_adjtime[get_stack_id()] > 1000000)
   tickrate = 5000;
  else if (global_time_adjtime[get_stack_id()] < -1000000)
   tickrate = -5000;
  else if (global_time_adjtime[get_stack_id()] > 500)
   tickrate = 500;
  else if (global_time_adjtime[get_stack_id()] < -500)
   tickrate = -500;
  else
   tickrate = global_time_adjtime[get_stack_id()];
  global_time_adjtime[get_stack_id()] -= tickrate;
  ((ftemp) = (int64_t)(tickrate * 1000) << 32);
  ((global_time_adj[get_stack_id()]) += (ftemp));
 }
 *adjustment = global_time_adj[get_stack_id()];







}
# 582 "freebsd5/kern/kern_ntptime.c"
static void
ntp_init()
{







 ((global_time_offset[get_stack_id()]) = 0);
 ((global_time_freq[get_stack_id()]) = 0);







}

typedef  struct sysinit   _GLOBAL_134_T; static  _GLOBAL_134_T  global_ntpclocks_sys_init[NUM_STACKS] = {  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLOCKS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) ntp_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_135_T; static  _GLOBAL_135_T  * const  _global_section_0___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[0] ;static  _GLOBAL_135_T  * const  _global_section_1___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[1] ;static  _GLOBAL_135_T  * const  _global_section_2___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[2] ;static  _GLOBAL_135_T  * const  _global_section_3___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[3] ;static  _GLOBAL_135_T  * const  _global_section_4___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[4] ;static  _GLOBAL_135_T  * const  _global_section_5___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[5] ;static  _GLOBAL_135_T  * const  _global_section_6___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[6] ;static  _GLOBAL_135_T  * const  _global_section_7___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[7] ;static  _GLOBAL_135_T  * const  _global_section_8___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[8] ;static  _GLOBAL_135_T  * const  _global_section_9___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[9] ;static  _GLOBAL_135_T  * const  _global_section_10___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[10] ;static  _GLOBAL_135_T  * const  _global_section_11___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[11] ;static  _GLOBAL_135_T  * const  _global_section_12___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[12] ;static  _GLOBAL_135_T  * const  _global_section_13___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[13] ;static  _GLOBAL_135_T  * const  _global_section_14___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[14] ;static  _GLOBAL_135_T  * const  _global_section_15___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[15] ;static  _GLOBAL_135_T  * const  _global_section_16___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[16] ;static  _GLOBAL_135_T  * const  _global_section_17___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[17] ;static  _GLOBAL_135_T  * const  _global_section_18___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[18] ;static  _GLOBAL_135_T  * const  _global_section_19___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[19] ;static  _GLOBAL_135_T  * const  _global_section_20___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[20] ;static  _GLOBAL_135_T  * const  _global_section_21___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[21] ;static  _GLOBAL_135_T  * const  _global_section_22___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[22] ;static  _GLOBAL_135_T  * const  _global_section_23___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[23] ;static  _GLOBAL_135_T  * const  _global_section_24___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[24] ;static  _GLOBAL_135_T  * const  _global_section_25___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[25] ;static  _GLOBAL_135_T  * const  _global_section_26___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[26] ;static  _GLOBAL_135_T  * const  _global_section_27___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[27] ;static  _GLOBAL_135_T  * const  _global_section_28___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[28] ;static  _GLOBAL_135_T  * const  _global_section_29___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[29] ;static  _GLOBAL_135_T  * const  _global_section_30___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[30] ;static  _GLOBAL_135_T  * const  _global_section_31___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[31] ;static  _GLOBAL_135_T  * const  _global_section_32___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[32] ;static  _GLOBAL_135_T  * const  _global_section_33___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[33] ;static  _GLOBAL_135_T  * const  _global_section_34___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[34] ;static  _GLOBAL_135_T  * const  _global_section_35___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[35] ;static  _GLOBAL_135_T  * const  _global_section_36___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[36] ;static  _GLOBAL_135_T  * const  _global_section_37___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[37] ;static  _GLOBAL_135_T  * const  _global_section_38___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[38] ;static  _GLOBAL_135_T  * const  _global_section_39___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[39] ;static  _GLOBAL_135_T  * const  _global_section_40___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[40] ;static  _GLOBAL_135_T  * const  _global_section_41___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[41] ;static  _GLOBAL_135_T  * const  _global_section_42___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[42] ;static  _GLOBAL_135_T  * const  _global_section_43___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[43] ;static  _GLOBAL_135_T  * const  _global_section_44___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[44] ;static  _GLOBAL_135_T  * const  _global_section_45___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[45] ;static  _GLOBAL_135_T  * const  _global_section_46___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[46] ;static  _GLOBAL_135_T  * const  _global_section_47___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[47] ;static  _GLOBAL_135_T  * const  _global_section_48___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[48] ;static  _GLOBAL_135_T  * const  _global_section_49___set_sysinit_set_sym_ntpclocks_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_ntpclocks_sys_init[49] ;         
# 626 "freebsd5/kern/kern_ntptime.c"
static void
hardupdate(offset)
 long offset;
{
 long mtemp;
 l_fp ftemp;







 if (!(global_time_status[get_stack_id()] & 0x0001))
  return;
 if (!(global_time_status[get_stack_id()] & 0x0004 && global_time_status[get_stack_id()] &
     0x0100)) {
  if (offset > 500000000L)
   global_time_monitor[get_stack_id()] = 500000000L;
  else if (offset < -500000000L)
   global_time_monitor[get_stack_id()] = -500000000L;
  else
   global_time_monitor[get_stack_id()] = offset;
  ((global_time_offset[get_stack_id()]) = (int64_t)(global_time_monitor[get_stack_id()]) << 32);
 }







 if (global_time_status[get_stack_id()] & 0x0002 && global_time_status[get_stack_id()] & 0x0100) {
  global_time_reftime[get_stack_id()] = global_time_second[get_stack_id()];
  return;
 }
 if (global_time_status[get_stack_id()] & 0x0080 || global_time_reftime[get_stack_id()] == 0)
  global_time_reftime[get_stack_id()] = global_time_second[get_stack_id()];
 mtemp = global_time_second[get_stack_id()] - global_time_reftime[get_stack_id()];
 ((ftemp) = (int64_t)(global_time_monitor[get_stack_id()]) << 32);
 do { if ((ftemp) < 0) (ftemp) = -(-(ftemp) >> ((4 + 2 + global_time_constant[get_stack_id()]) << 1)); else (ftemp) = (ftemp) >> ((4 + 2 + global_time_constant[get_stack_id()]) << 1); } while (0);
 ((ftemp) *= (mtemp));
 ((global_time_freq[get_stack_id()]) += (ftemp));
 global_time_status[get_stack_id()] &= ~0x4000;
 if (mtemp >= 256 && (global_time_status[get_stack_id()] & 0x0008 || mtemp >
     2048)) {
  ((ftemp) = (int64_t)((global_time_monitor[get_stack_id()] << 4) / mtemp) << 32);
  do { if ((ftemp) < 0) (ftemp) = -(-(ftemp) >> (2 + 4)); else (ftemp) = (ftemp) >> (2 + 4); } while (0);
  ((global_time_freq[get_stack_id()]) += (ftemp));
  global_time_status[get_stack_id()] |= 0x4000;
 }
 global_time_reftime[get_stack_id()] = global_time_second[get_stack_id()];
 if (((global_time_freq[get_stack_id()]) < 0 ? -(-(global_time_freq[get_stack_id()]) >> 32) : (global_time_freq[get_stack_id()]) >> 32) > 500000L)
  ((global_time_freq[get_stack_id()]) = (int64_t)(500000L) << 32);
 else if (((global_time_freq[get_stack_id()]) < 0 ? -(-(global_time_freq[get_stack_id()]) >> 32) : (global_time_freq[get_stack_id()]) >> 32) < -500000L)
  ((global_time_freq[get_stack_id()]) = (int64_t)(-500000L) << 32);
}
# 901 "freebsd5/kern/kern_ntptime.c"
int
adjtime(struct thread *td, struct adjtime_args *uap)
{
 struct timeval atv;
 int error;

 if ((error = suser(td)))
  return (error);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (uap->olddelta) {
  atv.tv_sec = global_time_adjtime[get_stack_id()] / 1000000;
  atv.tv_usec = global_time_adjtime[get_stack_id()] % 1000000;
  if (atv.tv_usec < 0) {
   atv.tv_usec += 1000000;
   atv.tv_sec--;
  }
  error = copyout(&atv, uap->olddelta, sizeof(atv));
  if (error)
   goto done2;
 }
 if (uap->delta) {
  error = copyin(uap->delta, &atv, sizeof(atv));
  if (error)
   goto done2;
  global_time_adjtime[get_stack_id()] = (int64_t)atv.tv_sec * 1000000 + atv.tv_usec;
 }
done2:
 do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (error);
}

