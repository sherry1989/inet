# 1 "freebsd5/support/sam.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/support/sam.c"
# 33 "freebsd5/support/sam.c"
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

# 34 "freebsd5/support/sam.c" 2
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
# 35 "freebsd5/support/sam.c" 2
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
# 36 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/exec.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/exec.h"
struct ps_strings {
 char **ps_argvstr;
 unsigned int ps_nargvstr;
 char **ps_envstr;
 unsigned int ps_nenvstr;
};







struct image_params;

struct execsw {
 int (*ex_imgact)(struct image_params *);
 const char *ex_name;
};

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/exec.h" 1
# 70 "freebsd5/freebsd/usr/src/sys/sys/exec.h" 2




int exec_map_first_page(struct image_params *);
void exec_unmap_first_page(struct image_params *);

int exec_register(const struct execsw *);
int exec_unregister(const struct execsw *);







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
typedef  struct sx   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_16_A[NUM_STACKS];   
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
# 87 "freebsd5/freebsd/usr/src/sys/sys/exec.h" 2
# 37 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/file.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/file.h"
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/file.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 44 "freebsd5/freebsd/usr/src/sys/sys/file.h" 2

struct stat;
struct thread;
struct uio;
struct knote;
struct vnode;
struct socket;
# 64 "freebsd5/freebsd/usr/src/sys/sys/file.h"
struct file;
struct ucred;

typedef int fo_rdwr_t(struct file *fp, struct uio *uio,
      struct ucred *active_cred, int flags,
      struct thread *td);

typedef int fo_ioctl_t(struct file *fp, u_long com, void *data,
      struct ucred *active_cred, struct thread *td);
typedef int fo_poll_t(struct file *fp, int events,
      struct ucred *active_cred, struct thread *td);
typedef int fo_kqfilter_t(struct file *fp, struct knote *kn);
typedef int fo_stat_t(struct file *fp, struct stat *sb,
      struct ucred *active_cred, struct thread *td);
typedef int fo_close_t(struct file *fp, struct thread *td);
typedef int fo_flags_t;

struct fileops {
 fo_rdwr_t *fo_read;
 fo_rdwr_t *fo_write;
 fo_ioctl_t *fo_ioctl;
 fo_poll_t *fo_poll;
 fo_kqfilter_t *fo_kqfilter;
 fo_stat_t *fo_stat;
 fo_close_t *fo_close;
 fo_flags_t fo_flags;
};
# 106 "freebsd5/freebsd/usr/src/sys/sys/file.h"
struct file {
 struct { struct file *le_next; struct file **le_prev; } f_list;
 short f_type;
 void *f_data;
 u_int f_flag;
 struct mtx *f_mtxp;
 struct fileops *f_ops;
 struct ucred *f_cred;
 int f_count;
 struct vnode *f_vnode;


 off_t f_offset;


 short f_gcflag;


 int f_msgcount;


 int f_seqcount;



 off_t f_nextoff;


};






struct xfile {
 size_t xf_size;
 pid_t xf_pid;
 uid_t xf_uid;
 int xf_fd;
 void *xf_file;
 short xf_type;
 int xf_count;
 int xf_msgcount;
 off_t xf_offset;
 void *xf_data;
 void *xf_vnode;
 u_int xf_flag;
};







struct filelist { struct file *lh_first; };
typedef  struct filelist   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_filehead[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_vnops[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_badfileops[NUM_STACKS];    
typedef  struct fileops   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_socketops[NUM_STACKS];    
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_maxfilesperproc[NUM_STACKS];   
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_nfiles[NUM_STACKS];   
typedef  struct sx   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_1_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_2_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_3_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_4_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_5_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_6_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_7_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_8_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_9_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_10_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_11_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_12_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_13_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_14_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_15_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_16_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_17_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_18_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_19_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_20_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_21_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_22_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_23_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_24_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_25_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_26_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_27_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_28_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_29_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_30_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_31_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_32_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_33_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_34_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_35_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_36_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_37_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_38_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_39_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_40_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_41_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_42_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_43_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_44_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_45_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_46_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_47_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_48_filelist_lock_I; extern  _GLOBAL_64_T  _GLOBAL_49_filelist_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_filelist_lock_I) *_GLOBAL_filelist_lock_17_A[NUM_STACKS];   

int fget(struct thread *td, int fd, struct file **fpp);
int fget_read(struct thread *td, int fd, struct file **fpp);
int fget_write(struct thread *td, int fd, struct file **fpp);
int fdrop(struct file *fp, struct thread *td);






typedef  fo_rdwr_t _GLOBAL_65_T;  _GLOBAL_65_T  soo_read;  
typedef  fo_rdwr_t _GLOBAL_66_T;  _GLOBAL_66_T  soo_write;  
typedef  fo_ioctl_t _GLOBAL_67_T;  _GLOBAL_67_T  soo_ioctl;  
typedef  fo_poll_t _GLOBAL_68_T;  _GLOBAL_68_T  soo_poll;  
typedef  fo_kqfilter_t _GLOBAL_69_T;  _GLOBAL_69_T  soo_kqfilter;  
typedef  fo_stat_t _GLOBAL_70_T;  _GLOBAL_70_T  soo_stat;  
typedef  fo_close_t _GLOBAL_71_T;  _GLOBAL_71_T  soo_close;  







int fgetvp(struct thread *td, int fd, struct vnode **vpp);
int fgetvp_read(struct thread *td, int fd, struct vnode **vpp);
int fgetvp_write(struct thread *td, int fd, struct vnode **vpp);

int fgetsock(struct thread *td, int fd, struct socket **spp, u_int *fflagp);
void fputsock(struct socket *sp);
# 216 "freebsd5/freebsd/usr/src/sys/sys/file.h"
typedef  fo_rdwr_t   _GLOBAL_72_T; static __inline__  _GLOBAL_72_T  fo_read;    
typedef  fo_rdwr_t   _GLOBAL_73_T; static __inline__  _GLOBAL_73_T  fo_write;    
typedef  fo_ioctl_t   _GLOBAL_74_T; static __inline__  _GLOBAL_74_T  fo_ioctl;    
typedef  fo_poll_t   _GLOBAL_75_T; static __inline__  _GLOBAL_75_T  fo_poll;    
typedef  fo_kqfilter_t   _GLOBAL_76_T; static __inline__  _GLOBAL_76_T  fo_kqfilter;    
typedef  fo_stat_t   _GLOBAL_77_T; static __inline__  _GLOBAL_77_T  fo_stat;    
typedef  fo_close_t   _GLOBAL_78_T; static __inline__  _GLOBAL_78_T  fo_close;    

static __inline int
fo_read(fp, uio, active_cred, flags, td)
 struct file *fp;
 struct uio *uio;
 struct ucred *active_cred;
 int flags;
 struct thread *td;
{

 return ((*fp->f_ops->fo_read)(fp, uio, active_cred, flags, td));
}

static __inline int
fo_write(fp, uio, active_cred, flags, td)
 struct file *fp;
 struct uio *uio;
 struct ucred *active_cred;
 int flags;
 struct thread *td;
{

 return ((*fp->f_ops->fo_write)(fp, uio, active_cred, flags, td));
}

static __inline int
fo_ioctl(fp, com, data, active_cred, td)
 struct file *fp;
 u_long com;
 void *data;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_ioctl)(fp, com, data, active_cred, td));
}

static __inline int
fo_poll(fp, events, active_cred, td)
 struct file *fp;
 int events;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_poll)(fp, events, active_cred, td));
}

static __inline int
fo_stat(fp, sb, active_cred, td)
 struct file *fp;
 struct stat *sb;
 struct ucred *active_cred;
 struct thread *td;
{

 return ((*fp->f_ops->fo_stat)(fp, sb, active_cred, td));
}

static __inline int
fo_close(fp, td)
 struct file *fp;
 struct thread *td;
{

 return ((*fp->f_ops->fo_close)(fp, td));
}

static __inline int
fo_kqfilter(fp, kn)
 struct file *fp;
 struct knote *kn;
{

 return ((*fp->f_ops->fo_kqfilter)(fp, kn));
}
# 38 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h" 2




# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_limits.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h" 2







struct filedesc {
 struct file **fd_ofiles;
 char *fd_ofileflags;
 struct vnode *fd_cdir;
 struct vnode *fd_rdir;
 struct vnode *fd_jdir;
 int fd_nfiles;
 u_long *fd_map;
 int fd_lastfile;
 int fd_freefile;
 u_short fd_cmask;
 u_short fd_refcnt;
 u_short fd_holdcnt;

 struct mtx fd_mtx;
 int fd_locked;
 int fd_wanted;
 struct kqlist fd_kqlist;
 int fd_holdleaderscount;
 int fd_holdleaderswakeup;
};
# 81 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
struct filedesc_to_leader {
 int fdl_refcount;
 int fdl_holdcount;
 int fdl_wakeup;
 struct proc *fdl_leader;

 struct filedesc_to_leader *fdl_prev;
 struct filedesc_to_leader *fdl_next;
};
# 155 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
struct thread;

int closef(struct file *fp, struct thread *td);
int dupfdopen(struct thread *td, struct filedesc *fdp, int indx, int dfd,
     int mode, int error);
int falloc(struct thread *td, struct file **resultfp, int *resultfd);
int fdalloc(struct thread *td, int minfd, int *result);
int fdavail(struct thread *td, int n);
int fdcheckstd(struct thread *td);
void fdclose(struct filedesc *fdp, struct file *fp, int idx, struct thread *td);
void fdcloseexec(struct thread *td);
struct filedesc *fdcopy(struct filedesc *fdp);
void fdunshare(struct proc *p, struct thread *td);
void fdfree(struct thread *td);
struct filedesc *fdinit(struct filedesc *fdp);
struct filedesc *fdshare(struct filedesc *fdp);
struct filedesc_to_leader *
 filedesc_to_leader_alloc(struct filedesc_to_leader *old,
     struct filedesc *fdp, struct proc *leader);
int getvnode(struct filedesc *fdp, int fd, struct file **fpp);
void mountcheckdirs(struct vnode *olddp, struct vnode *newdp);
void setugidsafety(struct thread *td);

static __inline struct file *
fget_locked(struct filedesc *fdp, int fd)
{

 return (fd < 0 || fd >= fdp->fd_nfiles ? ((void *)0) : fdp->fd_ofiles[fd]);
}
# 39 "freebsd5/support/sam.c" 2
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

typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_83_T; extern volatile  _GLOBAL_83_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_18_A[NUM_STACKS];   
# 40 "freebsd5/support/sam.c" 2
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
typedef  struct lock_class   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_lock_class_sx[NUM_STACKS];    

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
# 41 "freebsd5/support/sam.c" 2
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
# 42 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mount.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
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
# 37 "freebsd5/freebsd/usr/src/sys/sys/mount.h" 2


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
# 40 "freebsd5/freebsd/usr/src/sys/sys/mount.h" 2




typedef struct fsid { int32_t val[2]; } fsid_t;







struct fid {
 u_short fid_len;
 u_short fid_reserved;
 char fid_data[16];
};







struct statfs {
 uint32_t f_version;
 uint32_t f_type;
 uint64_t f_flags;
 uint64_t f_bsize;
 uint64_t f_iosize;
 uint64_t f_blocks;
 uint64_t f_bfree;
 int64_t f_bavail;
 uint64_t f_files;
 int64_t f_ffree;
 uint64_t f_syncwrites;
 uint64_t f_asyncwrites;
 uint64_t f_syncreads;
 uint64_t f_asyncreads;
 uint64_t f_spare[10];
 uint32_t f_namemax;
 uid_t f_owner;
 fsid_t f_fsid;
 char f_charspare[80];
 char f_fstypename[16];
 char f_mntfromname[88];
 char f_mntonname[88];
};







struct ostatfs {
 long f_spare2;
 long f_bsize;
 long f_iosize;
 long f_blocks;
 long f_bfree;
 long f_bavail;
 long f_files;
 long f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 int f_type;
 int f_flags;
 long f_syncwrites;
 long f_asyncwrites;
 char f_fstypename[16];
 char f_mntonname[(88 - 2 * sizeof(long))];
 long f_syncreads;
 long f_asyncreads;
 short f_spares1;
 char f_mntfromname[(88 - 2 * sizeof(long))];
 short f_spares2;





 long f_spare[2];
};



struct vnodelst { struct vnode *tqh_first; struct vnode **tqh_last; };
struct vfsoptlist { struct vfsopt *tqh_first; struct vfsopt **tqh_last; };
struct vfsopt {
 struct { struct vfsopt *tqe_next; struct vfsopt **tqe_prev; } link;
 char *name;
 void *value;
 int len;
};







struct mount {
 struct { struct mount *tqe_next; struct mount **tqe_prev; } mnt_list;
 struct vfsops *mnt_op;
 struct vfsconf *mnt_vfc;
 struct vnode *mnt_vnodecovered;
 struct vnode *mnt_syncer;
 struct vnodelst mnt_nvnodelist;
 struct lock mnt_lock;
 struct mtx mnt_mtx;
 int mnt_writeopcount;
 int mnt_flag;
 struct vfsoptlist *mnt_opt;
 struct vfsoptlist *mnt_optnew;
 int mnt_kern_flag;
 int mnt_maxsymlinklen;
 struct statfs mnt_stat;
 struct ucred *mnt_cred;
 void * mnt_data;
 time_t mnt_time;
 int mnt_iosize_max;
 struct netexport *mnt_export;
 struct label *mnt_mntlabel;
 struct label *mnt_fslabel;
 int mnt_nvnodelistsize;
};

struct vnode *__mnt_vnode_next(struct vnode **nvp, struct mount *mp);
# 306 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
struct fhandle {
 fsid_t fh_fsid;
 struct fid fh_fid;
};
typedef struct fhandle fhandle_t;




struct export_args {
 int ex_flags;
 uid_t ex_root;
 struct xucred ex_anon;
 struct sockaddr *ex_addr;
 u_char ex_addrlen;
 struct sockaddr *ex_mask;
 u_char ex_masklen;
 char *ex_indexfile;
};





struct nfs_public {
 int np_valid;
 fhandle_t np_handle;
 struct mount *np_mount;
 char *np_index;
};
# 344 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
struct vfsconf {
 u_int vfc_version;
 char vfc_name[16];
 struct vfsops *vfc_vfsops;
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 struct vfsoptdecl *vfc_opts;
 struct { struct vfsconf *tqe_next; struct vfsconf **tqe_prev; } vfc_list;
};


struct xvfsconf {
 struct vfsops *vfc_vfsops;
 char vfc_name[16];
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 struct vfsconf *vfc_next;
};


struct ovfsconf {
 void *vfc_vfsops;
 char vfc_name[32];
 int vfc_index;
 int vfc_refcount;
 int vfc_flags;
};
# 386 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
typedef uint32_t fsctlop_t;

struct vfsidctl {
 int vc_vers;
 fsid_t vc_fsid;
 char vc_fstypename[16];

 fsctlop_t vc_op;
 void *vc_ptr;
 size_t vc_len;
 u_int32_t vc_spare[12];
};
# 413 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
struct vfsquery {
 u_int32_t vq_flags;
 u_int32_t vq_spare[31];
};
# 447 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
struct iovec;
struct uio;






typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_maxvfsconf[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_nfs_mount_type[NUM_STACKS];   

struct vfsconfhead { struct vfsconf *tqh_first; struct vfsconf **tqh_last; };
typedef  struct vfsconfhead   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_vfsconf[NUM_STACKS];    




struct mount_args;
struct nameidata;
struct sysctl_req;

typedef int vfs_omount_t(struct mount *mp, char *path, caddr_t data,
    struct thread *td);
typedef int vfs_start_t(struct mount *mp, int flags, struct thread *td);
typedef int vfs_unmount_t(struct mount *mp, int mntflags, struct thread *td);
typedef int vfs_root_t(struct mount *mp, struct vnode **vpp, struct thread *td);
typedef int vfs_quotactl_t(struct mount *mp, int cmds, uid_t uid,
      caddr_t arg, struct thread *td);
typedef int vfs_statfs_t(struct mount *mp, struct statfs *sbp,
      struct thread *td);
typedef int vfs_sync_t(struct mount *mp, int waitfor, struct ucred *cred,
      struct thread *td);
typedef int vfs_vget_t(struct mount *mp, ino_t ino, int flags,
      struct vnode **vpp);
typedef int vfs_fhtovp_t(struct mount *mp, struct fid *fhp, struct vnode **vpp);
typedef int vfs_checkexp_t(struct mount *mp, struct sockaddr *nam,
      int *extflagsp, struct ucred **credanonp);
typedef int vfs_vptofh_t(struct vnode *vp, struct fid *fhp);
typedef int vfs_init_t(struct vfsconf *);
typedef int vfs_uninit_t(struct vfsconf *);
typedef int vfs_extattrctl_t(struct mount *mp, int cmd,
      struct vnode *filename_vp, int attrnamespace,
      const char *attrname, struct thread *td);
typedef int vfs_mount_t(struct mount *mp, struct thread *td);
typedef int vfs_sysctl_t(struct mount *mp, fsctlop_t op,
      struct sysctl_req *req);

struct vfsops {
 vfs_mount_t *vfs_mount;
 vfs_omount_t *vfs_omount;
 vfs_start_t *vfs_start;
 vfs_unmount_t *vfs_unmount;
 vfs_root_t *vfs_root;
 vfs_quotactl_t *vfs_quotactl;
 vfs_statfs_t *vfs_statfs;
 vfs_sync_t *vfs_sync;
 vfs_vget_t *vfs_vget;
 vfs_fhtovp_t *vfs_fhtovp;
 vfs_checkexp_t *vfs_checkexp;
 vfs_vptofh_t *vfs_vptofh;
 vfs_init_t *vfs_init;
 vfs_uninit_t *vfs_uninit;
 vfs_extattrctl_t *vfs_extattrctl;

 vfs_sysctl_t *vfs_sysctl;
};
# 558 "freebsd5/freebsd/usr/src/sys/sys/mount.h"
typedef  char  _GLOBAL_91_T; extern  _GLOBAL_91_T  * global_mountrootfsname[NUM_STACKS];   




int dounmount(struct mount *, int, struct thread *);
int kernel_mount(struct iovec *, u_int, int);
int kernel_vmount(int flags, ...);
struct vfsconf *vfs_byname(const char *);
void vfs_event_signal(fsid_t *, u_int32_t, intptr_t);
int vfs_getopt(struct vfsoptlist *, const char *, void **, int *);
int vfs_copyopt(struct vfsoptlist *, const char *, void *, int);
int vfs_mount(struct thread *, const char *, char *, int, void *);
int vfs_setpublicfs
     (struct mount *, struct netexport *, struct export_args *);
int vfs_lock(struct mount *);
void vfs_msync(struct mount *, int);
void vfs_unlock(struct mount *);
int vfs_busy(struct mount *, int, struct mtx *, struct thread *);
int vfs_export
     (struct mount *, struct export_args *);
struct netcred *vfs_export_lookup
     (struct mount *, struct sockaddr *);
int vfs_allocate_syncvnode(struct mount *);
void vfs_getnewfsid(struct mount *);
struct cdev *vfs_getrootfsid(struct mount *);
struct mount *vfs_getvfs(fsid_t *);
int vfs_modevent(module_t, int, void *);
int vfs_mountedon(struct vnode *);
void vfs_mountroot(void);
int vfs_rootmountalloc(char *, char *, struct mount **);
void vfs_mount_destroy(struct mount *, struct thread *);
int vfs_suser(struct mount *, struct thread *);
void vfs_unbusy(struct mount *, struct thread *);
void vfs_unmountall(void);
int vfs_register(struct vfsconf *);
int vfs_unregister(struct vfsconf *);
typedef  struct mntlist { struct mount   * tqh_first  ;  struct mount   * *  tqh_last  ;   }   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_mountlist[NUM_STACKS];            
typedef  struct mtx   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_mountlist_mtx[NUM_STACKS];    
typedef  struct nfs_public   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_nfs_pub[NUM_STACKS];    






typedef  vfs_start_t _GLOBAL_95_T;  _GLOBAL_95_T  vfs_stdstart;  
typedef  vfs_root_t _GLOBAL_96_T;  _GLOBAL_96_T  vfs_stdroot;  
typedef  vfs_quotactl_t _GLOBAL_97_T;  _GLOBAL_97_T  vfs_stdquotactl;  
typedef  vfs_statfs_t _GLOBAL_98_T;  _GLOBAL_98_T  vfs_stdstatfs;  
typedef  vfs_sync_t _GLOBAL_99_T;  _GLOBAL_99_T  vfs_stdsync;  
typedef  vfs_sync_t _GLOBAL_100_T;  _GLOBAL_100_T  vfs_stdnosync;  
typedef  vfs_vget_t _GLOBAL_101_T;  _GLOBAL_101_T  vfs_stdvget;  
typedef  vfs_fhtovp_t _GLOBAL_102_T;  _GLOBAL_102_T  vfs_stdfhtovp;  
typedef  vfs_checkexp_t _GLOBAL_103_T;  _GLOBAL_103_T  vfs_stdcheckexp;  
typedef  vfs_vptofh_t _GLOBAL_104_T;  _GLOBAL_104_T  vfs_stdvptofh;  
typedef  vfs_init_t _GLOBAL_105_T;  _GLOBAL_105_T  vfs_stdinit;  
typedef  vfs_uninit_t _GLOBAL_106_T;  _GLOBAL_106_T  vfs_stduninit;  
typedef  vfs_extattrctl_t _GLOBAL_107_T;  _GLOBAL_107_T  vfs_stdextattrctl;  
typedef  vfs_sysctl_t _GLOBAL_108_T;  _GLOBAL_108_T  vfs_stdsysctl;  


int softdep_fsync(struct vnode *);
int softdep_process_worklist(struct mount *);
# 43 "freebsd5/support/sam.c" 2
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


typedef  struct vmmeter   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_19_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_112_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_20_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_113_T; extern  _GLOBAL_113_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_114_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_21_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_115_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_117_T; extern  _GLOBAL_117_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_119_T; extern  _GLOBAL_119_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 44 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/syscallsubr.h" 1
# 31 "freebsd5/freebsd/usr/src/sys/sys/syscallsubr.h"
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

# 32 "freebsd5/freebsd/usr/src/sys/sys/syscallsubr.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 2







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
# 33 "freebsd5/freebsd/usr/src/sys/sys/syscallsubr.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
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
# 34 "freebsd5/freebsd/usr/src/sys/sys/syscallsubr.h" 2



struct itimerval;
struct mbuf;
struct msghdr;
struct msqid_ds;
struct rlimit;
struct rusage;
struct sockaddr;
struct stat;
struct kevent;

int kern___getcwd(struct thread *td, u_char *buf, enum uio_seg bufseg,
     u_int buflen);
int kern_access(struct thread *td, char *path, enum uio_seg pathseg,
     int flags);
int kern_adjtime(struct thread *td, struct timeval *delta,
     struct timeval *olddelta);
int kern_alternate_path(struct thread *td, const char *prefix, char *path,
     enum uio_seg pathseg, char **pathbuf, int create);
int kern_bind(struct thread *td, int fd, struct sockaddr *sa);
int kern_chdir(struct thread *td, char *path, enum uio_seg pathseg);
int kern_chmod(struct thread *td, char *path, enum uio_seg pathseg,
     int mode);
int kern_chown(struct thread *td, char *path, enum uio_seg pathseg, int uid,
     int gid);
int kern_connect(struct thread *td, int fd, struct sockaddr *sa);
int kern_fcntl(struct thread *td, int fd, int cmd, intptr_t arg);
int kern_fhstatfs(struct thread *td, fhandle_t fh, struct statfs *buf);
int kern_fstat(struct thread *td, int fd, struct stat *sbp);
int kern_fstatfs(struct thread *td, int fd, struct statfs *buf);
int kern_futimes(struct thread *td, int fd, struct timeval *tptr,
     enum uio_seg tptrseg);
int kern_getitimer(struct thread *, u_int, struct itimerval *);
int kern_getsockopt(struct thread *td, int s, int level, int name,
     void *optval, enum uio_seg valseg, socklen_t *valsize);
int kern_kevent(struct thread *td, int fd, struct kevent *changelist,
     int nchanges, enum uio_seg changeseg, struct kevent *eventlist,
     int nevents, enum uio_seg eventseg, const struct timespec *timeout);
int kern_lchown(struct thread *td, char *path, enum uio_seg pathseg,
     int uid, int gid);
int kern_link(struct thread *td, char *path, char *link,
     enum uio_seg segflg);
int kern_lstat(struct thread *td, char *path, enum uio_seg pathseg,
     struct stat *sbp);
int kern_lutimes(struct thread *td, char *path, enum uio_seg pathseg,
     struct timeval *tptr, enum uio_seg tptrseg);
int kern_mkdir(struct thread *td, char *path, enum uio_seg segflg,
     int mode);
int kern_mkfifo(struct thread *td, char *path, enum uio_seg pathseg,
     int mode);
int kern_mknod(struct thread *td, char *path, enum uio_seg pathseg,
     int mode, int dev);
int kern_nanosleep(struct thread *td, struct timespec *rqt,
     struct timespec *rmt);
int kern_open(struct thread *td, char *path, enum uio_seg pathseg,
     int flags, int mode);
int kern_pathconf(struct thread *td, char *path, enum uio_seg pathseg,
     int name);
int kern_ptrace(struct thread *td, int req, pid_t pid, void *addr,
     int data);
int kern_readlink(struct thread *td, char *path, enum uio_seg pathseg,
     char *buf, enum uio_seg bufseg, int count);
int kern_readv(struct thread *td, int fd, struct uio *auio);
int kern_rename(struct thread *td, char *from, char *to,
     enum uio_seg pathseg);
int kern_rmdir(struct thread *td, char *path, enum uio_seg pathseg);
int kern_sched_rr_get_interval(struct thread *td, pid_t pid,
     struct timespec *ts);
int kern_select(struct thread *td, int nd, fd_set *fd_in, fd_set *fd_ou,
     fd_set *fd_ex, struct timeval *tvp);
int kern_sendit(struct thread *td, int s, struct msghdr *mp, int flags,
     struct mbuf *control);
int kern_setitimer(struct thread *, u_int, struct itimerval *,
     struct itimerval *);
int kern_setrlimit(struct thread *, u_int, struct rlimit *);
int kern_setsockopt(struct thread *td, int s, int level, int name,
     void *optval, enum uio_seg valseg, socklen_t valsize);
int kern_settimeofday(struct thread *td, struct timeval *tv,
     struct timezone *tzp);
int kern_shmat(struct thread *td, int shmid, const void *shmaddr,
     int shmflg);
int kern_shmctl(struct thread *td, int shmid, int cmd, void *buf,
     size_t *bufsz);
int kern_sigaction(struct thread *td, int sig, struct sigaction *act,
     struct sigaction *oact, int flags);
int kern_sigaltstack(struct thread *td, stack_t *ss, stack_t *oss);
int kern_sigprocmask(struct thread *td, int how,
     sigset_t *set, sigset_t *oset, int old);
int kern_sigsuspend(struct thread *td, sigset_t mask);
int kern_stat(struct thread *td, char *path, enum uio_seg pathseg,
     struct stat *sbp);
int kern_statfs(struct thread *td, char *path, enum uio_seg pathseg,
     struct statfs *buf);
int kern_symlink(struct thread *td, char *path, char *link,
     enum uio_seg segflg);
int kern_truncate(struct thread *td, char *path, enum uio_seg pathseg,
     off_t length);
int kern_unlink(struct thread *td, char *path, enum uio_seg pathseg);
int kern_utimes(struct thread *td, char *path, enum uio_seg pathseg,
     struct timeval *tptr, enum uio_seg tptrseg);
int kern_wait(struct thread *td, pid_t pid, int *status, int options,
     struct rusage *rup);
int kern_writev(struct thread *td, int fd, struct uio *auio);
# 45 "freebsd5/support/sam.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_136_T; extern  _GLOBAL_136_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_137_T; extern  _GLOBAL_137_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_138_T; extern  _GLOBAL_138_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_139_T; extern  _GLOBAL_139_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_139_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_25_A[NUM_STACKS];  


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
# 46 "freebsd5/support/sam.c" 2
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
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_140_T; extern  _GLOBAL_140_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_142_T; extern  _GLOBAL_142_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_144_T; extern  _GLOBAL_144_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_144_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_26_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_145_T; extern  _GLOBAL_145_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_145_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_27_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_151_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_28_A[NUM_STACKS];   
typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_153_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_159_T; extern  _GLOBAL_159_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_159_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_161_T; extern  _GLOBAL_161_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_164_T  )  ( void  ) ; extern  _GLOBAL_164_T global_cpu_idle_hook[NUM_STACKS];   
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
# 47 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/resource.h" 1
# 57 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;

};
# 125 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};



struct orlimit {
 __int32_t rlim_cur;
 __int32_t rlim_max;
};

struct loadavg {
 __fixpt_t ldavg[3];
 long fscale;
};
# 153 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
typedef  struct loadavg   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_averunnable[NUM_STACKS];    
typedef  long  _GLOBAL_166_T; extern  _GLOBAL_166_T  _GLOBAL_0_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_1_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_2_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_3_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_4_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_5_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_6_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_7_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_8_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_9_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_10_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_11_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_12_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_13_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_14_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_15_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_16_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_17_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_18_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_19_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_20_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_21_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_22_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_23_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_24_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_25_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_26_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_27_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_28_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_29_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_30_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_31_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_32_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_33_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_34_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_35_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_36_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_37_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_38_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_39_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_40_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_41_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_42_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_43_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_44_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_45_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_46_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_47_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_48_cp_time_I [ 5 ] ; extern  _GLOBAL_166_T  _GLOBAL_49_cp_time_I [ 5 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cp_time_I) *_GLOBAL_cp_time_29_A[NUM_STACKS];  
# 37 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct pstats {

 struct rusage p_ru;
 struct rusage p_cru;
 struct itimerval p_timer[3];



 struct uprof {
  caddr_t pr_base;
  u_long pr_size;
  u_long pr_off;
  u_long pr_scale;
 } p_prof;

 struct timeval p_start;
};
# 78 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct plimit {
 struct rlimit pl_rlimit[11];
 int pl_refcnt;
 struct mtx *pl_mtx;
};
# 96 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct uidinfo {
 struct { struct uidinfo *le_next; struct uidinfo **le_prev; } ui_hash;
 rlim_t ui_sbsize;
 long ui_proccnt;
 uid_t ui_uid;
 u_int ui_ref;
 struct mtx *ui_mtxp;
};




struct proc;
struct thread;

void addupc_intr(struct thread *td, uintptr_t pc, u_int ticks);
void addupc_task(struct thread *td, uintptr_t pc, u_int ticks);
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
     struct timeval *ip);
int chgproccnt(struct uidinfo *uip, int diff, int maxval);
int chgsbsize(struct uidinfo *uip, u_int *hiwat, u_int to,
     rlim_t maxval);
int fuswintr(void *base);
struct plimit
 *lim_alloc(void);
void lim_copy(struct plimit *dst, struct plimit *src);
rlim_t lim_cur(struct proc *p, int which);
void lim_free(struct plimit *limp);
struct plimit
 *lim_hold(struct plimit *limp);
rlim_t lim_max(struct proc *p, int which);
void lim_rlimit(struct proc *p, int which, struct rlimit *rlp);
void ruadd(struct rusage *ru, struct rusage *ru2);
int suswintr(void *base, int word);
struct uidinfo
 *uifind(uid_t uid);
void uifree(struct uidinfo *uip);
void uihashinit(void);
void uihold(struct uidinfo *uip);
# 48 "freebsd5/support/sam.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 1
# 53 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
struct sigacts {
 sig_t ps_sigact[128];
 sigset_t ps_catchmask[128];
 sigset_t ps_sigonstack;
 sigset_t ps_sigintr;
 sigset_t ps_sigreset;
 sigset_t ps_signodefer;
 sigset_t ps_siginfo;
 sigset_t ps_sigignore;
 sigset_t ps_sigcatch;
 sigset_t ps_freebsd4;
 sigset_t ps_osigset;
 sigset_t ps_usertramp;
 int ps_flag;
 int ps_refcnt;
 struct mtx ps_mtx;
};
# 178 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
__sigisempty(sigset_t *set)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i])
   return (0);
 }
 return (1);
}

static __inline int
__sigseteq(sigset_t *set1, sigset_t *set2)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set1->__bits[i] != set2->__bits[i])
   return (0);
 }
 return (1);
}
# 209 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
typedef enum sigtarget_enum { SIGTARGET_P, SIGTARGET_TD } sigtarget_t;
# 221 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
sigsetmasked(sigset_t *set, sigset_t *mask)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i] & ~mask->__bits[i])
   return (0);
 }
 return (1);
}

struct pgrp;
struct thread;
struct proc;
struct sigio;
struct mtx;

typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_sugid_coredump[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_sigio_lock[NUM_STACKS];    
# 255 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
int cursig(struct thread *td);
void execsigs(struct proc *p);
void gsignal(int pgid, int sig);
void killproc(struct proc *p, char *why);
void pgsigio(struct sigio **, int signum, int checkctty);
void pgsignal(struct pgrp *pgrp, int sig, int checkctty);
void postsig(int sig);
void psignal(struct proc *p, int sig);
struct sigacts *sigacts_alloc(void);
void sigacts_copy(struct sigacts *dest, struct sigacts *src);
void sigacts_free(struct sigacts *ps);
struct sigacts *sigacts_hold(struct sigacts *ps);
int sigacts_shared(struct sigacts *ps);
void sigexit(struct thread *td, int signum) __attribute__((__noreturn__)) ;
int sig_ffs(sigset_t *set);
void siginit(struct proc *p);
void signotify(struct thread *td);
void tdsignal(struct thread *td, int sig, sigtarget_t target);
void trapsignal(struct thread *td, int sig, u_long code);
int ptracestop(struct thread *td, int sig);




void sendsig(sig_t action, int sig, sigset_t *retmask, u_long code);
# 50 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
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
# 331 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  enum vtype   _GLOBAL_169_T; extern  _GLOBAL_169_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_169_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_30_A[NUM_STACKS];   
typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_31_A[NUM_STACKS];  
# 369 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct vnode   _GLOBAL_171_T; extern  _GLOBAL_171_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_async_io_version[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_desiredvnodes[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_174_T; extern  _GLOBAL_174_T  * global_namei_zone[NUM_STACKS];    
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_prtactive[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_va_null[NUM_STACKS];    







typedef  void   ( *_GLOBAL_178_T  )  ( int  deltat  ) ; extern  _GLOBAL_178_T global_lease_updatetime[NUM_STACKS];    
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





typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_179_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_32_A[NUM_STACKS];   
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
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vmiodirenable[NUM_STACKS];   

static __inline int
vn_canvmio(struct vnode *vp)
{
      if (vp && (vp->v_type == VREG || (global_vmiodirenable[get_stack_id()] && vp->v_type == VDIR)))
  return(1);
 return(0);
}




# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/vnode_if.h" 1







typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_default_desc[NUM_STACKS];    
struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_islocked_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_lookup_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_cachedlookup_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_create_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_vop_whiteout_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_vop_mknod_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vop_open_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_vop_close_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_vop_access_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_vop_getattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_setattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_vop_read_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_vop_write_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_vop_lease_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_vop_ioctl_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_vop_poll_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_vop_kqfilter_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_vop_revoke_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_vop_fsync_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vop_remove_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_vop_link_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_vop_rename_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_vop_mkdir_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_vop_rmdir_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_vop_symlink_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_vop_readdir_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_vop_readlink_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_209_T; extern  _GLOBAL_209_T  global_vop_inactive_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_210_T; extern  _GLOBAL_210_T  global_vop_reclaim_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_211_T; extern  _GLOBAL_211_T  global_vop_lock_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_vop_unlock_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_vop_bmap_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_vop_strategy_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_vop_specstrategy_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_216_T; extern  _GLOBAL_216_T  global_vop_getwritemount_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_217_T; extern  _GLOBAL_217_T  global_vop_print_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_218_T; extern  _GLOBAL_218_T  global_vop_pathconf_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_vop_advlock_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_vop_reallocblks_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_vop_getpages_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_vop_putpages_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_vop_freeblks_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_vop_getacl_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_225_T; extern  _GLOBAL_225_T  global_vop_setacl_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_226_T; extern  _GLOBAL_226_T  global_vop_aclcheck_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_227_T; extern  _GLOBAL_227_T  global_vop_closeextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_228_T; extern  _GLOBAL_228_T  global_vop_getextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_229_T; extern  _GLOBAL_229_T  global_vop_listextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_230_T; extern  _GLOBAL_230_T  global_vop_openextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_vop_deleteextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_232_T; extern  _GLOBAL_232_T  global_vop_setextattr_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_233_T; extern  _GLOBAL_233_T  global_vop_createvobject_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_234_T; extern  _GLOBAL_234_T  global_vop_destroyvobject_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_235_T; extern  _GLOBAL_235_T  global_vop_getvobject_desc[NUM_STACKS];    
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
typedef  struct vnodeop_desc   _GLOBAL_236_T; extern  _GLOBAL_236_T  global_vop_setlabel_desc[NUM_STACKS];    
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

typedef  int   ( *_GLOBAL_238_T  )  ( struct vop_lease_args   *  ) ; extern  _GLOBAL_238_T global_lease_check_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_240_T  )  ( struct vnode   *  ) ; extern  _GLOBAL_240_T global_softdep_fsync_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_242_T  )  ( struct mount   *  ) ; extern  _GLOBAL_242_T global_softdep_process_worklist_hook[NUM_STACKS];     

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

typedef  vop_t  _GLOBAL_243_T; extern  _GLOBAL_243_T  * *  global_default_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_244_T; extern  _GLOBAL_244_T  * *  global_spec_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_245_T; extern  _GLOBAL_245_T  * *  global_dead_vnodeop_p[NUM_STACKS];   
# 51 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysent.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/sysent.h"
struct thread;

typedef int sy_call_t(struct thread *, void *);

struct sysent {
 int sy_narg;
 sy_call_t *sy_call;
};




struct image_params;
struct __sigset;
struct trapframe;
struct vnode;

struct sysentvec {
 int sv_size;
 struct sysent *sv_table;
 u_int sv_mask;
 int sv_sigsize;
 int *sv_sigtbl;
 int sv_errsize;
 int *sv_errtbl;
 int (*sv_transtrap)(int, int);

 int (*sv_fixup)(register_t **, struct image_params *);

 void (*sv_sendsig)(void (*)(int), int, struct __sigset *,
       u_long);
 char *sv_sigcode;
 int *sv_szsigcode;
 void (*sv_prepsyscall)(struct trapframe *, int *, u_int *,
       caddr_t *);
 char *sv_name;
 int (*sv_coredump)(struct thread *, struct vnode *, off_t);

 int (*sv_imgact_try)(struct image_params *);
 int sv_minsigstksz;
 int sv_pagesize;
 vm_offset_t sv_minuser;
 vm_offset_t sv_maxuser;
 vm_offset_t sv_usrstack;
 vm_offset_t sv_psstrings;
 int sv_stackprot;
 register_t *(*sv_copyout_strings)(struct image_params *);
 void (*sv_setregs)(struct thread *, u_long, u_long, u_long);
 void (*sv_fixlimits)(struct image_params *);
};


typedef  struct sysentvec   _GLOBAL_246_T; extern  _GLOBAL_246_T  global_aout_sysvec[NUM_STACKS];    
typedef  struct sysentvec   _GLOBAL_247_T; extern  _GLOBAL_247_T  global_elf_freebsd_sysvec[NUM_STACKS];    
typedef  struct sysentvec   _GLOBAL_248_T; extern  _GLOBAL_248_T  global_null_sysvec[NUM_STACKS];    
typedef  struct sysent   _GLOBAL_249_T; extern  _GLOBAL_249_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_249_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_33_A[NUM_STACKS];   



struct module;

struct syscall_module_data {
       int (*chainevh)(struct module *, int, void *);
       void *chainarg;
       int *offset;
       struct sysent *new_sysent;
       struct sysent old_sysent;
};
# 127 "freebsd5/freebsd/usr/src/sys/sys/sysent.h"
int syscall_register(int *offset, struct sysent *new_sysent,
     struct sysent *old_sysent);
int syscall_deregister(int *offset, struct sysent *old_sysent);
int syscall_module_handler(struct module *mod, int what, void *arg);
# 52 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/reboot.h" 1
# 53 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sched.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/sched.h"
int sched_load(void);
int sched_rr_interval(void);
int sched_runnable(void);




void sched_exit(struct proc *p, struct thread *childtd);
void sched_fork(struct thread *td, struct thread *childtd);





void sched_class(struct ksegrp *kg, int class);
void sched_exit_ksegrp(struct ksegrp *kg, struct thread *childtd);
void sched_fork_ksegrp(struct thread *td, struct ksegrp *child);
void sched_nice(struct proc *p, int nice);





void sched_exit_thread(struct thread *td, struct thread *child);
void sched_fork_thread(struct thread *td, struct thread *child);
fixpt_t sched_pctcpu(struct thread *td);
void sched_prio(struct thread *td, u_char prio);
void sched_sleep(struct thread *td);
void sched_switch(struct thread *td, struct thread *newtd, int flags);
void sched_userret(struct thread *td);
void sched_wakeup(struct thread *td);




void sched_add(struct thread *td, int flags);
void sched_clock(struct thread *td);
void sched_rem(struct thread *td);





void sched_bind(struct thread *td, int cpu);
static __inline void sched_pin(void);
void sched_unbind(struct thread *td);
static __inline void sched_unpin(void);





int sched_sizeof_ksegrp(void);
int sched_sizeof_proc(void);
int sched_sizeof_thread(void);

static __inline void
sched_pin(void)
{
 global___pcpu[get_stack_id()].pc_curthread->td_pinned++;
}

static __inline void
sched_unpin(void)
{
 global___pcpu[get_stack_id()].pc_curthread->td_pinned--;
}


void schedinit(void);
void sched_destroyproc(struct proc *p);
void sched_init_concurrency(struct ksegrp *kg);
void sched_set_concurrency(struct ksegrp *kg, int cuncurrency);
void sched_schedinit(void);
void sched_newproc(struct proc *p, struct ksegrp *kg, struct thread *td);
void sched_thread_exit(struct thread *td);
void sched_newthread(struct thread *td);
# 54 "freebsd5/support/sam.c" 2
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
# 55 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h" 1
# 14 "freebsd5/freebsd/usr/src/sys/sys/sysproto.h"
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
# 56 "freebsd5/support/sam.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/unistd.h" 1
# 58 "freebsd5/support/sam.c" 2
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
typedef  struct malloc_type   _GLOBAL_250_T; extern  _GLOBAL_250_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_250_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_34_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_251_T; extern  _GLOBAL_251_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_251_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_35_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_252_T; extern  _GLOBAL_252_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_252_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_36_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_253_T; extern  _GLOBAL_253_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_253_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_37_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_254_T; extern  _GLOBAL_254_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_254_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_38_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_255_T; extern  _GLOBAL_255_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_255_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_39_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_256_T; extern  _GLOBAL_256_T  global_malloc_mtx[NUM_STACKS];    


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
# 59 "freebsd5/support/sam.c" 2
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
typedef  int  _GLOBAL_257_T; extern  _GLOBAL_257_T  global_dumping[NUM_STACKS];   


typedef  d_ioctl_t _GLOBAL_258_T;  _GLOBAL_258_T  ttyioctl;  
typedef  d_kqfilter_t _GLOBAL_259_T;  _GLOBAL_259_T  ttykqfilter;  
typedef  d_poll_t _GLOBAL_260_T;  _GLOBAL_260_T  ttypoll;  
typedef  d_read_t _GLOBAL_261_T;  _GLOBAL_261_T  ttyread;  
typedef  d_write_t _GLOBAL_262_T;  _GLOBAL_262_T  ttywrite;  
# 60 "freebsd5/support/sam.c" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 1
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/psl.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/frame.h" 1
# 47 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/frame.h"
struct trapframe {
 int tf_fs;
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
 int tf_isp;
 int tf_ebx;
 int tf_edx;
 int tf_ecx;
 int tf_eax;
 int tf_trapno;

 int tf_err;
 int tf_eip;
 int tf_cs;
 int tf_eflags;

 int tf_esp;
 int tf_ss;
};



struct trapframe_vm86 {
 int tf_fs;
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
 int tf_isp;
 int tf_ebx;
 int tf_edx;
 int tf_ecx;
 int tf_eax;
 int tf_trapno;

 int tf_err;
 int tf_eip;
 int tf_cs;
 int tf_eflags;

 int tf_esp;
 int tf_ss;

 int tf_vm86_es;
 int tf_vm86_ds;
 int tf_vm86_fs;
 int tf_vm86_gs;
};



struct intrframe {
 int if_vec;
 int if_fs;
 int if_es;
 int if_ds;
 int if_edi;
 int if_esi;
 int if_ebp;
 int :32;
 int if_ebx;
 int if_edx;
 int if_ecx;
 int if_eax;
 int :32;
 int :32;

 int if_eip;
 int if_cs;
 int if_eflags;

 int if_esp;
 int if_ss;
};



struct clockframe {
 int cf_vec;
 int cf_fs;
 int cf_es;
 int cf_ds;
 int cf_edi;
 int cf_esi;
 int cf_ebp;
 int :32;
 int cf_ebx;
 int cf_edx;
 int cf_ecx;
 int cf_eax;
 int :32;
 int :32;

 int cf_eip;
 int cf_cs;
 int cf_eflags;

 int cf_esp;
 int cf_ss;
};
# 44 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 2
# 86 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h"
typedef  char  _GLOBAL_263_T; extern  _GLOBAL_263_T  _GLOBAL_0_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_1_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_2_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_3_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_4_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_5_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_6_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_7_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_8_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_9_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_10_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_11_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_12_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_13_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_14_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_15_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_16_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_17_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_18_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_19_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_20_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_21_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_22_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_23_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_24_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_25_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_26_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_27_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_28_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_29_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_30_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_31_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_32_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_33_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_34_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_35_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_36_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_37_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_38_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_39_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_40_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_41_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_42_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_43_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_44_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_45_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_46_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_47_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_48_btext_I [ ] ; extern  _GLOBAL_263_T  _GLOBAL_49_btext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_btext_I) *_GLOBAL_btext_40_A[NUM_STACKS];  
typedef  char  _GLOBAL_264_T; extern  _GLOBAL_264_T  _GLOBAL_0_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_1_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_2_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_3_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_4_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_5_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_6_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_7_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_8_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_9_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_10_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_11_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_12_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_13_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_14_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_15_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_16_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_17_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_18_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_19_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_20_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_21_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_22_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_23_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_24_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_25_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_26_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_27_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_28_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_29_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_30_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_31_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_32_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_33_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_34_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_35_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_36_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_37_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_38_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_39_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_40_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_41_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_42_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_43_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_44_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_45_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_46_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_47_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_48_etext_I [ ] ; extern  _GLOBAL_264_T  _GLOBAL_49_etext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_etext_I) *_GLOBAL_etext_41_A[NUM_STACKS];  
typedef  u_int  _GLOBAL_265_T; extern  _GLOBAL_265_T  global_tsc_present[NUM_STACKS];   

void cpu_halt(void);
void cpu_reset(void);
void fork_trampoline(void);
void swi_vm(void *);





static __inline u_int64_t
get_cyclecount(void)
{

 struct bintime bt;

 if (!global_tsc_present[get_stack_id()]) {
  binuptime(&bt);
  return (bt.frac ^ bt.sec);
 }

 return (rdtsc());
}
# 62 "freebsd5/support/sam.c" 2

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
typedef  int  _GLOBAL_266_T; extern  _GLOBAL_266_T  global_debug_mpsafevm[NUM_STACKS];   
# 130 "freebsd5/freebsd/usr/src/sys/vm/vm.h"
struct kva_md_info {
 vm_offset_t buffer_sva;
 vm_offset_t buffer_eva;
 vm_offset_t clean_sva;
 vm_offset_t clean_eva;
 vm_offset_t pager_sva;
 vm_offset_t pager_eva;
};

typedef  struct kva_md_info   _GLOBAL_267_T; extern  _GLOBAL_267_T  global_kmi[NUM_STACKS];    
extern void vm_ksubmap_init(struct kva_md_info *);
# 64 "freebsd5/support/sam.c" 2
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
typedef  u_quad_t  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_maxtsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_269_T; extern  _GLOBAL_269_T  global_dfldsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_270_T; extern  _GLOBAL_270_T  global_maxdsiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_dflssiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_272_T; extern  _GLOBAL_272_T  global_maxssiz[NUM_STACKS];   
typedef  u_quad_t  _GLOBAL_273_T; extern  _GLOBAL_273_T  global_sgrowsiz[NUM_STACKS];   
# 65 "freebsd5/support/sam.c" 2
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
typedef  pd_entry_t  _GLOBAL_274_T; extern  _GLOBAL_274_T  _GLOBAL_0_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_1_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_2_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_3_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_4_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_5_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_6_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_7_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_8_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_9_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_10_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_11_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_12_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_13_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_14_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_15_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_16_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_17_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_18_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_19_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_20_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_21_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_22_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_23_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_24_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_25_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_26_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_27_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_28_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_29_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_30_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_31_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_32_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_33_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_34_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_35_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_36_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_37_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_38_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_39_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_40_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_41_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_42_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_43_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_44_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_45_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_46_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_47_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_48_PTDpde_I [ ] ; extern  _GLOBAL_274_T  _GLOBAL_49_PTDpde_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_PTDpde_I) *_GLOBAL_PTDpde_42_A[NUM_STACKS];  




typedef  pd_entry_t  _GLOBAL_275_T; extern  _GLOBAL_275_T  * global_IdlePTD[NUM_STACKS];   
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


typedef  struct pmap   _GLOBAL_276_T; extern  _GLOBAL_276_T  global_kernel_pmap_store[NUM_STACKS];    
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
typedef  struct ppro_vmtrr   _GLOBAL_277_T; extern  _GLOBAL_277_T  _GLOBAL_0_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_1_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_2_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_3_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_4_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_5_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_6_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_7_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_8_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_9_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_10_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_11_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_12_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_13_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_14_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_15_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_16_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_17_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_18_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_19_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_20_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_21_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_22_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_23_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_24_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_25_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_26_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_27_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_28_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_29_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_30_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_31_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_32_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_33_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_34_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_35_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_36_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_37_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_38_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_39_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_40_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_41_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_42_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_43_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_44_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_45_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_46_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_47_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_48_PPro_vmtrr_I [ 8 ] ; extern  _GLOBAL_277_T  _GLOBAL_49_PPro_vmtrr_I [ 8 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_PPro_vmtrr_I) *_GLOBAL_PPro_vmtrr_43_A[NUM_STACKS];   

typedef  caddr_t  _GLOBAL_278_T; extern  _GLOBAL_278_T  global_CADDR1[NUM_STACKS];   
typedef  pt_entry_t  _GLOBAL_279_T; extern  _GLOBAL_279_T  * global_CMAP1[NUM_STACKS];   
typedef  vm_paddr_t  _GLOBAL_280_T; extern  _GLOBAL_280_T  global_avail_end[NUM_STACKS];   
typedef  vm_paddr_t  _GLOBAL_281_T; extern  _GLOBAL_281_T  _GLOBAL_0_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_1_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_2_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_3_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_4_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_5_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_6_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_7_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_8_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_9_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_10_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_11_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_12_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_13_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_14_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_15_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_16_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_17_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_18_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_19_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_20_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_21_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_22_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_23_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_24_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_25_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_26_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_27_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_28_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_29_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_30_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_31_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_32_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_33_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_34_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_35_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_36_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_37_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_38_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_39_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_40_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_41_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_42_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_43_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_44_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_45_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_46_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_47_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_48_phys_avail_I [ ] ; extern  _GLOBAL_281_T  _GLOBAL_49_phys_avail_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_phys_avail_I) *_GLOBAL_phys_avail_44_A[NUM_STACKS];  
typedef  int  _GLOBAL_282_T; extern  _GLOBAL_282_T  global_pseflag[NUM_STACKS];   
typedef  int  _GLOBAL_283_T; extern  _GLOBAL_283_T  global_pgeflag[NUM_STACKS];   
typedef  char  _GLOBAL_284_T; extern  _GLOBAL_284_T  * global_ptvmmap[NUM_STACKS];   
typedef  vm_offset_t  _GLOBAL_285_T; extern  _GLOBAL_285_T  global_virtual_avail[NUM_STACKS];   
typedef  vm_offset_t  _GLOBAL_286_T; extern  _GLOBAL_286_T  global_virtual_end[NUM_STACKS];   



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




typedef  vm_offset_t  _GLOBAL_287_T; extern  _GLOBAL_287_T  global_kernel_vm_end[NUM_STACKS];   

typedef  int  _GLOBAL_288_T; extern  _GLOBAL_288_T  global_pmap_pagedaemon_waken[NUM_STACKS];   

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
# 66 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/vm/vm_map.h" 1
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
# 67 "freebsd5/support/sam.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/user.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/user.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pcb.h" 1
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pcb.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/npx.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/npx.h"
struct env87 {
 long en_cw;
 long en_sw;
 long en_tw;
 long en_fip;
 u_short en_fcs;
 u_short en_opcode;
 long en_foo;
 long en_fos;
};


struct fpacc87 {






 u_char fp_bytes[10];

};


struct save87 {
 struct env87 sv_env;
 struct fpacc87 sv_ac[8];
 u_char sv_pad0[4];
# 81 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/npx.h"
 u_char sv_pad[64];
};

struct envxmm {
 u_int16_t en_cw;
 u_int16_t en_sw;
 u_int16_t en_tw;
 u_int16_t en_opcode;
 u_int32_t en_fip;
 u_int16_t en_fcs;
 u_int16_t en_pad0;
 u_int32_t en_foo;
 u_int16_t en_fos;
 u_int16_t en_pad1;
 u_int32_t en_mxcsr;
 u_int32_t en_pad2;
};


struct xmmacc {
 u_char xmm_bytes[16];
};

struct savexmm {
 struct envxmm sv_env;
 struct {
  struct fpacc87 fp_acc;
  u_char fp_pad[6];
 } sv_fp[8];
 struct xmmacc sv_xmm[8];
 u_char sv_pad[224];
} __attribute__((__aligned__(16))) ;

union savefpu {
 struct save87 sv_87;
 struct savexmm sv_xmm;
};
# 139 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/npx.h"
int npxdna(void);
void npxdrop(void);
void npxexit(struct thread *td);
int npxformat(void);
int npxgetregs(struct thread *td, union savefpu *addr);
void npxinit(u_short control);
void npxsave(union savefpu *addr);
void npxsetregs(struct thread *td, union savefpu *addr);
int npxtrap(void);
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/pcb.h" 2

struct pcb {
 int pcb_cr3;
 int pcb_edi;
 int pcb_esi;
 int pcb_ebp;
 int pcb_esp;
 int pcb_ebx;
 int pcb_eip;

 int pcb_dr0;
 int pcb_dr1;
 int pcb_dr2;
 int pcb_dr3;
 int pcb_dr6;
 int pcb_dr7;

 union savefpu pcb_save;
 u_int pcb_flags;






 caddr_t pcb_onfault;
 int pcb_gs;
 struct pcb_ext *pcb_ext;
 int pcb_psl;
 void (*pcb_switchout)(void);
 u_long __pcb_spare[1];
};


struct trapframe;

void makectx(struct trapframe *, struct pcb *);
void savectx(struct pcb *);
# 37 "freebsd5/freebsd/usr/src/sys/sys/user.h" 2
# 116 "freebsd5/freebsd/usr/src/sys/sys/user.h"
struct kinfo_proc {
 int ki_structsize;
 int ki_layout;
 struct pargs *ki_args;
 struct proc *ki_paddr;
 struct user *ki_addr;
 struct vnode *ki_tracep;
 struct vnode *ki_textvp;
 struct filedesc *ki_fd;
 struct vmspace *ki_vmspace;
 void *ki_wchan;
 pid_t ki_pid;
 pid_t ki_ppid;
 pid_t ki_pgid;
 pid_t ki_tpgid;
 pid_t ki_sid;
 pid_t ki_tsid;
 short ki_jobc;
 short ki_spare_short1;
 dev_t ki_tdev;
 sigset_t ki_siglist;
 sigset_t ki_sigmask;
 sigset_t ki_sigignore;
 sigset_t ki_sigcatch;
 uid_t ki_uid;
 uid_t ki_ruid;
 uid_t ki_svuid;
 gid_t ki_rgid;
 gid_t ki_svgid;
 short ki_ngroups;
 short ki_spare_short2;
 gid_t ki_groups[16];
 vm_size_t ki_size;
 segsz_t ki_rssize;
 segsz_t ki_swrss;
 segsz_t ki_tsize;
 segsz_t ki_dsize;
 segsz_t ki_ssize;
 u_short ki_xstat;
 u_short ki_acflag;
 fixpt_t ki_pctcpu;
 u_int ki_estcpu;
 u_int ki_slptime;
 u_int ki_swtime;
 u_int64_t ki_runtime;
 struct timeval ki_start;
 struct timeval ki_childtime;
 long ki_flag;
 long ki_kiflag;
 int ki_traceflag;
 char ki_stat;
 signed char ki_nice;
 char ki_lock;
 char ki_rqindex;
 u_char ki_oncpu;
 u_char ki_lastcpu;
 char ki_ocomm[16 +1];
 char ki_wmesg[8 +1];
 char ki_login[17 +1];
 char ki_lockname[8 +1];
 char ki_comm[19 +1];
 char ki_emul[16 +1];
 char ki_sparestrings[68];
 struct rusage ki_rusage;
 long ki_sflag;
 struct priority ki_pri;
 long ki_tdflags;
 struct pcb *ki_pcb;
 void *ki_kstack;
 struct timeval ki_childstime;
 struct timeval ki_childutime;
 lwpid_t ki_tid;
 int ki_numthreads;
 void *ki_udata;
 long ki_spare[15];
};
void fill_kinfo_proc(struct proc *, struct kinfo_proc *);
# 204 "freebsd5/freebsd/usr/src/sys/sys/user.h"
struct user {
 struct pstats u_stats;
 struct kinfo_proc u_kproc;
};
# 68 "freebsd5/support/sam.c" 2

# 1 "freebsd5/support/support.h" 1
# 22 "freebsd5/support/support.h"
extern int debugf(const char * fmt, ...);
extern int get_thread_id();
# 70 "freebsd5/support/sam.c" 2

void
init386(int);

typedef  struct session   _GLOBAL_289_T; static  _GLOBAL_289_T  global_session0[NUM_STACKS];    
typedef  struct pgrp   _GLOBAL_290_T; static  _GLOBAL_290_T  global_pgrp0[NUM_STACKS];    

typedef  struct ksegrp  _GLOBAL_291_T;  _GLOBAL_291_T  global_ksegrp0[NUM_STACKS];   


typedef  struct plimit   _GLOBAL_292_T; static  _GLOBAL_292_T  global_limit0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_293_T; static  _GLOBAL_293_T  global_vmspace0[NUM_STACKS];    
typedef  struct proc  _GLOBAL_294_T;  _GLOBAL_294_T  * global_initproc[NUM_STACKS];   

typedef  int _GLOBAL_295_T;  _GLOBAL_295_T  global_cmask[NUM_STACKS] = {  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  022,  };    


typedef  struct pstats   _GLOBAL_296_T; static  _GLOBAL_296_T  global_p_stats[NUM_STACKS];    





void
proc0_init(void *dummy __attribute__((__unused__)) )
{
 register struct proc *p;
 register struct filedesc0 *fdp;
 register unsigned i;
 struct thread *td;
 struct ksegrp *kg;


 init386(0);


 ;
 p = &global_proc0[get_stack_id()];
 td = &global_thread0[get_stack_id()];

 kg = &global_ksegrp0[get_stack_id()];
# 120 "freebsd5/support/sam.c"
 p->p_magic = 0xbeefface;
# 154 "freebsd5/support/sam.c"
    td->td_proc = &global_proc0[get_stack_id()];

 p->p_flag = 0x00200;
 p->p_sflag = 0x00001;
 p->p_state = PRS_NORMAL;
 td->td_state = TDS_RUNNING;

 kg->kg_pri_class = 3;
 kg->kg_user_pri = ((160));
 td->td_priority = ((64) + 4);
 td->td_base_pri = ((160));




 p->p_peers = 0;
 p->p_leader = p;


 bcopy("swapper", p->p_comm, sizeof ("swapper"));



 p->p_ucred = crget();
 p->p_ucred->cr_ngroups = 1;


 p->p_ucred->cr_prison = ((void *)0);



 td->td_ucred = crhold(p->p_ucred);
# 212 "freebsd5/support/sam.c"
 p->p_stats = &global_p_stats[get_stack_id()];







}
typedef  struct sysinit   _GLOBAL_297_T; static  _GLOBAL_297_T  global_p0init_sys_init[NUM_STACKS] = {  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INTRINSIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) proc0_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_298_T; static  _GLOBAL_298_T  * const  _global_section_0___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[0] ;static  _GLOBAL_298_T  * const  _global_section_1___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[1] ;static  _GLOBAL_298_T  * const  _global_section_2___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[2] ;static  _GLOBAL_298_T  * const  _global_section_3___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[3] ;static  _GLOBAL_298_T  * const  _global_section_4___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[4] ;static  _GLOBAL_298_T  * const  _global_section_5___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[5] ;static  _GLOBAL_298_T  * const  _global_section_6___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[6] ;static  _GLOBAL_298_T  * const  _global_section_7___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[7] ;static  _GLOBAL_298_T  * const  _global_section_8___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[8] ;static  _GLOBAL_298_T  * const  _global_section_9___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[9] ;static  _GLOBAL_298_T  * const  _global_section_10___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[10] ;static  _GLOBAL_298_T  * const  _global_section_11___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[11] ;static  _GLOBAL_298_T  * const  _global_section_12___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[12] ;static  _GLOBAL_298_T  * const  _global_section_13___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[13] ;static  _GLOBAL_298_T  * const  _global_section_14___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[14] ;static  _GLOBAL_298_T  * const  _global_section_15___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[15] ;static  _GLOBAL_298_T  * const  _global_section_16___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[16] ;static  _GLOBAL_298_T  * const  _global_section_17___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[17] ;static  _GLOBAL_298_T  * const  _global_section_18___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[18] ;static  _GLOBAL_298_T  * const  _global_section_19___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[19] ;static  _GLOBAL_298_T  * const  _global_section_20___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[20] ;static  _GLOBAL_298_T  * const  _global_section_21___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[21] ;static  _GLOBAL_298_T  * const  _global_section_22___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[22] ;static  _GLOBAL_298_T  * const  _global_section_23___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[23] ;static  _GLOBAL_298_T  * const  _global_section_24___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[24] ;static  _GLOBAL_298_T  * const  _global_section_25___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[25] ;static  _GLOBAL_298_T  * const  _global_section_26___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[26] ;static  _GLOBAL_298_T  * const  _global_section_27___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[27] ;static  _GLOBAL_298_T  * const  _global_section_28___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[28] ;static  _GLOBAL_298_T  * const  _global_section_29___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[29] ;static  _GLOBAL_298_T  * const  _global_section_30___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[30] ;static  _GLOBAL_298_T  * const  _global_section_31___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[31] ;static  _GLOBAL_298_T  * const  _global_section_32___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[32] ;static  _GLOBAL_298_T  * const  _global_section_33___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[33] ;static  _GLOBAL_298_T  * const  _global_section_34___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[34] ;static  _GLOBAL_298_T  * const  _global_section_35___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[35] ;static  _GLOBAL_298_T  * const  _global_section_36___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[36] ;static  _GLOBAL_298_T  * const  _global_section_37___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[37] ;static  _GLOBAL_298_T  * const  _global_section_38___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[38] ;static  _GLOBAL_298_T  * const  _global_section_39___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[39] ;static  _GLOBAL_298_T  * const  _global_section_40___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[40] ;static  _GLOBAL_298_T  * const  _global_section_41___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[41] ;static  _GLOBAL_298_T  * const  _global_section_42___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[42] ;static  _GLOBAL_298_T  * const  _global_section_43___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[43] ;static  _GLOBAL_298_T  * const  _global_section_44___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[44] ;static  _GLOBAL_298_T  * const  _global_section_45___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[45] ;static  _GLOBAL_298_T  * const  _global_section_46___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[46] ;static  _GLOBAL_298_T  * const  _global_section_47___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[47] ;static  _GLOBAL_298_T  * const  _global_section_48___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[48] ;static  _GLOBAL_298_T  * const  _global_section_49___set_sysinit_set_sym_p0init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_p0init_sys_init[49] ;         



typedef  struct pcpu   _GLOBAL_299_T; static  _GLOBAL_299_T  * _GLOBAL_0_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_1_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_2_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_3_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_4_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_5_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_6_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_7_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_8_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_9_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_10_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_11_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_12_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_13_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_14_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_15_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_16_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_17_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_18_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_19_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_20_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_21_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_22_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_23_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_24_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_25_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_26_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_27_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_28_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_29_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_30_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_31_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_32_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_33_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_34_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_35_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_36_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_37_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_38_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_39_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_40_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_41_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_42_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_43_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_44_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_45_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_46_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_47_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_48_cpuid_to_pcpu_I [ 1 ]  ; static  _GLOBAL_299_T  * _GLOBAL_49_cpuid_to_pcpu_I [ 1 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cpuid_to_pcpu_I) *_GLOBAL_cpuid_to_pcpu_45_A[NUM_STACKS] = { &_GLOBAL_0_cpuid_to_pcpu_I, &_GLOBAL_1_cpuid_to_pcpu_I, &_GLOBAL_2_cpuid_to_pcpu_I, &_GLOBAL_3_cpuid_to_pcpu_I, &_GLOBAL_4_cpuid_to_pcpu_I, &_GLOBAL_5_cpuid_to_pcpu_I, &_GLOBAL_6_cpuid_to_pcpu_I, &_GLOBAL_7_cpuid_to_pcpu_I, &_GLOBAL_8_cpuid_to_pcpu_I, &_GLOBAL_9_cpuid_to_pcpu_I, &_GLOBAL_10_cpuid_to_pcpu_I, &_GLOBAL_11_cpuid_to_pcpu_I, &_GLOBAL_12_cpuid_to_pcpu_I, &_GLOBAL_13_cpuid_to_pcpu_I, &_GLOBAL_14_cpuid_to_pcpu_I, &_GLOBAL_15_cpuid_to_pcpu_I, &_GLOBAL_16_cpuid_to_pcpu_I, &_GLOBAL_17_cpuid_to_pcpu_I, &_GLOBAL_18_cpuid_to_pcpu_I, &_GLOBAL_19_cpuid_to_pcpu_I, &_GLOBAL_20_cpuid_to_pcpu_I, &_GLOBAL_21_cpuid_to_pcpu_I, &_GLOBAL_22_cpuid_to_pcpu_I, &_GLOBAL_23_cpuid_to_pcpu_I, &_GLOBAL_24_cpuid_to_pcpu_I, &_GLOBAL_25_cpuid_to_pcpu_I, &_GLOBAL_26_cpuid_to_pcpu_I, &_GLOBAL_27_cpuid_to_pcpu_I, &_GLOBAL_28_cpuid_to_pcpu_I, &_GLOBAL_29_cpuid_to_pcpu_I, &_GLOBAL_30_cpuid_to_pcpu_I, &_GLOBAL_31_cpuid_to_pcpu_I, &_GLOBAL_32_cpuid_to_pcpu_I, &_GLOBAL_33_cpuid_to_pcpu_I, &_GLOBAL_34_cpuid_to_pcpu_I, &_GLOBAL_35_cpuid_to_pcpu_I, &_GLOBAL_36_cpuid_to_pcpu_I, &_GLOBAL_37_cpuid_to_pcpu_I, &_GLOBAL_38_cpuid_to_pcpu_I, &_GLOBAL_39_cpuid_to_pcpu_I, &_GLOBAL_40_cpuid_to_pcpu_I, &_GLOBAL_41_cpuid_to_pcpu_I, &_GLOBAL_42_cpuid_to_pcpu_I, &_GLOBAL_43_cpuid_to_pcpu_I, &_GLOBAL_44_cpuid_to_pcpu_I, &_GLOBAL_45_cpuid_to_pcpu_I, &_GLOBAL_46_cpuid_to_pcpu_I, &_GLOBAL_47_cpuid_to_pcpu_I, &_GLOBAL_48_cpuid_to_pcpu_I, &_GLOBAL_49_cpuid_to_pcpu_I, };   
typedef  struct cpuhead  _GLOBAL_300_T;  _GLOBAL_300_T  global_cpuhead[NUM_STACKS] = {  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  };        





void
ksegrp_link(struct ksegrp *kg, struct proc *p)
{

 do { (((&kg->kg_threads))->tqh_first) = ((void *)0); (&kg->kg_threads)->tqh_last = &(((&kg->kg_threads))->tqh_first); ; } while (0);
 do { (((&kg->kg_runq))->tqh_first) = ((void *)0); (&kg->kg_runq)->tqh_last = &(((&kg->kg_runq))->tqh_first); ; } while (0);
 do { (((&kg->kg_slpq))->tqh_first) = ((void *)0); (&kg->kg_slpq)->tqh_last = &(((&kg->kg_slpq))->tqh_first); ; } while (0);



 kg->kg_proc = p;

 kg->kg_numthreads = 0;
 kg->kg_runnable = 0;





 p->p_numksegrps++;
 do { if (((((kg))->kg_ksegrp.tqe_next) = (((&p->p_ksegrps))->tqh_first)) != ((void *)0)) (((&p->p_ksegrps))->tqh_first)->kg_ksegrp.tqe_prev = &(((kg))->kg_ksegrp.tqe_next); else (&p->p_ksegrps)->tqh_last = &(((kg))->kg_ksegrp.tqe_next); (((&p->p_ksegrps))->tqh_first) = (kg); (kg)->kg_ksegrp.tqe_prev = &(((&p->p_ksegrps))->tqh_first); ; ; } while (0);
}




void
kse_link(struct kse *ke, struct ksegrp *kg)
{
 struct proc *p = kg->kg_proc;
# 270 "freebsd5/support/sam.c"
}
# 280 "freebsd5/support/sam.c"
void
thread_link(struct thread *td, struct ksegrp *kg)
{
 struct proc *p;

 p = kg->kg_proc;
 td->td_state = TDS_INACTIVE;
 td->td_proc = p;
 td->td_ksegrp = kg;


 do { (((&td->td_contested))->lh_first) = ((void *)0); } while (0);
 callout_init(&td->td_slpcallout, 1);
 do { if (((((td))->td_plist.tqe_next) = (((&p->p_threads))->tqh_first)) != ((void *)0)) (((&p->p_threads))->tqh_first)->td_plist.tqe_prev = &(((td))->td_plist.tqe_next); else (&p->p_threads)->tqh_last = &(((td))->td_plist.tqe_next); (((&p->p_threads))->tqh_first) = (td); (td)->td_plist.tqe_prev = &(((&p->p_threads))->tqh_first); ; ; } while (0);
 do { if (((((td))->td_kglist.tqe_next) = (((&kg->kg_threads))->tqh_first)) != ((void *)0)) (((&kg->kg_threads))->tqh_first)->td_kglist.tqe_prev = &(((td))->td_kglist.tqe_next); else (&kg->kg_threads)->tqh_last = &(((td))->td_kglist.tqe_next); (((&kg->kg_threads))->tqh_first) = (td); (td)->td_kglist.tqe_prev = &(((&kg->kg_threads))->tqh_first); ; ; } while (0);
 p->p_numthreads++;
 kg->kg_numthreads++;

}







void
proc_linkup(struct proc *p, struct ksegrp *kg,
   struct thread *td)
{

 do { (((&p->p_ksegrps))->tqh_first) = ((void *)0); (&p->p_ksegrps)->tqh_last = &(((&p->p_ksegrps))->tqh_first); ; } while (0);
 do { (((&p->p_threads))->tqh_first) = ((void *)0); (&p->p_threads)->tqh_last = &(((&p->p_threads))->tqh_first); ; } while (0);
 do { (((&p->p_suspended))->tqh_first) = ((void *)0); (&p->p_suspended)->tqh_last = &(((&p->p_suspended))->tqh_first); ; } while (0);
 p->p_numksegrps = 0;
 p->p_numthreads = 0;

 ksegrp_link(kg, p);

 thread_link(td, kg);
}






void
pcpu_init(struct pcpu *pcpu, int cpuid, size_t size)
{

 bzero(pcpu, size);

                                            ;
 pcpu->pc_cpuid = cpuid;
 pcpu->pc_cpumask = 1 << cpuid;
 (*_GLOBAL_cpuid_to_pcpu_45_A[get_stack_id()])[cpuid] = pcpu;
 do { (((pcpu))->pc_allcpu.sle_next) = (((&global_cpuhead[get_stack_id()]))->slh_first); (((&global_cpuhead[get_stack_id()]))->slh_first) = (pcpu); } while (0);

}

typedef  struct pcpu  _GLOBAL_301_T;  _GLOBAL_301_T  global___pcpu[NUM_STACKS];   





void
init386(first)
 int first;
{
 struct gate_descriptor *gdp;
 int gsel_tss, metadata_missing, off, x;
 struct pcpu *pc;



 global_thread0[get_stack_id()].td_pcb = (struct pcb *)
    (global_thread0[get_stack_id()].td_kstack + 2 * (1<<12)) - 1;
# 375 "freebsd5/support/sam.c"
 pc = &global___pcpu[get_stack_id()];

 pcpu_init(pc, 0, sizeof(struct pcpu));





 pc->pc_curthread = &global_thread0[get_stack_id()];
# 403 "freebsd5/support/sam.c"
}






int
uiomove(void *cp, int n, struct uio *uio)
{
 struct thread *td = global___pcpu[get_stack_id()].pc_curthread;
 struct iovec *iov;
 u_int cnt;
 int error = 0;
 int save = 0;

 debugf("uiomove: cp:%p iov_base:%p n:%d iov_len:%d uio:%x segflg:%d\n",
            cp,
            uio->uio_iov->iov_base,
            n, uio->uio_iov->iov_len,
            uio, uio->uio_segflg);
    debugf("uiomove: %p %p %p %p %p %p\n",
            __builtin_return_address(0),
            __builtin_return_address(1),
            __builtin_return_address(2),
            __builtin_return_address(3),
            __builtin_return_address(4),
            __builtin_return_address(5));


                       ;

                      ;

 if (td) {




 }

 while (n > 0 && uio->uio_resid) {
  iov = uio->uio_iov;
  cnt = iov->iov_len;
  if (cnt == 0) {
   uio->uio_iov++;
   uio->uio_iovcnt--;
   continue;
  }
  if (cnt > n)
   cnt = n;

  switch (uio->uio_segflg) {

  case UIO_USERSPACE:
   ;
   if (uio->uio_rw == UIO_READ)
    bcopy(cp, iov->iov_base, cnt);
   else
    bcopy(iov->iov_base, cp, cnt);
   break;

  case UIO_SYSSPACE:
   if (uio->uio_rw == UIO_READ)
    bcopy(cp, iov->iov_base, cnt);
   else
    bcopy(iov->iov_base, cp, cnt);
   break;
  case UIO_NOCOPY:
   break;
  }
  iov->iov_base = (char *)iov->iov_base + cnt;
  iov->iov_len -= cnt;
  uio->uio_resid -= cnt;
  uio->uio_offset += cnt;
  cp = (char *)cp + cnt;
  n -= cnt;
 }
out:
 if (td && save == 0) {



 }
 return (error);
}
