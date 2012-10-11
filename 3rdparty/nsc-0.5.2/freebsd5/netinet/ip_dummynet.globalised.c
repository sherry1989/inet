# 1 "freebsd5/netinet/ip_dummynet.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet/ip_dummynet.c"
# 56 "freebsd5/netinet/ip_dummynet.c"
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

# 57 "freebsd5/netinet/ip_dummynet.c" 2
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
# 58 "freebsd5/netinet/ip_dummynet.c" 2
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
typedef  struct malloc_type   _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_14_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_42_T; extern  _GLOBAL_42_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_15_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };   

typedef  struct malloc_type   _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_17_A[NUM_STACKS];   
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
# 59 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
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
# 60 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_19_A[NUM_STACKS];  
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_20_A[NUM_STACKS];  
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_21_A[NUM_STACKS];  

typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_tz_dsttime[NUM_STACKS];   
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
# 61 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/module.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef enum modeventtype {
 MOD_LOAD,
 MOD_UNLOAD,
 MOD_SHUTDOWN,
 MOD_QUIESCE
} modeventtype_t;

typedef struct module *module_t;
typedef int (*modeventhand_t)(module_t, int , void *);




typedef struct moduledata {
 const char *name;
 modeventhand_t evhand;
 void *priv;
} moduledata_t;





typedef union modspecific {
 int intval;
 u_int uintval;
 long longval;
 u_long ulongval;
} modspecific_t;




struct mod_depend {
 int md_ver_minimum;
 int md_ver_preferred;
 int md_ver_maximum;
};




struct mod_version {
 int mv_version;
};

struct mod_metadata {
 int md_version;
 int md_type;
 void *md_data;
 const char *md_cval;
};
# 129 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef  struct sx   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_72_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_22_A[NUM_STACKS];   
# 138 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct linker_file;

void module_register_init(const void *);
int module_register(const struct moduledata *, struct linker_file *);
module_t module_lookupbyname(const char *);
module_t module_lookupbyid(int);
void module_reference(module_t);
void module_release(module_t);
int module_unload(module_t, int flags);
int module_getid(module_t);
module_t module_getfnext(module_t);
void module_setspecific(module_t, modspecific_t *);
# 168 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct module_stat {
 int version;
 char name[32];
 int refs;
 int id;
 modspecific_t data;
};
# 62 "freebsd5/netinet/ip_dummynet.c" 2
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
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};





typedef  struct malloc_type   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_23_A[NUM_STACKS];   
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


typedef  struct vmmeter   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_75_T; extern  _GLOBAL_75_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_24_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_25_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_79_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_26_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_80_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_82_T; extern  _GLOBAL_82_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 58 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2

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
# 676 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct malloc_type   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_83_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_27_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_84_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_28_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_85_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_29_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_86_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_30_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_87_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_31_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_88_T; extern  _GLOBAL_88_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_90_T; extern  _GLOBAL_90_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_92_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_32_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_93_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_33_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_99_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_34_A[NUM_STACKS];   
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_101_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_107_T; extern  _GLOBAL_107_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_107_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_108_T; extern  _GLOBAL_108_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_112_T  )  ( void  ) ; extern  _GLOBAL_112_T global_cpu_idle_hook[NUM_STACKS];   
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
# 63 "freebsd5/netinet/ip_dummynet.c" 2
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
# 64 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 2
# 47 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef u_quad_t so_gen_t;
# 60 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct socket {
 int so_count;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 int so_qstate;
 void *so_pcb;
 struct protosw *so_proto;
# 80 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 struct socket *so_head;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_incomp;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_comp;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_list;
 short so_qlen;
 short so_incqlen;

 short so_qlimit;
 short so_timeo;
 u_short so_error;
 struct sigio *so_sigio;

 u_long so_oobmark;
 struct { struct aiocblist *tqh_first; struct aiocblist **tqh_last; } so_aiojobq;



 struct sockbuf {
  struct selinfo sb_sel;
  struct mtx sb_mtx;

  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  u_int sb_ctl;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
  short sb_state;
 } so_rcv, so_snd;
# 132 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 void (*so_upcall)(struct socket *, void *, int);
 void *so_upcallarg;
 struct ucred *so_cred;
 struct label *so_label;
 struct label *so_peerlabel;

 so_gen_t so_gencnt;
 void *so_emuldata;
  struct so_accf {
  struct accept_filter *so_accept_filter;
  void *so_accept_filter_arg;
  char *so_accept_filter_str;
 } *so_accf;
};
# 160 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef  struct mtx   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_accept_mtx[NUM_STACKS];    
# 228 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct xsocket {
 size_t xso_len;
 struct socket *xso_so;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 caddr_t so_pcb;
 int xso_protocol;
 int xso_family;
 short so_qlen;
 short so_incqlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 u_long so_oobmark;
 struct xsockbuf {
  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
 } so_rcv, so_snd;
 uid_t so_uid;
};
# 410 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
enum sopt_dir { SOPT_GET, SOPT_SET };
struct sockopt {
 enum sopt_dir sopt_dir;
 int sopt_level;
 int sopt_name;
 void *sopt_val;
 size_t sopt_valsize;
 struct thread *sopt_td;
};

struct accept_filter {
 char accf_name[16];
 void (*accf_callback)
  (struct socket *so, void *arg, int waitflag);
 void * (*accf_create)
  (struct socket *so, char *arg);
 void (*accf_destroy)
  (struct socket *so);
 struct { struct accept_filter *sle_next; } accf_next;
};


typedef  struct malloc_type   _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_35_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_36_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_37_A[NUM_STACKS];   


typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_119_T; extern  _GLOBAL_119_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_so_gencnt[NUM_STACKS];   

struct mbuf;
struct sockaddr;
struct ucred;
struct uio;




int do_setopt_accept_filter(struct socket *so, struct sockopt *sopt);
int so_setsockopt(struct socket *so, int level, int optname,
     void *optval, size_t optlen);
int sockargs(struct mbuf **mp, caddr_t buf, int buflen, int type);
int getsockaddr(struct sockaddr **namp, caddr_t uaddr, size_t len);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappend_locked(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
void sbappendstream_locked(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendaddr_locked(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
int sbappendcontrol_locked(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbappendrecord_locked(struct sockbuf *sb, struct mbuf *m0);
void sbcheck(struct sockbuf *sb);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdrop_locked(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbdroprecord_locked(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbflush_locked(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbinsertoob_locked(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb, struct socket *so);
void sbrelease_locked(struct sockbuf *sb, struct socket *so);
int sbreserve(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
int sbreserve_locked(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
void sbtoxsockbuf(struct sockbuf *sb, struct xsockbuf *xsb);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct sockaddr **nam);
struct socket *soalloc(int mflags);
int socheckuid(struct socket *so, uid_t uid);
int sobind(struct socket *so, struct sockaddr *nam, struct thread *td);
void socantrcvmore(struct socket *so);
void socantrcvmore_locked(struct socket *so);
void socantsendmore(struct socket *so);
void socantsendmore_locked(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct sockaddr *nam, struct thread *td);
int soconnect2(struct socket *so1, struct socket *so2);
int socow_setup(struct mbuf *m0, struct uio *uio);
int socreate(int dom, struct socket **aso, int type, int proto,
     struct ucred *cred, struct thread *td);
void sodealloc(struct socket *so);
int sodisconnect(struct socket *so);
struct sockaddr *sodupsockaddr(const struct sockaddr *sa, int mflags);
void sofree(struct socket *so);
int sogetopt(struct socket *so, struct sockopt *sopt);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog, struct thread *td);
void solisten_proto(struct socket *so);
int solisten_proto_check(struct socket *so);
struct socket *
 sonewconn(struct socket *head, int connstatus);
int sooptcopyin(struct sockopt *sopt, void *buf, size_t len, size_t minlen);
int sooptcopyout(struct sockopt *sopt, const void *buf, size_t len);


int soopt_getm(struct sockopt *sopt, struct mbuf **mp);
int soopt_mcopyin(struct sockopt *sopt, struct mbuf *m);
int soopt_mcopyout(struct sockopt *sopt, struct mbuf *m);

int sopoll(struct socket *so, int events, struct ucred *active_cred,
     struct thread *td);
int soreceive(struct socket *so, struct sockaddr **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct sockaddr *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags,
     struct thread *td);
int sosetopt(struct socket *so, struct sockopt *sopt);
int soshutdown(struct socket *so, int how);
void sotoxsocket(struct socket *so, struct xsocket *xso);
void sowakeup(struct socket *so, struct sockbuf *sb);
# 556 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
int accept_filt_add(struct accept_filter *filt);
int accept_filt_del(char *name);
struct accept_filter *accept_filt_get(char *name);
# 65 "freebsd5/netinet/ip_dummynet.c" 2

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
typedef  struct sysctl_oid_list   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_38_A[NUM_STACKS];  
typedef  char  _GLOBAL_134_T; extern  _GLOBAL_134_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_134_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_39_A[NUM_STACKS];  
typedef  char  _GLOBAL_135_T; extern  _GLOBAL_135_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_40_A[NUM_STACKS];  
typedef  char  _GLOBAL_136_T; extern  _GLOBAL_136_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_41_A[NUM_STACKS];  


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
# 67 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/net/if.h" 1
# 51 "freebsd5/net/if.h"
struct ifnet;
# 69 "freebsd5/net/if.h"
struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_physical;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
 u_char ifi_recvquota;
 u_char ifi_xmitquota;
 u_char ifi_datalen;
 u_long ifi_mtu;
 u_long ifi_metric;
 u_long ifi_baudrate;

 u_long ifi_ipackets;
 u_long ifi_ierrors;
 u_long ifi_opackets;
 u_long ifi_oerrors;
 u_long ifi_collisions;
 u_long ifi_ibytes;
 u_long ifi_obytes;
 u_long ifi_imcasts;
 u_long ifi_omcasts;
 u_long ifi_iqdrops;
 u_long ifi_noproto;
 u_long ifi_hwassist;
 time_t ifi_epoch;



 struct timeval ifi_lastchange;
};
# 174 "freebsd5/net/if.h"
struct if_msghdr {
 u_short ifm_msglen;
 u_char ifm_version;
 u_char ifm_type;
 int ifm_addrs;
 int ifm_flags;
 u_short ifm_index;
 struct if_data ifm_data;
};





struct ifa_msghdr {
 u_short ifam_msglen;
 u_char ifam_version;
 u_char ifam_type;
 int ifam_addrs;
 int ifam_flags;
 u_short ifam_index;
 int ifam_metric;
};





struct ifma_msghdr {
 u_short ifmam_msglen;
 u_char ifmam_version;
 u_char ifmam_type;
 int ifmam_addrs;
 int ifmam_flags;
 u_short ifmam_index;
};




struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_index;
 char ifan_name[16];
 u_short ifan_what;
};
# 232 "freebsd5/net/if.h"
struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags[2];
  short ifru_index;
  int ifru_metric;
  int ifru_mtu;
  int ifru_phys;
  int ifru_media;
  caddr_t ifru_data;
  int ifru_cap[2];
 } ifr_ifru;
# 260 "freebsd5/net/if.h"
};






struct ifaliasreq {
 char ifra_name[16];
 struct sockaddr ifra_addr;
 struct sockaddr ifra_broadaddr;
 struct sockaddr ifra_mask;
};

struct ifmediareq {
 char ifm_name[16];
 int ifm_current;
 int ifm_mask;
 int ifm_status;
 int ifm_active;
 int ifm_count;
 int *ifm_ulist;
};
# 292 "freebsd5/net/if.h"
struct ifstat {
 char ifs_name[16];
 char ascii[800 + 1];
};







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};





struct if_laddrreq {
 char iflr_name[16];
 u_int flags;

 u_int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};





typedef  struct malloc_type   _GLOBAL_137_T; extern  _GLOBAL_137_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_137_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_42_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_138_T; extern  _GLOBAL_138_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_43_A[NUM_STACKS];   
# 350 "freebsd5/net/if.h"
struct thread;


# 1 "freebsd5/net/if_var.h" 1
# 65 "freebsd5/net/if_var.h"
struct mbuf;
struct thread;
struct rtentry;
struct rt_addrinfo;
struct socket;
struct ether_header;






# 1 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
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
typedef  struct lock_class   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_lock_class_sx[NUM_STACKS];    

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
# 33 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
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

typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_146_T; extern volatile  _GLOBAL_146_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_44_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_149_T; extern  _GLOBAL_149_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_150_T; extern  _GLOBAL_150_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 35 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2


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
# 78 "freebsd5/net/if_var.h" 2




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
# 83 "freebsd5/net/if_var.h" 2




# 1 "freebsd5/freebsd/usr/include/altq/if_altq.h" 1
# 42 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;

 struct mtx ifq_mtx;



 struct mbuf *ifq_drv_head;
 struct mbuf *ifq_drv_tail;
 int ifq_drv_len;
 int ifq_drv_maxlen;


 int altq_type;
 int altq_flags;
 void *altq_disc;
 struct ifnet *altq_ifp;

 int (*altq_enqueue)(struct ifaltq *, struct mbuf *,
    struct altq_pktattr *);
 struct mbuf *(*altq_dequeue)(struct ifaltq *, int);
 int (*altq_request)(struct ifaltq *, int, void *);


 void *altq_clfier;
 void *(*altq_classify)(void *, struct mbuf *, int);


 struct tb_regulator *altq_tbr;


 struct top_cdnr *altq_cdnr;
};
# 100 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct altq_pktattr {
 void *pattr_class;
 int pattr_af;
 caddr_t pattr_hdr;
};




struct altq_tag {
 u_int32_t qid;

 int af;
 void *hdr;
};
# 125 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct tb_regulator {
 int64_t tbr_rate;
 int64_t tbr_depth;

 int64_t tbr_token;
 int64_t tbr_filluptime;
 u_int64_t tbr_last;

 int tbr_lastop;

};
# 174 "freebsd5/freebsd/usr/include/altq/if_altq.h"
extern int altq_attach(struct ifaltq *, int, void *,
         int (*)(struct ifaltq *, struct mbuf *,
          struct altq_pktattr *),
         struct mbuf *(*)(struct ifaltq *, int),
         int (*)(struct ifaltq *, int, void *),
         void *,
         void *(*)(void *, struct mbuf *, int));
extern int altq_detach(struct ifaltq *);
extern int altq_enable(struct ifaltq *);
extern int altq_disable(struct ifaltq *);
typedef  struct mbuf    * ( *_GLOBAL_155_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_155_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_157_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_157_T global_altq_input[NUM_STACKS];      
# 88 "freebsd5/net/if_var.h" 2


struct ifnethead { struct ifnet *tqh_first; struct ifnet **tqh_last; };
struct ifaddrhead { struct ifaddr *tqh_first; struct ifaddr **tqh_last; };
struct ifprefixhead { struct ifprefix *tqh_first; struct ifprefix **tqh_last; };
struct ifmultihead { struct ifmultiaddr *tqh_first; struct ifmultiaddr **tqh_last; };




struct ifqueue {
 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;
 struct mtx ifq_mtx;
};
# 132 "freebsd5/net/if_var.h"
struct ifnet {
 void *if_softc;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_link;
 char if_xname[16];
 const char *if_dname;
 int if_dunit;
 struct ifaddrhead if_addrhead;
# 149 "freebsd5/net/if_var.h"
 struct knlist if_klist;
 int if_pcount;
 void *if_carp;
 struct bpf_if *if_bpf;
 u_short if_index;
 short if_timer;
 u_short if_nvlans;
 int if_flags;
 int if_capabilities;
 int if_capenable;
 void *if_linkmib;
 size_t if_linkmiblen;
 struct if_data if_data;
 struct ifmultihead if_multiaddrs;
 int if_amcount;

 int (*if_output)
  (struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);
 void (*if_input)
  (struct ifnet *, struct mbuf *);
 void (*if_start)
  (struct ifnet *);
 int (*if_ioctl)
  (struct ifnet *, u_long, caddr_t);
 void (*if_watchdog)
  (struct ifnet *);
 void (*if_init)
  (void *);
 int (*if_resolvemulti)
  (struct ifnet *, struct sockaddr **, struct sockaddr *);
 void *if_spare1;
 void *if_spare2;
 void *if_spare3;
 u_int if_spare_flags1;
 u_int if_spare_flags2;

 struct ifaltq if_snd;



 const u_int8_t *if_broadcastaddr;

 struct lltable *lltables;

 struct label *if_label;


 struct ifprefixhead if_prefixhead;
 void *if_afdata[37];
 int if_afdata_initialized;
 struct mtx if_afdata_mtx;
 struct task if_starttask;
};

typedef void if_init_f_t(void *);
# 319 "freebsd5/net/if_var.h"
typedef void (*ifaddr_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifaddr_event { struct eventhandler_entry ee; ifaddr_event_handler_t eh_func; }; struct __hack;

typedef void (*ifnet_arrival_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifnet_arrival_event { struct eventhandler_entry ee; ifnet_arrival_event_handler_t eh_func; }; struct __hack;

typedef void (*ifnet_departure_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifnet_departure_event { struct eventhandler_entry ee; ifnet_departure_event_handler_t eh_func; }; struct __hack;
# 345 "freebsd5/net/if_var.h"
int if_handoff(struct ifqueue *ifq, struct mbuf *m, struct ifnet *ifp,
     int adjust);





void if_start(struct ifnet *);
# 553 "freebsd5/net/if_var.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct if_data if_data;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_link;
 void (*ifa_rtrequest)
  (int, struct rtentry *, struct rt_addrinfo *);
 u_short ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
 int (*ifa_claim_addr)
  (struct ifaddr *, struct sockaddr *);
 struct mtx ifa_mtx;
};
# 587 "freebsd5/net/if_var.h"
struct ifprefix {
 struct sockaddr *ifpr_prefix;
 struct ifnet *ifpr_ifp;
 struct { struct ifprefix *tqe_next; struct ifprefix **tqe_prev; } ifpr_list;
 u_char ifpr_plen;
 u_char ifpr_type;
};







struct ifmultiaddr {
 struct { struct ifmultiaddr *tqe_next; struct ifmultiaddr **tqe_prev; } ifma_link;
 struct sockaddr *ifma_addr;
 struct sockaddr *ifma_lladdr;
 struct ifnet *ifma_ifp;
 u_int ifma_refcount;
 void *ifma_protospec;
};
# 630 "freebsd5/net/if_var.h"
typedef  struct mtx   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_162_T; extern  _GLOBAL_162_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_if_index[NUM_STACKS];   

int if_addmulti(struct ifnet *, struct sockaddr *, struct ifmultiaddr **);
int if_allmulti(struct ifnet *, int);
void if_attach(struct ifnet *);
int if_delmulti(struct ifnet *, struct sockaddr *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_initname(struct ifnet *, const char *, int);
int if_printf(struct ifnet *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int if_setlladdr(struct ifnet *, const u_char *, int);
void if_up(struct ifnet *);

int ifioctl(struct socket *, u_long, caddr_t, struct thread *);
int ifpromisc(struct ifnet *, int);
struct ifnet *ifunit(const char *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithnet(struct sockaddr *);
struct ifaddr *ifa_ifwithroute(int, struct sockaddr *, struct sockaddr *);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);

struct ifmultiaddr *ifmaof_ifpforaddr(struct sockaddr *, struct ifnet *);
int if_simloop(struct ifnet *ifp, struct mbuf *m, int af, int hlen);
# 354 "freebsd5/net/if.h" 2
# 68 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/net/route.h" 1
# 48 "freebsd5/net/route.h"
struct route {
 struct rtentry *ro_rt;
 struct sockaddr ro_dst;
};





struct rt_metrics_lite {
 u_long rmx_mtu;
 u_long rmx_expire;
 u_long rmx_pksent;
};

struct rt_metrics {
 u_long rmx_locks;
 u_long rmx_mtu;
 u_long rmx_hopcount;
 u_long rmx_expire;
 u_long rmx_recvpipe;
 u_long rmx_sendpipe;
 u_long rmx_ssthresh;
 u_long rmx_rtt;
 u_long rmx_rttvar;
 u_long rmx_pksent;
 u_long rmx_filler[4];
};
# 88 "freebsd5/net/route.h"
struct mbuf;
# 99 "freebsd5/net/route.h"
# 1 "freebsd5/net/radix.h" 1
# 42 "freebsd5/net/radix.h"
typedef  struct malloc_type   _GLOBAL_164_T; extern  _GLOBAL_164_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_164_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_45_A[NUM_STACKS];   






struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_parent;
 short rn_bit;
 char rn_bmask;
 u_char rn_flags;



 union {
  struct {
   caddr_t rn_Key;
   caddr_t rn_Mask;
   struct radix_node *rn_Dupedkey;
  } rn_leaf;
  struct {
   int rn_Off;
   struct radix_node *rn_L;
   struct radix_node *rn_R;
  } rn_node;
 } rn_u;





};
# 88 "freebsd5/net/radix.h"
struct radix_mask {
 short rm_bit;
 char rm_unused;
 u_char rm_flags;
 struct radix_mask *rm_mklist;
 union {
  caddr_t rmu_mask;
  struct radix_node *rmu_leaf;
 } rm_rmu;
 int rm_refs;
};




typedef int walktree_f_t(struct radix_node *, void *);

struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;
 struct radix_node *(*rnh_addaddr)
  (void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);
 struct radix_node *(*rnh_addpkt)
  (void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);
 struct radix_node *(*rnh_deladdr)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_delpkt)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_matchaddr)
  (void *v, struct radix_node_head *head);
 struct radix_node *(*rnh_lookup)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_matchpkt)
  (void *v, struct radix_node_head *head);
 int (*rnh_walktree)
  (struct radix_node_head *head, walktree_f_t *f, void *w);
 int (*rnh_walktree_from)
  (struct radix_node_head *head, void *a, void *m,
       walktree_f_t *f, void *w);
 void (*rnh_close)
  (struct radix_node *rn, struct radix_node_head *head);
 struct radix_node rnh_nodes[3];

 struct mtx rnh_mtx;

};
# 155 "freebsd5/net/radix.h"
void rn_init(void);
int rn_inithead(void **, int);
int rn_refines(void *, void *);
struct radix_node
  *rn_addmask(void *, int, int),
  *rn_addroute (void *, void *, struct radix_node_head *,
   struct radix_node [2]),
  *rn_delete(void *, void *, struct radix_node_head *),
  *rn_lookup (void *v_arg, void *m_arg,
          struct radix_node_head *head),
  *rn_match(void *, struct radix_node_head *);
# 100 "freebsd5/net/route.h" 2

struct rtentry {
 struct radix_node rt_nodes[2];







 struct sockaddr *rt_gateway;
 u_long rt_flags;
 struct ifnet *rt_ifp;
 struct ifaddr *rt_ifa;
 struct rt_metrics_lite rt_rmx;
 long rt_refcnt;
 struct sockaddr *rt_genmask;
 caddr_t rt_llinfo;
 struct rtentry *rt_gwroute;
 struct rtentry *rt_parent;


 struct mtx rt_mtx;

};





struct ortentry {
 u_long rt_hash;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 short rt_flags;
 short rt_refcnt;
 u_long rt_use;
 struct ifnet *rt_ifp;
};
# 175 "freebsd5/net/route.h"
struct rtstat {
 short rts_badredirect;
 short rts_dynamic;
 short rts_newgateway;
 short rts_unreach;
 short rts_wildcard;
};



struct rt_msghdr {
 u_short rtm_msglen;
 u_char rtm_version;
 u_char rtm_type;
 u_short rtm_index;
 int rtm_flags;
 int rtm_addrs;
 pid_t rtm_pid;
 int rtm_seq;
 int rtm_errno;
 int rtm_use;
 u_long rtm_inits;
 struct rt_metrics rtm_rmx;
};
# 260 "freebsd5/net/route.h"
struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[8];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct ifnet *rti_ifp;
};
# 317 "freebsd5/net/route.h"
typedef  struct radix_node_head   _GLOBAL_165_T; extern  _GLOBAL_165_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_165_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_46_A[NUM_STACKS];    

struct ifmultiaddr;

int rt_getifa(struct rt_addrinfo *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_ifmsg(struct ifnet *);
void rt_missmsg(int, struct rt_addrinfo *, int, int);
void rt_newaddrmsg(int, struct ifaddr *, int, struct rtentry *);
void rt_newmaddrmsg(int, struct ifmultiaddr *);
int rt_setgate(struct rtentry *, struct sockaddr *, struct sockaddr *);
# 341 "freebsd5/net/route.h"
void rtalloc_ign(struct route *ro, u_long ignflags);
void rtalloc(struct route *ro);
struct rtentry *rtalloc1(struct sockaddr *, int, u_long);
int rtexpunge(struct rtentry *);
void rtfree(struct rtentry *);
int rtinit(struct ifaddr *, int, int);
int rtioctl(u_long, caddr_t);
void rtredirect(struct sockaddr *, struct sockaddr *,
     struct sockaddr *, int, struct sockaddr *);
int rtrequest(int, struct sockaddr *,
     struct sockaddr *, struct sockaddr *, int, struct rtentry **);
int rtrequest1(int, struct rt_addrinfo *, struct rtentry **);
int rt_check(struct rtentry **, struct rtentry **, struct sockaddr *);
# 69 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/in.h" 1
# 81 "freebsd5/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};




struct sockaddr_in {
 uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};
# 421 "freebsd5/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 558 "freebsd5/netinet/in.h"
struct ifnet; struct mbuf;

int in_broadcast(struct in_addr, struct ifnet *);
int in_canforward(struct in_addr);
int in_localaddr(struct in_addr);
int in_localip(struct in_addr);
char *inet_ntoa(struct in_addr);
char *inet_ntoa_r(struct in_addr ina, char *buf);
# 579 "freebsd5/netinet/in.h"
# 1 "freebsd5/netinet6/in6.h" 1
# 117 "freebsd5/netinet6/in6.h"
struct in6_addr {
 union {
  uint8_t __u6_addr8[16];
  uint16_t __u6_addr16[8];
  uint32_t __u6_addr32[4];
 } __u6_addr;
};
# 145 "freebsd5/netinet6/in6.h"
struct sockaddr_in6 {
 uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 uint32_t sin6_scope_id;
};
# 170 "freebsd5/netinet6/in6.h"
typedef  const struct sockaddr_in6    _GLOBAL_166_T; extern  _GLOBAL_166_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_167_T; extern  _GLOBAL_167_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_168_T; extern  _GLOBAL_168_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_169_T; extern  _GLOBAL_169_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_170_T; extern  _GLOBAL_170_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_171_T; extern  _GLOBAL_171_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_172_T; extern  _GLOBAL_172_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_173_T; extern  _GLOBAL_173_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_174_T; extern  _GLOBAL_174_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_175_T; extern  _GLOBAL_175_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_176_T; extern  _GLOBAL_176_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
# 396 "freebsd5/netinet6/in6.h"
struct route_in6 {
 struct rtentry *ro_rt;
 struct sockaddr_in6 ro_dst;
};
# 513 "freebsd5/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};




struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 610 "freebsd5/netinet6/in6.h"
struct cmsghdr;

int in6_cksum (struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
int in6_localaddr (struct in6_addr *);
int in6_addrscope (struct in6_addr *);
struct in6_ifaddr *in6_ifawithifp (struct ifnet *, struct in6_addr *);
extern void in6_if_up (struct ifnet *);
struct sockaddr;
typedef  u_char  _GLOBAL_177_T; extern  _GLOBAL_177_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_177_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_47_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_179_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_179_T global_faithprefix_p[NUM_STACKS];     
# 647 "freebsd5/netinet6/in6.h"

struct cmsghdr;

extern int inet6_option_space (int);
extern int inet6_option_init (void *, struct cmsghdr **, int);
extern int inet6_option_append (struct cmsghdr *, const uint8_t *, int, int)
           ;
extern uint8_t *inet6_option_alloc (struct cmsghdr *, int, int, int);
extern int inet6_option_next (const struct cmsghdr *, uint8_t **);
extern int inet6_option_find (const struct cmsghdr *, uint8_t **, int);

extern size_t inet6_rthdr_space (int, int);
extern struct cmsghdr *inet6_rthdr_init (void *, int);
extern int inet6_rthdr_add (struct cmsghdr *, const struct in6_addr *, unsigned int)
                ;
extern int inet6_rthdr_lasthop (struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments (const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr (struct cmsghdr *, int);
extern int inet6_rthdr_getflags (const struct cmsghdr *, int);

extern int inet6_opt_init (void *, socklen_t);
extern int inet6_opt_append (void *, socklen_t, int, uint8_t, socklen_t, uint8_t, void **)
                   ;
extern int inet6_opt_finish (void *, socklen_t, int);
extern int inet6_opt_set_val (void *, int, void *, socklen_t);

extern int inet6_opt_next (void *, socklen_t, int, uint8_t *, socklen_t *, void **)
          ;
extern int inet6_opt_find (void *, socklen_t, int, uint8_t, socklen_t *, void **)
          ;
extern int inet6_opt_get_val (void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space (int, int);
extern void *inet6_rth_init (void *, socklen_t, int, int);
extern int inet6_rth_add (void *, const struct in6_addr *);
extern int inet6_rth_reverse (const void *, void *);
extern int inet6_rth_segments (const void *);
extern struct in6_addr *inet6_rth_getaddr (const void *, int);

# 580 "freebsd5/netinet/in.h" 2
# 70 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 71 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/in_var.h" 1
# 37 "freebsd5/netinet/in_var.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/fnv_hash.h" 1
# 11 "freebsd5/freebsd/usr/src/sys/sys/fnv_hash.h"
typedef u_int32_t Fnv32_t;
typedef u_int64_t Fnv64_t;







static __inline Fnv32_t
fnv_32_buf(const void *buf, size_t len, Fnv32_t hval)
{
 const u_int8_t *s = (const u_int8_t *)buf;

 while (len-- != 0) {
  hval *= ((Fnv32_t) 0x01000193UL);
  hval ^= *s++;
 }
 return hval;
}

static __inline Fnv32_t
fnv_32_str(const char *str, Fnv32_t hval)
{
 const u_int8_t *s = (const u_int8_t *)str;
 Fnv32_t c;

 while ((c = *s++) != 0) {
  hval *= ((Fnv32_t) 0x01000193UL);
  hval ^= c;
 }
 return hval;
}

static __inline Fnv64_t
fnv_64_buf(const void *buf, size_t len, Fnv64_t hval)
{
 const u_int8_t *s = (const u_int8_t *)buf;

 while (len-- != 0) {
  hval *= ((Fnv64_t) 0x100000001b3ULL);
  hval ^= *s++;
 }
 return hval;
}

static __inline Fnv64_t
fnv_64_str(const char *str, Fnv64_t hval)
{
 const u_int8_t *s = (const u_int8_t *)str;
 u_register_t c;

 while ((c = *s++) != 0) {
  hval *= ((Fnv64_t) 0x100000001b3ULL);
  hval ^= c;
 }
 return hval;
}
# 38 "freebsd5/netinet/in_var.h" 2







struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_long ia_net;
 u_long ia_netmask;
 u_long ia_subnet;
 u_long ia_subnetmask;
 struct in_addr ia_netbroadcast;
 struct { struct in_ifaddr *le_next; struct in_ifaddr **le_prev; } ia_hash;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_link;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
};

struct in_aliasreq {
 char ifra_name[16];
 struct sockaddr_in ifra_addr;
 struct sockaddr_in ifra_broadaddr;

 struct sockaddr_in ifra_mask;
};
# 82 "freebsd5/netinet/in_var.h"
typedef  u_char  _GLOBAL_180_T; extern  _GLOBAL_180_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_180_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_48_A[NUM_STACKS];  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_181_T; extern  _GLOBAL_181_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_183_T; extern  _GLOBAL_183_T  global_in_ifaddrhmask[NUM_STACKS];   
# 134 "freebsd5/netinet/in_var.h"
struct router_info {
 struct ifnet *rti_ifp;
 int rti_type;
 int rti_time;
 struct { struct router_info *sle_next; } rti_list;
};
# 149 "freebsd5/netinet/in_var.h"
struct in_multi {
 struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_link;
 struct in_addr inm_addr;
 struct ifnet *inm_ifp;
 struct ifmultiaddr *inm_ifma;
 u_int inm_timer;
 u_int inm_state;
 struct router_info *inm_rti;
};




typedef  struct sysctl_oid_list   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_sysctl__net_inet_ip_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_sysctl__net_inet_raw_children[NUM_STACKS];    


typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_in_multihead[NUM_STACKS];         





struct in_multistep {
 struct in_multi *i_inm;
};
# 219 "freebsd5/netinet/in_var.h"
struct route;
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *,
     struct thread *);
void in_rtqdrain(void);
void ip_input(struct mbuf *);
int in_ifadown(struct ifaddr *ifa, int);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int ip_fastforward(struct mbuf *);




# 1 "freebsd5/netinet6/in6_var.h" 1
# 82 "freebsd5/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};

struct nd_ifinfo;
struct scope6_id;
struct in6_ifextra {
 struct in6_ifstat *in6_ifstat;
 struct icmp6_ifstat *icmp6_ifstat;
 struct nd_ifinfo *nd_ifinfo;
 struct scope6_id *scope6_id;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;


 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_net;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 u_int32_t ia_plen;
 struct in6_ifaddr *ia_next;
 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 struct ifprefix *ia6_ifpr;


 struct nd_prefix *ia6_ndpr;
};


struct in6_addrpolicy {
 struct sockaddr_in6 addr;
 struct sockaddr_in6 addrmask;
 int preced;
 int label;
 u_quad_t use;
};




struct in6_ifstat {
 u_quad_t ifs6_in_receive;
 u_quad_t ifs6_in_hdrerr;
 u_quad_t ifs6_in_toobig;
 u_quad_t ifs6_in_noroute;
 u_quad_t ifs6_in_addrerr;
 u_quad_t ifs6_in_protounknown;

 u_quad_t ifs6_in_truncated;
 u_quad_t ifs6_in_discard;

 u_quad_t ifs6_in_deliver;

 u_quad_t ifs6_out_forward;

 u_quad_t ifs6_out_request;

 u_quad_t ifs6_out_discard;
 u_quad_t ifs6_out_fragok;
 u_quad_t ifs6_out_fragfail;
 u_quad_t ifs6_out_fragcreat;

 u_quad_t ifs6_reass_reqd;

 u_quad_t ifs6_reass_ok;


 u_quad_t ifs6_reass_fail;


 u_quad_t ifs6_in_mcast;
 u_quad_t ifs6_out_mcast;
};





struct icmp6_ifstat {




 u_quad_t ifs6_in_msg;

 u_quad_t ifs6_in_error;

 u_quad_t ifs6_in_dstunreach;

 u_quad_t ifs6_in_adminprohib;

 u_quad_t ifs6_in_timeexceed;

 u_quad_t ifs6_in_paramprob;

 u_quad_t ifs6_in_pkttoobig;

 u_quad_t ifs6_in_echo;

 u_quad_t ifs6_in_echoreply;

 u_quad_t ifs6_in_routersolicit;

 u_quad_t ifs6_in_routeradvert;

 u_quad_t ifs6_in_neighborsolicit;

 u_quad_t ifs6_in_neighboradvert;

 u_quad_t ifs6_in_redirect;

 u_quad_t ifs6_in_mldquery;

 u_quad_t ifs6_in_mldreport;

 u_quad_t ifs6_in_mlddone;





 u_quad_t ifs6_out_msg;

 u_quad_t ifs6_out_error;

 u_quad_t ifs6_out_dstunreach;

 u_quad_t ifs6_out_adminprohib;

 u_quad_t ifs6_out_timeexceed;

 u_quad_t ifs6_out_paramprob;

 u_quad_t ifs6_out_pkttoobig;

 u_quad_t ifs6_out_echo;

 u_quad_t ifs6_out_echoreply;

 u_quad_t ifs6_out_routersolicit;

 u_quad_t ifs6_out_routeradvert;

 u_quad_t ifs6_out_neighborsolicit;

 u_quad_t ifs6_out_neighboradvert;

 u_quad_t ifs6_out_redirect;

 u_quad_t ifs6_out_mldquery;

 u_quad_t ifs6_out_mldreport;

 u_quad_t ifs6_out_mlddone;
};

struct in6_ifreq {
 char ifr_name[16];
 union {
  struct sockaddr_in6 ifru_addr;
  struct sockaddr_in6 ifru_dstaddr;
  int ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
  u_int32_t ifru_scope_id[16];
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 struct sockaddr_in6 ifra_addr;
 struct sockaddr_in6 ifra_broadaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 278 "freebsd5/netinet6/in6_var.h"
struct in6_prflags {
 struct prf_ra {
  u_char onlink : 1;
  u_char autonomous : 1;
  u_char reserved : 6;
 } prf_ra;
 u_char prf_reserved1;
 u_short prf_reserved2;

 struct prf_rr {
  u_char decrvalid : 1;
  u_char decrprefd : 1;
  u_char reserved : 6;
 } prf_rr;
 u_char prf_reserved3;
 u_short prf_reserved4;
};

struct in6_prefixreq {
 char ipr_name[16];
 u_char ipr_origin;
 u_char ipr_plen;
 u_int32_t ipr_vltime;
 u_int32_t ipr_pltime;
 struct in6_prflags ipr_flags;
 struct sockaddr_in6 ipr_prefix;
};
# 319 "freebsd5/netinet6/in6_var.h"
struct in6_rrenumreq {
 char irr_name[16];
 u_char irr_origin;
 u_char irr_m_len;
 u_char irr_m_minlen;
 u_char irr_m_maxlen;
 u_char irr_u_uselen;
 u_char irr_u_keeplen;
 struct irr_raflagmask {
  u_char onlink : 1;
  u_char autonomous : 1;
  u_char reserved : 6;
 } irr_raflagmask;
 u_int32_t irr_vltime;
 u_int32_t irr_pltime;
 struct in6_prflags irr_flags;
 struct sockaddr_in6 irr_matchprefix;
 struct sockaddr_in6 irr_useprefix;
};
# 466 "freebsd5/netinet6/in6_var.h"
typedef  struct in6_ifaddr   _GLOBAL_187_T; extern  _GLOBAL_187_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_188_T; extern  _GLOBAL_188_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_188_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_49_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_190_T; extern  _GLOBAL_190_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_190_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_50_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_192_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_51_A[NUM_STACKS];   
# 507 "freebsd5/netinet6/in6_var.h"
struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct { struct in6_multi *le_next; struct in6_multi **le_prev; } in6m_entry;
 struct in6_addr in6m_addr;
 struct ifnet *in6m_ifp;
 struct ifmultiaddr *in6m_ifma;
 u_int in6m_refcount;
 u_int in6m_state;
 u_int in6m_timer;
};


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_in6_multihead[NUM_STACKS];         





struct in6_multistep {
 struct in6_ifaddr *i_ia;
 struct in6_multi *i_in6m;
};
# 578 "freebsd5/netinet6/in6_var.h"
struct in6_multi *in6_addmulti (struct in6_addr *, struct ifnet *, int *)
                ;
void in6_delmulti (struct in6_multi *);
int in6_mask2len (struct in6_addr *, u_char *);
int in6_control (struct socket *, u_long, caddr_t, struct ifnet *, struct thread *)
                  ;
int in6_update_ifa (struct ifnet *, struct in6_aliasreq *, struct in6_ifaddr *)
                            ;
void in6_purgeaddr (struct ifaddr *);
int in6if_do_dad (struct ifnet *);
void in6_purgeif (struct ifnet *);
void in6_savemkludge (struct in6_ifaddr *);
void *in6_domifattach (struct ifnet *);
void in6_domifdetach (struct ifnet *, void *);
void in6_setmaxmtu (void);
void in6_restoremkludge (struct in6_ifaddr *, struct ifnet *);
void in6_purgemkludge (struct ifnet *);
struct in6_ifaddr *in6ifa_ifpforlinklocal (struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr (struct ifnet *, struct in6_addr *);
char *ip6_sprintf (const struct in6_addr *);
int in6_addr2zoneid (struct ifnet *, struct in6_addr *, u_int32_t *);
int in6_matchlen (struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal (struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask (struct in6_addr *, int);
int in6_prefix_ioctl (struct socket *, u_long, caddr_t, struct ifnet *)
                 ;
int in6_prefix_add_ifid (int, struct in6_ifaddr *);
void in6_prefix_remove_ifid (int, struct in6_ifaddr *);
void in6_purgeprefix (struct ifnet *);

int in6_is_addr_deprecated (struct sockaddr_in6 *);
struct inpcb;
int in6_embedscope (struct in6_addr *, const struct sockaddr_in6 *, struct inpcb *, struct ifnet **)
                                  ;
int in6_recoverscope (struct sockaddr_in6 *, const struct in6_addr *, struct ifnet *)
                 ;
void in6_clearscope (struct in6_addr *);
int in6_src_ioctl (u_long, caddr_t);
# 234 "freebsd5/netinet/in_var.h" 2
# 72 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/ip.h" 1
# 47 "freebsd5/netinet/ip.h"
struct ip {

 u_int ip_hl:4,
  ip_v:4;





 u_char ip_tos;
 u_short ip_len;
 u_short ip_id;
 u_short ip_off;




 u_char ip_ttl;
 u_char ip_p;
 u_short ip_sum;
 struct in_addr ip_src,ip_dst;
} __attribute__((__packed__)) ;


typedef char __assert71[(sizeof (struct ip) == 20) ? 1 : -1];
# 147 "freebsd5/netinet/ip.h"
struct ip_timestamp {
 u_char ipt_code;
 u_char ipt_len;
 u_char ipt_ptr;

 u_int ipt_flg:4,
  ipt_oflw:4;





 union ipt_timestamp {
  n_long ipt_time[1];
  struct ipt_ta {
   struct in_addr ipt_addr;
   n_long ipt_time;
  } ipt_ta[1];
 } ipt_timestamp;
};
# 197 "freebsd5/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_char ippseudo_pad;
 u_char ippseudo_p;
 u_short ippseudo_len;
};
# 73 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/ip_fw.h" 1
# 53 "freebsd5/netinet/ip_fw.h"
enum ipfw_opcodes {
 O_NOP,

 O_IP_SRC,
 O_IP_SRC_MASK,
 O_IP_SRC_ME,
 O_IP_SRC_SET,

 O_IP_DST,
 O_IP_DST_MASK,
 O_IP_DST_ME,
 O_IP_DST_SET,

 O_IP_SRCPORT,
 O_IP_DSTPORT,
 O_PROTO,

 O_MACADDR2,
 O_MAC_TYPE,

 O_LAYER2,
 O_IN,
 O_FRAG,

 O_RECV,
 O_XMIT,
 O_VIA,

 O_IPOPT,
 O_IPLEN,
 O_IPID,

 O_IPTOS,
 O_IPPRECEDENCE,
 O_IPTTL,

 O_IPVER,
 O_UID,
 O_GID,
 O_ESTAB,
 O_TCPFLAGS,
 O_TCPWIN,
 O_TCPSEQ,
 O_TCPACK,
 O_ICMPTYPE,
 O_TCPOPTS,

 O_VERREVPATH,
 O_VERSRCREACH,

 O_PROBE_STATE,
 O_KEEP_STATE,
 O_LIMIT,
 O_LIMIT_PARENT,





 O_LOG,
 O_PROB,

 O_CHECK_STATE,
 O_ACCEPT,
 O_DENY,
 O_REJECT,
 O_COUNT,
 O_SKIPTO,
 O_PIPE,
 O_QUEUE,
 O_DIVERT,
 O_TEE,
 O_FORWARD_IP,
 O_FORWARD_MAC,




 O_IPSEC,
 O_IP_SRC_LOOKUP,
 O_IP_DST_LOOKUP,
 O_ANTISPOOF,
 O_JAIL,

 O_LAST_OPCODE
};
# 167 "freebsd5/netinet/ip_fw.h"
typedef struct _ipfw_insn {
 enum ipfw_opcodes opcode:8;
 u_int8_t len;





 u_int16_t arg1;
} ipfw_insn;
# 187 "freebsd5/netinet/ip_fw.h"
typedef struct _ipfw_insn_u16 {
 ipfw_insn o;
 u_int16_t ports[2];
} ipfw_insn_u16;





typedef struct _ipfw_insn_u32 {
 ipfw_insn o;
 u_int32_t d[1];
} ipfw_insn_u32;




typedef struct _ipfw_insn_ip {
 ipfw_insn o;
 struct in_addr addr;
 struct in_addr mask;
} ipfw_insn_ip;




typedef struct _ipfw_insn_sa {
 ipfw_insn o;
 struct sockaddr_in sa;
} ipfw_insn_sa;




typedef struct _ipfw_insn_mac {
 ipfw_insn o;
 u_char addr[12];
 u_char mask[12];
} ipfw_insn_mac;




typedef struct _ipfw_insn_if {
 ipfw_insn o;
 union {
  struct in_addr ip;
  int glob;
 } p;
 char name[16];
} ipfw_insn_if;
# 247 "freebsd5/netinet/ip_fw.h"
typedef struct _ipfw_insn_pipe {
 ipfw_insn o;
 void *pipe_ptr;
} ipfw_insn_pipe;




typedef struct _ipfw_insn_limit {
 ipfw_insn o;
 u_int8_t _pad;
 u_int8_t limit_mask;





 u_int16_t conn_limit;
} ipfw_insn_limit;




typedef struct _ipfw_insn_log {
        ipfw_insn o;
 u_int32_t max_log;
 u_int32_t log_left;
} ipfw_insn_log;
# 301 "freebsd5/netinet/ip_fw.h"
struct ip_fw {
 struct ip_fw *next;
 struct ip_fw *next_rule;


 u_int16_t act_ofs;
 u_int16_t cmd_len;
 u_int16_t rulenum;
 u_int8_t set;

 u_int8_t _pad;


 u_int64_t pcnt;
 u_int64_t bcnt;
 u_int32_t timestamp;

 ipfw_insn cmd[1];
};
# 331 "freebsd5/netinet/ip_fw.h"
struct ipfw_flow_id {
 u_int32_t dst_ip;
 u_int32_t src_ip;
 u_int16_t dst_port;
 u_int16_t src_port;
 u_int8_t proto;
 u_int8_t flags;
};




typedef struct _ipfw_dyn_rule ipfw_dyn_rule;

struct _ipfw_dyn_rule {
 ipfw_dyn_rule *next;
 struct ip_fw *rule;


 ipfw_dyn_rule *parent;
 u_int64_t pcnt;
 u_int64_t bcnt;
 struct ipfw_flow_id id;
 u_int32_t expire;
 u_int32_t bucket;
 u_int32_t state;


 u_int32_t ack_fwd;
 u_int32_t ack_rev;

 u_int16_t dyn_type;
 u_int16_t count;
};
# 388 "freebsd5/netinet/ip_fw.h"
typedef struct _ipfw_table_entry {
 in_addr_t addr;
 u_int32_t value;
 u_int16_t tbl;
 u_int8_t masklen;
} ipfw_table_entry;

typedef struct _ipfw_table {
 u_int32_t size;
 u_int32_t cnt;
 u_int16_t tbl;
 ipfw_table_entry ent[0];
} ipfw_table;
# 416 "freebsd5/netinet/ip_fw.h"
struct ip_fw_args {
 struct mbuf *m;
 struct ifnet *oif;
 struct sockaddr_in *next_hop;
 struct ip_fw *rule;
 struct ether_header *eh;

 int flags;

 struct ipfw_flow_id f_id;
 u_int32_t retval;
 struct inpcb *inp;
};






struct sockopt;
struct dn_flow_set;

int ipfw_check_in(void *, struct mbuf **, struct ifnet *, int, struct inpcb *inp);
int ipfw_check_out(void *, struct mbuf **, struct ifnet *, int, struct inpcb *inp);

int ipfw_chk(struct ip_fw_args *);

int ipfw_init(void);
void ipfw_destroy(void);

void flush_pipe_ptrs(struct dn_flow_set *match);

typedef int ip_fw_ctl_t(struct sockopt *);
typedef  ip_fw_ctl_t  _GLOBAL_194_T; extern  _GLOBAL_194_T  * global_ip_fw_ctl_ptr[NUM_STACKS];   
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_fw_one_pass[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_fw_enable[NUM_STACKS];   


typedef int ip_fw_chk_t(struct ip_fw_args *args);
typedef  ip_fw_chk_t  _GLOBAL_197_T; extern  _GLOBAL_197_T  * global_ip_fw_chk_ptr[NUM_STACKS];   
# 74 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/ip_dummynet.h" 1
# 60 "freebsd5/netinet/ip_dummynet.h"
typedef u_int64_t dn_key ;
# 100 "freebsd5/netinet/ip_dummynet.h"
struct dn_heap_entry {
    dn_key key ;
    void *object ;
} ;

struct dn_heap {
    int size ;
    int elements ;
    int offset ;
    struct dn_heap_entry *p ;
} ;
# 119 "freebsd5/netinet/ip_dummynet.h"
struct dn_pkt_tag {
    struct ip_fw *rule;
    int dn_dir;






    dn_key output_time;
    struct ifnet *ifp;
    int flags ;
};
# 202 "freebsd5/netinet/ip_dummynet.h"
struct dn_flow_queue {
    struct dn_flow_queue *next ;
    struct ipfw_flow_id id ;

    struct mbuf *head, *tail ;
    u_int len ;
    u_int len_bytes ;
    u_long numbytes ;

    u_int64_t tot_pkts ;
    u_int64_t tot_bytes ;
    u_int32_t drops ;

    int hash_slot ;


    int avg ;
    int count ;
    int random ;
    u_int32_t q_time ;


    struct dn_flow_set *fs ;
    int heap_pos ;
    dn_key sched_time ;

    dn_key S,F ;




} ;
# 247 "freebsd5/netinet/ip_dummynet.h"
struct dn_flow_set {
    struct dn_flow_set *next;

    u_short fs_nr ;
    u_short flags_fs;
# 260 "freebsd5/netinet/ip_dummynet.h"
    struct dn_pipe *pipe ;
    u_short parent_nr ;

    int weight ;
    int qsize ;
    int plr ;

    struct ipfw_flow_id flow_mask ;


    int rq_size ;
    int rq_elements ;
    struct dn_flow_queue **rq;

    u_int32_t last_expired ;
    int backlogged ;






    int w_q ;
    int max_th ;
    int min_th ;
    int max_p ;
    u_int c_1 ;
    u_int c_2 ;
    u_int c_3 ;
    u_int c_4 ;
    u_int * w_q_lookup ;
    u_int lookup_depth ;
    int lookup_step ;
    int lookup_weight ;
    int avg_pkt_size ;
    int max_pkt_size ;
} ;
# 312 "freebsd5/netinet/ip_dummynet.h"
struct dn_pipe {
    struct dn_pipe *next ;

    int pipe_nr ;
    int bandwidth;
    int delay ;

    struct mbuf *head, *tail ;


    struct dn_heap scheduler_heap ;
    struct dn_heap not_eligible_heap;
    struct dn_heap idle_heap ;

    dn_key V ;
    int sum;
    int numbytes;

    dn_key sched_time ;





    char if_name[16];
    struct ifnet *ifp ;
    int ready ;

    struct dn_flow_set fs ;
};


typedef int ip_dn_ctl_t(struct sockopt *);
typedef void ip_dn_ruledel_t(void *);
typedef int ip_dn_io_t(struct mbuf *m, int pipe_nr, int dir,
 struct ip_fw_args *fwa);
typedef  ip_dn_ctl_t  _GLOBAL_198_T; extern  _GLOBAL_198_T  * global_ip_dn_ctl_ptr[NUM_STACKS];   
typedef  ip_dn_ruledel_t  _GLOBAL_199_T; extern  _GLOBAL_199_T  * global_ip_dn_ruledel_ptr[NUM_STACKS];   
typedef  ip_dn_io_t  _GLOBAL_200_T; extern  _GLOBAL_200_T  * global_ip_dn_io_ptr[NUM_STACKS];   






static __inline struct ip_fw *
ip_dn_claim_rule(struct mbuf *m)
{
 struct m_tag *mtag = m_tag_find(m, 15, ((void *)0));
 if (mtag != ((void *)0)) {
  mtag->m_tag_id = 0;
  return (((struct dn_pkt_tag *)(mtag+1))->rule);
 } else
  return (((void *)0));
}
# 75 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/netinet/ip_var.h" 1
# 41 "freebsd5/netinet/ip_var.h"
struct ipovly {
 u_char ih_x1[9];
 u_char ih_pr;
 u_short ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};
# 56 "freebsd5/netinet/ip_var.h"
struct ipq {
 struct { struct ipq *tqe_next; struct ipq **tqe_prev; } ipq_list;
 u_char ipq_ttl;
 u_char ipq_p;
 u_short ipq_id;
 struct mbuf *ipq_frags;
 struct in_addr ipq_src,ipq_dst;
 u_char ipq_nfrags;
 struct label *ipq_label;
};
# 76 "freebsd5/netinet/ip_var.h"
struct ipoption {
 struct in_addr ipopt_dst;
 char ipopt_list[40];
};





struct ip_moptions {
 struct ifnet *imo_multicast_ifp;
 struct in_addr imo_multicast_addr;
 u_char imo_multicast_ttl;
 u_char imo_multicast_loop;
 u_short imo_num_memberships;
 struct in_multi *imo_membership[20];
 u_long imo_multicast_vif;
};

struct ipstat {
 u_long ips_total;
 u_long ips_badsum;
 u_long ips_tooshort;
 u_long ips_toosmall;
 u_long ips_badhlen;
 u_long ips_badlen;
 u_long ips_fragments;
 u_long ips_fragdropped;
 u_long ips_fragtimeout;
 u_long ips_forward;
 u_long ips_fastforward;
 u_long ips_cantforward;
 u_long ips_redirectsent;
 u_long ips_noproto;
 u_long ips_delivered;
 u_long ips_localout;
 u_long ips_odropped;
 u_long ips_reassembled;
 u_long ips_fragmented;
 u_long ips_ofragments;
 u_long ips_cantfrag;
 u_long ips_badoptions;
 u_long ips_noroute;
 u_long ips_badvers;
 u_long ips_rawout;
 u_long ips_toolong;
 u_long ips_notmember;
 u_long ips_nogif;
 u_long ips_badaddr;
};
# 139 "freebsd5/netinet/ip_var.h"
struct ip;
struct inpcb;
struct route;
struct sockopt;

typedef  struct ipstat   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_ipstat[NUM_STACKS];    
typedef  u_short  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_ip_id[NUM_STACKS];   
typedef  int  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_ip_defttl[NUM_STACKS];   
typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_ipforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_ip_doopts[NUM_STACKS];   



typedef  u_char  _GLOBAL_206_T; extern  _GLOBAL_206_T  _GLOBAL_0_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_ip_protox_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_ip_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_protox_I) *_GLOBAL_ip_protox_52_A[NUM_STACKS];  
typedef  struct socket   _GLOBAL_207_T; extern  _GLOBAL_207_T  * global_ip_rsvpd[NUM_STACKS];    
typedef  struct socket   _GLOBAL_208_T; extern  _GLOBAL_208_T  * global_ip_mrouter[NUM_STACKS];    
typedef  int   ( *_GLOBAL_210_T  )  ( int  ) ; extern  _GLOBAL_210_T global_legal_vif_num[NUM_STACKS];   
typedef  u_long   ( *_GLOBAL_212_T  )  ( int  ) ; extern  _GLOBAL_212_T global_ip_mcast_src[NUM_STACKS];   
typedef  int  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_rsvp_on[NUM_STACKS];   
typedef  struct pr_usrreqs   _GLOBAL_214_T; extern  _GLOBAL_214_T  _GLOBAL_0_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_1_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_2_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_3_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_4_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_5_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_6_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_7_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_8_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_9_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_10_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_11_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_12_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_13_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_14_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_15_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_16_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_17_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_18_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_19_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_20_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_21_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_22_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_23_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_24_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_25_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_26_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_27_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_28_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_29_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_30_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_31_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_32_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_33_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_34_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_35_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_36_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_37_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_38_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_39_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_40_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_41_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_42_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_43_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_44_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_45_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_46_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_47_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_48_rip_usrreqs_I; extern  _GLOBAL_214_T  _GLOBAL_49_rip_usrreqs_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rip_usrreqs_I) *_GLOBAL_rip_usrreqs_53_A[NUM_STACKS];   

int ip_ctloutput(struct socket *, struct sockopt *sopt);
void ip_drain(void);
int ip_fragment(struct ip *ip, struct mbuf **m_frag, int mtu,
     u_long if_hwassist_flags, int sw_csum);
void ip_freemoptions(struct ip_moptions *);
void ip_init(void);
typedef  int   ( *_GLOBAL_216_T  )  ( struct ip   *  , struct ifnet   *   , struct mbuf   *   , struct ip_moptions   *   ) ; extern  _GLOBAL_216_T global_ip_mforward[NUM_STACKS];           
       
int ip_output(struct mbuf *,
     struct mbuf *, struct route *, int, struct ip_moptions *,
     struct inpcb *);
struct mbuf *
  ip_reass(struct mbuf *);
struct in_ifaddr *
  ip_rtaddr(struct in_addr);
void ip_savecontrol(struct inpcb *, struct mbuf **, struct ip *,
  struct mbuf *);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(struct mbuf *);
void ip_stripoptions(struct mbuf *, struct mbuf *);
u_int16_t ip_randomid(void);
int rip_ctloutput(struct socket *, struct sockopt *);
void rip_ctlinput(int, struct sockaddr *, void *);
void rip_init(void);
void rip_input(struct mbuf *, int);
int rip_output(struct mbuf *, struct socket *, u_long);
void ipip_input(struct mbuf *, int);
void rsvp_input(struct mbuf *, int);
int ip_rsvp_init(struct socket *);
int ip_rsvp_done(void);
typedef  int   ( *_GLOBAL_218_T  )  ( struct socket   *  , struct sockopt   *   ) ; extern  _GLOBAL_218_T global_ip_rsvp_vif[NUM_STACKS];        
typedef  void   ( *_GLOBAL_220_T  )  ( struct socket   *  ) ; extern  _GLOBAL_220_T global_ip_rsvp_force_done[NUM_STACKS];     
typedef  void   ( *_GLOBAL_222_T  )  ( struct mbuf   * m   , int  off   ) ; extern  _GLOBAL_222_T global_rsvp_input_p[NUM_STACKS];       

typedef  struct pfil_head   _GLOBAL_223_T; extern  _GLOBAL_223_T  _GLOBAL_0_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_1_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_2_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_3_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_4_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_5_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_6_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_7_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_8_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_9_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_10_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_11_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_12_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_13_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_14_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_15_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_16_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_17_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_18_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_19_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_20_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_21_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_22_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_23_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_24_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_25_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_26_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_27_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_28_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_29_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_30_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_31_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_32_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_33_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_34_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_35_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_36_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_37_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_38_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_39_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_40_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_41_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_42_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_43_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_44_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_45_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_46_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_47_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_48_inet_pfil_hook_I; extern  _GLOBAL_223_T  _GLOBAL_49_inet_pfil_hook_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_pfil_hook_I) *_GLOBAL_inet_pfil_hook_54_A[NUM_STACKS];   

void in_delayed_cksum(struct mbuf *m);

static __inline uint16_t ip_newid(void);
typedef  int  _GLOBAL_224_T; extern  _GLOBAL_224_T  global_ip_do_randomid[NUM_STACKS];   

static __inline uint16_t
ip_newid(void)
{
 if (global_ip_do_randomid[get_stack_id()])
  return ip_randomid();

 return __bswap16(global_ip_id[get_stack_id()]++);
}
# 76 "freebsd5/netinet/ip_dummynet.c" 2

# 1 "freebsd5/netinet/if_ether.h" 1
# 36 "freebsd5/netinet/if_ether.h"
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
# 37 "freebsd5/netinet/if_ether.h" 2
# 1 "freebsd5/net/if_arp.h" 1
# 46 "freebsd5/net/if_arp.h"
struct arphdr {
 u_short ar_hrd;





 u_short ar_pro;
 u_char ar_hln;
 u_char ar_pln;
 u_short ar_op;
# 73 "freebsd5/net/if_arp.h"
};
# 87 "freebsd5/net/if_arp.h"
struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 107 "freebsd5/net/if_arp.h"
struct arpcom {



 struct ifnet ac_if;
 u_char ac_enaddr[6];
 int now_unused;
 void *ac_netgraph;
};
# 38 "freebsd5/netinet/if_ether.h" 2
# 79 "freebsd5/netinet/if_ether.h"
struct ether_arp {
 struct arphdr ea_hdr;
 u_char arp_sha[6];
 u_char arp_spa[4];
 u_char arp_tha[6];
 u_char arp_tpa[4];
};






struct sockaddr_inarp {
 u_char sin_len;
 u_char sin_family;
 u_short sin_port;
 struct in_addr sin_addr;
 struct in_addr sin_srcaddr;
 u_short sin_tos;
 u_short sin_other;

};







typedef  u_char  _GLOBAL_225_T; extern  _GLOBAL_225_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_225_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_55_A[NUM_STACKS];  
typedef  u_char  _GLOBAL_226_T; extern  _GLOBAL_226_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_226_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_56_A[NUM_STACKS];  

int arpresolve(struct ifnet *ifp, struct rtentry *rt,
  struct mbuf *m, struct sockaddr *dst, u_char *desten);
void arp_ifinit(struct ifnet *, struct ifaddr *);
# 78 "freebsd5/netinet/ip_dummynet.c" 2
# 1 "freebsd5/net/bridge.h" 1
# 30 "freebsd5/net/bridge.h"
typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_do_bridge[NUM_STACKS];   
# 41 "freebsd5/net/bridge.h"
struct cluster_softc;

struct bdg_softc {
    struct ifnet *ifp ;

    int flags ;



    struct cluster_softc *cluster;
} ;

typedef  struct bdg_softc   _GLOBAL_228_T; extern  _GLOBAL_228_T  * global_ifp2sc[NUM_STACKS];    
# 88 "freebsd5/net/bridge.h"
struct bdg_port_stat {
    char name[16];
    u_long collisions;
    u_long p_in[(int)( (struct ifnet *)9 )+1];
} ;



struct bdg_stats {
    struct bdg_port_stat s[128];
} ;





typedef struct ifnet *bridge_in_t(struct ifnet *, struct ether_header *);

typedef struct mbuf *bdg_forward_t(struct mbuf *, struct ifnet *);
typedef void bdgtakeifaces_t(void);
typedef  bridge_in_t  _GLOBAL_229_T; extern  _GLOBAL_229_T  * global_bridge_in_ptr[NUM_STACKS];   
typedef  bdg_forward_t  _GLOBAL_230_T; extern  _GLOBAL_230_T  * global_bdg_forward_ptr[NUM_STACKS];   
typedef  bdgtakeifaces_t  _GLOBAL_231_T; extern  _GLOBAL_231_T  * global_bdgtakeifaces_ptr[NUM_STACKS];   
# 79 "freebsd5/netinet/ip_dummynet.c" 2





typedef  dn_key  _GLOBAL_232_T; static  _GLOBAL_232_T  global_curr_time[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };      

typedef  int  _GLOBAL_233_T; static  _GLOBAL_233_T  global_dn_hash_size[NUM_STACKS] = {  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  };      


typedef  int  _GLOBAL_234_T; static  _GLOBAL_234_T  global_searches[NUM_STACKS]; static  _GLOBAL_234_T  global_search_steps[NUM_STACKS];     
typedef  int  _GLOBAL_235_T; static  _GLOBAL_235_T  global_pipe_expire[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };      
typedef  int  _GLOBAL_236_T; static  _GLOBAL_236_T  global_dn_max_ratio[NUM_STACKS] = {  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  };      

typedef  int  _GLOBAL_237_T; static  _GLOBAL_237_T  global_red_lookup_depth[NUM_STACKS] = {  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  };     
typedef  int  _GLOBAL_238_T; static  _GLOBAL_238_T  global_red_avg_pkt_size[NUM_STACKS] = {  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  };     
typedef  int  _GLOBAL_239_T; static  _GLOBAL_239_T  global_red_max_pkt_size[NUM_STACKS] = {  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  1500,  };     
# 108 "freebsd5/netinet/ip_dummynet.c"
typedef  struct malloc_type  _GLOBAL_240_T;  _GLOBAL_240_T  _GLOBAL_0_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_1_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_2_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_3_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_4_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_5_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_6_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_7_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_8_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_9_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_10_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_11_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_12_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_13_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_14_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_15_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_16_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_17_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_18_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_19_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_20_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_21_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_22_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_23_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_24_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_25_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_26_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_27_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_28_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_29_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_30_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_31_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_32_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_33_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_34_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_35_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_36_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_37_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_38_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_39_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_40_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_41_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_42_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_43_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_44_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_45_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_46_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_47_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_48_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ;  _GLOBAL_240_T  _GLOBAL_49_M_DUMMYNET_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "dummynet"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DUMMYNET_I) *_GLOBAL_M_DUMMYNET_57_A[NUM_STACKS] = { &_GLOBAL_0_M_DUMMYNET_I, &_GLOBAL_1_M_DUMMYNET_I, &_GLOBAL_2_M_DUMMYNET_I, &_GLOBAL_3_M_DUMMYNET_I, &_GLOBAL_4_M_DUMMYNET_I, &_GLOBAL_5_M_DUMMYNET_I, &_GLOBAL_6_M_DUMMYNET_I, &_GLOBAL_7_M_DUMMYNET_I, &_GLOBAL_8_M_DUMMYNET_I, &_GLOBAL_9_M_DUMMYNET_I, &_GLOBAL_10_M_DUMMYNET_I, &_GLOBAL_11_M_DUMMYNET_I, &_GLOBAL_12_M_DUMMYNET_I, &_GLOBAL_13_M_DUMMYNET_I, &_GLOBAL_14_M_DUMMYNET_I, &_GLOBAL_15_M_DUMMYNET_I, &_GLOBAL_16_M_DUMMYNET_I, &_GLOBAL_17_M_DUMMYNET_I, &_GLOBAL_18_M_DUMMYNET_I, &_GLOBAL_19_M_DUMMYNET_I, &_GLOBAL_20_M_DUMMYNET_I, &_GLOBAL_21_M_DUMMYNET_I, &_GLOBAL_22_M_DUMMYNET_I, &_GLOBAL_23_M_DUMMYNET_I, &_GLOBAL_24_M_DUMMYNET_I, &_GLOBAL_25_M_DUMMYNET_I, &_GLOBAL_26_M_DUMMYNET_I, &_GLOBAL_27_M_DUMMYNET_I, &_GLOBAL_28_M_DUMMYNET_I, &_GLOBAL_29_M_DUMMYNET_I, &_GLOBAL_30_M_DUMMYNET_I, &_GLOBAL_31_M_DUMMYNET_I, &_GLOBAL_32_M_DUMMYNET_I, &_GLOBAL_33_M_DUMMYNET_I, &_GLOBAL_34_M_DUMMYNET_I, &_GLOBAL_35_M_DUMMYNET_I, &_GLOBAL_36_M_DUMMYNET_I, &_GLOBAL_37_M_DUMMYNET_I, &_GLOBAL_38_M_DUMMYNET_I, &_GLOBAL_39_M_DUMMYNET_I, &_GLOBAL_40_M_DUMMYNET_I, &_GLOBAL_41_M_DUMMYNET_I, &_GLOBAL_42_M_DUMMYNET_I, &_GLOBAL_43_M_DUMMYNET_I, &_GLOBAL_44_M_DUMMYNET_I, &_GLOBAL_45_M_DUMMYNET_I, &_GLOBAL_46_M_DUMMYNET_I, &_GLOBAL_47_M_DUMMYNET_I, &_GLOBAL_48_M_DUMMYNET_I, &_GLOBAL_49_M_DUMMYNET_I, };                  typedef  struct sysinit   _GLOBAL_241_T; static  _GLOBAL_241_T  global_M_DUMMYNET_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_DUMMYNET_I )   )   } ,  };             typedef  void const   _GLOBAL_242_T; static  _GLOBAL_242_T  * const  _global_section_0___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[0] ;static  _GLOBAL_242_T  * const  _global_section_1___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[1] ;static  _GLOBAL_242_T  * const  _global_section_2___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[2] ;static  _GLOBAL_242_T  * const  _global_section_3___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[3] ;static  _GLOBAL_242_T  * const  _global_section_4___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[4] ;static  _GLOBAL_242_T  * const  _global_section_5___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[5] ;static  _GLOBAL_242_T  * const  _global_section_6___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[6] ;static  _GLOBAL_242_T  * const  _global_section_7___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[7] ;static  _GLOBAL_242_T  * const  _global_section_8___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[8] ;static  _GLOBAL_242_T  * const  _global_section_9___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[9] ;static  _GLOBAL_242_T  * const  _global_section_10___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[10] ;static  _GLOBAL_242_T  * const  _global_section_11___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[11] ;static  _GLOBAL_242_T  * const  _global_section_12___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[12] ;static  _GLOBAL_242_T  * const  _global_section_13___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[13] ;static  _GLOBAL_242_T  * const  _global_section_14___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[14] ;static  _GLOBAL_242_T  * const  _global_section_15___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[15] ;static  _GLOBAL_242_T  * const  _global_section_16___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[16] ;static  _GLOBAL_242_T  * const  _global_section_17___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[17] ;static  _GLOBAL_242_T  * const  _global_section_18___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[18] ;static  _GLOBAL_242_T  * const  _global_section_19___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[19] ;static  _GLOBAL_242_T  * const  _global_section_20___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[20] ;static  _GLOBAL_242_T  * const  _global_section_21___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[21] ;static  _GLOBAL_242_T  * const  _global_section_22___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[22] ;static  _GLOBAL_242_T  * const  _global_section_23___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[23] ;static  _GLOBAL_242_T  * const  _global_section_24___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[24] ;static  _GLOBAL_242_T  * const  _global_section_25___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[25] ;static  _GLOBAL_242_T  * const  _global_section_26___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[26] ;static  _GLOBAL_242_T  * const  _global_section_27___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[27] ;static  _GLOBAL_242_T  * const  _global_section_28___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[28] ;static  _GLOBAL_242_T  * const  _global_section_29___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[29] ;static  _GLOBAL_242_T  * const  _global_section_30___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[30] ;static  _GLOBAL_242_T  * const  _global_section_31___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[31] ;static  _GLOBAL_242_T  * const  _global_section_32___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[32] ;static  _GLOBAL_242_T  * const  _global_section_33___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[33] ;static  _GLOBAL_242_T  * const  _global_section_34___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[34] ;static  _GLOBAL_242_T  * const  _global_section_35___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[35] ;static  _GLOBAL_242_T  * const  _global_section_36___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[36] ;static  _GLOBAL_242_T  * const  _global_section_37___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[37] ;static  _GLOBAL_242_T  * const  _global_section_38___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[38] ;static  _GLOBAL_242_T  * const  _global_section_39___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[39] ;static  _GLOBAL_242_T  * const  _global_section_40___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[40] ;static  _GLOBAL_242_T  * const  _global_section_41___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[41] ;static  _GLOBAL_242_T  * const  _global_section_42___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[42] ;static  _GLOBAL_242_T  * const  _global_section_43___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[43] ;static  _GLOBAL_242_T  * const  _global_section_44___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[44] ;static  _GLOBAL_242_T  * const  _global_section_45___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[45] ;static  _GLOBAL_242_T  * const  _global_section_46___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[46] ;static  _GLOBAL_242_T  * const  _global_section_47___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[47] ;static  _GLOBAL_242_T  * const  _global_section_48___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[48] ;static  _GLOBAL_242_T  * const  _global_section_49___set_sysinit_set_sym_M_DUMMYNET_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_DUMMYNET_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_243_T; static  _GLOBAL_243_T  global_M_DUMMYNET_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_DUMMYNET_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_DUMMYNET_I )   )   } ,  };             typedef  void const   _GLOBAL_244_T; static  _GLOBAL_244_T  * const  global___set_sysuninit_set_sym_M_DUMMYNET_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_DUMMYNET_uninit_sys_uninit[0] ,  & global_M_DUMMYNET_uninit_sys_uninit[1] ,  & global_M_DUMMYNET_uninit_sys_uninit[2] ,  & global_M_DUMMYNET_uninit_sys_uninit[3] ,  & global_M_DUMMYNET_uninit_sys_uninit[4] ,  & global_M_DUMMYNET_uninit_sys_uninit[5] ,  & global_M_DUMMYNET_uninit_sys_uninit[6] ,  & global_M_DUMMYNET_uninit_sys_uninit[7] ,  & global_M_DUMMYNET_uninit_sys_uninit[8] ,  & global_M_DUMMYNET_uninit_sys_uninit[9] ,  & global_M_DUMMYNET_uninit_sys_uninit[10] ,  & global_M_DUMMYNET_uninit_sys_uninit[11] ,  & global_M_DUMMYNET_uninit_sys_uninit[12] ,  & global_M_DUMMYNET_uninit_sys_uninit[13] ,  & global_M_DUMMYNET_uninit_sys_uninit[14] ,  & global_M_DUMMYNET_uninit_sys_uninit[15] ,  & global_M_DUMMYNET_uninit_sys_uninit[16] ,  & global_M_DUMMYNET_uninit_sys_uninit[17] ,  & global_M_DUMMYNET_uninit_sys_uninit[18] ,  & global_M_DUMMYNET_uninit_sys_uninit[19] ,  & global_M_DUMMYNET_uninit_sys_uninit[20] ,  & global_M_DUMMYNET_uninit_sys_uninit[21] ,  & global_M_DUMMYNET_uninit_sys_uninit[22] ,  & global_M_DUMMYNET_uninit_sys_uninit[23] ,  & global_M_DUMMYNET_uninit_sys_uninit[24] ,  & global_M_DUMMYNET_uninit_sys_uninit[25] ,  & global_M_DUMMYNET_uninit_sys_uninit[26] ,  & global_M_DUMMYNET_uninit_sys_uninit[27] ,  & global_M_DUMMYNET_uninit_sys_uninit[28] ,  & global_M_DUMMYNET_uninit_sys_uninit[29] ,  & global_M_DUMMYNET_uninit_sys_uninit[30] ,  & global_M_DUMMYNET_uninit_sys_uninit[31] ,  & global_M_DUMMYNET_uninit_sys_uninit[32] ,  & global_M_DUMMYNET_uninit_sys_uninit[33] ,  & global_M_DUMMYNET_uninit_sys_uninit[34] ,  & global_M_DUMMYNET_uninit_sys_uninit[35] ,  & global_M_DUMMYNET_uninit_sys_uninit[36] ,  & global_M_DUMMYNET_uninit_sys_uninit[37] ,  & global_M_DUMMYNET_uninit_sys_uninit[38] ,  & global_M_DUMMYNET_uninit_sys_uninit[39] ,  & global_M_DUMMYNET_uninit_sys_uninit[40] ,  & global_M_DUMMYNET_uninit_sys_uninit[41] ,  & global_M_DUMMYNET_uninit_sys_uninit[42] ,  & global_M_DUMMYNET_uninit_sys_uninit[43] ,  & global_M_DUMMYNET_uninit_sys_uninit[44] ,  & global_M_DUMMYNET_uninit_sys_uninit[45] ,  & global_M_DUMMYNET_uninit_sys_uninit[46] ,  & global_M_DUMMYNET_uninit_sys_uninit[47] ,  & global_M_DUMMYNET_uninit_sys_uninit[48] ,  & global_M_DUMMYNET_uninit_sys_uninit[49] ,  };          

typedef  struct dn_heap   _GLOBAL_245_T; static  _GLOBAL_245_T  global_ready_heap[NUM_STACKS]; static  _GLOBAL_245_T  global_extract_heap[NUM_STACKS]; static  _GLOBAL_245_T  global_wfq_ready_heap[NUM_STACKS];       

static int heap_init(struct dn_heap *h, int size) ;
static int heap_insert (struct dn_heap *h, dn_key key1, void *p);
static void heap_extract(struct dn_heap *h, void *obj);

static void transmit_event(struct dn_pipe *pipe);
static void ready_event(struct dn_flow_queue *q);

typedef  struct dn_pipe   _GLOBAL_246_T; static  _GLOBAL_246_T  * global_all_pipes[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };        
typedef  struct dn_flow_set   _GLOBAL_247_T; static  _GLOBAL_247_T  * global_all_flow_sets[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };        

typedef  struct callout   _GLOBAL_248_T; static  _GLOBAL_248_T  global_dn_timeout[NUM_STACKS];    


typedef  struct sysctl_oid_list  _GLOBAL_249_T;  _GLOBAL_249_T  global_sysctl__net_inet_ip_dummynet_children[NUM_STACKS];  
 
# 125 "freebsd5/netinet/ip_dummynet.c"
  typedef  struct sysctl_oid   _GLOBAL_250_T; static  _GLOBAL_250_T  global_sysctl___net_inet_ip_dummynet[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_children[0]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[0]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[1]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[1]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[2]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[2]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[3]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[3]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[4]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[4]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[5]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[5]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[6]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[6]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[7]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[7]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[8]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[8]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[9]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[9]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[10]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[10]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[11]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[11]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[12]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[12]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[13]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[13]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[14]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[14]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[15]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[15]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[16]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[16]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[17]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[17]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[18]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[18]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[19]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[19]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[20]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[20]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[21]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[21]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[22]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[22]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[23]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[23]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[24]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[24]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[25]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[25]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[26]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[26]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[27]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[27]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[28]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[28]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[29]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[29]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[30]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[30]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[31]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[31]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[32]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[32]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[33]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[33]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[34]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[34]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[35]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[35]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[36]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[36]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[37]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[37]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[38]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[38]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[39]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[39]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[40]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[40]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[41]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[41]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[42]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[42]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[43]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[43]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[44]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[44]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[45]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[45]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[46]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[46]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[47]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[47]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[48]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[48]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  { & global_sysctl__net_inet_ip_children[49]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_ip_dummynet_children[49]    , 0  , "dummynet"  , 0  , "N"  , 0  , "Dummynet"  } ,  };   
 
# 125 "freebsd5/netinet/ip_dummynet.c"
   
 
# 125 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_251_T; static  _GLOBAL_251_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[0] ;static  _GLOBAL_251_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[1] ;static  _GLOBAL_251_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[2] ;static  _GLOBAL_251_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[3] ;static  _GLOBAL_251_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[4] ;static  _GLOBAL_251_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[5] ;static  _GLOBAL_251_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[6] ;static  _GLOBAL_251_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[7] ;static  _GLOBAL_251_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[8] ;static  _GLOBAL_251_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[9] ;static  _GLOBAL_251_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[10] ;static  _GLOBAL_251_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[11] ;static  _GLOBAL_251_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[12] ;static  _GLOBAL_251_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[13] ;static  _GLOBAL_251_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[14] ;static  _GLOBAL_251_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[15] ;static  _GLOBAL_251_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[16] ;static  _GLOBAL_251_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[17] ;static  _GLOBAL_251_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[18] ;static  _GLOBAL_251_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[19] ;static  _GLOBAL_251_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[20] ;static  _GLOBAL_251_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[21] ;static  _GLOBAL_251_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[22] ;static  _GLOBAL_251_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[23] ;static  _GLOBAL_251_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[24] ;static  _GLOBAL_251_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[25] ;static  _GLOBAL_251_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[26] ;static  _GLOBAL_251_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[27] ;static  _GLOBAL_251_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[28] ;static  _GLOBAL_251_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[29] ;static  _GLOBAL_251_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[30] ;static  _GLOBAL_251_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[31] ;static  _GLOBAL_251_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[32] ;static  _GLOBAL_251_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[33] ;static  _GLOBAL_251_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[34] ;static  _GLOBAL_251_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[35] ;static  _GLOBAL_251_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[36] ;static  _GLOBAL_251_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[37] ;static  _GLOBAL_251_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[38] ;static  _GLOBAL_251_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[39] ;static  _GLOBAL_251_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[40] ;static  _GLOBAL_251_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[41] ;static  _GLOBAL_251_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[42] ;static  _GLOBAL_251_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[43] ;static  _GLOBAL_251_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[44] ;static  _GLOBAL_251_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[45] ;static  _GLOBAL_251_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[46] ;static  _GLOBAL_251_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[47] ;static  _GLOBAL_251_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[48] ;static  _GLOBAL_251_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet[49] ;    
 
# 125 "freebsd5/netinet/ip_dummynet.c"
    
                            
typedef  struct sysctl_oid   _GLOBAL_252_T; static  _GLOBAL_252_T  global_sysctl___net_inet_ip_dummynet_hash_size[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[0]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[1]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[2]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[3]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[4]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[5]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[6]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[7]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[8]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[9]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[10]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[11]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[12]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[13]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[14]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[15]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[16]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[17]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[18]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[19]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[20]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[21]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[22]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[23]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[24]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[25]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[26]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[27]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[28]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[29]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[30]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[31]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[32]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[33]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[34]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[35]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[36]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[37]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[38]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[39]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[40]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[41]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[42]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[43]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[44]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[45]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[46]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[47]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[48]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_hash_size[49]   , 0  , "hash_size"  , sysctl_handle_int  , "I"  , 0  , "Default hash table size"  } ,  };   
 
# 127 "freebsd5/netinet/ip_dummynet.c"
   
 
# 127 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_253_T; static  _GLOBAL_253_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[0] ;static  _GLOBAL_253_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[1] ;static  _GLOBAL_253_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[2] ;static  _GLOBAL_253_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[3] ;static  _GLOBAL_253_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[4] ;static  _GLOBAL_253_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[5] ;static  _GLOBAL_253_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[6] ;static  _GLOBAL_253_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[7] ;static  _GLOBAL_253_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[8] ;static  _GLOBAL_253_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[9] ;static  _GLOBAL_253_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[10] ;static  _GLOBAL_253_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[11] ;static  _GLOBAL_253_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[12] ;static  _GLOBAL_253_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[13] ;static  _GLOBAL_253_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[14] ;static  _GLOBAL_253_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[15] ;static  _GLOBAL_253_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[16] ;static  _GLOBAL_253_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[17] ;static  _GLOBAL_253_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[18] ;static  _GLOBAL_253_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[19] ;static  _GLOBAL_253_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[20] ;static  _GLOBAL_253_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[21] ;static  _GLOBAL_253_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[22] ;static  _GLOBAL_253_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[23] ;static  _GLOBAL_253_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[24] ;static  _GLOBAL_253_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[25] ;static  _GLOBAL_253_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[26] ;static  _GLOBAL_253_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[27] ;static  _GLOBAL_253_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[28] ;static  _GLOBAL_253_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[29] ;static  _GLOBAL_253_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[30] ;static  _GLOBAL_253_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[31] ;static  _GLOBAL_253_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[32] ;static  _GLOBAL_253_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[33] ;static  _GLOBAL_253_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[34] ;static  _GLOBAL_253_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[35] ;static  _GLOBAL_253_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[36] ;static  _GLOBAL_253_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[37] ;static  _GLOBAL_253_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[38] ;static  _GLOBAL_253_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[39] ;static  _GLOBAL_253_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[40] ;static  _GLOBAL_253_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[41] ;static  _GLOBAL_253_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[42] ;static  _GLOBAL_253_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[43] ;static  _GLOBAL_253_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[44] ;static  _GLOBAL_253_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[45] ;static  _GLOBAL_253_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[46] ;static  _GLOBAL_253_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[47] ;static  _GLOBAL_253_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[48] ;static  _GLOBAL_253_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_hash_size __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_hash_size[49] ;    
 
# 127 "freebsd5/netinet/ip_dummynet.c"
    
                                                             
typedef  struct sysctl_oid   _GLOBAL_254_T; static  _GLOBAL_254_T  global_sysctl___net_inet_ip_dummynet_curr_time[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[0]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[1]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[2]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[3]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[4]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[5]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[6]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[7]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[8]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[9]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[10]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[11]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[12]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[13]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[14]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[15]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[16]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[17]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[18]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[19]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[20]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[21]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[22]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[23]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[24]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[25]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[26]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[27]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[28]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[29]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[30]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[31]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[32]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[33]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[34]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[35]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[36]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[37]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[38]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[39]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[40]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[41]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[42]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[43]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[44]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[45]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[46]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[47]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[48]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_curr_time[49]   , 0  , "curr_time"  , sysctl_handle_int  , "I"  , 0  , "Current tick"  } ,  };   
 
# 129 "freebsd5/netinet/ip_dummynet.c"
   
 
# 129 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_255_T; static  _GLOBAL_255_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[0] ;static  _GLOBAL_255_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[1] ;static  _GLOBAL_255_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[2] ;static  _GLOBAL_255_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[3] ;static  _GLOBAL_255_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[4] ;static  _GLOBAL_255_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[5] ;static  _GLOBAL_255_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[6] ;static  _GLOBAL_255_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[7] ;static  _GLOBAL_255_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[8] ;static  _GLOBAL_255_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[9] ;static  _GLOBAL_255_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[10] ;static  _GLOBAL_255_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[11] ;static  _GLOBAL_255_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[12] ;static  _GLOBAL_255_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[13] ;static  _GLOBAL_255_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[14] ;static  _GLOBAL_255_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[15] ;static  _GLOBAL_255_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[16] ;static  _GLOBAL_255_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[17] ;static  _GLOBAL_255_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[18] ;static  _GLOBAL_255_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[19] ;static  _GLOBAL_255_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[20] ;static  _GLOBAL_255_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[21] ;static  _GLOBAL_255_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[22] ;static  _GLOBAL_255_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[23] ;static  _GLOBAL_255_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[24] ;static  _GLOBAL_255_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[25] ;static  _GLOBAL_255_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[26] ;static  _GLOBAL_255_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[27] ;static  _GLOBAL_255_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[28] ;static  _GLOBAL_255_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[29] ;static  _GLOBAL_255_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[30] ;static  _GLOBAL_255_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[31] ;static  _GLOBAL_255_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[32] ;static  _GLOBAL_255_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[33] ;static  _GLOBAL_255_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[34] ;static  _GLOBAL_255_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[35] ;static  _GLOBAL_255_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[36] ;static  _GLOBAL_255_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[37] ;static  _GLOBAL_255_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[38] ;static  _GLOBAL_255_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[39] ;static  _GLOBAL_255_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[40] ;static  _GLOBAL_255_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[41] ;static  _GLOBAL_255_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[42] ;static  _GLOBAL_255_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[43] ;static  _GLOBAL_255_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[44] ;static  _GLOBAL_255_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[45] ;static  _GLOBAL_255_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[46] ;static  _GLOBAL_255_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[47] ;static  _GLOBAL_255_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[48] ;static  _GLOBAL_255_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_curr_time __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_curr_time[49] ;    
 
# 129 "freebsd5/netinet/ip_dummynet.c"
    
                                               
typedef  struct sysctl_oid   _GLOBAL_256_T; static  _GLOBAL_256_T  global_sysctl___net_inet_ip_dummynet_ready_heap[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[0] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[1] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[2] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[3] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[4] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[5] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[6] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[7] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[8] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[9] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[10] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[11] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[12] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[13] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[14] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[15] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[16] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[17] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[18] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[19] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[20] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[21] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[22] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[23] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[24] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[25] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[26] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[27] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[28] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[29] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[30] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[31] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[32] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[33] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[34] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[35] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[36] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[37] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[38] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[39] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[40] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[41] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[42] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[43] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[44] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[45] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[46] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[47] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[48] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_ready_heap[49] . size    , 0  , "ready_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of ready heap"  } ,  };   
 
# 131 "freebsd5/netinet/ip_dummynet.c"
   
 
# 131 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_257_T; static  _GLOBAL_257_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[0] ;static  _GLOBAL_257_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[1] ;static  _GLOBAL_257_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[2] ;static  _GLOBAL_257_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[3] ;static  _GLOBAL_257_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[4] ;static  _GLOBAL_257_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[5] ;static  _GLOBAL_257_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[6] ;static  _GLOBAL_257_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[7] ;static  _GLOBAL_257_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[8] ;static  _GLOBAL_257_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[9] ;static  _GLOBAL_257_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[10] ;static  _GLOBAL_257_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[11] ;static  _GLOBAL_257_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[12] ;static  _GLOBAL_257_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[13] ;static  _GLOBAL_257_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[14] ;static  _GLOBAL_257_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[15] ;static  _GLOBAL_257_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[16] ;static  _GLOBAL_257_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[17] ;static  _GLOBAL_257_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[18] ;static  _GLOBAL_257_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[19] ;static  _GLOBAL_257_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[20] ;static  _GLOBAL_257_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[21] ;static  _GLOBAL_257_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[22] ;static  _GLOBAL_257_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[23] ;static  _GLOBAL_257_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[24] ;static  _GLOBAL_257_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[25] ;static  _GLOBAL_257_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[26] ;static  _GLOBAL_257_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[27] ;static  _GLOBAL_257_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[28] ;static  _GLOBAL_257_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[29] ;static  _GLOBAL_257_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[30] ;static  _GLOBAL_257_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[31] ;static  _GLOBAL_257_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[32] ;static  _GLOBAL_257_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[33] ;static  _GLOBAL_257_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[34] ;static  _GLOBAL_257_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[35] ;static  _GLOBAL_257_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[36] ;static  _GLOBAL_257_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[37] ;static  _GLOBAL_257_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[38] ;static  _GLOBAL_257_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[39] ;static  _GLOBAL_257_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[40] ;static  _GLOBAL_257_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[41] ;static  _GLOBAL_257_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[42] ;static  _GLOBAL_257_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[43] ;static  _GLOBAL_257_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[44] ;static  _GLOBAL_257_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[45] ;static  _GLOBAL_257_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[46] ;static  _GLOBAL_257_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[47] ;static  _GLOBAL_257_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[48] ;static  _GLOBAL_257_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_ready_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_ready_heap[49] ;    
 
# 131 "freebsd5/netinet/ip_dummynet.c"
    
                                                           
typedef  struct sysctl_oid   _GLOBAL_258_T; static  _GLOBAL_258_T  global_sysctl___net_inet_ip_dummynet_extract_heap[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[0] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[1] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[2] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[3] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[4] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[5] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[6] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[7] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[8] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[9] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[10] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[11] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[12] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[13] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[14] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[15] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[16] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[17] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[18] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[19] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[20] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[21] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[22] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[23] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[24] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[25] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[26] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[27] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[28] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[29] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[30] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[31] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[32] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[33] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[34] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[35] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[36] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[37] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[38] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[39] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[40] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[41] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[42] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[43] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[44] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[45] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[46] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[47] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[48] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_extract_heap[49] . size    , 0  , "extract_heap"  , sysctl_handle_int  , "I"  , 0  , "Size of extract heap"  } ,  };   
 
# 133 "freebsd5/netinet/ip_dummynet.c"
   
 
# 133 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_259_T; static  _GLOBAL_259_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[0] ;static  _GLOBAL_259_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[1] ;static  _GLOBAL_259_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[2] ;static  _GLOBAL_259_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[3] ;static  _GLOBAL_259_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[4] ;static  _GLOBAL_259_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[5] ;static  _GLOBAL_259_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[6] ;static  _GLOBAL_259_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[7] ;static  _GLOBAL_259_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[8] ;static  _GLOBAL_259_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[9] ;static  _GLOBAL_259_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[10] ;static  _GLOBAL_259_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[11] ;static  _GLOBAL_259_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[12] ;static  _GLOBAL_259_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[13] ;static  _GLOBAL_259_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[14] ;static  _GLOBAL_259_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[15] ;static  _GLOBAL_259_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[16] ;static  _GLOBAL_259_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[17] ;static  _GLOBAL_259_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[18] ;static  _GLOBAL_259_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[19] ;static  _GLOBAL_259_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[20] ;static  _GLOBAL_259_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[21] ;static  _GLOBAL_259_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[22] ;static  _GLOBAL_259_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[23] ;static  _GLOBAL_259_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[24] ;static  _GLOBAL_259_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[25] ;static  _GLOBAL_259_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[26] ;static  _GLOBAL_259_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[27] ;static  _GLOBAL_259_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[28] ;static  _GLOBAL_259_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[29] ;static  _GLOBAL_259_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[30] ;static  _GLOBAL_259_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[31] ;static  _GLOBAL_259_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[32] ;static  _GLOBAL_259_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[33] ;static  _GLOBAL_259_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[34] ;static  _GLOBAL_259_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[35] ;static  _GLOBAL_259_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[36] ;static  _GLOBAL_259_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[37] ;static  _GLOBAL_259_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[38] ;static  _GLOBAL_259_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[39] ;static  _GLOBAL_259_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[40] ;static  _GLOBAL_259_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[41] ;static  _GLOBAL_259_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[42] ;static  _GLOBAL_259_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[43] ;static  _GLOBAL_259_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[44] ;static  _GLOBAL_259_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[45] ;static  _GLOBAL_259_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[46] ;static  _GLOBAL_259_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[47] ;static  _GLOBAL_259_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[48] ;static  _GLOBAL_259_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_extract_heap __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_extract_heap[49] ;    
 
# 133 "freebsd5/netinet/ip_dummynet.c"
    
                                                               
typedef  struct sysctl_oid   _GLOBAL_260_T; static  _GLOBAL_260_T  global_sysctl___net_inet_ip_dummynet_searches[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[0]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[1]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[2]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[3]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[4]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[5]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[6]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[7]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[8]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[9]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[10]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[11]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[12]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[13]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[14]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[15]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[16]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[17]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[18]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[19]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[20]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[21]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[22]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[23]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[24]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[25]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[26]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[27]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[28]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[29]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[30]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[31]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[32]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[33]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[34]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[35]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[36]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[37]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[38]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[39]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[40]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[41]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[42]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[43]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[44]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[45]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[46]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[47]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[48]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_searches[49]   , 0  , "searches"  , sysctl_handle_int  , "I"  , 0  , "Number of queue searches"  } ,  };   
 
# 135 "freebsd5/netinet/ip_dummynet.c"
   
 
# 135 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_261_T; static  _GLOBAL_261_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[0] ;static  _GLOBAL_261_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[1] ;static  _GLOBAL_261_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[2] ;static  _GLOBAL_261_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[3] ;static  _GLOBAL_261_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[4] ;static  _GLOBAL_261_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[5] ;static  _GLOBAL_261_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[6] ;static  _GLOBAL_261_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[7] ;static  _GLOBAL_261_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[8] ;static  _GLOBAL_261_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[9] ;static  _GLOBAL_261_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[10] ;static  _GLOBAL_261_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[11] ;static  _GLOBAL_261_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[12] ;static  _GLOBAL_261_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[13] ;static  _GLOBAL_261_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[14] ;static  _GLOBAL_261_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[15] ;static  _GLOBAL_261_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[16] ;static  _GLOBAL_261_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[17] ;static  _GLOBAL_261_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[18] ;static  _GLOBAL_261_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[19] ;static  _GLOBAL_261_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[20] ;static  _GLOBAL_261_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[21] ;static  _GLOBAL_261_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[22] ;static  _GLOBAL_261_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[23] ;static  _GLOBAL_261_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[24] ;static  _GLOBAL_261_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[25] ;static  _GLOBAL_261_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[26] ;static  _GLOBAL_261_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[27] ;static  _GLOBAL_261_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[28] ;static  _GLOBAL_261_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[29] ;static  _GLOBAL_261_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[30] ;static  _GLOBAL_261_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[31] ;static  _GLOBAL_261_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[32] ;static  _GLOBAL_261_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[33] ;static  _GLOBAL_261_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[34] ;static  _GLOBAL_261_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[35] ;static  _GLOBAL_261_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[36] ;static  _GLOBAL_261_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[37] ;static  _GLOBAL_261_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[38] ;static  _GLOBAL_261_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[39] ;static  _GLOBAL_261_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[40] ;static  _GLOBAL_261_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[41] ;static  _GLOBAL_261_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[42] ;static  _GLOBAL_261_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[43] ;static  _GLOBAL_261_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[44] ;static  _GLOBAL_261_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[45] ;static  _GLOBAL_261_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[46] ;static  _GLOBAL_261_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[47] ;static  _GLOBAL_261_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[48] ;static  _GLOBAL_261_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_searches __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_searches[49] ;    
 
# 135 "freebsd5/netinet/ip_dummynet.c"
    
                                                          
typedef  struct sysctl_oid   _GLOBAL_262_T; static  _GLOBAL_262_T  global_sysctl___net_inet_ip_dummynet_search_steps[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[0]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[1]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[2]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[3]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[4]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[5]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[6]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[7]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[8]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[9]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[10]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[11]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[12]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[13]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[14]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[15]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[16]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[17]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[18]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[19]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[20]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[21]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[22]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[23]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[24]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[25]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[26]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[27]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[28]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[29]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[30]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[31]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[32]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[33]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[34]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[35]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[36]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[37]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[38]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[39]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[40]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[41]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[42]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[43]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[44]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[45]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[46]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[47]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[48]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_search_steps[49]   , 0  , "search_steps"  , sysctl_handle_int  , "I"  , 0  , "Number of queue search steps"  } ,  };   
 
# 137 "freebsd5/netinet/ip_dummynet.c"
   
 
# 137 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_263_T; static  _GLOBAL_263_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[0] ;static  _GLOBAL_263_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[1] ;static  _GLOBAL_263_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[2] ;static  _GLOBAL_263_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[3] ;static  _GLOBAL_263_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[4] ;static  _GLOBAL_263_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[5] ;static  _GLOBAL_263_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[6] ;static  _GLOBAL_263_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[7] ;static  _GLOBAL_263_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[8] ;static  _GLOBAL_263_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[9] ;static  _GLOBAL_263_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[10] ;static  _GLOBAL_263_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[11] ;static  _GLOBAL_263_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[12] ;static  _GLOBAL_263_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[13] ;static  _GLOBAL_263_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[14] ;static  _GLOBAL_263_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[15] ;static  _GLOBAL_263_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[16] ;static  _GLOBAL_263_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[17] ;static  _GLOBAL_263_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[18] ;static  _GLOBAL_263_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[19] ;static  _GLOBAL_263_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[20] ;static  _GLOBAL_263_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[21] ;static  _GLOBAL_263_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[22] ;static  _GLOBAL_263_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[23] ;static  _GLOBAL_263_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[24] ;static  _GLOBAL_263_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[25] ;static  _GLOBAL_263_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[26] ;static  _GLOBAL_263_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[27] ;static  _GLOBAL_263_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[28] ;static  _GLOBAL_263_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[29] ;static  _GLOBAL_263_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[30] ;static  _GLOBAL_263_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[31] ;static  _GLOBAL_263_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[32] ;static  _GLOBAL_263_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[33] ;static  _GLOBAL_263_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[34] ;static  _GLOBAL_263_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[35] ;static  _GLOBAL_263_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[36] ;static  _GLOBAL_263_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[37] ;static  _GLOBAL_263_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[38] ;static  _GLOBAL_263_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[39] ;static  _GLOBAL_263_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[40] ;static  _GLOBAL_263_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[41] ;static  _GLOBAL_263_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[42] ;static  _GLOBAL_263_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[43] ;static  _GLOBAL_263_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[44] ;static  _GLOBAL_263_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[45] ;static  _GLOBAL_263_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[46] ;static  _GLOBAL_263_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[47] ;static  _GLOBAL_263_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[48] ;static  _GLOBAL_263_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_search_steps __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_search_steps[49] ;    
 
# 137 "freebsd5/netinet/ip_dummynet.c"
    
                                                                  
typedef  struct sysctl_oid   _GLOBAL_264_T; static  _GLOBAL_264_T  global_sysctl___net_inet_ip_dummynet_expire[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[0]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[1]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[2]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[3]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[4]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[5]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[6]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[7]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[8]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[9]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[10]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[11]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[12]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[13]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[14]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[15]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[16]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[17]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[18]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[19]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[20]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[21]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[22]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[23]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[24]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[25]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[26]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[27]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[28]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[29]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[30]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[31]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[32]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[33]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[34]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[35]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[36]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[37]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[38]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[39]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[40]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[41]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[42]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[43]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[44]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[45]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[46]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[47]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[48]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_pipe_expire[49]   , 0  , "expire"  , sysctl_handle_int  , "I"  , 0  , "Expire queue if empty"  } ,  };   
 
# 139 "freebsd5/netinet/ip_dummynet.c"
   
 
# 139 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_265_T; static  _GLOBAL_265_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[0] ;static  _GLOBAL_265_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[1] ;static  _GLOBAL_265_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[2] ;static  _GLOBAL_265_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[3] ;static  _GLOBAL_265_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[4] ;static  _GLOBAL_265_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[5] ;static  _GLOBAL_265_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[6] ;static  _GLOBAL_265_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[7] ;static  _GLOBAL_265_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[8] ;static  _GLOBAL_265_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[9] ;static  _GLOBAL_265_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[10] ;static  _GLOBAL_265_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[11] ;static  _GLOBAL_265_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[12] ;static  _GLOBAL_265_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[13] ;static  _GLOBAL_265_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[14] ;static  _GLOBAL_265_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[15] ;static  _GLOBAL_265_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[16] ;static  _GLOBAL_265_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[17] ;static  _GLOBAL_265_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[18] ;static  _GLOBAL_265_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[19] ;static  _GLOBAL_265_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[20] ;static  _GLOBAL_265_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[21] ;static  _GLOBAL_265_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[22] ;static  _GLOBAL_265_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[23] ;static  _GLOBAL_265_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[24] ;static  _GLOBAL_265_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[25] ;static  _GLOBAL_265_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[26] ;static  _GLOBAL_265_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[27] ;static  _GLOBAL_265_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[28] ;static  _GLOBAL_265_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[29] ;static  _GLOBAL_265_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[30] ;static  _GLOBAL_265_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[31] ;static  _GLOBAL_265_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[32] ;static  _GLOBAL_265_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[33] ;static  _GLOBAL_265_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[34] ;static  _GLOBAL_265_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[35] ;static  _GLOBAL_265_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[36] ;static  _GLOBAL_265_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[37] ;static  _GLOBAL_265_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[38] ;static  _GLOBAL_265_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[39] ;static  _GLOBAL_265_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[40] ;static  _GLOBAL_265_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[41] ;static  _GLOBAL_265_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[42] ;static  _GLOBAL_265_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[43] ;static  _GLOBAL_265_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[44] ;static  _GLOBAL_265_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[45] ;static  _GLOBAL_265_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[46] ;static  _GLOBAL_265_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[47] ;static  _GLOBAL_265_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[48] ;static  _GLOBAL_265_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_expire __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_expire[49] ;    
 
# 139 "freebsd5/netinet/ip_dummynet.c"
    
                                                          
typedef  struct sysctl_oid   _GLOBAL_266_T; static  _GLOBAL_266_T  global_sysctl___net_inet_ip_dummynet_max_chain_len[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[0]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[1]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[2]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[3]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[4]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[5]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[6]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[7]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[8]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[9]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[10]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[11]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[12]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[13]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[14]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[15]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[16]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[17]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[18]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[19]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[20]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[21]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[22]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[23]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[24]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[25]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[26]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[27]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[28]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[29]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[30]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[31]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[32]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[33]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[34]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[35]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[36]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[37]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[38]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[39]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[40]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[41]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[42]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[43]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[44]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[45]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[46]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[47]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[48]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dn_max_ratio[49]   , 0  , "max_chain_len"  , sysctl_handle_int  , "I"  , 0  , "Max ratio between dynamic queues and buckets"  } ,  };   

 
# 141 "freebsd5/netinet/ip_dummynet.c"
   

 
# 141 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_267_T; static  _GLOBAL_267_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[0] ;static  _GLOBAL_267_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[1] ;static  _GLOBAL_267_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[2] ;static  _GLOBAL_267_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[3] ;static  _GLOBAL_267_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[4] ;static  _GLOBAL_267_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[5] ;static  _GLOBAL_267_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[6] ;static  _GLOBAL_267_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[7] ;static  _GLOBAL_267_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[8] ;static  _GLOBAL_267_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[9] ;static  _GLOBAL_267_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[10] ;static  _GLOBAL_267_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[11] ;static  _GLOBAL_267_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[12] ;static  _GLOBAL_267_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[13] ;static  _GLOBAL_267_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[14] ;static  _GLOBAL_267_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[15] ;static  _GLOBAL_267_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[16] ;static  _GLOBAL_267_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[17] ;static  _GLOBAL_267_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[18] ;static  _GLOBAL_267_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[19] ;static  _GLOBAL_267_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[20] ;static  _GLOBAL_267_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[21] ;static  _GLOBAL_267_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[22] ;static  _GLOBAL_267_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[23] ;static  _GLOBAL_267_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[24] ;static  _GLOBAL_267_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[25] ;static  _GLOBAL_267_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[26] ;static  _GLOBAL_267_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[27] ;static  _GLOBAL_267_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[28] ;static  _GLOBAL_267_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[29] ;static  _GLOBAL_267_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[30] ;static  _GLOBAL_267_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[31] ;static  _GLOBAL_267_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[32] ;static  _GLOBAL_267_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[33] ;static  _GLOBAL_267_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[34] ;static  _GLOBAL_267_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[35] ;static  _GLOBAL_267_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[36] ;static  _GLOBAL_267_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[37] ;static  _GLOBAL_267_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[38] ;static  _GLOBAL_267_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[39] ;static  _GLOBAL_267_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[40] ;static  _GLOBAL_267_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[41] ;static  _GLOBAL_267_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[42] ;static  _GLOBAL_267_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[43] ;static  _GLOBAL_267_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[44] ;static  _GLOBAL_267_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[45] ;static  _GLOBAL_267_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[46] ;static  _GLOBAL_267_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[47] ;static  _GLOBAL_267_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[48] ;static  _GLOBAL_267_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_max_chain_len __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_max_chain_len[49] ;    

 
# 141 "freebsd5/netinet/ip_dummynet.c"
    

                                                
typedef  struct sysctl_oid   _GLOBAL_268_T; static  _GLOBAL_268_T  global_sysctl___net_inet_ip_dummynet_red_lookup_depth[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[0]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[1]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[2]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[3]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[4]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[5]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[6]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[7]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[8]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[9]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[10]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[11]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[12]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[13]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[14]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[15]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[16]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[17]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[18]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[19]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[20]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[21]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[22]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[23]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[24]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[25]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[26]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[27]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[28]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[29]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[30]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[31]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[32]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[33]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[34]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[35]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[36]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[37]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[38]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[39]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[40]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[41]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[42]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[43]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[44]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[45]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[46]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[47]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[48]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_lookup_depth[49]   , 0  , "red_lookup_depth"  , sysctl_handle_int  , "I"  , 0  , "Depth of RED lookup table"  } ,  };   
 
# 144 "freebsd5/netinet/ip_dummynet.c"
   
 
# 144 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_269_T; static  _GLOBAL_269_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[0] ;static  _GLOBAL_269_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[1] ;static  _GLOBAL_269_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[2] ;static  _GLOBAL_269_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[3] ;static  _GLOBAL_269_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[4] ;static  _GLOBAL_269_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[5] ;static  _GLOBAL_269_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[6] ;static  _GLOBAL_269_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[7] ;static  _GLOBAL_269_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[8] ;static  _GLOBAL_269_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[9] ;static  _GLOBAL_269_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[10] ;static  _GLOBAL_269_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[11] ;static  _GLOBAL_269_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[12] ;static  _GLOBAL_269_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[13] ;static  _GLOBAL_269_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[14] ;static  _GLOBAL_269_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[15] ;static  _GLOBAL_269_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[16] ;static  _GLOBAL_269_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[17] ;static  _GLOBAL_269_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[18] ;static  _GLOBAL_269_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[19] ;static  _GLOBAL_269_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[20] ;static  _GLOBAL_269_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[21] ;static  _GLOBAL_269_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[22] ;static  _GLOBAL_269_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[23] ;static  _GLOBAL_269_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[24] ;static  _GLOBAL_269_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[25] ;static  _GLOBAL_269_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[26] ;static  _GLOBAL_269_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[27] ;static  _GLOBAL_269_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[28] ;static  _GLOBAL_269_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[29] ;static  _GLOBAL_269_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[30] ;static  _GLOBAL_269_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[31] ;static  _GLOBAL_269_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[32] ;static  _GLOBAL_269_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[33] ;static  _GLOBAL_269_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[34] ;static  _GLOBAL_269_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[35] ;static  _GLOBAL_269_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[36] ;static  _GLOBAL_269_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[37] ;static  _GLOBAL_269_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[38] ;static  _GLOBAL_269_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[39] ;static  _GLOBAL_269_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[40] ;static  _GLOBAL_269_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[41] ;static  _GLOBAL_269_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[42] ;static  _GLOBAL_269_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[43] ;static  _GLOBAL_269_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[44] ;static  _GLOBAL_269_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[45] ;static  _GLOBAL_269_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[46] ;static  _GLOBAL_269_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[47] ;static  _GLOBAL_269_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[48] ;static  _GLOBAL_269_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_lookup_depth __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_lookup_depth[49] ;    
 
# 144 "freebsd5/netinet/ip_dummynet.c"
    
                                                               
typedef  struct sysctl_oid   _GLOBAL_270_T; static  _GLOBAL_270_T  global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[0]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[1]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[2]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[3]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[4]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[5]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[6]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[7]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[8]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[9]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[10]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[11]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[12]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[13]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[14]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[15]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[16]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[17]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[18]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[19]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[20]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[21]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[22]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[23]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[24]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[25]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[26]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[27]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[28]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[29]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[30]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[31]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[32]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[33]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[34]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[35]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[36]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[37]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[38]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[39]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[40]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[41]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[42]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[43]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[44]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[45]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[46]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[47]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[48]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_avg_pkt_size[49]   , 0  , "red_avg_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Medium packet size"  } ,  };   
 
# 146 "freebsd5/netinet/ip_dummynet.c"
   
 
# 146 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_271_T; static  _GLOBAL_271_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[0] ;static  _GLOBAL_271_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[1] ;static  _GLOBAL_271_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[2] ;static  _GLOBAL_271_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[3] ;static  _GLOBAL_271_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[4] ;static  _GLOBAL_271_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[5] ;static  _GLOBAL_271_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[6] ;static  _GLOBAL_271_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[7] ;static  _GLOBAL_271_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[8] ;static  _GLOBAL_271_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[9] ;static  _GLOBAL_271_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[10] ;static  _GLOBAL_271_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[11] ;static  _GLOBAL_271_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[12] ;static  _GLOBAL_271_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[13] ;static  _GLOBAL_271_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[14] ;static  _GLOBAL_271_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[15] ;static  _GLOBAL_271_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[16] ;static  _GLOBAL_271_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[17] ;static  _GLOBAL_271_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[18] ;static  _GLOBAL_271_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[19] ;static  _GLOBAL_271_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[20] ;static  _GLOBAL_271_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[21] ;static  _GLOBAL_271_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[22] ;static  _GLOBAL_271_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[23] ;static  _GLOBAL_271_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[24] ;static  _GLOBAL_271_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[25] ;static  _GLOBAL_271_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[26] ;static  _GLOBAL_271_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[27] ;static  _GLOBAL_271_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[28] ;static  _GLOBAL_271_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[29] ;static  _GLOBAL_271_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[30] ;static  _GLOBAL_271_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[31] ;static  _GLOBAL_271_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[32] ;static  _GLOBAL_271_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[33] ;static  _GLOBAL_271_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[34] ;static  _GLOBAL_271_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[35] ;static  _GLOBAL_271_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[36] ;static  _GLOBAL_271_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[37] ;static  _GLOBAL_271_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[38] ;static  _GLOBAL_271_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[39] ;static  _GLOBAL_271_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[40] ;static  _GLOBAL_271_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[41] ;static  _GLOBAL_271_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[42] ;static  _GLOBAL_271_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[43] ;static  _GLOBAL_271_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[44] ;static  _GLOBAL_271_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[45] ;static  _GLOBAL_271_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[46] ;static  _GLOBAL_271_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[47] ;static  _GLOBAL_271_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[48] ;static  _GLOBAL_271_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_avg_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_avg_pkt_size[49] ;    
 
# 146 "freebsd5/netinet/ip_dummynet.c"
    
                                                            
typedef  struct sysctl_oid   _GLOBAL_272_T; static  _GLOBAL_272_T  global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[0]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[1]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[2]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[3]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[4]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[5]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[6]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[7]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[8]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[9]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[10]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[11]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[12]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[13]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[14]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[15]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[16]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[17]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[18]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[19]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[20]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[21]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[22]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[23]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[24]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[25]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[26]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[27]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[28]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[29]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[30]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[31]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[32]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[33]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[34]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[35]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[36]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[37]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[38]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[39]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[40]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[41]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[42]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[43]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[44]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[45]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[46]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[47]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[48]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_red_max_pkt_size[49]   , 0  , "red_max_pkt_size"  , sysctl_handle_int  , "I"  , 0  , "RED Max packet size"  } ,  };   
 
# 148 "freebsd5/netinet/ip_dummynet.c"
   
 
# 148 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_273_T; static  _GLOBAL_273_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[0] ;static  _GLOBAL_273_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[1] ;static  _GLOBAL_273_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[2] ;static  _GLOBAL_273_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[3] ;static  _GLOBAL_273_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[4] ;static  _GLOBAL_273_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[5] ;static  _GLOBAL_273_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[6] ;static  _GLOBAL_273_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[7] ;static  _GLOBAL_273_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[8] ;static  _GLOBAL_273_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[9] ;static  _GLOBAL_273_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[10] ;static  _GLOBAL_273_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[11] ;static  _GLOBAL_273_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[12] ;static  _GLOBAL_273_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[13] ;static  _GLOBAL_273_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[14] ;static  _GLOBAL_273_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[15] ;static  _GLOBAL_273_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[16] ;static  _GLOBAL_273_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[17] ;static  _GLOBAL_273_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[18] ;static  _GLOBAL_273_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[19] ;static  _GLOBAL_273_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[20] ;static  _GLOBAL_273_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[21] ;static  _GLOBAL_273_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[22] ;static  _GLOBAL_273_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[23] ;static  _GLOBAL_273_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[24] ;static  _GLOBAL_273_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[25] ;static  _GLOBAL_273_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[26] ;static  _GLOBAL_273_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[27] ;static  _GLOBAL_273_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[28] ;static  _GLOBAL_273_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[29] ;static  _GLOBAL_273_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[30] ;static  _GLOBAL_273_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[31] ;static  _GLOBAL_273_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[32] ;static  _GLOBAL_273_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[33] ;static  _GLOBAL_273_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[34] ;static  _GLOBAL_273_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[35] ;static  _GLOBAL_273_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[36] ;static  _GLOBAL_273_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[37] ;static  _GLOBAL_273_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[38] ;static  _GLOBAL_273_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[39] ;static  _GLOBAL_273_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[40] ;static  _GLOBAL_273_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[41] ;static  _GLOBAL_273_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[42] ;static  _GLOBAL_273_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[43] ;static  _GLOBAL_273_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[44] ;static  _GLOBAL_273_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[45] ;static  _GLOBAL_273_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[46] ;static  _GLOBAL_273_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[47] ;static  _GLOBAL_273_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[48] ;static  _GLOBAL_273_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_red_max_pkt_size __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_red_max_pkt_size[49] ;    
 
# 148 "freebsd5/netinet/ip_dummynet.c"
    
                                                         



typedef  int _GLOBAL_274_T;  _GLOBAL_274_T  global_dummynet_debug[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    

typedef  struct sysctl_oid   _GLOBAL_275_T; static  _GLOBAL_275_T  global_sysctl___net_inet_ip_dummynet_debug[NUM_STACKS] = {  { & global_sysctl__net_inet_ip_dummynet_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[0]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[1]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[2]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[3]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[4]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[5]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[6]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[7]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[8]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[9]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[10]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[11]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[12]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[13]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[14]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[15]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[16]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[17]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[18]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[19]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[20]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[21]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[22]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[23]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[24]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[25]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[26]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[27]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[28]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[29]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[30]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[31]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[32]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[33]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[34]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[35]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[36]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[37]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[38]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[39]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[40]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[41]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[42]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[43]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[44]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[45]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[46]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[47]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[48]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_inet_ip_dummynet_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_dummynet_debug[49]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  };   
 
# 155 "freebsd5/netinet/ip_dummynet.c"
   
 
# 155 "freebsd5/netinet/ip_dummynet.c"
               typedef  void const   _GLOBAL_276_T; static  _GLOBAL_276_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[0] ;static  _GLOBAL_276_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[1] ;static  _GLOBAL_276_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[2] ;static  _GLOBAL_276_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[3] ;static  _GLOBAL_276_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[4] ;static  _GLOBAL_276_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[5] ;static  _GLOBAL_276_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[6] ;static  _GLOBAL_276_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[7] ;static  _GLOBAL_276_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[8] ;static  _GLOBAL_276_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[9] ;static  _GLOBAL_276_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[10] ;static  _GLOBAL_276_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[11] ;static  _GLOBAL_276_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[12] ;static  _GLOBAL_276_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[13] ;static  _GLOBAL_276_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[14] ;static  _GLOBAL_276_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[15] ;static  _GLOBAL_276_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[16] ;static  _GLOBAL_276_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[17] ;static  _GLOBAL_276_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[18] ;static  _GLOBAL_276_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[19] ;static  _GLOBAL_276_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[20] ;static  _GLOBAL_276_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[21] ;static  _GLOBAL_276_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[22] ;static  _GLOBAL_276_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[23] ;static  _GLOBAL_276_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[24] ;static  _GLOBAL_276_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[25] ;static  _GLOBAL_276_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[26] ;static  _GLOBAL_276_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[27] ;static  _GLOBAL_276_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[28] ;static  _GLOBAL_276_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[29] ;static  _GLOBAL_276_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[30] ;static  _GLOBAL_276_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[31] ;static  _GLOBAL_276_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[32] ;static  _GLOBAL_276_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[33] ;static  _GLOBAL_276_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[34] ;static  _GLOBAL_276_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[35] ;static  _GLOBAL_276_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[36] ;static  _GLOBAL_276_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[37] ;static  _GLOBAL_276_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[38] ;static  _GLOBAL_276_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[39] ;static  _GLOBAL_276_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[40] ;static  _GLOBAL_276_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[41] ;static  _GLOBAL_276_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[42] ;static  _GLOBAL_276_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[43] ;static  _GLOBAL_276_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[44] ;static  _GLOBAL_276_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[45] ;static  _GLOBAL_276_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[46] ;static  _GLOBAL_276_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[47] ;static  _GLOBAL_276_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[48] ;static  _GLOBAL_276_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_ip_dummynet_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_ip_dummynet_debug[49] ;    
 
# 155 "freebsd5/netinet/ip_dummynet.c"
    
                                    






typedef  struct mtx   _GLOBAL_277_T; static  _GLOBAL_277_T  global_dummynet_mtx[NUM_STACKS];    
# 179 "freebsd5/netinet/ip_dummynet.c"
static int config_pipe(struct dn_pipe *p);
static int ip_dn_ctl(struct sockopt *sopt);

static void dummynet(void *);
static void dummynet_flush(void);
void dummynet_drain(void);
typedef  ip_dn_io_t  _GLOBAL_278_T; static  _GLOBAL_278_T  dummynet_io;   
static void dn_rule_delete(void *);

int if_tx_rdy(struct ifnet *ifp);
# 209 "freebsd5/netinet/ip_dummynet.c"
static int
heap_init(struct dn_heap *h, int new_size)
{
    struct dn_heap_entry *p;

    if (h->size >= new_size ) {
 nsc_printf("dummynet: %s, Bogus call, have %d want %d\n", __func__,
  h->size, new_size);
 return 0 ;
    }
    new_size = (new_size + 15 ) & ~15 ;
    p = nsc_malloc(new_size * sizeof(*p), (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001);
    if (p == ((void *)0)) {
 nsc_printf("dummynet: %s, resize %d failed\n", __func__, new_size );
 return 1 ;
    }
    if (h->size > 0) {
 bcopy(h->p, p, h->size * sizeof(*p) );
 nsc_free(h->p, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
    }
    h->p = p ;
    h->size = new_size ;
    return 0 ;
}
# 253 "freebsd5/netinet/ip_dummynet.c"
static int
heap_insert(struct dn_heap *h, dn_key key1, void *p)
{
    int son = h->elements ;

    if (p == ((void *)0))
 son = key1 ;
    else {
 son = h->elements ;
 if (son == h->size)
     if (heap_init(h, h->elements+1) )
  return 1 ;
 h->p[son].object = p ;
 h->p[son].key = key1 ;
 h->elements++ ;
    }
    while (son > 0) {
 int father = ( ( (son) - 1 ) / 2 ) ;
 struct dn_heap_entry tmp ;

 if (((int64_t)((h->p[father].key)-(h->p[son].key)) < 0) )
     break ;

 { tmp = h->p[son] ; h->p[son] = h->p[father] ; h->p[father] = tmp ; } ;
 if (h->offset > 0) *((int *)((char *)(h->p[son].object) + h->offset)) = son ;;
 son = father ;
    }
    if (h->offset > 0) *((int *)((char *)(h->p[son].object) + h->offset)) = son ;;
    return 0 ;
}




static void
heap_extract(struct dn_heap *h, void *obj)
{
    int child, father, max = h->elements - 1 ;

    if (max < 0) {
 nsc_printf("dummynet: warning, extract from empty heap 0x%p\n", h);
 return ;
    }
    father = 0 ;
    if (obj != ((void *)0)) {
 if (h->offset <= 0)
     panic("dummynet: heap_extract from middle not supported on this heap!!!\n");
 father = *((int *)((char *)obj + h->offset)) ;
 if (father < 0 || father >= h->elements) {
     nsc_printf("dummynet: heap_extract, father %d out of bound 0..%d\n",
  father, h->elements);
     panic("dummynet: heap_extract");
 }
    }
    if (h->offset > 0) *((int *)((char *)(h->p[father].object) + h->offset)) = -1 ;;
    child = ( 2*(father) + 1 ) ;
    while (child <= max) {
 if (child != max && ((int64_t)((h->p[child+1].key)-(h->p[child].key)) < 0) )
     child = child+1 ;
 h->p[father] = h->p[child] ;
 if (h->offset > 0) *((int *)((char *)(h->p[father].object) + h->offset)) = father ;;
 father = child ;
 child = ( 2*(child) + 1 ) ;
    }
    h->elements-- ;
    if (father != max) {



 h->p[father] = h->p[max] ;
 heap_insert(h, father, ((void *)0));
    }
}
# 372 "freebsd5/netinet/ip_dummynet.c"
static void
heapify(struct dn_heap *h)
{
    int i ;

    for (i = 0 ; i < h->elements ; i++ )
 heap_insert(h, i , ((void *)0)) ;
}




static void
heap_free(struct dn_heap *h)
{
    if (h->size >0 )
 nsc_free(h->p, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
    bzero(h, sizeof(*h) );
}
# 401 "freebsd5/netinet/ip_dummynet.c"
static struct dn_pkt_tag *
dn_tag_get(struct mbuf *m)
{
    struct m_tag *mtag = m_tag_first(m);
   


                                                    ;
    return (struct dn_pkt_tag *)(mtag+1);
}
# 430 "freebsd5/netinet/ip_dummynet.c"
static void
transmit_event(struct dn_pipe *pipe)
{
    struct mbuf *m ;
    struct dn_pkt_tag *pkt ;
    struct ip *ip;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    while ( (m = pipe->head) ) {
 pkt = dn_tag_get(m);
 if ( !((int64_t)((pkt->output_time)-(global_curr_time[get_stack_id()])) <= 0) )
     break;




 pipe->head = m->m_hdr.mh_nextpkt ;
 m->m_hdr.mh_nextpkt = ((void *)0);


 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 switch (pkt->dn_dir) {
 case 1:
     (void)ip_output(m, ((void *)0), ((void *)0), pkt->flags, ((void *)0), ((void *)0));
     break ;

 case 2 :
     ip = ((struct ip *)((m)->m_hdr.mh_data));
     ip->ip_len = __bswap16(ip->ip_len);
     ip->ip_off = __bswap16(ip->ip_off);
     ip_input(m) ;
     break ;

 case 3 :




     if ((global_bdgtakeifaces_ptr[get_stack_id()] != ((void *)0))) {
  if (m->m_hdr.mh_len < (6*2+2) &&
      (m = m_pullup(m, (6*2+2))) == ((void *)0)) {
      nsc_printf("dummynet/bridge: pullup fail, dropping pkt\n");
      break;
  }
      m = global_bdg_forward_ptr[get_stack_id()](m, pkt->ifp);
     } else {


  nsc_printf("dummynet: dropping bridged packet trapped in pipe\n");
     }
      if (m)
   m_freem(m);
     break;

 case 4:




     if (m->m_hdr.mh_len < (6*2+2) &&
  (m = m_pullup(m, (6*2+2))) == ((void *)0)) {
  nsc_printf("dummynet/ether: pullup fail, dropping pkt\n");
  break;
     }
     ether_demux(m->M_dat.MH.MH_pkthdr.rcvif, m);
     break ;

 case 5:
     ether_output_frame(pkt->ifp, m);
     break;

 default:
     nsc_printf("dummynet: bad switch %d!\n", pkt->dn_dir);
     m_freem(m);
     break ;
 }
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    }

    if ( (m = pipe->head) ) {
 pkt = dn_tag_get(m) ;



 heap_insert(&global_extract_heap[get_stack_id()], pkt->output_time, pipe ) ;
    }
}
# 532 "freebsd5/netinet/ip_dummynet.c"
static void
move_pkt(struct mbuf *pkt, struct dn_flow_queue *q,
 struct dn_pipe *p, int len)
{
    struct dn_pkt_tag *dt = dn_tag_get(pkt);

    q->head = pkt->m_hdr.mh_nextpkt ;
    q->len-- ;
    q->len_bytes -= len ;

    dt->output_time = global_curr_time[get_stack_id()] + p->delay ;

    if (p->head == ((void *)0))
 p->head = pkt;
    else
 p->tail->m_hdr.mh_nextpkt = pkt;
    p->tail = pkt;
    p->tail->m_hdr.mh_nextpkt = ((void *)0);
}
# 559 "freebsd5/netinet/ip_dummynet.c"
static void
ready_event(struct dn_flow_queue *q)
{
    struct mbuf *pkt;
    struct dn_pipe *p = q->fs->pipe ;
    int p_was_empty ;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    if (p == ((void *)0)) {
 nsc_printf("dummynet: ready_event- pipe is gone\n");
 return ;
    }
    p_was_empty = (p->head == ((void *)0)) ;
# 582 "freebsd5/netinet/ip_dummynet.c"
    q->numbytes += ( global_curr_time[get_stack_id()] - q->sched_time ) * p->bandwidth;
    while ( (pkt = q->head) != ((void *)0) ) {
 int len = pkt->M_dat.MH.MH_pkthdr.len;
 int len_scaled = p->bandwidth ? len*8*global_hz[get_stack_id()] : 0 ;
 if (len_scaled > q->numbytes )
     break ;
 q->numbytes -= len_scaled ;
 move_pkt(pkt, q, p, len);
    }







    if ( (pkt = q->head) != ((void *)0) ) {
 dn_key t = ((pkt)->M_dat.MH.MH_pkthdr.len*8*global_hz[get_stack_id()] - (q)->numbytes + p->bandwidth - 1 ) / p->bandwidth ;;
 q->sched_time = global_curr_time[get_stack_id()] ;
 heap_insert(&global_ready_heap[get_stack_id()], global_curr_time[get_stack_id()] + t, (void *)q );



    } else {
 q->q_time = global_curr_time[get_stack_id()];
 q->numbytes = 0;
    }




    if (p_was_empty)
 transmit_event(p);
}
# 625 "freebsd5/netinet/ip_dummynet.c"
static void
ready_event_wfq(struct dn_pipe *p)
{
    int p_was_empty = (p->head == ((void *)0)) ;
    struct dn_heap *sch = &(p->scheduler_heap);
    struct dn_heap *neh = &(p->not_eligible_heap) ;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    if (p->if_name[0] == 0)
 p->numbytes += ( global_curr_time[get_stack_id()] - p->sched_time ) * p->bandwidth;
    else {
 if (p->ifp && p->ifp->if_snd.ifq_head != ((void *)0))
     return ;
 else {
     if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: pipe %d ready from %s --\n", p->pipe_nr, p->if_name)
                          ;
 }
    }





    while ( p->numbytes >=0 && (sch->elements>0 || neh->elements >0) ) {
 if (sch->elements > 0) {
     struct dn_flow_queue *q = sch->p[0].object ;
     struct mbuf *pkt = q->head;
     struct dn_flow_set *fs = q->fs;
     u_int64_t len = pkt->M_dat.MH.MH_pkthdr.len;
     int len_scaled = p->bandwidth ? len*8*global_hz[get_stack_id()] : 0 ;

     heap_extract(sch, ((void *)0));
     p->numbytes -= len_scaled ;
     move_pkt(pkt, q, p, len);

     p->V += (len<<16) / p->sum ;
     q->S = q->F ;
     if (q->len == 0) {
  fs->backlogged-- ;
  heap_insert(&(p->idle_heap), q->F, q);
     } else {




  len = (q->head)->M_dat.MH.MH_pkthdr.len;
  q->F += (len<<16)/(u_int64_t) fs->weight ;
  if (((int64_t)((q->S)-(p->V)) <= 0))
      heap_insert(neh, q->S, q);
  else
      heap_insert(sch, q->F, q);
     }
 }






 if (sch->elements == 0 && neh->elements > 0)
     p->V = (( (int64_t) ( (neh->p[0].key)-(p->V) )) > 0 ) ? (neh->p[0].key) : (p->V);

 while (neh->elements > 0 && ((int64_t)((neh->p[0].key)-(p->V)) <= 0) ) {
     struct dn_flow_queue *q = neh->p[0].object ;
     heap_extract(neh, ((void *)0));
     heap_insert(sch, q->F, q);
 }

 if (p->if_name[0] != '\0') {
     p->numbytes = -1 ;
     break ;
 }
    }
    if (sch->elements == 0 && neh->elements == 0 && p->numbytes >= 0
     && p->idle_heap.elements > 0) {



 int i ;

 for (i = 0 ; i < p->idle_heap.elements ; i++) {
     struct dn_flow_queue *q = p->idle_heap.p[i].object ;

     q->F = 0 ;
     q->S = q->F + 1 ;
 }
 p->sum = 0 ;
 p->V = 0 ;
 p->idle_heap.elements = 0 ;
    }





    if (p->if_name[0]==0 && p->numbytes < 0) {
 dn_key t=0 ;

 if (p->bandwidth > 0)
     t = ( p->bandwidth -1 - p->numbytes) / p->bandwidth ;
 dn_tag_get(p->tail)->output_time += t ;
 p->sched_time = global_curr_time[get_stack_id()] ;
 heap_insert(&global_wfq_ready_heap[get_stack_id()], global_curr_time[get_stack_id()] + t, (void *)p);



    }




    if (p_was_empty)
 transmit_event(p);
}





static void
dummynet(void *  __attribute__((__unused__)) unused)
{
    void *p ;
    struct dn_heap *h ;
    struct dn_heap *heaps[3];
    int i;
    struct dn_pipe *pe ;

    heaps[0] = &global_ready_heap[get_stack_id()] ;
    heaps[1] = &global_wfq_ready_heap[get_stack_id()] ;
    heaps[2] = &global_extract_heap[get_stack_id()] ;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    global_curr_time[get_stack_id()]++ ;
    for (i=0; i < 3 ; i++) {
 h = heaps[i];
 while (h->elements > 0 && ((int64_t)((h->p[0].key)-(global_curr_time[get_stack_id()])) <= 0) ) {
     if (h->p[0].key > global_curr_time[get_stack_id()])
  nsc_printf("dummynet: warning, heap %d is %d ticks late\n",
      i, (int)(global_curr_time[get_stack_id()] - h->p[0].key));
     p = h->p[0].object ;
     heap_extract(h, ((void *)0));
     if (i == 0)
  ready_event(p) ;
     else if (i == 1) {
  struct dn_pipe *pipe = p;
  if (pipe->if_name[0] != '\0')
      nsc_printf("dummynet: bad ready_event_wfq for pipe %s\n",
   pipe->if_name);
  else
      ready_event_wfq(p) ;
     } else
  transmit_event(p);
 }
    }

    for (pe = global_all_pipes[get_stack_id()]; pe ; pe = pe->next )
 if (pe->idle_heap.elements > 0 &&
  ((int64_t)((pe->idle_heap.p[0].key)-(pe->V)) < 0) ) {
     struct dn_flow_queue *q = pe->idle_heap.p[0].object ;

     heap_extract(&(pe->idle_heap), ((void *)0));
     q->S = q->F + 1 ;
     pe->sum -= q->fs->weight ;
 }
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

    callout_reset(&global_dn_timeout[get_stack_id()], 1, dummynet, ((void *)0));
}




int
if_tx_rdy(struct ifnet *ifp)
{
    struct dn_pipe *p;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    for (p = global_all_pipes[get_stack_id()]; p ; p = p->next )
 if (p->ifp == ifp)
     break ;
    if (p == ((void *)0)) {
 for (p = global_all_pipes[get_stack_id()]; p ; p = p->next )
     if (!strcmp(p->if_name, ifp->if_xname) ) {
  p->ifp = ifp ;
  if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: ++ tx rdy from %s (now found)\n", ifp->if_xname)
                  ;
  break ;
     }
    }
    if (p != ((void *)0)) {
 if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: ++ tx rdy from %s - qlen %d\n", ifp->if_xname, ifp->if_snd.ifq_len)
                       ;
 p->numbytes = 0 ;
 ready_event_wfq(p);
    }
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

    return 0;
}





static int
expire_queues(struct dn_flow_set *fs)
{
    struct dn_flow_queue *q, *prev ;
    int i, initial_elements = fs->rq_elements ;

    if (fs->last_expired == global_time_second[get_stack_id()])
 return 0 ;
    fs->last_expired = global_time_second[get_stack_id()] ;
    for (i = 0 ; i <= fs->rq_size ; i++)
 for (prev=((void *)0), q = fs->rq[i] ; q != ((void *)0) ; )
     if (q->head != ((void *)0) || q->S != q->F+1) {
    prev = q ;
           q = q->next ;
       } else {
  struct dn_flow_queue *old_q = q ;

  if (prev != ((void *)0))
      prev->next = q = q->next ;
  else
      fs->rq[i] = q = q->next ;
  fs->rq_elements-- ;
  nsc_free(old_q, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
     }
    return initial_elements - fs->rq_elements ;
}





static struct dn_flow_queue *
create_queue(struct dn_flow_set *fs, int i)
{
    struct dn_flow_queue *q ;

    if (fs->rq_elements > fs->rq_size * global_dn_max_ratio[get_stack_id()] &&
     expire_queues(fs) == 0) {



 i = fs->rq_size ;
 if ( fs->rq[i] != ((void *)0) )
     return fs->rq[i] ;
    }
    q = nsc_malloc(sizeof(*q), (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001 | 0x0100);
    if (q == ((void *)0)) {
 nsc_printf("dummynet: sorry, cannot allocate queue for new flow\n");
 return ((void *)0) ;
    }
    q->fs = fs ;
    q->hash_slot = i ;
    q->next = fs->rq[i] ;
    q->S = q->F + 1;
    fs->rq[i] = q ;
    fs->rq_elements++ ;
    return q ;
}






static struct dn_flow_queue *
find_queue(struct dn_flow_set *fs, struct ipfw_flow_id *id)
{
    int i = 0 ;
    struct dn_flow_queue *q, *prev;

    if ( !(fs->flags_fs & 0x0001) )
 q = fs->rq[0] ;
    else {

 id->dst_ip &= fs->flow_mask.dst_ip ;
 id->src_ip &= fs->flow_mask.src_ip ;
 id->dst_port &= fs->flow_mask.dst_port ;
 id->src_port &= fs->flow_mask.src_port ;
 id->proto &= fs->flow_mask.proto ;
 id->flags = 0 ;

 i = ( (id->dst_ip) & 0xffff ) ^
     ( (id->dst_ip >> 15) & 0xffff ) ^
     ( (id->src_ip << 1) & 0xffff ) ^
     ( (id->src_ip >> 16 ) & 0xffff ) ^
     (id->dst_port << 1) ^ (id->src_port) ^
     (id->proto );
 i = i % fs->rq_size ;

 global_searches[get_stack_id()]++ ;
 for (prev=((void *)0), q = fs->rq[i] ; q ; ) {
     global_search_steps[get_stack_id()]++;
     if (id->dst_ip == q->id.dst_ip &&
  id->src_ip == q->id.src_ip &&
  id->dst_port == q->id.dst_port &&
  id->src_port == q->id.src_port &&
  id->proto == q->id.proto &&
  id->flags == q->id.flags)
  break ;
     else if (global_pipe_expire[get_stack_id()] && q->head == ((void *)0) && q->S == q->F+1 ) {

  struct dn_flow_queue *old_q = q ;

  if (prev != ((void *)0))
      prev->next = q = q->next ;
  else
      fs->rq[i] = q = q->next ;
  fs->rq_elements-- ;
  nsc_free(old_q, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
  continue ;
     }
     prev = q ;
     q = q->next ;
 }
 if (q && prev != ((void *)0)) {
     prev->next = q->next ;
     q->next = fs->rq[i] ;
     fs->rq[i] = q ;
 }
    }
    if (q == ((void *)0)) {
 q = create_queue(fs, i);
 if (q != ((void *)0))
 q->id = *id ;
    }
    return q ;
}

static int
red_drops(struct dn_flow_set *fs, struct dn_flow_queue *q, int len)
{
# 981 "freebsd5/netinet/ip_dummynet.c"
    int64_t p_b = 0;

    u_int q_size = (fs->flags_fs & 0x0008) ? q->len_bytes : q->len;

    if (global_dummynet_debug[get_stack_id()]) nsc_printf ("\ndummynet: %d q: %2u ", (int) global_curr_time[get_stack_id()], q_size);


    if (q_size != 0) {



 int diff = ( (q_size) << 16 ) - q->avg;
 int64_t v = ( ( ((int64_t) diff) * ((int64_t) fs->w_q) ) >> 16 );

 q->avg += (int) v;
    } else {







 if (q->avg) {
     u_int t = (global_curr_time[get_stack_id()] - q->q_time) / fs->lookup_step;

     q->avg = (t < fs->lookup_depth) ?
      ( ( (q->avg) * (fs->w_q_lookup[t]) ) >> 16 ) : 0;
 }
    }
    if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: avg: %u ", ( (q->avg) >> 16 ));



    if (q->avg < fs->min_th) {
 q->count = -1;
 return 0;
    }
    if (q->avg >= fs->max_th) {
 if (fs->flags_fs & 0x0004) {






     p_b = ( ( ((int64_t) fs->c_3) * ((int64_t) q->avg) ) >> 16 ) - fs->c_4;
 } else {
     q->count = -1;
     if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: - drop");
     return 1 ;
 }
    } else if (q->avg > fs->min_th) {





 p_b = ( ( ((int64_t) fs->c_1) * ((int64_t) q->avg) ) >> 16 ) - fs->c_2;
    }
    if (fs->flags_fs & 0x0008)
 p_b = (p_b * len) / fs->max_pkt_size;
    if (++q->count == 0)
 q->random = random() & 0xffff;
    else {




 if (( ( (p_b) * (( ((int64_t) q->count) << 16 )) ) >> 16 ) > q->random) {
     q->count = 0;
     if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: - red drop");

     q->random = random() & 0xffff;
     return 1;
 }
    }

    return 0 ;
}

static __inline
struct dn_flow_set *
locate_flowset(int pipe_nr, struct ip_fw *rule)
{

    struct dn_flow_set *fs;
    ipfw_insn *cmd = rule->cmd + rule->act_ofs;

    if (cmd->opcode == O_LOG)
 cmd += ((cmd)->len & 0x3f);

    fs = ((ipfw_insn_pipe *)cmd)->pipe_ptr;




    if (fs != ((void *)0))
 return fs;

    if (cmd->opcode == O_QUEUE)





 for (fs=global_all_flow_sets[get_stack_id()]; fs && fs->fs_nr != pipe_nr; fs=fs->next)
     ;
    else {
 struct dn_pipe *p1;
 for (p1 = global_all_pipes[get_stack_id()]; p1 && p1->pipe_nr != pipe_nr; p1 = p1->next)
     ;
 if (p1 != ((void *)0))
     fs = &(p1->fs) ;
    }



    ((ipfw_insn_pipe *)cmd)->pipe_ptr = fs;







    return fs ;
}
# 1124 "freebsd5/netinet/ip_dummynet.c"
static int
dummynet_io(struct mbuf *m, int pipe_nr, int dir, struct ip_fw_args *fwa)
{
    struct dn_pkt_tag *pkt;
    struct m_tag *mtag;
    struct dn_flow_set *fs;
    struct dn_pipe *pipe ;
    u_int64_t len = m->M_dat.MH.MH_pkthdr.len ;
    struct dn_flow_queue *q = ((void *)0) ;
    int is_pipe;

    ipfw_insn *cmd = fwa->rule->cmd + fwa->rule->act_ofs;


   
                                                ;


    if (cmd->opcode == O_LOG)
 cmd += ((cmd)->len & 0x3f);
    is_pipe = (cmd->opcode == O_PIPE);




    pipe_nr &= 0xffff ;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);



    fs = locate_flowset(pipe_nr, fwa->rule);
    if (fs == ((void *)0))
 goto dropit ;
    pipe = fs->pipe ;
    if (pipe == ((void *)0)) {
 for (pipe = global_all_pipes[get_stack_id()]; pipe && pipe->pipe_nr != fs->parent_nr;
   pipe = pipe->next)
     ;
 if (pipe != ((void *)0))
     fs->pipe = pipe ;
 else {
     nsc_printf("dummynet: no pipe %d for queue %d, drop pkt\n",
  fs->parent_nr, fs->fs_nr);
     goto dropit ;
 }
    }
    q = find_queue(fs, &(fwa->f_id));
    if ( q == ((void *)0) )
 goto dropit ;



    q->tot_bytes += len ;
    q->tot_pkts++ ;
    if ( fs->plr && random() < fs->plr )
 goto dropit ;
    if ( fs->flags_fs & 0x0008) {
     if (q->len_bytes > fs->qsize)
     goto dropit ;
    } else {
 if (q->len >= fs->qsize)
     goto dropit ;
    }
    if ( fs->flags_fs & 0x0002 && red_drops(fs, q, len) )
 goto dropit ;


    mtag = m_tag_get(15,
  sizeof(struct dn_pkt_tag), 0x0001|0x0100);
    if ( mtag == ((void *)0) )
 goto dropit ;
    m_tag_prepend(m, mtag);

    pkt = (struct dn_pkt_tag *)(mtag+1);


    pkt->rule = fwa->rule ;
    pkt->dn_dir = dir ;

    pkt->ifp = fwa->oif;
    if (dir == 1)
 pkt->flags = fwa->flags;
    if (q->head == ((void *)0))
 q->head = m;
    else
 q->tail->m_hdr.mh_nextpkt = m;
    q->tail = m;
    q->len++;
    q->len_bytes += len ;

    if ( q->head != m )
 goto done;





    if (is_pipe) {



 dn_key t = 0 ;
 if (pipe->bandwidth)
     t = ((m)->M_dat.MH.MH_pkthdr.len*8*global_hz[get_stack_id()] - (q)->numbytes + pipe->bandwidth - 1 ) / pipe->bandwidth ;;
 q->sched_time = global_curr_time[get_stack_id()] ;
 if (t == 0)
     ready_event( q );
 else
     heap_insert(&global_ready_heap[get_stack_id()], global_curr_time[get_stack_id()] + t , q );
    } else {
# 1244 "freebsd5/netinet/ip_dummynet.c"
 if (((int64_t)((q->S)-(q->F)) > 0)) {
     q->S = pipe->V ;
     pipe->sum += fs->weight ;
 } else {
     heap_extract(&(pipe->idle_heap), q);
     q->S = (( (int64_t) ( (pipe->V)-(q->F) )) > 0 ) ? (pipe->V) : (q->F) ;
 }
 q->F = q->S + ( len<<16 )/(u_int64_t) fs->weight;

 if (pipe->not_eligible_heap.elements == 0 &&
  pipe->scheduler_heap.elements == 0)
     pipe->V = (( (int64_t) ( (pipe->V)-(q->S) )) > 0 ) ? (pipe->V) : (q->S);
 fs->backlogged++ ;
# 1270 "freebsd5/netinet/ip_dummynet.c"
 if (((int64_t)((q->S)-(pipe->V)) > 0) ) {
     if (pipe->scheduler_heap.elements == 0)
  nsc_printf("dummynet: ++ ouch! not eligible but empty scheduler!\n");
     heap_insert(&(pipe->not_eligible_heap), q->S, q);
 } else {
     heap_insert(&(pipe->scheduler_heap), q->F, q);
     if (pipe->numbytes >= 0) {
  if (pipe->scheduler_heap.elements != 1)
      nsc_printf("dummynet: OUCH! pipe should have been idle!\n");
  if (global_dummynet_debug[get_stack_id()]) nsc_printf ("dummynet: waking up pipe %d at %d\n", pipe->pipe_nr, (int)(q->F >> 16))
                                       ;
  pipe->sched_time = global_curr_time[get_stack_id()] ;
  ready_event_wfq(pipe);
     }
 }
    }
done:
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    return 0;

dropit:
    if (q)
 q->drops++ ;
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    m_freem(m);
    return ( (fs && (fs->flags_fs & 0x0010)) ? 0 : 55);
}
# 1312 "freebsd5/netinet/ip_dummynet.c"
static void
purge_flow_set(struct dn_flow_set *fs, int all)
{
    struct dn_flow_queue *q, *qn ;
    int i ;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    for (i = 0 ; i <= fs->rq_size ; i++ ) {
 for (q = fs->rq[i] ; q ; q = qn ) {
     struct mbuf *m, *mnext;

     mnext = q->head;
     while ((m = mnext) != ((void *)0)) {
  mnext = m->m_hdr.mh_nextpkt;
  do { m_freem(m); } while (0);
     }
     qn = q->next ;
     nsc_free(q, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
 }
 fs->rq[i] = ((void *)0) ;
    }
    fs->rq_elements = 0 ;
    if (all) {

 if (fs->w_q_lookup)
     nsc_free(fs->w_q_lookup, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
 if (fs->rq)
     nsc_free(fs->rq, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));

 if (fs->pipe && fs != &(fs->pipe->fs) )
     nsc_free(fs, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
    }
}






static void
purge_pipe(struct dn_pipe *pipe)
{
    struct mbuf *m, *mnext;

    purge_flow_set( &(pipe->fs), 1 );

    mnext = pipe->head;
    while ((m = mnext) != ((void *)0)) {
 mnext = m->m_hdr.mh_nextpkt;
 do { m_freem(m); } while (0);
    }

    heap_free( &(pipe->scheduler_heap) );
    heap_free( &(pipe->not_eligible_heap) );
    heap_free( &(pipe->idle_heap) );
}





static void
dummynet_flush()
{
    struct dn_pipe *curr_p, *p ;
    struct dn_flow_set *fs, *curr_fs;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);

    flush_pipe_ptrs(((void *)0));

    p = global_all_pipes[get_stack_id()] ;
    global_all_pipes[get_stack_id()] = ((void *)0) ;
    fs = global_all_flow_sets[get_stack_id()] ;
    global_all_flow_sets[get_stack_id()] = ((void *)0) ;

    heap_free(&global_ready_heap[get_stack_id()]);
    heap_free(&global_wfq_ready_heap[get_stack_id()]);
    heap_free(&global_extract_heap[get_stack_id()]);





    for ( ; fs ; ) {
 curr_fs = fs ;
 fs = fs->next ;
 purge_flow_set(curr_fs, 1);
    }
    for ( ; p ; ) {
 purge_pipe(p);
 curr_p = p ;
 p = p->next ;
 nsc_free(curr_p, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
    }
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}


typedef  struct ip_fw   _GLOBAL_279_T; extern  _GLOBAL_279_T  * global_ip_fw_default_rule[NUM_STACKS];     
static void
dn_rule_delete_fs(struct dn_flow_set *fs, void *r)
{
    int i ;
    struct dn_flow_queue *q ;
    struct mbuf *m ;

    for (i = 0 ; i <= fs->rq_size ; i++)
 for (q = fs->rq[i] ; q ; q = q->next )
     for (m = q->head ; m ; m = m->m_hdr.mh_nextpkt ) {
  struct dn_pkt_tag *pkt = dn_tag_get(m) ;
  if (pkt->rule == r)
      pkt->rule = global_ip_fw_default_rule[get_stack_id()] ;
     }
}




void
dn_rule_delete(void *r)
{
    struct dn_pipe *p ;
    struct dn_flow_set *fs ;
    struct dn_pkt_tag *pkt ;
    struct mbuf *m ;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);





    for ( fs = global_all_flow_sets[get_stack_id()] ; fs ; fs = fs->next )
 dn_rule_delete_fs(fs, r);
    for ( p = global_all_pipes[get_stack_id()] ; p ; p = p->next ) {
 fs = &(p->fs) ;
 dn_rule_delete_fs(fs, r);
 for (m = p->head ; m ; m = m->m_hdr.mh_nextpkt ) {
     pkt = dn_tag_get(m) ;
     if (pkt->rule == r)
  pkt->rule = global_ip_fw_default_rule[get_stack_id()] ;
    }
    }
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}




static int
config_red(struct dn_flow_set *p, struct dn_flow_set * x)
{
    int i;

    x->w_q = p->w_q;
    x->min_th = ( (p->min_th) << 16 );
    x->max_th = ( (p->max_th) << 16 );
    x->max_p = p->max_p;

    x->c_1 = p->max_p / (p->max_th - p->min_th);
    x->c_2 = ( ( (x->c_1) * (( (p->min_th) << 16 )) ) >> 16 );
    if (x->flags_fs & 0x0004) {
 x->c_3 = (( (1) << 16 ) - p->max_p) / p->max_th;
 x->c_4 = (( (1) << 16 ) - 2 * p->max_p);
    }


    if (x->w_q_lookup) {
 nsc_free(x->w_q_lookup, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
 x->w_q_lookup = ((void *)0) ;
    }
    if (global_red_lookup_depth[get_stack_id()] == 0) {
 nsc_printf("\ndummynet: net.inet.ip.dummynet.red_lookup_depth must be > 0\n");
 nsc_free(x, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
 return 22;
    }
    x->lookup_depth = global_red_lookup_depth[get_stack_id()];
    x->w_q_lookup = (u_int *) nsc_malloc(x->lookup_depth * sizeof(int),
     (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001);
    if (x->w_q_lookup == ((void *)0)) {
 nsc_printf("dummynet: sorry, cannot allocate red lookup table\n");
 nsc_free(x, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
 return 28;
    }


    x->lookup_step = p->lookup_step ;
    x->lookup_weight = p->lookup_weight ;
    x->w_q_lookup[0] = ( (1) << 16 ) - x->w_q;
    for (i = 1; i < x->lookup_depth; i++)
 x->w_q_lookup[i] = ( ( (x->w_q_lookup[i - 1]) * (x->lookup_weight) ) >> 16 );
    if (global_red_avg_pkt_size[get_stack_id()] < 1)
 global_red_avg_pkt_size[get_stack_id()] = 512 ;
    x->avg_pkt_size = global_red_avg_pkt_size[get_stack_id()] ;
    if (global_red_max_pkt_size[get_stack_id()] < 1)
 global_red_max_pkt_size[get_stack_id()] = 1500 ;
    x->max_pkt_size = global_red_max_pkt_size[get_stack_id()] ;
    return 0 ;
}

static int
alloc_hash(struct dn_flow_set *x, struct dn_flow_set *pfs)
{
    if (x->flags_fs & 0x0001) {
 int l = pfs->rq_size;

 if (l == 0)
     l = global_dn_hash_size[get_stack_id()];
 if (l < 4)
     l = 4;
 else if (l > 65536)
     l = 65536;
 x->rq_size = l;
    } else
 x->rq_size = 1;
    x->rq = nsc_malloc((1 + x->rq_size) * sizeof(struct dn_flow_queue *),
     (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001 | 0x0100);
    if (x->rq == ((void *)0)) {
 nsc_printf("dummynet: sorry, cannot allocate queue\n");
 return 28;
    }
    x->rq_elements = 0;
    return 0 ;
}

static void
set_fs_parms(struct dn_flow_set *x, struct dn_flow_set *src)
{
    x->flags_fs = src->flags_fs;
    x->qsize = src->qsize;
    x->plr = src->plr;
    x->flow_mask = src->flow_mask;
    if (x->flags_fs & 0x0008) {
 if (x->qsize > 1024*1024)
     x->qsize = 1024*1024 ;
    } else {
 if (x->qsize == 0)
     x->qsize = 50 ;
 if (x->qsize > 100)
     x->qsize = 50 ;
    }

    if ( x->flags_fs & 0x0002 )
 config_red(src, x) ;
}





static int
config_pipe(struct dn_pipe *p)
{
    int i, r;
    struct dn_flow_set *pfs = &(p->fs);
    struct dn_flow_queue *q;







    p->delay = ( p->delay * global_hz[get_stack_id()] ) / 1000 ;

    if (p->pipe_nr == 0 && pfs->fs_nr == 0)
 return 22 ;
    if (p->pipe_nr != 0 && pfs->fs_nr != 0)
 return 22 ;
    if (p->pipe_nr != 0) {
 struct dn_pipe *x, *a, *b;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);

 for (a = ((void *)0) , b = global_all_pipes[get_stack_id()] ; b && b->pipe_nr < p->pipe_nr ;
   a = b , b = b->next) ;

 if (b == ((void *)0) || b->pipe_nr != p->pipe_nr) {
     x = nsc_malloc(sizeof(struct dn_pipe), (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001 | 0x0100);
     if (x == ((void *)0)) {
      do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  nsc_printf("dummynet: no memory for new pipe\n");
  return 28;
     }
     x->pipe_nr = p->pipe_nr;
     x->fs.pipe = x ;


     x->idle_heap.size = x->idle_heap.elements = 0 ;
     x->idle_heap.offset=((int)&( ((struct dn_flow_queue *)0)->heap_pos) );
 } else {
     x = b;

     for (i = 0; i <= x->fs.rq_size; i++)
  for (q = x->fs.rq[i]; q; q = q->next)
      q->numbytes = 0;
 }

 x->bandwidth = p->bandwidth ;
 x->numbytes = 0;
 bcopy(p->if_name, x->if_name, sizeof(p->if_name) );
 x->ifp = ((void *)0) ;
 x->delay = p->delay ;
 set_fs_parms(&(x->fs), pfs);


 if ( x->fs.rq == ((void *)0) ) {
     r = alloc_hash(&(x->fs), pfs) ;
     if (r) {
  do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  nsc_free(x, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
  return r ;
     }
     x->next = b ;
     if (a == ((void *)0))
  global_all_pipes[get_stack_id()] = x ;
     else
  a->next = x ;
 }
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    } else {
 struct dn_flow_set *x, *a, *b ;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);

 for (a=((void *)0), b=global_all_flow_sets[get_stack_id()] ; b && b->fs_nr < pfs->fs_nr ;
   a = b , b = b->next) ;

 if (b == ((void *)0) || b->fs_nr != pfs->fs_nr) {
     if (pfs->parent_nr == 0) {
      do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  return 22 ;
     }
     x = nsc_malloc(sizeof(struct dn_flow_set), (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]), 0x0001|0x0100);
     if (x == ((void *)0)) {
  do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  nsc_printf("dummynet: no memory for new flow_set\n");
  return 28;
     }
     x->fs_nr = pfs->fs_nr;
     x->parent_nr = pfs->parent_nr;
     x->weight = pfs->weight ;
     if (x->weight == 0)
  x->weight = 1 ;
     else if (x->weight > 100)
  x->weight = 100 ;
 } else {

     if (pfs->parent_nr != 0 && b->parent_nr != pfs->parent_nr) {
      do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  return 22 ;
     }
     x = b;
 }
 set_fs_parms(x, pfs);

 if ( x->rq == ((void *)0) ) {
     r = alloc_hash(x, pfs) ;
     if (r) {
  do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  nsc_free(x, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
  return r ;
     }
     x->next = b;
     if (a == ((void *)0))
  global_all_flow_sets[get_stack_id()] = x;
     else
  a->next = x;
 }
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    }
    return 0 ;
}





static void
fs_remove_from_heap(struct dn_heap *h, struct dn_flow_set *fs)
{
    int i = 0, found = 0 ;
    for (; i < h->elements ;)
 if ( ((struct dn_flow_queue *)h->p[i].object)->fs == fs) {
     h->elements-- ;
     h->p[i] = h->p[h->elements] ;
     found++ ;
 } else
     i++ ;
    if (found)
 heapify(h);
}




static void
pipe_remove_from_heap(struct dn_heap *h, struct dn_pipe *p)
{
    if (h->elements > 0) {
 int i = 0 ;
 for (i=0; i < h->elements ; i++ ) {
     if (h->p[i].object == p) {
  h->elements-- ;
  h->p[i] = h->p[h->elements] ;
  heapify(h);
  break ;
     }
 }
    }
}




void
dummynet_drain()
{
    struct dn_flow_set *fs;
    struct dn_pipe *p;
    struct mbuf *m, *mnext;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    heap_free(&global_ready_heap[get_stack_id()]);
    heap_free(&global_wfq_ready_heap[get_stack_id()]);
    heap_free(&global_extract_heap[get_stack_id()]);

    for (fs = global_all_flow_sets[get_stack_id()]; fs; fs= fs->next )
 purge_flow_set(fs, 0);

    for (p = global_all_pipes[get_stack_id()]; p; p= p->next ) {
 purge_flow_set(&(p->fs), 0);

 mnext = p->head;
 while ((m = mnext) != ((void *)0)) {
     mnext = m->m_hdr.mh_nextpkt;
     do { m_freem(m); } while (0);
 }
 p->head = p->tail = ((void *)0) ;
    }
}




static int
delete_pipe(struct dn_pipe *p)
{
    if (p->pipe_nr == 0 && p->fs.fs_nr == 0)
 return 22 ;
    if (p->pipe_nr != 0 && p->fs.fs_nr != 0)
 return 22 ;
    if (p->pipe_nr != 0) {
 struct dn_pipe *a, *b;
 struct dn_flow_set *fs;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);

 for (a = ((void *)0) , b = global_all_pipes[get_stack_id()] ; b && b->pipe_nr < p->pipe_nr ;
   a = b , b = b->next) ;
 if (b == ((void *)0) || (b->pipe_nr != p->pipe_nr) ) {
     do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
     return 22 ;
 }


 if (a == ((void *)0))
     global_all_pipes[get_stack_id()] = b->next ;
 else
     a->next = b->next ;

 flush_pipe_ptrs(&(b->fs));


 for (fs = global_all_flow_sets[get_stack_id()]; fs; fs= fs->next )
     if (fs->pipe == b) {
  nsc_printf("dummynet: ++ ref to pipe %d from fs %d\n",
   p->pipe_nr, fs->fs_nr);
  fs->pipe = ((void *)0) ;
  purge_flow_set(fs, 0);
     }
 fs_remove_from_heap(&global_ready_heap[get_stack_id()], &(b->fs));
 purge_pipe(b);

 pipe_remove_from_heap(&global_extract_heap[get_stack_id()], b);
 pipe_remove_from_heap(&global_wfq_ready_heap[get_stack_id()], b);
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

 nsc_free(b, (*_GLOBAL_M_DUMMYNET_57_A[get_stack_id()]));
    } else {
 struct dn_flow_set *a, *b;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);

 for (a = ((void *)0), b = global_all_flow_sets[get_stack_id()] ; b && b->fs_nr < p->fs.fs_nr ;
   a = b , b = b->next) ;
 if (b == ((void *)0) || (b->fs_nr != p->fs.fs_nr) ) {
     do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
     return 22 ;
 }

 if (a == ((void *)0))
     global_all_flow_sets[get_stack_id()] = b->next ;
 else
     a->next = b->next ;

 flush_pipe_ptrs(b);

 if (b->pipe != ((void *)0)) {

     b->pipe->sum -= b->weight * b->backlogged ;
     fs_remove_from_heap(&(b->pipe->not_eligible_heap), b);
     fs_remove_from_heap(&(b->pipe->scheduler_heap), b);

     fs_remove_from_heap(&(b->pipe->idle_heap), b);

 }
 purge_flow_set(b, 1);
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    }
    return 0 ;
}




static char *
dn_copy_set(struct dn_flow_set *set, char *bp)
{
    int i, copied = 0 ;
    struct dn_flow_queue *q, *qp = (struct dn_flow_queue *)bp;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);

    for (i = 0 ; i <= set->rq_size ; i++)
 for (q = set->rq[i] ; q ; q = q->next, qp++ ) {
     if (q->hash_slot != i)
  nsc_printf("dummynet: ++ at %d: wrong slot (have %d, "
      "should be %d)\n", copied, q->hash_slot, i);
     if (q->fs != set)
  nsc_printf("dummynet: ++ at %d: wrong fs ptr (have %p, should be %p)\n",
   i, q->fs, set);
     copied++ ;
     bcopy(q, qp, sizeof( *q ) );

     qp->next = ((void *)0) ;
     qp->head = qp->tail = ((void *)0) ;
     qp->fs = ((void *)0) ;
 }
    if (copied != set->rq_elements)
 nsc_printf("dummynet: ++ wrong count, have %d should be %d\n",
     copied, set->rq_elements);
    return (char *)qp ;
}

static size_t
dn_calc_size(void)
{
    struct dn_flow_set *set ;
    struct dn_pipe *p ;
    size_t size ;

    do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);



    for (p = global_all_pipes[get_stack_id()], size = 0 ; p ; p = p->next )
 size += sizeof( *p ) +
     p->fs.rq_elements * sizeof(struct dn_flow_queue);
    for (set = global_all_flow_sets[get_stack_id()] ; set ; set = set->next )
 size += sizeof ( *set ) +
     set->rq_elements * sizeof(struct dn_flow_queue);
    return size ;
}

static int
dummynet_get(struct sockopt *sopt)
{
    char *buf, *bp ;
    size_t size ;
    struct dn_flow_set *set ;
    struct dn_pipe *p ;
    int error=0, i ;


    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);




    for (i = 0; i < 10; i++) {
 size = dn_calc_size();
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 buf = nsc_malloc(size, (*_GLOBAL_M_TEMP_15_A[get_stack_id()]), 0x0002);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_dummynet_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (size == dn_calc_size())
  break;
 nsc_free(buf, (*_GLOBAL_M_TEMP_15_A[get_stack_id()]));
 buf = ((void *)0);
    }
    if (buf == ((void *)0)) {
 do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return 55 ;
    }
    for (p = global_all_pipes[get_stack_id()], bp = buf ; p ; p = p->next ) {
 struct dn_pipe *pipe_bp = (struct dn_pipe *)bp ;






 bcopy(p, bp, sizeof( *p ) );
 pipe_bp->delay = (pipe_bp->delay * 1000) / global_hz[get_stack_id()] ;






 pipe_bp->next = (struct dn_pipe *)0x4000 ;

 pipe_bp->head = pipe_bp->tail = ((void *)0) ;
 pipe_bp->fs.next = ((void *)0) ;
 pipe_bp->fs.pipe = ((void *)0) ;
 pipe_bp->fs.rq = ((void *)0) ;

 bp += sizeof( *p ) ;
 bp = dn_copy_set( &(p->fs), bp );
    }
    for (set = global_all_flow_sets[get_stack_id()] ; set ; set = set->next ) {
 struct dn_flow_set *fs_bp = (struct dn_flow_set *)bp ;
 bcopy(set, bp, sizeof( *set ) );

 fs_bp->next = (struct dn_flow_set *)0x8000 ;
 fs_bp->pipe = ((void *)0) ;
 fs_bp->rq = ((void *)0) ;
 bp += sizeof( *set ) ;
 bp = dn_copy_set( set, bp );
    }
    do { if (!atomic_cmpset_ptr(&((((&global_dummynet_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_dummynet_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

    error = sooptcopyout(sopt, buf, size);
    nsc_free(buf, (*_GLOBAL_M_TEMP_15_A[get_stack_id()]));
    return error ;
}




static int
ip_dn_ctl(struct sockopt *sopt)
{
    int error = 0 ;
    struct dn_pipe *p, tmp_pipe;


    if (sopt->sopt_dir == SOPT_SET) {

 error = securelevel_ge(sopt->sopt_td->td_ucred, 3);
 if (error)
     return (error);




    }

    switch (sopt->sopt_name) {
    default :
 nsc_printf("dummynet: -- unknown option %d", sopt->sopt_name);
 return 22 ;

    case 64 :
 error = dummynet_get(sopt);
 break ;

    case 62 :
 dummynet_flush() ;
 break ;

    case 60 :
 p = &tmp_pipe ;
 error = sooptcopyin(sopt, p, sizeof *p, sizeof *p);
 if (error)
     break ;
 error = config_pipe(p);
 break ;

    case 61 :
 p = &tmp_pipe ;
 error = sooptcopyin(sopt, p, sizeof *p, sizeof *p);
 if (error)
     break ;

 error = delete_pipe(p);
 break ;
    }
    return error ;
}

static void
ip_dn_init(void)
{
    if (global_bootverbose[get_stack_id()])
    nsc_printf("DUMMYNET initialized (011031)\n");

    mtx_init(&global_dummynet_mtx[get_stack_id()], "dummynet", ((void *)0), 0x00000000 | 0x00000004);

    global_all_pipes[get_stack_id()] = ((void *)0) ;
    global_all_flow_sets[get_stack_id()] = ((void *)0) ;
    global_ready_heap[get_stack_id()].size = global_ready_heap[get_stack_id()].elements = 0 ;
    global_ready_heap[get_stack_id()].offset = 0 ;

    global_wfq_ready_heap[get_stack_id()].size = global_wfq_ready_heap[get_stack_id()].elements = 0 ;
    global_wfq_ready_heap[get_stack_id()].offset = 0 ;

    global_extract_heap[get_stack_id()].size = global_extract_heap[get_stack_id()].elements = 0 ;
    global_extract_heap[get_stack_id()].offset = 0 ;
    global_ip_dn_ctl_ptr[get_stack_id()] = ip_dn_ctl;
    global_ip_dn_io_ptr[get_stack_id()] = dummynet_io;
    global_ip_dn_ruledel_ptr[get_stack_id()] = dn_rule_delete;

    callout_init(&global_dn_timeout[get_stack_id()], global_debug_mpsafenet[get_stack_id()] ? 0x0008 : 0);
    callout_reset(&global_dn_timeout[get_stack_id()], 1, dummynet, ((void *)0));
}
# 2057 "freebsd5/netinet/ip_dummynet.c"
static int
dummynet_modevent(module_t mod, int type, void *data)
{
 switch (type) {
 case MOD_LOAD:
  if ((global_ip_dn_io_ptr[get_stack_id()] != ((void *)0))) {
      nsc_printf("DUMMYNET already loaded\n");
      return 17 ;
  }
  ip_dn_init();
  break;

 case MOD_UNLOAD:

  nsc_printf("dummynet statically compiled, cannot unload\n");
  return 22 ;



  break ;
 default:
  return 45;
  break ;
 }
 return 0 ;
}

typedef  moduledata_t  _GLOBAL_280_T; static  _GLOBAL_280_T  global_dummynet_mod[NUM_STACKS] = {  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  { "dummynet" , dummynet_modevent  , ( ( void *  ) 0  )   } ,  };     
 
 
  

typedef  struct mod_metadata   _GLOBAL_281_T; static  _GLOBAL_281_T  global__mod_metadata_md_dummynet[NUM_STACKS] = {  { 1 , 2  , & global_dummynet_mod[0]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[1]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[2]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[3]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[4]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[5]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[6]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[7]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[8]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[9]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[10]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[11]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[12]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[13]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[14]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[15]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[16]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[17]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[18]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[19]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[20]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[21]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[22]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[23]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[24]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[25]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[26]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[27]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[28]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[29]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[30]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[31]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[32]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[33]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[34]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[35]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[36]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[37]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[38]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[39]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[40]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[41]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[42]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[43]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[44]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[45]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[46]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[47]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[48]   , "dummynet"  } ,  { 1 , 2  , & global_dummynet_mod[49]   , "dummynet"  } ,  };            typedef  void const   _GLOBAL_282_T; static  _GLOBAL_282_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[0] ;static  _GLOBAL_282_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[1] ;static  _GLOBAL_282_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[2] ;static  _GLOBAL_282_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[3] ;static  _GLOBAL_282_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[4] ;static  _GLOBAL_282_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[5] ;static  _GLOBAL_282_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[6] ;static  _GLOBAL_282_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[7] ;static  _GLOBAL_282_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[8] ;static  _GLOBAL_282_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[9] ;static  _GLOBAL_282_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[10] ;static  _GLOBAL_282_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[11] ;static  _GLOBAL_282_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[12] ;static  _GLOBAL_282_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[13] ;static  _GLOBAL_282_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[14] ;static  _GLOBAL_282_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[15] ;static  _GLOBAL_282_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[16] ;static  _GLOBAL_282_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[17] ;static  _GLOBAL_282_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[18] ;static  _GLOBAL_282_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[19] ;static  _GLOBAL_282_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[20] ;static  _GLOBAL_282_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[21] ;static  _GLOBAL_282_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[22] ;static  _GLOBAL_282_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[23] ;static  _GLOBAL_282_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[24] ;static  _GLOBAL_282_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[25] ;static  _GLOBAL_282_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[26] ;static  _GLOBAL_282_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[27] ;static  _GLOBAL_282_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[28] ;static  _GLOBAL_282_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[29] ;static  _GLOBAL_282_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[30] ;static  _GLOBAL_282_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[31] ;static  _GLOBAL_282_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[32] ;static  _GLOBAL_282_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[33] ;static  _GLOBAL_282_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[34] ;static  _GLOBAL_282_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[35] ;static  _GLOBAL_282_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[36] ;static  _GLOBAL_282_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[37] ;static  _GLOBAL_282_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[38] ;static  _GLOBAL_282_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[39] ;static  _GLOBAL_282_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[40] ;static  _GLOBAL_282_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[41] ;static  _GLOBAL_282_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[42] ;static  _GLOBAL_282_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[43] ;static  _GLOBAL_282_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[44] ;static  _GLOBAL_282_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[45] ;static  _GLOBAL_282_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[46] ;static  _GLOBAL_282_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[47] ;static  _GLOBAL_282_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[48] ;static  _GLOBAL_282_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_dummynet __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet[49] ;          typedef  struct sysinit   _GLOBAL_283_T; static  _GLOBAL_283_T  global_dummynetmodule_sys_init[NUM_STACKS] = {  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[0]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[1]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[2]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[3]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[4]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[5]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[6]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[7]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[8]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[9]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[10]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[11]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[12]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[13]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[14]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[15]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[16]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[17]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[18]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[19]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[20]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[21]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[22]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[23]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[24]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[25]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[26]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[27]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[28]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[29]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[30]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[31]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[32]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[33]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[34]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[35]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[36]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[37]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[38]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[39]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[40]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[41]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[42]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[43]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[44]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[45]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[46]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[47]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[48]  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_dummynet_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_284_T; static  _GLOBAL_284_T  * const  _global_section_0___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[0] ;static  _GLOBAL_284_T  * const  _global_section_1___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[1] ;static  _GLOBAL_284_T  * const  _global_section_2___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[2] ;static  _GLOBAL_284_T  * const  _global_section_3___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[3] ;static  _GLOBAL_284_T  * const  _global_section_4___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[4] ;static  _GLOBAL_284_T  * const  _global_section_5___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[5] ;static  _GLOBAL_284_T  * const  _global_section_6___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[6] ;static  _GLOBAL_284_T  * const  _global_section_7___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[7] ;static  _GLOBAL_284_T  * const  _global_section_8___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[8] ;static  _GLOBAL_284_T  * const  _global_section_9___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[9] ;static  _GLOBAL_284_T  * const  _global_section_10___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[10] ;static  _GLOBAL_284_T  * const  _global_section_11___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[11] ;static  _GLOBAL_284_T  * const  _global_section_12___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[12] ;static  _GLOBAL_284_T  * const  _global_section_13___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[13] ;static  _GLOBAL_284_T  * const  _global_section_14___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[14] ;static  _GLOBAL_284_T  * const  _global_section_15___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[15] ;static  _GLOBAL_284_T  * const  _global_section_16___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[16] ;static  _GLOBAL_284_T  * const  _global_section_17___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[17] ;static  _GLOBAL_284_T  * const  _global_section_18___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[18] ;static  _GLOBAL_284_T  * const  _global_section_19___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[19] ;static  _GLOBAL_284_T  * const  _global_section_20___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[20] ;static  _GLOBAL_284_T  * const  _global_section_21___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[21] ;static  _GLOBAL_284_T  * const  _global_section_22___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[22] ;static  _GLOBAL_284_T  * const  _global_section_23___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[23] ;static  _GLOBAL_284_T  * const  _global_section_24___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[24] ;static  _GLOBAL_284_T  * const  _global_section_25___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[25] ;static  _GLOBAL_284_T  * const  _global_section_26___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[26] ;static  _GLOBAL_284_T  * const  _global_section_27___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[27] ;static  _GLOBAL_284_T  * const  _global_section_28___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[28] ;static  _GLOBAL_284_T  * const  _global_section_29___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[29] ;static  _GLOBAL_284_T  * const  _global_section_30___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[30] ;static  _GLOBAL_284_T  * const  _global_section_31___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[31] ;static  _GLOBAL_284_T  * const  _global_section_32___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[32] ;static  _GLOBAL_284_T  * const  _global_section_33___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[33] ;static  _GLOBAL_284_T  * const  _global_section_34___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[34] ;static  _GLOBAL_284_T  * const  _global_section_35___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[35] ;static  _GLOBAL_284_T  * const  _global_section_36___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[36] ;static  _GLOBAL_284_T  * const  _global_section_37___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[37] ;static  _GLOBAL_284_T  * const  _global_section_38___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[38] ;static  _GLOBAL_284_T  * const  _global_section_39___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[39] ;static  _GLOBAL_284_T  * const  _global_section_40___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[40] ;static  _GLOBAL_284_T  * const  _global_section_41___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[41] ;static  _GLOBAL_284_T  * const  _global_section_42___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[42] ;static  _GLOBAL_284_T  * const  _global_section_43___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[43] ;static  _GLOBAL_284_T  * const  _global_section_44___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[44] ;static  _GLOBAL_284_T  * const  _global_section_45___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[45] ;static  _GLOBAL_284_T  * const  _global_section_46___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[46] ;static  _GLOBAL_284_T  * const  _global_section_47___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[47] ;static  _GLOBAL_284_T  * const  _global_section_48___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[48] ;static  _GLOBAL_284_T  * const  _global_section_49___set_sysinit_set_sym_dummynetmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_dummynetmodule_sys_init[49] ;          struct __hack;
typedef  struct mod_depend   _GLOBAL_285_T; static  _GLOBAL_285_T  global__dummynet_depend_on_ipfw[NUM_STACKS] = {  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  { 2 , 2  , 2  } ,  };           typedef  struct mod_metadata   _GLOBAL_286_T; static  _GLOBAL_286_T  global__mod_metadata_md_dummynet_on_ipfw[NUM_STACKS] = {  { 1 , 1  , & global__dummynet_depend_on_ipfw[0]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[1]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[2]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[3]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[4]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[5]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[6]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[7]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[8]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[9]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[10]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[11]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[12]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[13]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[14]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[15]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[16]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[17]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[18]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[19]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[20]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[21]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[22]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[23]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[24]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[25]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[26]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[27]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[28]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[29]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[30]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[31]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[32]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[33]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[34]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[35]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[36]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[37]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[38]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[39]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[40]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[41]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[42]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[43]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[44]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[45]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[46]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[47]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[48]   , "ipfw"  } ,  { 1 , 1  , & global__dummynet_depend_on_ipfw[49]   , "ipfw"  } ,  };            typedef  void const   _GLOBAL_287_T; static  _GLOBAL_287_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[0] ;static  _GLOBAL_287_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[1] ;static  _GLOBAL_287_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[2] ;static  _GLOBAL_287_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[3] ;static  _GLOBAL_287_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[4] ;static  _GLOBAL_287_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[5] ;static  _GLOBAL_287_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[6] ;static  _GLOBAL_287_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[7] ;static  _GLOBAL_287_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[8] ;static  _GLOBAL_287_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[9] ;static  _GLOBAL_287_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[10] ;static  _GLOBAL_287_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[11] ;static  _GLOBAL_287_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[12] ;static  _GLOBAL_287_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[13] ;static  _GLOBAL_287_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[14] ;static  _GLOBAL_287_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[15] ;static  _GLOBAL_287_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[16] ;static  _GLOBAL_287_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[17] ;static  _GLOBAL_287_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[18] ;static  _GLOBAL_287_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[19] ;static  _GLOBAL_287_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[20] ;static  _GLOBAL_287_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[21] ;static  _GLOBAL_287_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[22] ;static  _GLOBAL_287_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[23] ;static  _GLOBAL_287_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[24] ;static  _GLOBAL_287_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[25] ;static  _GLOBAL_287_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[26] ;static  _GLOBAL_287_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[27] ;static  _GLOBAL_287_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[28] ;static  _GLOBAL_287_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[29] ;static  _GLOBAL_287_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[30] ;static  _GLOBAL_287_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[31] ;static  _GLOBAL_287_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[32] ;static  _GLOBAL_287_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[33] ;static  _GLOBAL_287_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[34] ;static  _GLOBAL_287_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[35] ;static  _GLOBAL_287_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[36] ;static  _GLOBAL_287_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[37] ;static  _GLOBAL_287_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[38] ;static  _GLOBAL_287_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[39] ;static  _GLOBAL_287_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[40] ;static  _GLOBAL_287_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[41] ;static  _GLOBAL_287_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[42] ;static  _GLOBAL_287_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[43] ;static  _GLOBAL_287_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[44] ;static  _GLOBAL_287_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[45] ;static  _GLOBAL_287_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[46] ;static  _GLOBAL_287_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[47] ;static  _GLOBAL_287_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[48] ;static  _GLOBAL_287_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_dummynet_on_ipfw __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_dummynet_on_ipfw[49] ;         
typedef  struct mod_version   _GLOBAL_288_T; static  _GLOBAL_288_T  global__dummynet_version[NUM_STACKS] = {  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  };         typedef  struct mod_metadata   _GLOBAL_289_T; static  _GLOBAL_289_T  global__mod_metadata_dummynet_version[NUM_STACKS] = {  { 1 , 3  , & global__dummynet_version[0]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[1]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[2]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[3]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[4]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[5]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[6]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[7]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[8]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[9]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[10]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[11]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[12]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[13]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[14]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[15]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[16]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[17]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[18]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[19]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[20]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[21]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[22]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[23]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[24]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[25]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[26]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[27]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[28]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[29]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[30]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[31]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[32]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[33]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[34]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[35]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[36]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[37]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[38]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[39]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[40]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[41]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[42]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[43]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[44]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[45]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[46]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[47]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[48]   , "dummynet"  } ,  { 1 , 3  , & global__dummynet_version[49]   , "dummynet"  } ,  };            typedef  void const   _GLOBAL_290_T; static  _GLOBAL_290_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[0] ;static  _GLOBAL_290_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[1] ;static  _GLOBAL_290_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[2] ;static  _GLOBAL_290_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[3] ;static  _GLOBAL_290_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[4] ;static  _GLOBAL_290_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[5] ;static  _GLOBAL_290_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[6] ;static  _GLOBAL_290_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[7] ;static  _GLOBAL_290_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[8] ;static  _GLOBAL_290_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[9] ;static  _GLOBAL_290_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[10] ;static  _GLOBAL_290_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[11] ;static  _GLOBAL_290_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[12] ;static  _GLOBAL_290_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[13] ;static  _GLOBAL_290_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[14] ;static  _GLOBAL_290_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[15] ;static  _GLOBAL_290_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[16] ;static  _GLOBAL_290_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[17] ;static  _GLOBAL_290_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[18] ;static  _GLOBAL_290_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[19] ;static  _GLOBAL_290_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[20] ;static  _GLOBAL_290_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[21] ;static  _GLOBAL_290_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[22] ;static  _GLOBAL_290_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[23] ;static  _GLOBAL_290_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[24] ;static  _GLOBAL_290_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[25] ;static  _GLOBAL_290_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[26] ;static  _GLOBAL_290_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[27] ;static  _GLOBAL_290_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[28] ;static  _GLOBAL_290_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[29] ;static  _GLOBAL_290_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[30] ;static  _GLOBAL_290_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[31] ;static  _GLOBAL_290_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[32] ;static  _GLOBAL_290_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[33] ;static  _GLOBAL_290_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[34] ;static  _GLOBAL_290_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[35] ;static  _GLOBAL_290_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[36] ;static  _GLOBAL_290_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[37] ;static  _GLOBAL_290_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[38] ;static  _GLOBAL_290_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[39] ;static  _GLOBAL_290_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[40] ;static  _GLOBAL_290_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[41] ;static  _GLOBAL_290_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[42] ;static  _GLOBAL_290_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[43] ;static  _GLOBAL_290_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[44] ;static  _GLOBAL_290_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[45] ;static  _GLOBAL_290_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[46] ;static  _GLOBAL_290_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[47] ;static  _GLOBAL_290_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[48] ;static  _GLOBAL_290_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_dummynet_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_dummynet_version[49] ;         

