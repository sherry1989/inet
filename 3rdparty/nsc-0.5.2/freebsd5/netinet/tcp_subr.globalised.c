# 1 "freebsd5/netinet/tcp_subr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet/tcp_subr.c"
# 33 "freebsd5/netinet/tcp_subr.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_compat.h" 1
# 34 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 35 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 36 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipsec.h" 1
# 37 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 38 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_tcpdebug.h" 1
# 39 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_tcp_sack.h" 1
# 40 "freebsd5/netinet/tcp_subr.c" 2

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


typedef unsigned int osigset_t;
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

# 42 "freebsd5/netinet/tcp_subr.c" 2
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
# 43 "freebsd5/netinet/tcp_subr.c" 2

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
# 45 "freebsd5/netinet/tcp_subr.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_61_T; extern  _GLOBAL_61_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_16_A[NUM_STACKS];  
typedef  char  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_17_A[NUM_STACKS];  
typedef  char  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_18_A[NUM_STACKS];  
typedef  char  _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_19_A[NUM_STACKS];  


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
# 46 "freebsd5/netinet/tcp_subr.c" 2
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
# 47 "freebsd5/netinet/tcp_subr.c" 2
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
typedef  struct malloc_type   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_20_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_21_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_22_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };   

typedef  struct malloc_type   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_23_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_24_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_25_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_malloc_mtx[NUM_STACKS];    


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
# 48 "freebsd5/netinet/tcp_subr.c" 2
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
typedef  uma_zone_t  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_nmbclusters[NUM_STACKS];   

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
# 49 "freebsd5/netinet/tcp_subr.c" 2

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


typedef  struct domain   _GLOBAL_88_T; extern  _GLOBAL_88_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 51 "freebsd5/netinet/tcp_subr.c" 2

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





typedef  struct malloc_type   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_26_A[NUM_STACKS];   
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
# 67 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
struct osigcontext {
 int sc_onstack;
 osigset_t sc_mask;
 int sc_esp;
 int sc_ebp;
 int sc_isp;
 int sc_eip;
 int sc_efl;
 int sc_es;
 int sc_ds;
 int sc_cs;
 int sc_ss;
 int sc_edi;
 int sc_esi;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;
 int sc_gs;
 int sc_fs;
 int sc_trapno;
 int sc_err;
};






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


typedef  struct vmmeter   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_93_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_27_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_94_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_28_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_95_T; extern  _GLOBAL_95_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_96_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_29_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_97_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_99_T; extern  _GLOBAL_99_T  global___pcpu[NUM_STACKS];    
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


struct mcontext4 {
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
 int mc_fpregs[28];
 int __spare__[17];
};
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



struct ucontext4 {
 sigset_t uc_sigmask;
 struct mcontext4 uc_mcontext;
 struct ucontext4 *uc_link;
 stack_t uc_stack;
 int __spare__[8];
};
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
typedef  struct malloc_type   _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_30_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_31_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_32_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_33_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_104_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_34_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_105_T; extern  _GLOBAL_105_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_107_T; extern  _GLOBAL_107_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_109_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_35_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_110_T; extern  _GLOBAL_110_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_110_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_36_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_116_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_37_A[NUM_STACKS];   
typedef  int  _GLOBAL_117_T; extern  _GLOBAL_117_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_118_T; extern  _GLOBAL_118_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_118_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_124_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_125_T; extern  _GLOBAL_125_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_126_T; extern  _GLOBAL_126_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_129_T  )  ( void  ) ; extern  _GLOBAL_129_T global_cpu_idle_hook[NUM_STACKS];   
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
# 53 "freebsd5/netinet/tcp_subr.c" 2
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
# 54 "freebsd5/netinet/tcp_subr.c" 2
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
typedef  struct mtx   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_accept_mtx[NUM_STACKS];    
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


typedef  struct malloc_type   _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_131_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_38_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_132_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_39_A[NUM_STACKS] = { &_GLOBAL_0_M_PCB_I, &_GLOBAL_1_M_PCB_I, &_GLOBAL_2_M_PCB_I, &_GLOBAL_3_M_PCB_I, &_GLOBAL_4_M_PCB_I, &_GLOBAL_5_M_PCB_I, &_GLOBAL_6_M_PCB_I, &_GLOBAL_7_M_PCB_I, &_GLOBAL_8_M_PCB_I, &_GLOBAL_9_M_PCB_I, &_GLOBAL_10_M_PCB_I, &_GLOBAL_11_M_PCB_I, &_GLOBAL_12_M_PCB_I, &_GLOBAL_13_M_PCB_I, &_GLOBAL_14_M_PCB_I, &_GLOBAL_15_M_PCB_I, &_GLOBAL_16_M_PCB_I, &_GLOBAL_17_M_PCB_I, &_GLOBAL_18_M_PCB_I, &_GLOBAL_19_M_PCB_I, &_GLOBAL_20_M_PCB_I, &_GLOBAL_21_M_PCB_I, &_GLOBAL_22_M_PCB_I, &_GLOBAL_23_M_PCB_I, &_GLOBAL_24_M_PCB_I, &_GLOBAL_25_M_PCB_I, &_GLOBAL_26_M_PCB_I, &_GLOBAL_27_M_PCB_I, &_GLOBAL_28_M_PCB_I, &_GLOBAL_29_M_PCB_I, &_GLOBAL_30_M_PCB_I, &_GLOBAL_31_M_PCB_I, &_GLOBAL_32_M_PCB_I, &_GLOBAL_33_M_PCB_I, &_GLOBAL_34_M_PCB_I, &_GLOBAL_35_M_PCB_I, &_GLOBAL_36_M_PCB_I, &_GLOBAL_37_M_PCB_I, &_GLOBAL_38_M_PCB_I, &_GLOBAL_39_M_PCB_I, &_GLOBAL_40_M_PCB_I, &_GLOBAL_41_M_PCB_I, &_GLOBAL_42_M_PCB_I, &_GLOBAL_43_M_PCB_I, &_GLOBAL_44_M_PCB_I, &_GLOBAL_45_M_PCB_I, &_GLOBAL_46_M_PCB_I, &_GLOBAL_47_M_PCB_I, &_GLOBAL_48_M_PCB_I, &_GLOBAL_49_M_PCB_I, };   
typedef  struct malloc_type   _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_133_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_40_A[NUM_STACKS];   


typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_136_T; extern  _GLOBAL_136_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_so_gencnt[NUM_STACKS];   

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
# 55 "freebsd5/netinet/tcp_subr.c" 2
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
# 56 "freebsd5/netinet/tcp_subr.c" 2
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

typedef  struct harvest_select   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_harvest[NUM_STACKS];    
# 57 "freebsd5/netinet/tcp_subr.c" 2



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
typedef  struct malloc_type   _GLOBAL_139_T; extern  _GLOBAL_139_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_139_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_41_A[NUM_STACKS];   






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
typedef  struct radix_node_head   _GLOBAL_140_T; extern  _GLOBAL_140_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_140_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_42_A[NUM_STACKS];    

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
# 61 "freebsd5/netinet/tcp_subr.c" 2
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





typedef  struct malloc_type   _GLOBAL_141_T; extern  _GLOBAL_141_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_141_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_43_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_142_T; extern  _GLOBAL_142_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_142_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_44_A[NUM_STACKS];   
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
typedef  struct lock_class   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_145_T; extern  _GLOBAL_145_T  global_lock_class_sx[NUM_STACKS];    

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

typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_150_T; extern volatile  _GLOBAL_150_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_45_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_153_T; extern  _GLOBAL_153_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_154_T; extern  _GLOBAL_154_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_debug_mpsafenet[NUM_STACKS];   
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
typedef  struct mbuf    * ( *_GLOBAL_159_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_159_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_161_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_161_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_164_T; extern  _GLOBAL_164_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_166_T; extern  _GLOBAL_166_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_if_index[NUM_STACKS];   

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
# 62 "freebsd5/netinet/tcp_subr.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_168_T; extern  _GLOBAL_168_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_169_T; extern  _GLOBAL_169_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_170_T; extern  _GLOBAL_170_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_171_T; extern  _GLOBAL_171_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_172_T; extern  _GLOBAL_172_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_173_T; extern  _GLOBAL_173_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_174_T; extern  _GLOBAL_174_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_175_T; extern  _GLOBAL_175_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_176_T; extern  _GLOBAL_176_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_177_T; extern  _GLOBAL_177_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_178_T; extern  _GLOBAL_178_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_179_T; extern  _GLOBAL_179_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_179_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_46_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_181_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_181_T global_faithprefix_p[NUM_STACKS];     
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
# 64 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 65 "freebsd5/netinet/tcp_subr.c" 2
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
# 66 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet/ip6.h" 1
# 72 "freebsd5/netinet/ip6.h"
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   u_int32_t ip6_un1_flow;
   u_int16_t ip6_un1_plen;
   u_int8_t ip6_un1_nxt;
   u_int8_t ip6_un1_hlim;
  } ip6_un1;
  u_int8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} __attribute__((__packed__)) ;
# 115 "freebsd5/netinet/ip6.h"
struct ip6_ext {
 u_int8_t ip6e_nxt;
 u_int8_t ip6e_len;
} __attribute__((__packed__)) ;



struct ip6_hbh {
 u_int8_t ip6h_nxt;
 u_int8_t ip6h_len;

} __attribute__((__packed__)) ;



struct ip6_dest {
 u_int8_t ip6d_nxt;
 u_int8_t ip6d_len;

} __attribute__((__packed__)) ;
# 166 "freebsd5/netinet/ip6.h"
struct ip6_rthdr {
 u_int8_t ip6r_nxt;
 u_int8_t ip6r_len;
 u_int8_t ip6r_type;
 u_int8_t ip6r_segleft;

} __attribute__((__packed__)) ;


struct ip6_rthdr0 {
 u_int8_t ip6r0_nxt;
 u_int8_t ip6r0_len;
 u_int8_t ip6r0_type;
 u_int8_t ip6r0_segleft;
 u_int32_t ip6r0_reserved;

} __attribute__((__packed__)) ;


struct ip6_frag {
 u_int8_t ip6f_nxt;
 u_int8_t ip6f_reserved;
 u_int16_t ip6f_offlg;
 u_int32_t ip6f_ident;
} __attribute__((__packed__)) ;
# 68 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet/in_pcb.h" 1
# 44 "freebsd5/netinet/in_pcb.h"
struct inpcbpolicy;
# 53 "freebsd5/netinet/in_pcb.h"
struct inpcbhead { struct inpcb *lh_first; };
struct inpcbporthead { struct inpcbport *lh_first; };
typedef u_quad_t inp_gen_t;






struct in_addr_4in6 {
 u_int32_t ia46_pad32[3];
 struct in_addr ia46_addr4;
};





struct in_endpoints {
 u_int16_t ie_fport;
 u_int16_t ie_lport;

 union {

  struct in_addr_4in6 ie46_foreign;
  struct in6_addr ie6_foreign;
 } ie_dependfaddr;
 union {

  struct in_addr_4in6 ie46_local;
  struct in6_addr ie6_local;
 } ie_dependladdr;




};





struct in_conninfo {
 u_int8_t inc_flags;
 u_int8_t inc_len;
 u_int16_t inc_pad;

 struct in_endpoints inc_ie;
};
# 110 "freebsd5/netinet/in_pcb.h"
struct icmp6_filter;

struct inpcb {
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_list;
 u_int32_t inp_flow;


 struct in_conninfo inp_inc;

 caddr_t inp_ppcb;
 struct inpcbinfo *inp_pcbinfo;
 struct socket *inp_socket;

 struct label *inp_label;
 int inp_flags;

 struct inpcbpolicy *inp_sp;
 u_char inp_vflag;





 u_char inp_ip_ttl;
 u_char inp_ip_p;


 struct {
  u_char inp4_ip_tos;
  struct mbuf *inp4_options;
  struct ip_moptions *inp4_moptions;
 } inp_depend4;







 struct {

  struct mbuf *inp6_options;

  struct ip6_pktopts *inp6_outputopts;

  struct ip6_moptions *inp6_moptions;

  struct icmp6_filter *inp6_icmp6filt;

  int inp6_cksum;
  u_short inp6_ifindex;
  short inp6_hops;
 } inp_depend6;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_portlist;
 struct inpcbport *inp_phd;
 inp_gen_t inp_gencnt;
 struct mtx inp_mtx;
# 187 "freebsd5/netinet/in_pcb.h"
};
# 200 "freebsd5/netinet/in_pcb.h"
struct xinpcb {
 size_t xi_len;
 struct inpcb xi_inp;
 struct xsocket xi_socket;
 u_quad_t xi_alignment_hack;
};

struct xinpgen {
 size_t xig_len;
 u_int xig_count;
 inp_gen_t xig_gen;
 so_gen_t xig_sogen;
};


struct inpcbport {
 struct { struct inpcbport *le_next; struct inpcbport **le_prev; } phd_hash;
 struct inpcbhead phd_pcblist;
 u_short phd_port;
};

struct inpcbinfo {
 struct inpcbhead *hashbase;
 u_long hashmask;
 struct inpcbporthead *porthashbase;
 u_long porthashmask;
 struct inpcbhead *listhead;
 u_short lastport;
 u_short lastlow;
 u_short lasthi;
 struct uma_zone *ipi_zone;
 u_int ipi_count;
 u_quad_t ipi_gencnt;
 struct mtx ipi_mtx;
};
# 328 "freebsd5/netinet/in_pcb.h"
typedef  int  _GLOBAL_182_T; extern  _GLOBAL_182_T  global_ipport_lowfirstauto[NUM_STACKS];   
typedef  int  _GLOBAL_183_T; extern  _GLOBAL_183_T  global_ipport_lowlastauto[NUM_STACKS];   
typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_ipport_firstauto[NUM_STACKS];   
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_ipport_lastauto[NUM_STACKS];   
typedef  int  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_ipport_hifirstauto[NUM_STACKS];   
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_ipport_hilastauto[NUM_STACKS];   

void in_pcbpurgeif0(struct inpcbinfo *, struct ifnet *);
int in_pcballoc(struct socket *, struct inpcbinfo *, const char *);
int in_pcbbind(struct inpcb *, struct sockaddr *, struct ucred *);
int in_pcbbind_setup(struct inpcb *, struct sockaddr *, in_addr_t *,
     u_short *, struct ucred *);
int in_pcbconnect(struct inpcb *, struct sockaddr *, struct ucred *);
int in_pcbconnect_setup(struct inpcb *, struct sockaddr *, in_addr_t *,
     u_short *, in_addr_t *, u_short *, struct inpcb **,
     struct ucred *);
void in_pcbdetach(struct inpcb *);
void in_pcbdisconnect(struct inpcb *);
int in_pcbinshash(struct inpcb *);
struct inpcb *
 in_pcblookup_local(struct inpcbinfo *,
     struct in_addr, u_int, int);
struct inpcb *
 in_pcblookup_hash(struct inpcbinfo *, struct in_addr, u_int,
     struct in_addr, u_int, int, struct ifnet *);
void in_pcbnotifyall(struct inpcbinfo *pcbinfo, struct in_addr,
     int, struct inpcb *(*)(struct inpcb *, int));
void in_pcbrehash(struct inpcb *);
void in_pcbsetsolabel(struct socket *so);
int in_setpeeraddr(struct socket *so, struct sockaddr **nam, struct inpcbinfo *pcbinfo);
int in_setsockaddr(struct socket *so, struct sockaddr **nam, struct inpcbinfo *pcbinfo);
struct sockaddr *
 in_sockaddr(in_port_t port, struct in_addr *addr);
void in_pcbsosetlabel(struct socket *so);
void in_pcbremlists(struct inpcb *inp);
# 70 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet6/in6_pcb.h" 1
# 73 "freebsd5/netinet6/in6_pcb.h"
void in6_pcbpurgeif0 (struct inpcb *, struct ifnet *);
void in6_losing (struct inpcb *);
int in6_pcbbind (struct inpcb *, struct sockaddr *, struct ucred *);
int in6_pcbconnect (struct inpcb *, struct sockaddr *, struct ucred *);
void in6_pcbdetach (struct inpcb *);
void in6_pcbdisconnect (struct inpcb *);
int in6_pcbladdr (struct inpcb *, struct sockaddr *, struct in6_addr **)
                         ;
struct inpcb *
 in6_pcblookup_local (struct inpcbinfo *, struct in6_addr *, u_int, int)
                                    ;
struct inpcb *
 in6_pcblookup_hash (struct inpcbinfo *, struct in6_addr *, u_int, struct in6_addr *, u_int, int, struct ifnet *)

                                ;
void in6_pcbnotify (struct inpcbinfo *, struct sockaddr *, u_int, const struct sockaddr *, u_int, int, void *, struct inpcb *(*)(struct inpcb *, int))

                                              ;
struct inpcb *
 in6_rtchange (struct inpcb *, int);
struct sockaddr *
 in6_sockaddr (in_port_t port, struct in6_addr *addr_p);
struct sockaddr *
 in6_v4mapsin6_sockaddr (in_port_t port, struct in_addr *addr_p);
int in6_setpeeraddr (struct socket *so, struct sockaddr **nam);
int in6_setsockaddr (struct socket *so, struct sockaddr **nam);
int in6_mapped_sockaddr (struct socket *so, struct sockaddr **nam);
int in6_mapped_peeraddr (struct socket *so, struct sockaddr **nam);
int in6_selecthlim (struct inpcb *, struct ifnet *);
int in6_pcbsetport (struct in6_addr *, struct inpcb *, struct ucred *);
void init_sin6 (struct sockaddr_in6 *sin6, struct mbuf *m);
# 72 "freebsd5/netinet/tcp_subr.c" 2

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
typedef  u_char  _GLOBAL_188_T; extern  _GLOBAL_188_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_47_A[NUM_STACKS] = { &_GLOBAL_0_inetctlerrmap_I, &_GLOBAL_1_inetctlerrmap_I, &_GLOBAL_2_inetctlerrmap_I, &_GLOBAL_3_inetctlerrmap_I, &_GLOBAL_4_inetctlerrmap_I, &_GLOBAL_5_inetctlerrmap_I, &_GLOBAL_6_inetctlerrmap_I, &_GLOBAL_7_inetctlerrmap_I, &_GLOBAL_8_inetctlerrmap_I, &_GLOBAL_9_inetctlerrmap_I, &_GLOBAL_10_inetctlerrmap_I, &_GLOBAL_11_inetctlerrmap_I, &_GLOBAL_12_inetctlerrmap_I, &_GLOBAL_13_inetctlerrmap_I, &_GLOBAL_14_inetctlerrmap_I, &_GLOBAL_15_inetctlerrmap_I, &_GLOBAL_16_inetctlerrmap_I, &_GLOBAL_17_inetctlerrmap_I, &_GLOBAL_18_inetctlerrmap_I, &_GLOBAL_19_inetctlerrmap_I, &_GLOBAL_20_inetctlerrmap_I, &_GLOBAL_21_inetctlerrmap_I, &_GLOBAL_22_inetctlerrmap_I, &_GLOBAL_23_inetctlerrmap_I, &_GLOBAL_24_inetctlerrmap_I, &_GLOBAL_25_inetctlerrmap_I, &_GLOBAL_26_inetctlerrmap_I, &_GLOBAL_27_inetctlerrmap_I, &_GLOBAL_28_inetctlerrmap_I, &_GLOBAL_29_inetctlerrmap_I, &_GLOBAL_30_inetctlerrmap_I, &_GLOBAL_31_inetctlerrmap_I, &_GLOBAL_32_inetctlerrmap_I, &_GLOBAL_33_inetctlerrmap_I, &_GLOBAL_34_inetctlerrmap_I, &_GLOBAL_35_inetctlerrmap_I, &_GLOBAL_36_inetctlerrmap_I, &_GLOBAL_37_inetctlerrmap_I, &_GLOBAL_38_inetctlerrmap_I, &_GLOBAL_39_inetctlerrmap_I, &_GLOBAL_40_inetctlerrmap_I, &_GLOBAL_41_inetctlerrmap_I, &_GLOBAL_42_inetctlerrmap_I, &_GLOBAL_43_inetctlerrmap_I, &_GLOBAL_44_inetctlerrmap_I, &_GLOBAL_45_inetctlerrmap_I, &_GLOBAL_46_inetctlerrmap_I, &_GLOBAL_47_inetctlerrmap_I, &_GLOBAL_48_inetctlerrmap_I, &_GLOBAL_49_inetctlerrmap_I, };  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_189_T; extern  _GLOBAL_189_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_191_T; extern  _GLOBAL_191_T  global_in_ifaddrhmask[NUM_STACKS];   
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




typedef  struct sysctl_oid_list   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_sysctl__net_inet_ip_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_sysctl__net_inet_raw_children[NUM_STACKS];    


typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_in_multihead[NUM_STACKS];         





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
typedef  struct in6_ifaddr   _GLOBAL_195_T; extern  _GLOBAL_195_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_196_T; extern  _GLOBAL_196_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_196_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_48_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_198_T; extern  _GLOBAL_198_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_198_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_49_A[NUM_STACKS] = { &_GLOBAL_0_inet6ctlerrmap_I, &_GLOBAL_1_inet6ctlerrmap_I, &_GLOBAL_2_inet6ctlerrmap_I, &_GLOBAL_3_inet6ctlerrmap_I, &_GLOBAL_4_inet6ctlerrmap_I, &_GLOBAL_5_inet6ctlerrmap_I, &_GLOBAL_6_inet6ctlerrmap_I, &_GLOBAL_7_inet6ctlerrmap_I, &_GLOBAL_8_inet6ctlerrmap_I, &_GLOBAL_9_inet6ctlerrmap_I, &_GLOBAL_10_inet6ctlerrmap_I, &_GLOBAL_11_inet6ctlerrmap_I, &_GLOBAL_12_inet6ctlerrmap_I, &_GLOBAL_13_inet6ctlerrmap_I, &_GLOBAL_14_inet6ctlerrmap_I, &_GLOBAL_15_inet6ctlerrmap_I, &_GLOBAL_16_inet6ctlerrmap_I, &_GLOBAL_17_inet6ctlerrmap_I, &_GLOBAL_18_inet6ctlerrmap_I, &_GLOBAL_19_inet6ctlerrmap_I, &_GLOBAL_20_inet6ctlerrmap_I, &_GLOBAL_21_inet6ctlerrmap_I, &_GLOBAL_22_inet6ctlerrmap_I, &_GLOBAL_23_inet6ctlerrmap_I, &_GLOBAL_24_inet6ctlerrmap_I, &_GLOBAL_25_inet6ctlerrmap_I, &_GLOBAL_26_inet6ctlerrmap_I, &_GLOBAL_27_inet6ctlerrmap_I, &_GLOBAL_28_inet6ctlerrmap_I, &_GLOBAL_29_inet6ctlerrmap_I, &_GLOBAL_30_inet6ctlerrmap_I, &_GLOBAL_31_inet6ctlerrmap_I, &_GLOBAL_32_inet6ctlerrmap_I, &_GLOBAL_33_inet6ctlerrmap_I, &_GLOBAL_34_inet6ctlerrmap_I, &_GLOBAL_35_inet6ctlerrmap_I, &_GLOBAL_36_inet6ctlerrmap_I, &_GLOBAL_37_inet6ctlerrmap_I, &_GLOBAL_38_inet6ctlerrmap_I, &_GLOBAL_39_inet6ctlerrmap_I, &_GLOBAL_40_inet6ctlerrmap_I, &_GLOBAL_41_inet6ctlerrmap_I, &_GLOBAL_42_inet6ctlerrmap_I, &_GLOBAL_43_inet6ctlerrmap_I, &_GLOBAL_44_inet6ctlerrmap_I, &_GLOBAL_45_inet6ctlerrmap_I, &_GLOBAL_46_inet6ctlerrmap_I, &_GLOBAL_47_inet6ctlerrmap_I, &_GLOBAL_48_inet6ctlerrmap_I, &_GLOBAL_49_inet6ctlerrmap_I, };  
typedef  unsigned long   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_200_T; extern  _GLOBAL_200_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_200_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_50_A[NUM_STACKS];   
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


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_in6_multihead[NUM_STACKS];         





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
# 74 "freebsd5/netinet/tcp_subr.c" 2
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

typedef  struct ipstat   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_ipstat[NUM_STACKS];    
typedef  u_short  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_ip_id[NUM_STACKS];   
typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_ip_defttl[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_ipforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_ip_doopts[NUM_STACKS];   



typedef  u_char  _GLOBAL_207_T; extern  _GLOBAL_207_T  _GLOBAL_0_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_1_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_2_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_3_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_4_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_5_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_6_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_7_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_8_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_9_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_10_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_11_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_12_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_13_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_14_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_15_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_16_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_17_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_18_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_19_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_20_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_21_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_22_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_23_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_24_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_25_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_26_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_27_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_28_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_29_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_30_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_31_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_32_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_33_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_34_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_35_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_36_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_37_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_38_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_39_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_40_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_41_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_42_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_43_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_44_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_45_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_46_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_47_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_48_ip_protox_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_49_ip_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_protox_I) *_GLOBAL_ip_protox_51_A[NUM_STACKS];  
typedef  struct socket   _GLOBAL_208_T; extern  _GLOBAL_208_T  * global_ip_rsvpd[NUM_STACKS];    
typedef  struct socket   _GLOBAL_209_T; extern  _GLOBAL_209_T  * global_ip_mrouter[NUM_STACKS];    
typedef  int   ( *_GLOBAL_211_T  )  ( int  ) ; extern  _GLOBAL_211_T global_legal_vif_num[NUM_STACKS];   
typedef  u_long   ( *_GLOBAL_213_T  )  ( int  ) ; extern  _GLOBAL_213_T global_ip_mcast_src[NUM_STACKS];   
typedef  int  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_rsvp_on[NUM_STACKS];   
typedef  struct pr_usrreqs   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_rip_usrreqs[NUM_STACKS];    

int ip_ctloutput(struct socket *, struct sockopt *sopt);
void ip_drain(void);
int ip_fragment(struct ip *ip, struct mbuf **m_frag, int mtu,
     u_long if_hwassist_flags, int sw_csum);
void ip_freemoptions(struct ip_moptions *);
void ip_init(void);
typedef  int   ( *_GLOBAL_217_T  )  ( struct ip   *  , struct ifnet   *   , struct mbuf   *   , struct ip_moptions   *   ) ; extern  _GLOBAL_217_T global_ip_mforward[NUM_STACKS];           
       
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
typedef  int   ( *_GLOBAL_219_T  )  ( struct socket   *  , struct sockopt   *   ) ; extern  _GLOBAL_219_T global_ip_rsvp_vif[NUM_STACKS];        
typedef  void   ( *_GLOBAL_221_T  )  ( struct socket   *  ) ; extern  _GLOBAL_221_T global_ip_rsvp_force_done[NUM_STACKS];     
typedef  void   ( *_GLOBAL_223_T  )  ( struct mbuf   * m   , int  off   ) ; extern  _GLOBAL_223_T global_rsvp_input_p[NUM_STACKS];       

typedef  struct pfil_head   _GLOBAL_224_T; extern  _GLOBAL_224_T  _GLOBAL_0_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_1_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_2_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_3_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_4_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_5_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_6_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_7_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_8_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_9_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_10_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_11_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_12_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_13_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_14_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_15_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_16_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_17_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_18_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_19_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_20_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_21_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_22_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_23_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_24_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_25_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_26_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_27_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_28_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_29_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_30_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_31_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_32_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_33_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_34_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_35_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_36_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_37_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_38_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_39_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_40_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_41_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_42_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_43_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_44_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_45_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_46_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_47_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_48_inet_pfil_hook_I; extern  _GLOBAL_224_T  _GLOBAL_49_inet_pfil_hook_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_pfil_hook_I) *_GLOBAL_inet_pfil_hook_52_A[NUM_STACKS];   

void in_delayed_cksum(struct mbuf *m);

static __inline uint16_t ip_newid(void);
typedef  int  _GLOBAL_225_T; extern  _GLOBAL_225_T  global_ip_do_randomid[NUM_STACKS];   

static __inline uint16_t
ip_newid(void)
{
 if (global_ip_do_randomid[get_stack_id()])
  return ip_randomid();

 return __bswap16(global_ip_id[get_stack_id()]++);
}
# 75 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet6/ip6_var.h" 1
# 71 "freebsd5/netinet6/ip6_var.h"
struct ip6q {
 u_int32_t ip6q_head;
 u_int16_t ip6q_len;
 u_int8_t ip6q_nxt;
 u_int8_t ip6q_hlim;
 struct ip6asfrag *ip6q_down;
 struct ip6asfrag *ip6q_up;
 u_int32_t ip6q_ident;
 u_int8_t ip6q_arrive;
 u_int8_t ip6q_ttl;
 struct in6_addr ip6q_src, ip6q_dst;
 struct ip6q *ip6q_next;
 struct ip6q *ip6q_prev;
 int ip6q_unfrglen;



 int ip6q_nfrag;
};

struct ip6asfrag {
 u_int32_t ip6af_head;
 u_int16_t ip6af_len;
 u_int8_t ip6af_nxt;
 u_int8_t ip6af_hlim;

 struct ip6asfrag *ip6af_down;
 struct ip6asfrag *ip6af_up;
 struct mbuf *ip6af_m;
 int ip6af_offset;
 int ip6af_frglen;
 int ip6af_off;
 u_int16_t ip6af_mff;
};



struct ip6_moptions {
 struct ifnet *im6o_multicast_ifp;
 u_char im6o_multicast_hlim;
 u_char im6o_multicast_loop;
 struct { struct in6_multi_mship *lh_first; } im6o_memberships;
};






struct ip6po_rhinfo {
 struct ip6_rthdr *ip6po_rhi_rthdr;
 struct route_in6 ip6po_rhi_route;
};




struct ip6po_nhinfo {
 struct sockaddr *ip6po_nhi_nexthop;
 struct route_in6 ip6po_nhi_route;
};



struct ip6_pktopts {
 struct mbuf *ip6po_m;
 int ip6po_hlim;


 struct in6_pktinfo *ip6po_pktinfo;


 struct ip6po_nhinfo ip6po_nhinfo;

 struct ip6_hbh *ip6po_hbh;


 struct ip6_dest *ip6po_dest1;


 struct ip6po_rhinfo ip6po_rhinfo;


 struct ip6_dest *ip6po_dest2;

 int ip6po_tclass;

 int ip6po_minmtu;




 int ip6po_prefer_tempaddr;





 int ip6po_flags;







 int needfree;
};





struct ip6stat {
 u_quad_t ip6s_total;
 u_quad_t ip6s_tooshort;
 u_quad_t ip6s_toosmall;
 u_quad_t ip6s_fragments;
 u_quad_t ip6s_fragdropped;
 u_quad_t ip6s_fragtimeout;
 u_quad_t ip6s_fragoverflow;
 u_quad_t ip6s_forward;
 u_quad_t ip6s_cantforward;
 u_quad_t ip6s_redirectsent;
 u_quad_t ip6s_delivered;
 u_quad_t ip6s_localout;
 u_quad_t ip6s_odropped;
 u_quad_t ip6s_reassembled;
 u_quad_t ip6s_fragmented;
 u_quad_t ip6s_ofragments;
 u_quad_t ip6s_cantfrag;
 u_quad_t ip6s_badoptions;
 u_quad_t ip6s_noroute;
 u_quad_t ip6s_badvers;
 u_quad_t ip6s_rawout;
 u_quad_t ip6s_badscope;
 u_quad_t ip6s_notmember;
 u_quad_t ip6s_nxthist[256];
 u_quad_t ip6s_m1;
 u_quad_t ip6s_m2m[32];
 u_quad_t ip6s_mext1;
 u_quad_t ip6s_mext2m;
 u_quad_t ip6s_exthdrtoolong;
 u_quad_t ip6s_nogif;
 u_quad_t ip6s_toomanyhdr;







 u_quad_t ip6s_sources_none;

 u_quad_t ip6s_sources_sameif[16];

 u_quad_t ip6s_sources_otherif[16];




 u_quad_t ip6s_sources_samescope[16];




 u_quad_t ip6s_sources_otherscope[16];

 u_quad_t ip6s_sources_deprecated[16];

 u_quad_t ip6s_forward_cachehit;
 u_quad_t ip6s_forward_cachemiss;


 u_quad_t ip6s_sources_rule[16];
};







struct ip6aux {
 u_int32_t ip6a_flags;






 struct in6_addr ip6a_careof;
 struct in6_addr ip6a_home;
 u_int16_t ip6a_bruid;


 struct in6_ifaddr *ip6a_dstia6;


 u_int16_t ip6a_rtalert;





};
# 285 "freebsd5/netinet6/ip6_var.h"
typedef  struct ip6stat   _GLOBAL_226_T; extern  _GLOBAL_226_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_228_T; extern  _GLOBAL_228_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_229_T; extern  _GLOBAL_229_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_230_T; extern  _GLOBAL_230_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_231_T; extern  _GLOBAL_231_T  global_ip6_gif_hlim[NUM_STACKS];   
typedef  int  _GLOBAL_232_T; extern  _GLOBAL_232_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_233_T; extern  _GLOBAL_233_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  int  _GLOBAL_234_T; extern  _GLOBAL_234_T  global_ip6_v6only[NUM_STACKS];   

typedef  struct socket   _GLOBAL_235_T; extern  _GLOBAL_235_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_236_T; extern  _GLOBAL_236_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_237_T; extern  _GLOBAL_237_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_238_T; extern  _GLOBAL_238_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_239_T; extern  _GLOBAL_239_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_240_T; extern  _GLOBAL_240_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_241_T; extern  _GLOBAL_241_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_242_T; extern  _GLOBAL_242_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_243_T; extern  _GLOBAL_243_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_244_T; extern  _GLOBAL_244_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_245_T; extern  _GLOBAL_245_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_246_T; extern  _GLOBAL_246_T  global_ip6_dad_count[NUM_STACKS];   

typedef  int  _GLOBAL_247_T; extern  _GLOBAL_247_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_248_T; extern  _GLOBAL_248_T  global_ip6_auto_linklocal[NUM_STACKS];   

typedef  int  _GLOBAL_249_T; extern  _GLOBAL_249_T  global_ip6_anonportmin[NUM_STACKS];   
typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  global_ip6_anonportmax[NUM_STACKS];   
typedef  int  _GLOBAL_251_T; extern  _GLOBAL_251_T  global_ip6_lowportmin[NUM_STACKS];   
typedef  int  _GLOBAL_252_T; extern  _GLOBAL_252_T  global_ip6_lowportmax[NUM_STACKS];   

typedef  int  _GLOBAL_253_T; extern  _GLOBAL_253_T  global_ip6_use_tempaddr[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_ip6_prefer_tempaddr[NUM_STACKS];   


typedef  struct pfil_head   _GLOBAL_255_T; extern  _GLOBAL_255_T  _GLOBAL_0_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_1_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_2_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_3_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_4_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_5_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_6_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_7_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_8_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_9_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_10_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_11_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_12_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_13_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_14_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_15_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_16_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_17_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_18_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_19_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_20_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_21_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_22_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_23_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_24_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_25_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_26_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_27_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_28_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_29_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_30_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_31_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_32_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_33_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_34_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_35_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_36_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_37_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_38_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_39_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_40_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_41_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_42_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_43_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_44_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_45_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_46_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_47_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_48_inet6_pfil_hook_I; extern  _GLOBAL_255_T  _GLOBAL_49_inet6_pfil_hook_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6_pfil_hook_I) *_GLOBAL_inet6_pfil_hook_53_A[NUM_STACKS];   

typedef  struct pr_usrreqs   _GLOBAL_256_T; extern  _GLOBAL_256_T  global_rip6_usrreqs[NUM_STACKS];    
struct sockopt;

struct inpcb;

int icmp6_ctloutput (struct socket *, struct sockopt *sopt);

struct in6_ifaddr;
void ip6_init (void);
void ip6_input (struct mbuf *);
struct in6_ifaddr *ip6_getdstifaddr (struct mbuf *);
void ip6_freepcbopts (struct ip6_pktopts *);
void ip6_freemoptions (struct ip6_moptions *);
int ip6_unknown_opt (u_int8_t *, struct mbuf *, int);
char * ip6_get_prevhdr (struct mbuf *, int);
int ip6_nexthdr (struct mbuf *, int, int, int *);
int ip6_lasthdr (struct mbuf *, int, int, int *);

struct ip6aux *ip6_addaux (struct mbuf *);
struct ip6aux *ip6_findaux (struct mbuf *);
void ip6_delaux (struct mbuf *);

int ip6_mforward (struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts (struct mbuf *, u_int8_t *, int, u_int32_t *, u_int32_t *)
                  ;
void ip6_savecontrol (struct inpcb *, struct mbuf *, struct mbuf **);
void ip6_notify_pmtu (struct inpcb *, struct sockaddr_in6 *, u_int32_t *)
                     ;
int ip6_sysctl (int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward (struct mbuf *, int);

void ip6_mloopback (struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output (struct mbuf *, struct ip6_pktopts *, struct route_in6 *, int, struct ip6_moptions *, struct ifnet **, struct inpcb *)



                   ;
int ip6_ctloutput (struct socket *, struct sockopt *);
int ip6_raw_ctloutput (struct socket *, struct sockopt *);
void init_ip6pktopts (struct ip6_pktopts *);
int ip6_setpktoptions (struct mbuf *, struct ip6_pktopts *, struct ip6_pktopts *, int, int, int)
                                               ;
void ip6_clearpktopts (struct ip6_pktopts *, int);
struct ip6_pktopts *ip6_copypktopts (struct ip6_pktopts *, int);
int ip6_optlen (struct inpcb *);

int route6_input (struct mbuf **, int *, int);

void frag6_init (void);
int frag6_input (struct mbuf **, int *, int);
void frag6_slowtimo (void);
void frag6_drain (void);

void rip6_init (void);
int rip6_input (struct mbuf **, int *, int);
void rip6_ctlinput (int, struct sockaddr *, void *);
int rip6_ctloutput (struct socket *, struct sockopt *);
int rip6_output (struct mbuf *, ...);
int rip6_usrreq (struct socket *, int, struct mbuf *, struct mbuf *, struct mbuf *, struct thread *)
                                                                        ;

int dest6_input (struct mbuf **, int *, int);
int none_input (struct mbuf **, int *, int);

struct in6_addr *in6_selectsrc (struct sockaddr_in6 *, struct ip6_pktopts *, struct ip6_moptions *, struct route_in6 *, struct in6_addr *, int *)

                           ;
int in6_selectroute (struct sockaddr_in6 *, struct ip6_pktopts *, struct ip6_moptions *, struct route_in6 *, struct ifnet **, struct rtentry **, int)

                         ;
u_int32_t ip6_randomid (void);
u_int32_t ip6_randomflowlabel (void);
# 77 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet6/nd6.h" 1
# 44 "freebsd5/netinet6/nd6.h"
struct llinfo_nd6 {
 struct llinfo_nd6 *ln_next;
 struct llinfo_nd6 *ln_prev;
 struct rtentry *ln_rt;
 struct mbuf *ln_hold;
 long ln_asked;
 u_long ln_expire;
 short ln_state;
 short ln_router;
 int ln_byhint;
};
# 73 "freebsd5/netinet6/nd6.h"
struct nd_ifinfo {
 u_int32_t linkmtu;
 u_int32_t maxmtu;
 u_int32_t basereachable;
 u_int32_t reachable;
 u_int32_t retrans;
 u_int32_t flags;
 int recalctm;
 u_int8_t chlim;
 u_int8_t initialized;

 u_int8_t randomseed0[8];
 u_int8_t randomseed1[8];
 u_int8_t randomid[8];
};
# 102 "freebsd5/netinet6/nd6.h"
struct in6_nbrinfo {
 char ifname[16];
 struct in6_addr addr;
 long asked;
 int isrouter;
 int state;
 int expire;
};



struct in6_drlist {
 char ifname[16];
 struct {
  struct in6_addr rtaddr;
  u_char flags;
  u_short rtlifetime;
  u_long expire;
  u_short if_index;
 } defrouter[10];
};

struct in6_defrouter {
 struct sockaddr_in6 rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 u_short if_index;
};


struct in6_oprlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_long vltime;
  u_long pltime;
  u_long expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};


struct in6_prlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_int32_t vltime;
  u_int32_t pltime;
  time_t expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};

struct in6_prefix {
 struct sockaddr_in6 prefix;
 struct prf_ra raflags;
 u_char prefixlen;
 u_char origin;
 u_int32_t vltime;
 u_int32_t pltime;
 time_t expire;
 u_int32_t flags;
 int refcnt;
 u_short if_index;
 u_short advrtrs;

};


struct in6_ondireq {
 char ifname[16];
 struct {
  u_int32_t linkmtu;
  u_int32_t maxmtu;
  u_int32_t basereachable;
  u_int32_t reachable;
  u_int32_t retrans;
  u_int32_t flags;
  int recalctm;
  u_int8_t chlim;
  u_int8_t receivedra;
 } ndi;
};


struct in6_ndireq {
 char ifname[16];
 struct nd_ifinfo ndi;
};

struct in6_ndifreq {
 char ifname[16];
 u_long ifindex;
};
# 234 "freebsd5/netinet6/nd6.h"
struct nd_drhead { struct nd_defrouter *tqh_first; struct nd_defrouter **tqh_last; };
struct nd_defrouter {
 struct { struct nd_defrouter *tqe_next; struct nd_defrouter **tqe_prev; } dr_entry;
 struct in6_addr rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 struct ifnet *ifp;
};

struct nd_prefix {
 struct ifnet *ndpr_ifp;
 struct { struct nd_prefix *le_next; struct nd_prefix **le_prev; } ndpr_entry;
 struct sockaddr_in6 ndpr_prefix;
 struct in6_addr ndpr_mask;
 struct in6_addr ndpr_addr;
 u_int32_t ndpr_vltime;
 u_int32_t ndpr_pltime;
 time_t ndpr_expire;
 time_t ndpr_preferred;
 struct prf_ra ndpr_flags;
 u_int32_t ndpr_stateflags;

 struct pr_rtrhead { struct nd_pfxrouter *lh_first; } ndpr_advrtrs;
 u_char ndpr_plen;
 int ndpr_refcnt;
};
# 278 "freebsd5/netinet6/nd6.h"
struct inet6_ndpr_msghdr {
 u_short inpm_msglen;
 u_char inpm_version;
 u_char inpm_type;
 struct in6_addr inpm_prefix;
 u_long prm_vltim;
 u_long prm_pltime;
 u_long prm_expire;
 u_long prm_preferred;
 struct in6_prflags prm_flags;
 u_short prm_index;
 u_char prm_plen;
};
# 303 "freebsd5/netinet6/nd6.h"
struct nd_pfxrouter {
 struct { struct nd_pfxrouter *le_next; struct nd_pfxrouter **le_prev; } pfr_entry;

 struct nd_defrouter *router;
};

struct nd_prhead { struct nd_prefix *lh_first; };


typedef  int  _GLOBAL_257_T; extern  _GLOBAL_257_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_258_T; extern  _GLOBAL_258_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_259_T; extern  _GLOBAL_259_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_260_T; extern  _GLOBAL_260_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_261_T; extern  _GLOBAL_261_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_262_T; extern  _GLOBAL_262_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_263_T; extern  _GLOBAL_263_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_264_T; extern  _GLOBAL_264_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_ifinfo   _GLOBAL_265_T; extern  _GLOBAL_265_T  * global_nd_ifinfo[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_266_T; extern  _GLOBAL_266_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_267_T; extern  _GLOBAL_267_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_nd6_debug[NUM_STACKS];   



typedef  struct callout   _GLOBAL_269_T; extern  _GLOBAL_269_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_270_T; extern  _GLOBAL_270_T  global_nd6_defifindex[NUM_STACKS];   
typedef  int  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_ip6_desync_factor[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_272_T; extern  _GLOBAL_272_T  global_ip6_temp_preferred_lifetime[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_273_T; extern  _GLOBAL_273_T  global_ip6_temp_valid_lifetime[NUM_STACKS];   
typedef  int  _GLOBAL_274_T; extern  _GLOBAL_274_T  global_ip6_temp_regen_advance[NUM_STACKS];   

union nd_opts {
 struct nd_opt_hdr *nd_opt_array[8];
 struct {
  struct nd_opt_hdr *zero;
  struct nd_opt_hdr *src_lladdr;
  struct nd_opt_hdr *tgt_lladdr;
  struct nd_opt_prefix_info *pi_beg;
  struct nd_opt_rd_hdr *rh;
  struct nd_opt_mtu *mtu;
  struct nd_opt_hdr *search;
  struct nd_opt_hdr *last;
  int done;
  struct nd_opt_prefix_info *pi_end;
 } nd_opt_each;
};
# 363 "freebsd5/netinet6/nd6.h"
void nd6_init (void);
struct nd_ifinfo *nd6_ifattach (struct ifnet *);
void nd6_ifdetach (struct nd_ifinfo *);
int nd6_is_addr_neighbor (struct sockaddr_in6 *, struct ifnet *);
void nd6_option_init (void *, int, union nd_opts *);
struct nd_opt_hdr *nd6_option (union nd_opts *);
int nd6_options (union nd_opts *);
struct rtentry *nd6_lookup (struct in6_addr *, int, struct ifnet *);
void nd6_setmtu (struct ifnet *);
void nd6_timer (void *);
void nd6_purge (struct ifnet *);
struct llinfo_nd6 *nd6_free (struct rtentry *);
void nd6_nud_hint (struct rtentry *, struct in6_addr *, int);
int nd6_resolve (struct ifnet *, struct rtentry *, struct mbuf *, struct sockaddr *, u_char *)
                              ;
void nd6_rtrequest (int, struct rtentry *, struct rt_addrinfo *);
int nd6_ioctl (u_long, caddr_t, struct ifnet *);
struct rtentry *nd6_cache_lladdr (struct ifnet *, struct in6_addr *, char *, int, int, int)
                        ;
int nd6_output (struct ifnet *, struct ifnet *, struct mbuf *, struct sockaddr_in6 *, struct rtentry *)
                                               ;
int nd6_storelladdr (struct ifnet *, struct rtentry *, struct mbuf *, struct sockaddr *, u_char *)
                                 ;
int nd6_need_cache (struct ifnet *);


void nd6_na_input (struct mbuf *, int, int);
void nd6_na_output (struct ifnet *, const struct in6_addr *, const struct in6_addr *, u_long, int, struct sockaddr *)
                                                          ;
void nd6_ns_input (struct mbuf *, int, int);
void nd6_ns_output (struct ifnet *, const struct in6_addr *, const struct in6_addr *, struct llinfo_nd6 *, int)
                                                    ;
caddr_t nd6_ifptomac (struct ifnet *);
void nd6_dad_start (struct ifaddr *, int *);
void nd6_dad_stop (struct ifaddr *);
void nd6_dad_duplicated (struct ifaddr *);


void nd6_rs_input (struct mbuf *, int, int);
void nd6_ra_input (struct mbuf *, int, int);
void prelist_del (struct nd_prefix *);
void defrouter_addreq (struct nd_defrouter *);
void defrouter_delreq (struct nd_defrouter *, int);
void defrouter_select (void);
void defrtrlist_del (struct nd_defrouter *);
void prelist_remove (struct nd_prefix *);
int prelist_update (struct nd_prefix *, struct nd_defrouter *, struct mbuf *)
                  ;
int nd6_prelist_add (struct nd_prefix *, struct nd_defrouter *, struct nd_prefix **)
                         ;
int nd6_prefix_onlink (struct nd_prefix *);
int nd6_prefix_offlink (struct nd_prefix *);
void pfxlist_onlink_check (void);
struct nd_defrouter *defrouter_lookup (struct in6_addr *, struct ifnet *);
struct nd_prefix *nd6_prefix_lookup (struct nd_prefix *);
int in6_init_prefix_ltimes (struct nd_prefix *);
void rt6_flush (struct in6_addr *, struct ifnet *);
int nd6_setdefaultiface (int);
int in6_tmpifadd (const struct in6_ifaddr *, int);
# 78 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet/tcp.h" 1
# 40 "freebsd5/netinet/tcp.h"
typedef u_int32_t tcp_seq;
typedef u_int32_t tcp_cc;
# 50 "freebsd5/netinet/tcp.h"
struct tcphdr {
 u_short th_sport;
 u_short th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int th_x2:4,
  th_off:4;





 u_char th_flags;
# 74 "freebsd5/netinet/tcp.h"
 u_short th_win;
 u_short th_sum;
 u_short th_urp;
};
# 80 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet/tcp_fsm.h" 1
# 81 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet/tcp_seq.h" 1
# 81 "freebsd5/netinet/tcp_seq.h"
typedef  tcp_cc  _GLOBAL_275_T; extern  _GLOBAL_275_T  global_tcp_ccgen[NUM_STACKS];   
# 82 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet/tcp_timer.h" 1
# 138 "freebsd5/netinet/tcp_timer.h"
typedef  int  _GLOBAL_276_T; extern  _GLOBAL_276_T  global_tcp_keepinit[NUM_STACKS];   
typedef  int  _GLOBAL_277_T; extern  _GLOBAL_277_T  global_tcp_keepidle[NUM_STACKS];   
typedef  int  _GLOBAL_278_T; extern  _GLOBAL_278_T  global_tcp_keepintvl[NUM_STACKS];   
typedef  int  _GLOBAL_279_T; extern  _GLOBAL_279_T  global_tcp_maxidle[NUM_STACKS];   
typedef  int  _GLOBAL_280_T; extern  _GLOBAL_280_T  global_tcp_delacktime[NUM_STACKS];   
typedef  int  _GLOBAL_281_T; extern  _GLOBAL_281_T  global_tcp_maxpersistidle[NUM_STACKS];   
typedef  int  _GLOBAL_282_T; extern  _GLOBAL_282_T  global_tcp_rexmit_min[NUM_STACKS];   
typedef  int  _GLOBAL_283_T; extern  _GLOBAL_283_T  global_tcp_rexmit_slop[NUM_STACKS];   
typedef  int  _GLOBAL_284_T; extern  _GLOBAL_284_T  global_tcp_msl[NUM_STACKS];   
typedef  int  _GLOBAL_285_T; extern  _GLOBAL_285_T  global_tcp_ttl[NUM_STACKS];   
typedef  int  _GLOBAL_286_T; extern  _GLOBAL_286_T  _GLOBAL_0_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_1_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_2_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_3_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_4_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_5_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_6_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_7_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_8_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_9_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_10_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_11_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_12_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_13_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_14_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_15_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_16_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_17_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_18_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_19_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_20_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_21_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_22_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_23_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_24_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_25_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_26_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_27_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_28_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_29_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_30_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_31_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_32_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_33_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_34_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_35_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_36_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_37_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_38_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_39_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_40_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_41_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_42_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_43_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_44_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_45_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_46_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_47_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_48_tcp_backoff_I [ ] ; extern  _GLOBAL_286_T  _GLOBAL_49_tcp_backoff_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_backoff_I) *_GLOBAL_tcp_backoff_54_A[NUM_STACKS];  

struct tcptw;

void tcp_timer_init(void);
void tcp_timer_2msl(void *xtp);
struct tcptw *
 tcp_timer_2msl_tw(int _reuse);
void tcp_timer_2msl_reset(struct tcptw *_tw, int _timeo);
void tcp_timer_2msl_stop(struct tcptw *_tw);
void tcp_timer_keep(void *xtp);
void tcp_timer_persist(void *xtp);
void tcp_timer_rexmt(void *xtp);
void tcp_timer_delack(void *xtp);
# 83 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/netinet/tcp_var.h" 1
# 41 "freebsd5/netinet/tcp_var.h"
typedef  int  _GLOBAL_287_T; extern  _GLOBAL_287_T  global_tcp_do_rfc1323[NUM_STACKS];   
typedef  int  _GLOBAL_288_T; extern  _GLOBAL_288_T  global_tcp_do_rfc1644[NUM_STACKS];   


struct tseg_qent {
 struct { struct tseg_qent *le_next; struct tseg_qent **le_prev; } tqe_q;
 int tqe_len;
 struct tcphdr *tqe_th;
 struct mbuf *tqe_m;
};
struct tsegqe_head { struct tseg_qent *lh_first; };
typedef  int  _GLOBAL_289_T; extern  _GLOBAL_289_T  global_tcp_reass_qsize[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_290_T; extern  _GLOBAL_290_T  * global_tcp_reass_zone[NUM_STACKS];    

struct sackblk {
 tcp_seq start;
 tcp_seq end;
};

struct sackhole {
 tcp_seq start;
 tcp_seq end;
 tcp_seq rxmit;
 struct sackhole *next;
};

struct tcptemp {
 u_char tt_ipgen[40];
 struct tcphdr tt_t;
};







struct tcpcb {
 struct tsegqe_head t_segq;
 int t_segqlen;
 int t_dupacks;
 struct tcptemp *unused;

 struct callout *tt_rexmt;
 struct callout *tt_persist;
 struct callout *tt_keep;
 struct callout *tt_2msl;
 struct callout *tt_delack;

 struct inpcb *t_inpcb;
 int t_state;
 u_int t_flags;
# 116 "freebsd5/netinet/tcp_var.h"
 int t_force;

 tcp_seq snd_una;
 tcp_seq snd_max;


 tcp_seq snd_nxt;
 tcp_seq snd_up;

 tcp_seq snd_wl1;
 tcp_seq snd_wl2;
 tcp_seq iss;
 tcp_seq irs;

 tcp_seq rcv_nxt;
 tcp_seq rcv_adv;
 u_long rcv_wnd;
 tcp_seq rcv_up;

 u_long snd_wnd;
 u_long snd_cwnd;
 u_long snd_bwnd;
 u_long snd_ssthresh;



 u_long snd_bandwidth;
 tcp_seq snd_recover;

 u_int t_maxopd;

 u_long t_rcvtime;
 u_long t_starttime;
 int t_rtttime;
 tcp_seq t_rtseq;

 int t_bw_rtttime;
 tcp_seq t_bw_rtseq;

 int t_rxtcur;
 u_int t_maxseg;
 int t_srtt;
 int t_rttvar;

 int t_rxtshift;
 u_int t_rttmin;
 u_int t_rttbest;
 u_long t_rttupdated;
 u_long max_sndwnd;

 int t_softerror;

 char t_oobflags;
 char t_iobc;



 u_char snd_scale;
 u_char rcv_scale;
 u_char request_r_scale;
 u_char requested_s_scale;
 u_long ts_recent;

 u_long ts_recent_age;
 tcp_seq last_ack_sent;

 tcp_cc cc_send;
 tcp_cc cc_recv;

 u_long snd_cwnd_prev;
 u_long snd_ssthresh_prev;
 tcp_seq snd_recover_prev;
 u_long t_badrxtwin;
 u_char snd_limited;

 u_long rcv_second;
 u_long rcv_pps;
 u_long rcv_byps;

 int sack_enable;
 int snd_numholes;
 struct sackhole *snd_holes;
 tcp_seq rcv_laststart;
 tcp_seq rcv_lastend;
 tcp_seq rcv_lastsack;
 int rcv_numsacks;
 struct sackblk sackblks[6];
 tcp_seq sack_newdata;

};
# 232 "freebsd5/netinet/tcp_var.h"
struct tcpopt {
 u_long to_flags;
# 243 "freebsd5/netinet/tcp_var.h"
 u_int32_t to_tsval;
 u_int32_t to_tsecr;
 tcp_cc to_cc;
 tcp_cc to_ccecho;
 u_int16_t to_mss;
 u_int8_t to_requested_s_scale;
 u_int8_t to_pad;
};


struct syncache {
 inp_gen_t sc_inp_gencnt;
 struct tcpcb *sc_tp;
 struct mbuf *sc_ipopts;
 struct in_conninfo sc_inc;
 u_int32_t sc_tsrecent;
 u_int32_t sc_flowlabel;
 tcp_cc sc_cc_send;
 tcp_cc sc_cc_recv;
 tcp_seq sc_irs;
 tcp_seq sc_iss;
 u_long sc_rxttime;
 u_int16_t sc_rxtslot;
 u_int16_t sc_peer_mss;
 u_int16_t sc_wnd;
 u_int8_t sc_requested_s_scale:4,
   sc_request_r_scale:4;
 u_int8_t sc_flags;







 struct { struct syncache *tqe_next; struct syncache **tqe_prev; } sc_hash;
 struct { struct syncache *tqe_next; struct syncache **tqe_prev; } sc_timerq;
};

struct syncache_head {
 struct { struct syncache *tqh_first; struct syncache **tqh_last; } sch_bucket;
 u_int sch_length;
};




struct hc_metrics_lite {
 u_long rmx_mtu;
 u_long rmx_ssthresh;
 u_long rmx_rtt;
 u_long rmx_rttvar;
 u_long rmx_bandwidth;
 u_long rmx_cwnd;
 u_long rmx_sendpipe;
 u_long rmx_recvpipe;
};

struct tcptw {
 struct inpcb *tw_inpcb;
 tcp_seq snd_nxt;
 tcp_seq rcv_nxt;
 tcp_seq iss;
 tcp_seq irs;
 tcp_cc cc_recv;
 tcp_cc cc_send;
 u_short last_win;
 u_short tw_so_options;
 struct ucred *tw_cred;
 u_long t_recent;
 u_long t_starttime;
 int tw_time;
 struct { struct tcptw *le_next; struct tcptw **le_prev; } tw_2msl;
};




struct rmxp_tao {
 tcp_cc tao_cc;
 tcp_cc tao_ccsent;
 u_short tao_mssopt;






};
# 377 "freebsd5/netinet/tcp_var.h"
struct tcpstat {
 u_long tcps_connattempt;
 u_long tcps_accepts;
 u_long tcps_connects;
 u_long tcps_drops;
 u_long tcps_conndrops;
 u_long tcps_minmssdrops;
 u_long tcps_closed;
 u_long tcps_segstimed;
 u_long tcps_rttupdated;
 u_long tcps_delack;
 u_long tcps_timeoutdrop;
 u_long tcps_rexmttimeo;
 u_long tcps_persisttimeo;
 u_long tcps_keeptimeo;
 u_long tcps_keepprobe;
 u_long tcps_keepdrops;

 u_long tcps_sndtotal;
 u_long tcps_sndpack;
 u_long tcps_sndbyte;
 u_long tcps_sndrexmitpack;
 u_long tcps_sndrexmitbyte;
 u_long tcps_sndrexmitbad;
 u_long tcps_sndacks;
 u_long tcps_sndprobe;
 u_long tcps_sndurg;
 u_long tcps_sndwinup;
 u_long tcps_sndctrl;

 u_long tcps_rcvtotal;
 u_long tcps_rcvpack;
 u_long tcps_rcvbyte;
 u_long tcps_rcvbadsum;
 u_long tcps_rcvbadoff;
 u_long tcps_rcvmemdrop;
 u_long tcps_rcvshort;
 u_long tcps_rcvduppack;
 u_long tcps_rcvdupbyte;
 u_long tcps_rcvpartduppack;
 u_long tcps_rcvpartdupbyte;
 u_long tcps_rcvoopack;
 u_long tcps_rcvoobyte;
 u_long tcps_rcvpackafterwin;
 u_long tcps_rcvbyteafterwin;
 u_long tcps_rcvafterclose;
 u_long tcps_rcvwinprobe;
 u_long tcps_rcvdupack;
 u_long tcps_rcvacktoomuch;
 u_long tcps_rcvackpack;
 u_long tcps_rcvackbyte;
 u_long tcps_rcvwinupd;
 u_long tcps_pawsdrop;
 u_long tcps_predack;
 u_long tcps_preddat;
 u_long tcps_pcbcachemiss;
 u_long tcps_cachedrtt;
 u_long tcps_cachedrttvar;
 u_long tcps_cachedssthresh;
 u_long tcps_usedrtt;
 u_long tcps_usedrttvar;
 u_long tcps_usedssthresh;
 u_long tcps_persistdrop;
 u_long tcps_badsyn;
 u_long tcps_mturesent;
 u_long tcps_listendrop;
 u_long tcps_badrst;

 u_long tcps_sc_added;
 u_long tcps_sc_retransmitted;
 u_long tcps_sc_dupsyn;
 u_long tcps_sc_dropped;
 u_long tcps_sc_completed;
 u_long tcps_sc_bucketoverflow;
 u_long tcps_sc_cacheoverflow;
 u_long tcps_sc_reset;
 u_long tcps_sc_stale;
 u_long tcps_sc_aborted;
 u_long tcps_sc_badack;
 u_long tcps_sc_unreach;
 u_long tcps_sc_zonefail;
 u_long tcps_sc_sendcookie;
 u_long tcps_sc_recvcookie;

 u_long tcps_hc_added;
 u_long tcps_hc_bucketoverflow;


 u_long tcps_sack_recovery_episode;
 u_long tcps_sack_rexmits;
 u_long tcps_sack_rexmit_bytes;
 u_long tcps_sack_rcv_blocks;
 u_long tcps_sack_send_blocks;
};







struct xtcpcb {
 size_t xt_len;
 struct inpcb xt_inp;
 struct tcpcb xt_tp;
 struct xsocket xt_socket;
 u_quad_t xt_alignment_hack;
};
# 527 "freebsd5/netinet/tcp_var.h"
typedef  struct sysctl_oid_list   _GLOBAL_291_T; extern  _GLOBAL_291_T  global_sysctl__net_inet_tcp_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_292_T; extern  _GLOBAL_292_T  global_sysctl__net_inet_tcp_sack_children[NUM_STACKS];    


typedef  struct inpcbhead   _GLOBAL_293_T; extern  _GLOBAL_293_T  global_tcb[NUM_STACKS];    
typedef  struct inpcbinfo   _GLOBAL_294_T; extern  _GLOBAL_294_T  _GLOBAL_0_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_1_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_2_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_3_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_4_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_5_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_6_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_7_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_8_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_9_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_10_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_11_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_12_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_13_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_14_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_15_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_16_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_17_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_18_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_19_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_20_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_21_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_22_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_23_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_24_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_25_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_26_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_27_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_28_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_29_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_30_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_31_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_32_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_33_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_34_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_35_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_36_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_37_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_38_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_39_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_40_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_41_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_42_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_43_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_44_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_45_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_46_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_47_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_48_tcbinfo_I; extern  _GLOBAL_294_T  _GLOBAL_49_tcbinfo_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcbinfo_I) *_GLOBAL_tcbinfo_55_A[NUM_STACKS] = { &_GLOBAL_0_tcbinfo_I, &_GLOBAL_1_tcbinfo_I, &_GLOBAL_2_tcbinfo_I, &_GLOBAL_3_tcbinfo_I, &_GLOBAL_4_tcbinfo_I, &_GLOBAL_5_tcbinfo_I, &_GLOBAL_6_tcbinfo_I, &_GLOBAL_7_tcbinfo_I, &_GLOBAL_8_tcbinfo_I, &_GLOBAL_9_tcbinfo_I, &_GLOBAL_10_tcbinfo_I, &_GLOBAL_11_tcbinfo_I, &_GLOBAL_12_tcbinfo_I, &_GLOBAL_13_tcbinfo_I, &_GLOBAL_14_tcbinfo_I, &_GLOBAL_15_tcbinfo_I, &_GLOBAL_16_tcbinfo_I, &_GLOBAL_17_tcbinfo_I, &_GLOBAL_18_tcbinfo_I, &_GLOBAL_19_tcbinfo_I, &_GLOBAL_20_tcbinfo_I, &_GLOBAL_21_tcbinfo_I, &_GLOBAL_22_tcbinfo_I, &_GLOBAL_23_tcbinfo_I, &_GLOBAL_24_tcbinfo_I, &_GLOBAL_25_tcbinfo_I, &_GLOBAL_26_tcbinfo_I, &_GLOBAL_27_tcbinfo_I, &_GLOBAL_28_tcbinfo_I, &_GLOBAL_29_tcbinfo_I, &_GLOBAL_30_tcbinfo_I, &_GLOBAL_31_tcbinfo_I, &_GLOBAL_32_tcbinfo_I, &_GLOBAL_33_tcbinfo_I, &_GLOBAL_34_tcbinfo_I, &_GLOBAL_35_tcbinfo_I, &_GLOBAL_36_tcbinfo_I, &_GLOBAL_37_tcbinfo_I, &_GLOBAL_38_tcbinfo_I, &_GLOBAL_39_tcbinfo_I, &_GLOBAL_40_tcbinfo_I, &_GLOBAL_41_tcbinfo_I, &_GLOBAL_42_tcbinfo_I, &_GLOBAL_43_tcbinfo_I, &_GLOBAL_44_tcbinfo_I, &_GLOBAL_45_tcbinfo_I, &_GLOBAL_46_tcbinfo_I, &_GLOBAL_47_tcbinfo_I, &_GLOBAL_48_tcbinfo_I, &_GLOBAL_49_tcbinfo_I, };   
typedef  struct tcpstat   _GLOBAL_295_T; extern  _GLOBAL_295_T  global_tcpstat[NUM_STACKS];    
typedef  int  _GLOBAL_296_T; extern  _GLOBAL_296_T  global_tcp_mssdflt[NUM_STACKS];   
typedef  int  _GLOBAL_297_T; extern  _GLOBAL_297_T  global_tcp_minmss[NUM_STACKS];   
typedef  int  _GLOBAL_298_T; extern  _GLOBAL_298_T  global_tcp_minmssoverload[NUM_STACKS];   
typedef  int  _GLOBAL_299_T; extern  _GLOBAL_299_T  global_tcp_delack_enabled[NUM_STACKS];   
typedef  int  _GLOBAL_300_T; extern  _GLOBAL_300_T  global_tcp_do_newreno[NUM_STACKS];   
typedef  int  _GLOBAL_301_T; extern  _GLOBAL_301_T  global_path_mtu_discovery[NUM_STACKS];   
typedef  int  _GLOBAL_302_T; extern  _GLOBAL_302_T  global_ss_fltsz[NUM_STACKS];   
typedef  int  _GLOBAL_303_T; extern  _GLOBAL_303_T  global_ss_fltsz_local[NUM_STACKS];   

typedef  int  _GLOBAL_304_T; extern  _GLOBAL_304_T  global_tcp_do_sack[NUM_STACKS];   

void tcp_canceltimers(struct tcpcb *);
struct tcpcb *
  tcp_close(struct tcpcb *);
void tcp_twstart(struct tcpcb *);
int tcp_twrecycleable(struct tcptw *tw);
struct tcptw *
  tcp_twclose(struct tcptw *_tw, int _reuse);
void tcp_ctlinput(int, struct sockaddr *, void *);
int tcp_ctloutput(struct socket *, struct sockopt *);
struct tcpcb *
  tcp_drop(struct tcpcb *, int);
void tcp_drain(void);
void tcp_fasttimo(void);
void tcp_init(void);
void tcp_fini(void *);
void tcp_reass_init(void);
void tcp_input(struct mbuf *, int);
u_long tcp_maxmtu(struct in_conninfo *);
u_long tcp_maxmtu6(struct in_conninfo *);
void tcp_mss(struct tcpcb *, int);
int tcp_mssopt(struct in_conninfo *);
struct inpcb *
  tcp_drop_syn_sent(struct inpcb *, int);
struct inpcb *
  tcp_mtudisc(struct inpcb *, int);
struct tcpcb *
  tcp_newtcpcb(struct inpcb *);
int tcp_output(struct tcpcb *);
struct inpcb *
  tcp_quench(struct inpcb *, int);
void tcp_respond(struct tcpcb *, void *,
     struct tcphdr *, struct mbuf *, tcp_seq, tcp_seq, int);
int tcp_twrespond(struct tcptw *, int);
void tcp_setpersist(struct tcpcb *);



void tcp_slowtimo(void);
struct tcptemp *
  tcpip_maketemplate(struct inpcb *);
void tcpip_fillheaders(struct inpcb *, void *, void *);
struct tcpcb *
  tcp_timers(struct tcpcb *, int);
void tcp_trace(int, int, struct tcpcb *, void *, struct tcphdr *, int);
void tcp_xmit_bandwidth_limit(struct tcpcb *tp, tcp_seq ack_seq);
void syncache_init(void);
void syncache_unreach(struct in_conninfo *, struct tcphdr *);
int syncache_expand(struct in_conninfo *, struct tcphdr *,
      struct socket **, struct mbuf *);
int syncache_add(struct in_conninfo *, struct tcpopt *,
      struct tcphdr *, struct socket **, struct mbuf *);
void syncache_chkrst(struct in_conninfo *, struct tcphdr *);
void syncache_badack(struct in_conninfo *);



void tcp_hc_init(void);
void tcp_hc_get(struct in_conninfo *, struct hc_metrics_lite *);
u_long tcp_hc_getmtu(struct in_conninfo *);
void tcp_hc_gettao(struct in_conninfo *, struct rmxp_tao *);
void tcp_hc_updatemtu(struct in_conninfo *, u_long);
void tcp_hc_update(struct in_conninfo *, struct hc_metrics_lite *);
void tcp_hc_updatetao(struct in_conninfo *, int, tcp_cc, u_short);





typedef  struct pr_usrreqs   _GLOBAL_305_T; extern  _GLOBAL_305_T  global_tcp_usrreqs[NUM_STACKS];    
typedef  u_long  _GLOBAL_306_T; extern  _GLOBAL_306_T  global_tcp_sendspace[NUM_STACKS];   
typedef  u_long  _GLOBAL_307_T; extern  _GLOBAL_307_T  global_tcp_recvspace[NUM_STACKS];   
tcp_seq tcp_new_isn(struct tcpcb *);

int tcp_sack_option(struct tcpcb *,struct tcphdr *,u_char *,int);
void tcp_update_sack_list(struct tcpcb *tp);
void tcp_del_sackholes(struct tcpcb *, struct tcphdr *);
void tcp_clean_sackreport(struct tcpcb *tp);
void tcp_sack_adjust(struct tcpcb *tp);
struct sackhole *tcp_sack_output(struct tcpcb *tp, int *sack_bytes_rexmt);
void tcp_sack_partialack(struct tcpcb *, struct tcphdr *);
void tcp_free_sackholes(struct tcpcb *tp);
int tcp_newreno(struct tcpcb *, struct tcphdr *);
u_long tcp_seq_subtract(u_long, u_long );
# 84 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet6/tcp6_var.h" 1
# 69 "freebsd5/netinet6/tcp6_var.h"
typedef  struct sysctl_oid_list   _GLOBAL_308_T; extern  _GLOBAL_308_T  global_sysctl__net_inet6_tcp6_children[NUM_STACKS];    


typedef  int  _GLOBAL_309_T; extern  _GLOBAL_309_T  global_tcp_v6mssdflt[NUM_STACKS];   

struct ip6_hdr;
void tcp6_ctlinput (int, struct sockaddr *, void *);
void tcp6_init (void);
int tcp6_input (struct mbuf **, int *, int);
struct rtentry *tcp_rtlookup6(struct in_conninfo *);

typedef  struct pr_usrreqs   _GLOBAL_310_T; extern  _GLOBAL_310_T  global_tcp6_usrreqs[NUM_STACKS];    
# 86 "freebsd5/netinet/tcp_subr.c" 2

# 1 "freebsd5/netinet/tcpip.h" 1
# 39 "freebsd5/netinet/tcpip.h"
struct tcpiphdr {
 struct ipovly ti_i;
 struct tcphdr ti_t;
};
# 88 "freebsd5/netinet/tcp_subr.c" 2



# 1 "freebsd5/netinet6/ip6protosw.h" 1
# 75 "freebsd5/netinet6/ip6protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;
struct thread;
struct ip6_hdr;
struct icmp6_hdr;
struct in6_addr;
struct pr_usrreqs;
# 103 "freebsd5/netinet6/ip6protosw.h"
struct ip6ctlparam {
 struct mbuf *ip6c_m;
 struct icmp6_hdr *ip6c_icmp6;
 struct ip6_hdr *ip6c_ip6;
 int ip6c_off;
 struct sockaddr_in6 *ip6c_src;
 struct sockaddr_in6 *ip6c_dst;
 struct in6_addr *ip6c_finaldst;
 void *ip6c_cmdarg;
 u_int8_t ip6c_nxt;
};

struct ip6protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;


 int (*pr_input)
   (struct mbuf **, int *, int);
 int (*pr_output)
   (struct mbuf *, ...);
 void (*pr_ctlinput)
   (int, struct sockaddr *, void *);
 int (*pr_ctloutput)
   (struct socket *, struct sockopt *);


 int (*pr_usrreq)
   (struct socket *, int, struct mbuf *, struct mbuf *, struct mbuf *, struct thread *)
                                                       ;


 void (*pr_init)
   (void);

 void (*pr_fasttimo)
   (void);
 void (*pr_slowtimo)
   (void);
 void (*pr_drain)
   (void);
 struct pr_usrreqs *pr_usrreqs;
};


typedef  struct ip6protosw   _GLOBAL_311_T; extern  _GLOBAL_311_T  _GLOBAL_0_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_1_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_2_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_3_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_4_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_5_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_6_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_7_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_8_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_9_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_10_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_11_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_12_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_13_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_14_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_15_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_16_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_17_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_18_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_19_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_20_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_21_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_22_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_23_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_24_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_25_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_26_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_27_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_28_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_29_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_30_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_31_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_32_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_33_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_34_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_35_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_36_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_37_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_38_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_39_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_40_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_41_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_42_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_43_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_44_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_45_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_46_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_47_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_48_inet6sw_I [ ] ; extern  _GLOBAL_311_T  _GLOBAL_49_inet6sw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6sw_I) *_GLOBAL_inet6sw_56_A[NUM_STACKS];   
# 92 "freebsd5/netinet/tcp_subr.c" 2
# 110 "freebsd5/netinet/tcp_subr.c"
# 1 "freebsd5/override/machine/in_cksum.h" 1
# 57 "freebsd5/override/machine/in_cksum.h"
static __inline u_int
in_cksum_hdr(const struct ip *ip)
{


    return 0;
# 88 "freebsd5/override/machine/in_cksum.h"
}

static __inline void
in_cksum_update(struct ip *ip)
{
 int __tmpsum;
 __tmpsum = (int)__bswap16(ip->ip_sum) + 256;
 ip->ip_sum = __bswap16(__tmpsum + (__tmpsum >> 16));
}

static __inline u_short
in_addword(u_short sum, u_short b)
{

 __asm volatile ("addw %1, %0" : "+r" (sum) : "r" (b));
 __asm volatile ("adcw $0, %0" : "+r" (sum));

 return (sum);
}

static __inline u_short
in_pseudo(u_int sum, u_int b, u_int c)
{

 __asm volatile ("addl %1, %0" : "+r" (sum) : "g" (b));
 __asm volatile ("adcl %1, %0" : "+r" (sum) : "g" (c));
 __asm volatile ("adcl $0, %0" : "+r" (sum));

 sum = (sum & 0xffff) + (sum >> 16);
 if (sum > 0xffff)
  sum -= 0xffff;
 return (sum);
}
# 134 "freebsd5/override/machine/in_cksum.h"
u_short in_cksum_skip(struct mbuf *m, int len, int skip);
# 111 "freebsd5/netinet/tcp_subr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/md5.h" 1
# 31 "freebsd5/freebsd/usr/src/sys/sys/md5.h"
typedef struct MD5Context {
  u_int32_t state[4];
  u_int32_t count[2];
  unsigned char buffer[64];
} MD5_CTX;




void MD5Init (MD5_CTX *);
void MD5Update (MD5_CTX *, const unsigned char *, unsigned int);
void MD5Pad (MD5_CTX *);
void MD5Final (unsigned char [16], MD5_CTX *);
char * MD5End(MD5_CTX *, char *);
char * MD5File(const char *, char *);
char * MD5FileChunk(const char *, char *, off_t, off_t);
char * MD5Data(const unsigned char *, unsigned int, char *);

# 112 "freebsd5/netinet/tcp_subr.c" 2

typedef  int _GLOBAL_312_T;  _GLOBAL_312_T  global_tcp_mssdflt[NUM_STACKS] = {  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  };    
typedef  struct sysctl_oid   _GLOBAL_313_T; static  _GLOBAL_313_T  global_sysctl___net_inet_tcp_mssdflt[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[0]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[1]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[2]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[3]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[4]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[5]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[6]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[7]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[8]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[9]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[10]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[11]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[12]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[13]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[14]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[15]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[16]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[17]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[18]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[19]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[20]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[21]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[22]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[23]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[24]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[25]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[26]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[27]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[28]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[29]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[30]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[31]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[32]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[33]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[34]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[35]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[36]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[37]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[38]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[39]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[40]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[41]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[42]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[43]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[44]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[45]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[46]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[47]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[48]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_mssdflt[49]   , 0  , "mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size"  } ,  };   
 
# 114 "freebsd5/netinet/tcp_subr.c"
   
 
# 114 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_314_T; static  _GLOBAL_314_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[0] ;static  _GLOBAL_314_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[1] ;static  _GLOBAL_314_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[2] ;static  _GLOBAL_314_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[3] ;static  _GLOBAL_314_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[4] ;static  _GLOBAL_314_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[5] ;static  _GLOBAL_314_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[6] ;static  _GLOBAL_314_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[7] ;static  _GLOBAL_314_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[8] ;static  _GLOBAL_314_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[9] ;static  _GLOBAL_314_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[10] ;static  _GLOBAL_314_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[11] ;static  _GLOBAL_314_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[12] ;static  _GLOBAL_314_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[13] ;static  _GLOBAL_314_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[14] ;static  _GLOBAL_314_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[15] ;static  _GLOBAL_314_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[16] ;static  _GLOBAL_314_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[17] ;static  _GLOBAL_314_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[18] ;static  _GLOBAL_314_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[19] ;static  _GLOBAL_314_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[20] ;static  _GLOBAL_314_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[21] ;static  _GLOBAL_314_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[22] ;static  _GLOBAL_314_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[23] ;static  _GLOBAL_314_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[24] ;static  _GLOBAL_314_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[25] ;static  _GLOBAL_314_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[26] ;static  _GLOBAL_314_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[27] ;static  _GLOBAL_314_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[28] ;static  _GLOBAL_314_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[29] ;static  _GLOBAL_314_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[30] ;static  _GLOBAL_314_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[31] ;static  _GLOBAL_314_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[32] ;static  _GLOBAL_314_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[33] ;static  _GLOBAL_314_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[34] ;static  _GLOBAL_314_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[35] ;static  _GLOBAL_314_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[36] ;static  _GLOBAL_314_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[37] ;static  _GLOBAL_314_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[38] ;static  _GLOBAL_314_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[39] ;static  _GLOBAL_314_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[40] ;static  _GLOBAL_314_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[41] ;static  _GLOBAL_314_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[42] ;static  _GLOBAL_314_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[43] ;static  _GLOBAL_314_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[44] ;static  _GLOBAL_314_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[45] ;static  _GLOBAL_314_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[46] ;static  _GLOBAL_314_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[47] ;static  _GLOBAL_314_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[48] ;static  _GLOBAL_314_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_mssdflt[49] ;    
 
# 114 "freebsd5/netinet/tcp_subr.c"
    
                                                         


typedef  int _GLOBAL_315_T;  _GLOBAL_315_T  global_tcp_v6mssdflt[NUM_STACKS] = {  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  };    
typedef  struct sysctl_oid   _GLOBAL_316_T; static  _GLOBAL_316_T  global_sysctl___net_inet_tcp_v6mssdflt[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[0]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[1]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[2]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[3]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[4]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[5]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[6]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[7]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[8]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[9]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[10]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[11]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[12]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[13]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[14]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[15]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[16]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[17]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[18]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[19]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[20]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[21]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[22]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[23]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[24]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[25]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[26]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[27]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[28]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[29]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[30]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[31]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[32]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[33]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[34]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[35]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[36]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[37]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[38]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[39]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[40]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[41]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[42]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[43]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[44]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[45]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[46]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[47]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[48]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , 13  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_v6mssdflt[49]   , 0  , "v6mssdflt"  , sysctl_handle_int  , "I"  , 0  , "Default TCP Maximum Segment Size for IPv6"  } ,  };   

 
# 119 "freebsd5/netinet/tcp_subr.c"
   

 
# 119 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_317_T; static  _GLOBAL_317_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[0] ;static  _GLOBAL_317_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[1] ;static  _GLOBAL_317_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[2] ;static  _GLOBAL_317_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[3] ;static  _GLOBAL_317_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[4] ;static  _GLOBAL_317_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[5] ;static  _GLOBAL_317_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[6] ;static  _GLOBAL_317_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[7] ;static  _GLOBAL_317_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[8] ;static  _GLOBAL_317_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[9] ;static  _GLOBAL_317_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[10] ;static  _GLOBAL_317_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[11] ;static  _GLOBAL_317_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[12] ;static  _GLOBAL_317_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[13] ;static  _GLOBAL_317_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[14] ;static  _GLOBAL_317_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[15] ;static  _GLOBAL_317_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[16] ;static  _GLOBAL_317_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[17] ;static  _GLOBAL_317_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[18] ;static  _GLOBAL_317_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[19] ;static  _GLOBAL_317_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[20] ;static  _GLOBAL_317_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[21] ;static  _GLOBAL_317_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[22] ;static  _GLOBAL_317_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[23] ;static  _GLOBAL_317_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[24] ;static  _GLOBAL_317_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[25] ;static  _GLOBAL_317_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[26] ;static  _GLOBAL_317_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[27] ;static  _GLOBAL_317_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[28] ;static  _GLOBAL_317_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[29] ;static  _GLOBAL_317_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[30] ;static  _GLOBAL_317_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[31] ;static  _GLOBAL_317_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[32] ;static  _GLOBAL_317_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[33] ;static  _GLOBAL_317_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[34] ;static  _GLOBAL_317_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[35] ;static  _GLOBAL_317_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[36] ;static  _GLOBAL_317_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[37] ;static  _GLOBAL_317_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[38] ;static  _GLOBAL_317_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[39] ;static  _GLOBAL_317_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[40] ;static  _GLOBAL_317_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[41] ;static  _GLOBAL_317_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[42] ;static  _GLOBAL_317_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[43] ;static  _GLOBAL_317_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[44] ;static  _GLOBAL_317_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[45] ;static  _GLOBAL_317_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[46] ;static  _GLOBAL_317_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[47] ;static  _GLOBAL_317_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[48] ;static  _GLOBAL_317_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_v6mssdflt __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_v6mssdflt[49] ;    

 
# 119 "freebsd5/netinet/tcp_subr.c"
    

                                             
# 132 "freebsd5/netinet/tcp_subr.c"
typedef  int _GLOBAL_318_T;  _GLOBAL_318_T  global_tcp_minmss[NUM_STACKS] = {  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  216,  };    
typedef  struct sysctl_oid   _GLOBAL_319_T; static  _GLOBAL_319_T  global_sysctl___net_inet_tcp_minmss[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[0]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[1]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[2]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[3]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[4]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[5]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[6]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[7]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[8]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[9]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[10]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[11]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[12]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[13]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[14]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[15]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[16]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[17]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[18]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[19]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[20]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[21]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[22]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[23]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[24]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[25]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[26]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[27]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[28]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[29]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[30]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[31]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[32]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[33]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[34]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[35]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[36]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[37]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[38]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[39]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[40]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[41]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[42]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[43]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[44]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[45]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[46]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[47]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[48]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmss[49]   , 0  , "minmss"  , sysctl_handle_int  , "I"  , 0  , "Minmum TCP Maximum Segment Size"  } ,  };   
 
# 133 "freebsd5/netinet/tcp_subr.c"
   
 
# 133 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_320_T; static  _GLOBAL_320_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[0] ;static  _GLOBAL_320_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[1] ;static  _GLOBAL_320_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[2] ;static  _GLOBAL_320_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[3] ;static  _GLOBAL_320_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[4] ;static  _GLOBAL_320_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[5] ;static  _GLOBAL_320_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[6] ;static  _GLOBAL_320_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[7] ;static  _GLOBAL_320_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[8] ;static  _GLOBAL_320_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[9] ;static  _GLOBAL_320_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[10] ;static  _GLOBAL_320_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[11] ;static  _GLOBAL_320_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[12] ;static  _GLOBAL_320_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[13] ;static  _GLOBAL_320_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[14] ;static  _GLOBAL_320_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[15] ;static  _GLOBAL_320_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[16] ;static  _GLOBAL_320_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[17] ;static  _GLOBAL_320_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[18] ;static  _GLOBAL_320_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[19] ;static  _GLOBAL_320_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[20] ;static  _GLOBAL_320_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[21] ;static  _GLOBAL_320_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[22] ;static  _GLOBAL_320_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[23] ;static  _GLOBAL_320_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[24] ;static  _GLOBAL_320_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[25] ;static  _GLOBAL_320_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[26] ;static  _GLOBAL_320_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[27] ;static  _GLOBAL_320_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[28] ;static  _GLOBAL_320_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[29] ;static  _GLOBAL_320_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[30] ;static  _GLOBAL_320_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[31] ;static  _GLOBAL_320_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[32] ;static  _GLOBAL_320_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[33] ;static  _GLOBAL_320_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[34] ;static  _GLOBAL_320_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[35] ;static  _GLOBAL_320_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[36] ;static  _GLOBAL_320_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[37] ;static  _GLOBAL_320_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[38] ;static  _GLOBAL_320_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[39] ;static  _GLOBAL_320_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[40] ;static  _GLOBAL_320_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[41] ;static  _GLOBAL_320_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[42] ;static  _GLOBAL_320_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[43] ;static  _GLOBAL_320_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[44] ;static  _GLOBAL_320_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[45] ;static  _GLOBAL_320_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[46] ;static  _GLOBAL_320_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[47] ;static  _GLOBAL_320_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[48] ;static  _GLOBAL_320_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_minmss __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmss[49] ;    
 
# 133 "freebsd5/netinet/tcp_subr.c"
    
                                                       
# 143 "freebsd5/netinet/tcp_subr.c"
typedef  int _GLOBAL_321_T;  _GLOBAL_321_T  global_tcp_minmssoverload[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  struct sysctl_oid   _GLOBAL_322_T; static  _GLOBAL_322_T  global_sysctl___net_inet_tcp_minmssoverload[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[0]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[1]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[2]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[3]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[4]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[5]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[6]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[7]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[8]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[9]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[10]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[11]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[12]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[13]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[14]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[15]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[16]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[17]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[18]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[19]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[20]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[21]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[22]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[23]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[24]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[25]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[26]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[27]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[28]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[29]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[30]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[31]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[32]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[33]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[34]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[35]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[36]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[37]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[38]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[39]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[40]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[41]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[42]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[43]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[44]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[45]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[46]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[47]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[48]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_minmssoverload[49]   , 0  , "minmssoverload"  , sysctl_handle_int  , "I"  , 0  , "Number of TCP Segments per Second allowed to" "be under the MINMSS Size"   } ,  };   

 
# 144 "freebsd5/netinet/tcp_subr.c"
   

 
# 144 "freebsd5/netinet/tcp_subr.c"
                typedef  void const   _GLOBAL_323_T; static  _GLOBAL_323_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[0] ;static  _GLOBAL_323_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[1] ;static  _GLOBAL_323_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[2] ;static  _GLOBAL_323_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[3] ;static  _GLOBAL_323_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[4] ;static  _GLOBAL_323_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[5] ;static  _GLOBAL_323_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[6] ;static  _GLOBAL_323_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[7] ;static  _GLOBAL_323_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[8] ;static  _GLOBAL_323_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[9] ;static  _GLOBAL_323_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[10] ;static  _GLOBAL_323_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[11] ;static  _GLOBAL_323_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[12] ;static  _GLOBAL_323_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[13] ;static  _GLOBAL_323_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[14] ;static  _GLOBAL_323_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[15] ;static  _GLOBAL_323_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[16] ;static  _GLOBAL_323_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[17] ;static  _GLOBAL_323_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[18] ;static  _GLOBAL_323_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[19] ;static  _GLOBAL_323_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[20] ;static  _GLOBAL_323_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[21] ;static  _GLOBAL_323_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[22] ;static  _GLOBAL_323_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[23] ;static  _GLOBAL_323_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[24] ;static  _GLOBAL_323_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[25] ;static  _GLOBAL_323_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[26] ;static  _GLOBAL_323_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[27] ;static  _GLOBAL_323_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[28] ;static  _GLOBAL_323_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[29] ;static  _GLOBAL_323_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[30] ;static  _GLOBAL_323_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[31] ;static  _GLOBAL_323_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[32] ;static  _GLOBAL_323_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[33] ;static  _GLOBAL_323_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[34] ;static  _GLOBAL_323_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[35] ;static  _GLOBAL_323_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[36] ;static  _GLOBAL_323_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[37] ;static  _GLOBAL_323_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[38] ;static  _GLOBAL_323_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[39] ;static  _GLOBAL_323_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[40] ;static  _GLOBAL_323_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[41] ;static  _GLOBAL_323_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[42] ;static  _GLOBAL_323_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[43] ;static  _GLOBAL_323_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[44] ;static  _GLOBAL_323_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[45] ;static  _GLOBAL_323_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[46] ;static  _GLOBAL_323_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[47] ;static  _GLOBAL_323_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[48] ;static  _GLOBAL_323_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_minmssoverload __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_minmssoverload[49] ;    

 
# 144 "freebsd5/netinet/tcp_subr.c"
    

                               







typedef  int _GLOBAL_324_T;  _GLOBAL_324_T  global_tcp_do_rfc1323[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  struct sysctl_oid   _GLOBAL_325_T; static  _GLOBAL_325_T  global_sysctl___net_inet_tcp_rfc1323[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[0]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[1]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[2]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[3]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[4]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[5]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[6]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[7]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[8]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[9]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[10]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[11]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[12]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[13]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[14]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[15]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[16]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[17]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[18]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[19]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[20]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[21]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[22]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[23]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[24]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[25]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[26]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[27]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[28]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[29]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[30]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[31]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[32]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[33]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[34]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[35]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[36]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[37]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[38]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[39]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[40]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[41]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[42]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[43]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[44]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[45]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[46]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[47]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[48]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1323[49]   , 0  , "rfc1323"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1323 (high performance TCP) extensions"  } ,  };   
 
# 155 "freebsd5/netinet/tcp_subr.c"
   
 
# 155 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_326_T; static  _GLOBAL_326_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[0] ;static  _GLOBAL_326_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[1] ;static  _GLOBAL_326_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[2] ;static  _GLOBAL_326_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[3] ;static  _GLOBAL_326_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[4] ;static  _GLOBAL_326_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[5] ;static  _GLOBAL_326_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[6] ;static  _GLOBAL_326_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[7] ;static  _GLOBAL_326_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[8] ;static  _GLOBAL_326_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[9] ;static  _GLOBAL_326_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[10] ;static  _GLOBAL_326_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[11] ;static  _GLOBAL_326_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[12] ;static  _GLOBAL_326_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[13] ;static  _GLOBAL_326_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[14] ;static  _GLOBAL_326_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[15] ;static  _GLOBAL_326_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[16] ;static  _GLOBAL_326_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[17] ;static  _GLOBAL_326_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[18] ;static  _GLOBAL_326_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[19] ;static  _GLOBAL_326_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[20] ;static  _GLOBAL_326_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[21] ;static  _GLOBAL_326_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[22] ;static  _GLOBAL_326_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[23] ;static  _GLOBAL_326_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[24] ;static  _GLOBAL_326_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[25] ;static  _GLOBAL_326_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[26] ;static  _GLOBAL_326_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[27] ;static  _GLOBAL_326_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[28] ;static  _GLOBAL_326_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[29] ;static  _GLOBAL_326_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[30] ;static  _GLOBAL_326_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[31] ;static  _GLOBAL_326_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[32] ;static  _GLOBAL_326_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[33] ;static  _GLOBAL_326_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[34] ;static  _GLOBAL_326_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[35] ;static  _GLOBAL_326_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[36] ;static  _GLOBAL_326_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[37] ;static  _GLOBAL_326_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[38] ;static  _GLOBAL_326_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[39] ;static  _GLOBAL_326_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[40] ;static  _GLOBAL_326_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[41] ;static  _GLOBAL_326_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[42] ;static  _GLOBAL_326_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[43] ;static  _GLOBAL_326_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[44] ;static  _GLOBAL_326_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[45] ;static  _GLOBAL_326_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[46] ;static  _GLOBAL_326_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[47] ;static  _GLOBAL_326_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[48] ;static  _GLOBAL_326_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1323 __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1323[49] ;    
 
# 155 "freebsd5/netinet/tcp_subr.c"
    
                                                                            

typedef  int _GLOBAL_327_T;  _GLOBAL_327_T  global_tcp_do_rfc1644[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  struct sysctl_oid   _GLOBAL_328_T; static  _GLOBAL_328_T  global_sysctl___net_inet_tcp_rfc1644[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[0]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[1]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[2]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[3]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[4]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[5]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[6]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[7]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[8]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[9]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[10]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[11]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[12]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[13]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[14]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[15]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[16]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[17]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[18]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[19]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[20]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[21]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[22]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[23]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[24]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[25]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[26]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[27]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[28]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[29]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[30]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[31]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[32]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[33]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[34]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[35]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[36]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[37]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[38]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[39]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[40]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[41]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[42]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[43]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[44]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[45]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[46]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[47]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[48]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , 2  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_do_rfc1644[49]   , 0  , "rfc1644"  , sysctl_handle_int  , "I"  , 0  , "Enable rfc1644 (TTCP) extensions"  } ,  };   
 
# 159 "freebsd5/netinet/tcp_subr.c"
   
 
# 159 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_329_T; static  _GLOBAL_329_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[0] ;static  _GLOBAL_329_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[1] ;static  _GLOBAL_329_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[2] ;static  _GLOBAL_329_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[3] ;static  _GLOBAL_329_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[4] ;static  _GLOBAL_329_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[5] ;static  _GLOBAL_329_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[6] ;static  _GLOBAL_329_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[7] ;static  _GLOBAL_329_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[8] ;static  _GLOBAL_329_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[9] ;static  _GLOBAL_329_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[10] ;static  _GLOBAL_329_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[11] ;static  _GLOBAL_329_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[12] ;static  _GLOBAL_329_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[13] ;static  _GLOBAL_329_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[14] ;static  _GLOBAL_329_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[15] ;static  _GLOBAL_329_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[16] ;static  _GLOBAL_329_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[17] ;static  _GLOBAL_329_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[18] ;static  _GLOBAL_329_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[19] ;static  _GLOBAL_329_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[20] ;static  _GLOBAL_329_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[21] ;static  _GLOBAL_329_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[22] ;static  _GLOBAL_329_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[23] ;static  _GLOBAL_329_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[24] ;static  _GLOBAL_329_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[25] ;static  _GLOBAL_329_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[26] ;static  _GLOBAL_329_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[27] ;static  _GLOBAL_329_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[28] ;static  _GLOBAL_329_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[29] ;static  _GLOBAL_329_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[30] ;static  _GLOBAL_329_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[31] ;static  _GLOBAL_329_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[32] ;static  _GLOBAL_329_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[33] ;static  _GLOBAL_329_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[34] ;static  _GLOBAL_329_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[35] ;static  _GLOBAL_329_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[36] ;static  _GLOBAL_329_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[37] ;static  _GLOBAL_329_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[38] ;static  _GLOBAL_329_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[39] ;static  _GLOBAL_329_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[40] ;static  _GLOBAL_329_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[41] ;static  _GLOBAL_329_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[42] ;static  _GLOBAL_329_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[43] ;static  _GLOBAL_329_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[44] ;static  _GLOBAL_329_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[45] ;static  _GLOBAL_329_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[46] ;static  _GLOBAL_329_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[47] ;static  _GLOBAL_329_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[48] ;static  _GLOBAL_329_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_rfc1644 __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_rfc1644[49] ;    
 
# 159 "freebsd5/netinet/tcp_subr.c"
    
                                                            

typedef  int  _GLOBAL_330_T; static  _GLOBAL_330_T  global_tcp_tcbhashsize[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_331_T; static  _GLOBAL_331_T  global_sysctl___net_inet_tcp_tcbhashsize[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[0]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[1]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[2]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[3]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[4]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[5]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[6]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[7]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[8]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[9]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[10]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[11]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[12]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[13]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[14]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[15]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[16]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[17]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[18]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[19]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[20]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[21]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[22]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[23]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[24]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[25]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[26]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[27]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[28]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[29]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[30]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[31]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[32]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[33]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[34]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[35]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[36]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[37]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[38]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[39]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[40]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[41]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[42]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[43]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[44]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[45]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[46]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[47]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[48]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x00080000  )  )    , & global_tcp_tcbhashsize[49]   , 0  , "tcbhashsize"  , sysctl_handle_int  , "I"  , 0  , "Size of TCP control-block hashtable"  } ,  };   
 
# 163 "freebsd5/netinet/tcp_subr.c"
   
 
# 163 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_332_T; static  _GLOBAL_332_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[0] ;static  _GLOBAL_332_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[1] ;static  _GLOBAL_332_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[2] ;static  _GLOBAL_332_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[3] ;static  _GLOBAL_332_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[4] ;static  _GLOBAL_332_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[5] ;static  _GLOBAL_332_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[6] ;static  _GLOBAL_332_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[7] ;static  _GLOBAL_332_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[8] ;static  _GLOBAL_332_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[9] ;static  _GLOBAL_332_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[10] ;static  _GLOBAL_332_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[11] ;static  _GLOBAL_332_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[12] ;static  _GLOBAL_332_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[13] ;static  _GLOBAL_332_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[14] ;static  _GLOBAL_332_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[15] ;static  _GLOBAL_332_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[16] ;static  _GLOBAL_332_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[17] ;static  _GLOBAL_332_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[18] ;static  _GLOBAL_332_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[19] ;static  _GLOBAL_332_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[20] ;static  _GLOBAL_332_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[21] ;static  _GLOBAL_332_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[22] ;static  _GLOBAL_332_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[23] ;static  _GLOBAL_332_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[24] ;static  _GLOBAL_332_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[25] ;static  _GLOBAL_332_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[26] ;static  _GLOBAL_332_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[27] ;static  _GLOBAL_332_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[28] ;static  _GLOBAL_332_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[29] ;static  _GLOBAL_332_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[30] ;static  _GLOBAL_332_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[31] ;static  _GLOBAL_332_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[32] ;static  _GLOBAL_332_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[33] ;static  _GLOBAL_332_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[34] ;static  _GLOBAL_332_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[35] ;static  _GLOBAL_332_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[36] ;static  _GLOBAL_332_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[37] ;static  _GLOBAL_332_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[38] ;static  _GLOBAL_332_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[39] ;static  _GLOBAL_332_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[40] ;static  _GLOBAL_332_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[41] ;static  _GLOBAL_332_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[42] ;static  _GLOBAL_332_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[43] ;static  _GLOBAL_332_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[44] ;static  _GLOBAL_332_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[45] ;static  _GLOBAL_332_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[46] ;static  _GLOBAL_332_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[47] ;static  _GLOBAL_332_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[48] ;static  _GLOBAL_332_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_tcbhashsize __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_tcbhashsize[49] ;    
 
# 163 "freebsd5/netinet/tcp_subr.c"
    
                                                                

typedef  int  _GLOBAL_333_T; static  _GLOBAL_333_T  global_do_tcpdrain[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  struct sysctl_oid   _GLOBAL_334_T; static  _GLOBAL_334_T  global_sysctl___net_inet_tcp_do_tcpdrain[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[0]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[1]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[2]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[3]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[4]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[5]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[6]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[7]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[8]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[9]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[10]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[11]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[12]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[13]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[14]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[15]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[16]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[17]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[18]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[19]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[20]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[21]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[22]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[23]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[24]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[25]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[26]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[27]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[28]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[29]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[30]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[31]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[32]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[33]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[34]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[35]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[36]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[37]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[38]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[39]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[40]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[41]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[42]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[43]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[44]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[45]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[46]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[47]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[48]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_do_tcpdrain[49]   , 0  , "do_tcpdrain"  , sysctl_handle_int  , "I"  , 0  , "Enable tcp_drain routine for extra help when low on mbufs"  } ,  };   
 
# 167 "freebsd5/netinet/tcp_subr.c"
   
 
# 167 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_335_T; static  _GLOBAL_335_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[0] ;static  _GLOBAL_335_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[1] ;static  _GLOBAL_335_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[2] ;static  _GLOBAL_335_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[3] ;static  _GLOBAL_335_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[4] ;static  _GLOBAL_335_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[5] ;static  _GLOBAL_335_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[6] ;static  _GLOBAL_335_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[7] ;static  _GLOBAL_335_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[8] ;static  _GLOBAL_335_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[9] ;static  _GLOBAL_335_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[10] ;static  _GLOBAL_335_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[11] ;static  _GLOBAL_335_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[12] ;static  _GLOBAL_335_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[13] ;static  _GLOBAL_335_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[14] ;static  _GLOBAL_335_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[15] ;static  _GLOBAL_335_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[16] ;static  _GLOBAL_335_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[17] ;static  _GLOBAL_335_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[18] ;static  _GLOBAL_335_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[19] ;static  _GLOBAL_335_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[20] ;static  _GLOBAL_335_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[21] ;static  _GLOBAL_335_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[22] ;static  _GLOBAL_335_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[23] ;static  _GLOBAL_335_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[24] ;static  _GLOBAL_335_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[25] ;static  _GLOBAL_335_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[26] ;static  _GLOBAL_335_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[27] ;static  _GLOBAL_335_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[28] ;static  _GLOBAL_335_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[29] ;static  _GLOBAL_335_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[30] ;static  _GLOBAL_335_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[31] ;static  _GLOBAL_335_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[32] ;static  _GLOBAL_335_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[33] ;static  _GLOBAL_335_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[34] ;static  _GLOBAL_335_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[35] ;static  _GLOBAL_335_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[36] ;static  _GLOBAL_335_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[37] ;static  _GLOBAL_335_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[38] ;static  _GLOBAL_335_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[39] ;static  _GLOBAL_335_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[40] ;static  _GLOBAL_335_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[41] ;static  _GLOBAL_335_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[42] ;static  _GLOBAL_335_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[43] ;static  _GLOBAL_335_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[44] ;static  _GLOBAL_335_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[45] ;static  _GLOBAL_335_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[46] ;static  _GLOBAL_335_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[47] ;static  _GLOBAL_335_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[48] ;static  _GLOBAL_335_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_do_tcpdrain __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_do_tcpdrain[49] ;    
 
# 167 "freebsd5/netinet/tcp_subr.c"
    
                                                                 

typedef  struct sysctl_oid   _GLOBAL_336_T; static  _GLOBAL_336_T  global_sysctl___net_inet_tcp_pcbcount[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_0_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_1_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_2_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_3_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_4_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_5_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_6_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_7_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_8_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_9_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_10_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_11_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_12_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_13_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_14_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_15_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_16_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_17_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_18_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_19_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_20_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_21_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_22_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_23_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_24_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_25_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_26_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_27_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_28_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_29_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_30_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_31_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_32_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_33_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_34_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_35_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_36_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_37_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_38_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_39_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_40_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_41_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_42_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_43_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_44_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_45_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_46_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_47_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_48_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & _GLOBAL_49_tcbinfo_I . ipi_count    , 0  , "pcbcount"  , sysctl_handle_int  , "I"  , 0  , "Number of active PCBs"  } ,  };   
 
# 170 "freebsd5/netinet/tcp_subr.c"
   
 
# 170 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_337_T; static  _GLOBAL_337_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[0] ;static  _GLOBAL_337_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[1] ;static  _GLOBAL_337_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[2] ;static  _GLOBAL_337_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[3] ;static  _GLOBAL_337_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[4] ;static  _GLOBAL_337_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[5] ;static  _GLOBAL_337_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[6] ;static  _GLOBAL_337_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[7] ;static  _GLOBAL_337_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[8] ;static  _GLOBAL_337_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[9] ;static  _GLOBAL_337_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[10] ;static  _GLOBAL_337_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[11] ;static  _GLOBAL_337_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[12] ;static  _GLOBAL_337_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[13] ;static  _GLOBAL_337_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[14] ;static  _GLOBAL_337_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[15] ;static  _GLOBAL_337_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[16] ;static  _GLOBAL_337_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[17] ;static  _GLOBAL_337_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[18] ;static  _GLOBAL_337_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[19] ;static  _GLOBAL_337_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[20] ;static  _GLOBAL_337_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[21] ;static  _GLOBAL_337_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[22] ;static  _GLOBAL_337_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[23] ;static  _GLOBAL_337_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[24] ;static  _GLOBAL_337_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[25] ;static  _GLOBAL_337_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[26] ;static  _GLOBAL_337_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[27] ;static  _GLOBAL_337_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[28] ;static  _GLOBAL_337_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[29] ;static  _GLOBAL_337_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[30] ;static  _GLOBAL_337_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[31] ;static  _GLOBAL_337_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[32] ;static  _GLOBAL_337_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[33] ;static  _GLOBAL_337_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[34] ;static  _GLOBAL_337_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[35] ;static  _GLOBAL_337_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[36] ;static  _GLOBAL_337_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[37] ;static  _GLOBAL_337_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[38] ;static  _GLOBAL_337_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[39] ;static  _GLOBAL_337_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[40] ;static  _GLOBAL_337_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[41] ;static  _GLOBAL_337_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[42] ;static  _GLOBAL_337_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[43] ;static  _GLOBAL_337_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[44] ;static  _GLOBAL_337_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[45] ;static  _GLOBAL_337_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[46] ;static  _GLOBAL_337_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[47] ;static  _GLOBAL_337_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[48] ;static  _GLOBAL_337_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_pcbcount __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcbcount[49] ;    
 
# 170 "freebsd5/netinet/tcp_subr.c"
    
                                                   

typedef  int  _GLOBAL_338_T; static  _GLOBAL_338_T  global_icmp_may_rst[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  struct sysctl_oid   _GLOBAL_339_T; static  _GLOBAL_339_T  global_sysctl___net_inet_tcp_icmp_may_rst[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[0]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[1]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[2]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[3]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[4]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[5]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[6]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[7]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[8]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[9]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[10]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[11]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[12]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[13]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[14]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[15]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[16]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[17]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[18]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[19]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[20]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[21]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[22]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[23]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[24]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[25]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[26]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[27]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[28]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[29]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[30]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[31]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[32]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[33]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[34]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[35]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[36]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[37]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[38]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[39]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[40]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[41]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[42]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[43]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[44]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[45]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[46]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[47]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[48]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmp_may_rst[49]   , 0  , "icmp_may_rst"  , sysctl_handle_int  , "I"  , 0  , "Certain ICMP unreachable messages may abort connections in SYN_SENT"  } ,  };   
 
# 174 "freebsd5/netinet/tcp_subr.c"
   
 
# 174 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_340_T; static  _GLOBAL_340_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[0] ;static  _GLOBAL_340_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[1] ;static  _GLOBAL_340_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[2] ;static  _GLOBAL_340_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[3] ;static  _GLOBAL_340_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[4] ;static  _GLOBAL_340_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[5] ;static  _GLOBAL_340_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[6] ;static  _GLOBAL_340_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[7] ;static  _GLOBAL_340_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[8] ;static  _GLOBAL_340_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[9] ;static  _GLOBAL_340_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[10] ;static  _GLOBAL_340_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[11] ;static  _GLOBAL_340_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[12] ;static  _GLOBAL_340_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[13] ;static  _GLOBAL_340_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[14] ;static  _GLOBAL_340_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[15] ;static  _GLOBAL_340_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[16] ;static  _GLOBAL_340_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[17] ;static  _GLOBAL_340_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[18] ;static  _GLOBAL_340_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[19] ;static  _GLOBAL_340_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[20] ;static  _GLOBAL_340_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[21] ;static  _GLOBAL_340_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[22] ;static  _GLOBAL_340_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[23] ;static  _GLOBAL_340_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[24] ;static  _GLOBAL_340_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[25] ;static  _GLOBAL_340_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[26] ;static  _GLOBAL_340_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[27] ;static  _GLOBAL_340_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[28] ;static  _GLOBAL_340_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[29] ;static  _GLOBAL_340_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[30] ;static  _GLOBAL_340_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[31] ;static  _GLOBAL_340_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[32] ;static  _GLOBAL_340_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[33] ;static  _GLOBAL_340_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[34] ;static  _GLOBAL_340_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[35] ;static  _GLOBAL_340_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[36] ;static  _GLOBAL_340_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[37] ;static  _GLOBAL_340_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[38] ;static  _GLOBAL_340_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[39] ;static  _GLOBAL_340_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[40] ;static  _GLOBAL_340_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[41] ;static  _GLOBAL_340_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[42] ;static  _GLOBAL_340_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[43] ;static  _GLOBAL_340_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[44] ;static  _GLOBAL_340_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[45] ;static  _GLOBAL_340_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[46] ;static  _GLOBAL_340_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[47] ;static  _GLOBAL_340_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[48] ;static  _GLOBAL_340_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_icmp_may_rst __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_icmp_may_rst[49] ;    
 
# 174 "freebsd5/netinet/tcp_subr.c"
    
                                                                          

typedef  int  _GLOBAL_341_T; static  _GLOBAL_341_T  global_tcp_isn_reseed_interval[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_342_T; static  _GLOBAL_342_T  global_sysctl___net_inet_tcp_isn_reseed_interval[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[0]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[1]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[2]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[3]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[4]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[5]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[6]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[7]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[8]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[9]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[10]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[11]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[12]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[13]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[14]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[15]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[16]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[17]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[18]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[19]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[20]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[21]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[22]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[23]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[24]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[25]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[26]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[27]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[28]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[29]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[30]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[31]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[32]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[33]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[34]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[35]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[36]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[37]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[38]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[39]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[40]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[41]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[42]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[43]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[44]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[45]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[46]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[47]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[48]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_isn_reseed_interval[49]   , 0  , "isn_reseed_interval"  , sysctl_handle_int  , "I"  , 0  , "Seconds between reseeding of ISN secret"  } ,  };   
 
# 178 "freebsd5/netinet/tcp_subr.c"
   
 
# 178 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_343_T; static  _GLOBAL_343_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[0] ;static  _GLOBAL_343_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[1] ;static  _GLOBAL_343_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[2] ;static  _GLOBAL_343_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[3] ;static  _GLOBAL_343_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[4] ;static  _GLOBAL_343_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[5] ;static  _GLOBAL_343_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[6] ;static  _GLOBAL_343_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[7] ;static  _GLOBAL_343_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[8] ;static  _GLOBAL_343_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[9] ;static  _GLOBAL_343_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[10] ;static  _GLOBAL_343_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[11] ;static  _GLOBAL_343_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[12] ;static  _GLOBAL_343_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[13] ;static  _GLOBAL_343_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[14] ;static  _GLOBAL_343_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[15] ;static  _GLOBAL_343_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[16] ;static  _GLOBAL_343_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[17] ;static  _GLOBAL_343_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[18] ;static  _GLOBAL_343_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[19] ;static  _GLOBAL_343_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[20] ;static  _GLOBAL_343_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[21] ;static  _GLOBAL_343_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[22] ;static  _GLOBAL_343_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[23] ;static  _GLOBAL_343_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[24] ;static  _GLOBAL_343_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[25] ;static  _GLOBAL_343_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[26] ;static  _GLOBAL_343_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[27] ;static  _GLOBAL_343_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[28] ;static  _GLOBAL_343_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[29] ;static  _GLOBAL_343_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[30] ;static  _GLOBAL_343_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[31] ;static  _GLOBAL_343_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[32] ;static  _GLOBAL_343_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[33] ;static  _GLOBAL_343_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[34] ;static  _GLOBAL_343_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[35] ;static  _GLOBAL_343_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[36] ;static  _GLOBAL_343_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[37] ;static  _GLOBAL_343_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[38] ;static  _GLOBAL_343_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[39] ;static  _GLOBAL_343_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[40] ;static  _GLOBAL_343_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[41] ;static  _GLOBAL_343_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[42] ;static  _GLOBAL_343_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[43] ;static  _GLOBAL_343_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[44] ;static  _GLOBAL_343_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[45] ;static  _GLOBAL_343_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[46] ;static  _GLOBAL_343_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[47] ;static  _GLOBAL_343_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[48] ;static  _GLOBAL_343_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_isn_reseed_interval __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_isn_reseed_interval[49] ;    
 
# 178 "freebsd5/netinet/tcp_subr.c"
    
                                                                           






typedef  struct sysctl_oid_list  _GLOBAL_344_T;  _GLOBAL_344_T  global_sysctl__net_inet_tcp_inflight_children[NUM_STACKS];  
 
# 186 "freebsd5/netinet/tcp_subr.c"
  typedef  struct sysctl_oid   _GLOBAL_345_T; static  _GLOBAL_345_T  global_sysctl___net_inet_tcp_inflight[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[0]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[1]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[2]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[3]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[4]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[5]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[6]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[7]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[8]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[9]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[10]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[11]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[12]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[13]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[14]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[15]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[16]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[17]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[18]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[19]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[20]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[21]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[22]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[23]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[24]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[25]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[26]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[27]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[28]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[29]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[30]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[31]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[32]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[33]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[34]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[35]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[36]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[37]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[38]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[39]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[40]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[41]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[42]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[43]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[44]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[45]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[46]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[47]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[48]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_inet_tcp_inflight_children[49]    , 0  , "inflight"  , 0  , "N"  , 0  , "TCP inflight data limiting"  } ,  };   
 
# 186 "freebsd5/netinet/tcp_subr.c"
   
 
# 186 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_346_T; static  _GLOBAL_346_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[0] ;static  _GLOBAL_346_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[1] ;static  _GLOBAL_346_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[2] ;static  _GLOBAL_346_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[3] ;static  _GLOBAL_346_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[4] ;static  _GLOBAL_346_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[5] ;static  _GLOBAL_346_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[6] ;static  _GLOBAL_346_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[7] ;static  _GLOBAL_346_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[8] ;static  _GLOBAL_346_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[9] ;static  _GLOBAL_346_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[10] ;static  _GLOBAL_346_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[11] ;static  _GLOBAL_346_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[12] ;static  _GLOBAL_346_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[13] ;static  _GLOBAL_346_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[14] ;static  _GLOBAL_346_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[15] ;static  _GLOBAL_346_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[16] ;static  _GLOBAL_346_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[17] ;static  _GLOBAL_346_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[18] ;static  _GLOBAL_346_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[19] ;static  _GLOBAL_346_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[20] ;static  _GLOBAL_346_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[21] ;static  _GLOBAL_346_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[22] ;static  _GLOBAL_346_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[23] ;static  _GLOBAL_346_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[24] ;static  _GLOBAL_346_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[25] ;static  _GLOBAL_346_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[26] ;static  _GLOBAL_346_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[27] ;static  _GLOBAL_346_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[28] ;static  _GLOBAL_346_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[29] ;static  _GLOBAL_346_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[30] ;static  _GLOBAL_346_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[31] ;static  _GLOBAL_346_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[32] ;static  _GLOBAL_346_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[33] ;static  _GLOBAL_346_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[34] ;static  _GLOBAL_346_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[35] ;static  _GLOBAL_346_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[36] ;static  _GLOBAL_346_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[37] ;static  _GLOBAL_346_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[38] ;static  _GLOBAL_346_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[39] ;static  _GLOBAL_346_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[40] ;static  _GLOBAL_346_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[41] ;static  _GLOBAL_346_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[42] ;static  _GLOBAL_346_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[43] ;static  _GLOBAL_346_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[44] ;static  _GLOBAL_346_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[45] ;static  _GLOBAL_346_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[46] ;static  _GLOBAL_346_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[47] ;static  _GLOBAL_346_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[48] ;static  _GLOBAL_346_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight[49] ;    
 
# 186 "freebsd5/netinet/tcp_subr.c"
    
                                 

typedef  int  _GLOBAL_347_T; static  _GLOBAL_347_T  global_tcp_inflight_enable[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  struct sysctl_oid   _GLOBAL_348_T; static  _GLOBAL_348_T  global_sysctl___net_inet_tcp_inflight_enable[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_inflight_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[0]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[1]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[2]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[3]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[4]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[5]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[6]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[7]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[8]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[9]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[10]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[11]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[12]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[13]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[14]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[15]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[16]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[17]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[18]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[19]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[20]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[21]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[22]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[23]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[24]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[25]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[26]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[27]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[28]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[29]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[30]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[31]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[32]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[33]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[34]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[35]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[36]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[37]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[38]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[39]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[40]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[41]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[42]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[43]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[44]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[45]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[46]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[47]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[48]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_enable[49]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "Enable automatic TCP inflight data limiting"  } ,  };   
 
# 190 "freebsd5/netinet/tcp_subr.c"
   
 
# 190 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_349_T; static  _GLOBAL_349_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[0] ;static  _GLOBAL_349_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[1] ;static  _GLOBAL_349_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[2] ;static  _GLOBAL_349_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[3] ;static  _GLOBAL_349_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[4] ;static  _GLOBAL_349_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[5] ;static  _GLOBAL_349_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[6] ;static  _GLOBAL_349_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[7] ;static  _GLOBAL_349_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[8] ;static  _GLOBAL_349_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[9] ;static  _GLOBAL_349_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[10] ;static  _GLOBAL_349_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[11] ;static  _GLOBAL_349_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[12] ;static  _GLOBAL_349_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[13] ;static  _GLOBAL_349_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[14] ;static  _GLOBAL_349_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[15] ;static  _GLOBAL_349_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[16] ;static  _GLOBAL_349_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[17] ;static  _GLOBAL_349_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[18] ;static  _GLOBAL_349_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[19] ;static  _GLOBAL_349_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[20] ;static  _GLOBAL_349_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[21] ;static  _GLOBAL_349_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[22] ;static  _GLOBAL_349_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[23] ;static  _GLOBAL_349_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[24] ;static  _GLOBAL_349_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[25] ;static  _GLOBAL_349_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[26] ;static  _GLOBAL_349_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[27] ;static  _GLOBAL_349_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[28] ;static  _GLOBAL_349_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[29] ;static  _GLOBAL_349_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[30] ;static  _GLOBAL_349_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[31] ;static  _GLOBAL_349_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[32] ;static  _GLOBAL_349_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[33] ;static  _GLOBAL_349_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[34] ;static  _GLOBAL_349_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[35] ;static  _GLOBAL_349_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[36] ;static  _GLOBAL_349_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[37] ;static  _GLOBAL_349_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[38] ;static  _GLOBAL_349_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[39] ;static  _GLOBAL_349_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[40] ;static  _GLOBAL_349_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[41] ;static  _GLOBAL_349_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[42] ;static  _GLOBAL_349_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[43] ;static  _GLOBAL_349_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[44] ;static  _GLOBAL_349_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[45] ;static  _GLOBAL_349_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[46] ;static  _GLOBAL_349_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[47] ;static  _GLOBAL_349_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[48] ;static  _GLOBAL_349_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_enable[49] ;    
 
# 190 "freebsd5/netinet/tcp_subr.c"
    
                                                                           

typedef  int  _GLOBAL_350_T; static  _GLOBAL_350_T  global_tcp_inflight_debug[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_351_T; static  _GLOBAL_351_T  global_sysctl___net_inet_tcp_inflight_debug[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_inflight_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[0]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[1]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[2]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[3]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[4]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[5]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[6]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[7]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[8]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[9]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[10]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[11]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[12]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[13]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[14]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[15]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[16]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[17]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[18]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[19]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[20]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[21]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[22]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[23]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[24]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[25]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[26]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[27]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[28]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[29]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[30]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[31]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[32]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[33]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[34]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[35]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[36]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[37]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[38]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[39]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[40]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[41]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[42]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[43]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[44]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[45]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[46]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[47]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[48]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_debug[49]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "Debug TCP inflight calculations"  } ,  };   
 
# 194 "freebsd5/netinet/tcp_subr.c"
   
 
# 194 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_352_T; static  _GLOBAL_352_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[0] ;static  _GLOBAL_352_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[1] ;static  _GLOBAL_352_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[2] ;static  _GLOBAL_352_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[3] ;static  _GLOBAL_352_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[4] ;static  _GLOBAL_352_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[5] ;static  _GLOBAL_352_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[6] ;static  _GLOBAL_352_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[7] ;static  _GLOBAL_352_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[8] ;static  _GLOBAL_352_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[9] ;static  _GLOBAL_352_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[10] ;static  _GLOBAL_352_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[11] ;static  _GLOBAL_352_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[12] ;static  _GLOBAL_352_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[13] ;static  _GLOBAL_352_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[14] ;static  _GLOBAL_352_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[15] ;static  _GLOBAL_352_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[16] ;static  _GLOBAL_352_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[17] ;static  _GLOBAL_352_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[18] ;static  _GLOBAL_352_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[19] ;static  _GLOBAL_352_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[20] ;static  _GLOBAL_352_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[21] ;static  _GLOBAL_352_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[22] ;static  _GLOBAL_352_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[23] ;static  _GLOBAL_352_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[24] ;static  _GLOBAL_352_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[25] ;static  _GLOBAL_352_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[26] ;static  _GLOBAL_352_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[27] ;static  _GLOBAL_352_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[28] ;static  _GLOBAL_352_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[29] ;static  _GLOBAL_352_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[30] ;static  _GLOBAL_352_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[31] ;static  _GLOBAL_352_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[32] ;static  _GLOBAL_352_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[33] ;static  _GLOBAL_352_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[34] ;static  _GLOBAL_352_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[35] ;static  _GLOBAL_352_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[36] ;static  _GLOBAL_352_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[37] ;static  _GLOBAL_352_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[38] ;static  _GLOBAL_352_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[39] ;static  _GLOBAL_352_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[40] ;static  _GLOBAL_352_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[41] ;static  _GLOBAL_352_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[42] ;static  _GLOBAL_352_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[43] ;static  _GLOBAL_352_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[44] ;static  _GLOBAL_352_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[45] ;static  _GLOBAL_352_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[46] ;static  _GLOBAL_352_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[47] ;static  _GLOBAL_352_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[48] ;static  _GLOBAL_352_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_debug[49] ;    
 
# 194 "freebsd5/netinet/tcp_subr.c"
    
                                                              

typedef  int  _GLOBAL_353_T; static  _GLOBAL_353_T  global_tcp_inflight_min[NUM_STACKS] = {  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  6144,  };     
typedef  struct sysctl_oid   _GLOBAL_354_T; static  _GLOBAL_354_T  global_sysctl___net_inet_tcp_inflight_min[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_inflight_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[0]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[1]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[2]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[3]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[4]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[5]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[6]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[7]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[8]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[9]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[10]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[11]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[12]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[13]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[14]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[15]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[16]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[17]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[18]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[19]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[20]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[21]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[22]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[23]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[24]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[25]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[26]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[27]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[28]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[29]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[30]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[31]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[32]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[33]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[34]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[35]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[36]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[37]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[38]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[39]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[40]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[41]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[42]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[43]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[44]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[45]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[46]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[47]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[48]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_min[49]   , 0  , "min"  , sysctl_handle_int  , "I"  , 0  , "Lower-bound for TCP inflight window"  } ,  };   
 
# 198 "freebsd5/netinet/tcp_subr.c"
   
 
# 198 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_355_T; static  _GLOBAL_355_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[0] ;static  _GLOBAL_355_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[1] ;static  _GLOBAL_355_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[2] ;static  _GLOBAL_355_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[3] ;static  _GLOBAL_355_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[4] ;static  _GLOBAL_355_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[5] ;static  _GLOBAL_355_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[6] ;static  _GLOBAL_355_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[7] ;static  _GLOBAL_355_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[8] ;static  _GLOBAL_355_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[9] ;static  _GLOBAL_355_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[10] ;static  _GLOBAL_355_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[11] ;static  _GLOBAL_355_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[12] ;static  _GLOBAL_355_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[13] ;static  _GLOBAL_355_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[14] ;static  _GLOBAL_355_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[15] ;static  _GLOBAL_355_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[16] ;static  _GLOBAL_355_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[17] ;static  _GLOBAL_355_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[18] ;static  _GLOBAL_355_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[19] ;static  _GLOBAL_355_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[20] ;static  _GLOBAL_355_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[21] ;static  _GLOBAL_355_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[22] ;static  _GLOBAL_355_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[23] ;static  _GLOBAL_355_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[24] ;static  _GLOBAL_355_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[25] ;static  _GLOBAL_355_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[26] ;static  _GLOBAL_355_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[27] ;static  _GLOBAL_355_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[28] ;static  _GLOBAL_355_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[29] ;static  _GLOBAL_355_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[30] ;static  _GLOBAL_355_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[31] ;static  _GLOBAL_355_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[32] ;static  _GLOBAL_355_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[33] ;static  _GLOBAL_355_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[34] ;static  _GLOBAL_355_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[35] ;static  _GLOBAL_355_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[36] ;static  _GLOBAL_355_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[37] ;static  _GLOBAL_355_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[38] ;static  _GLOBAL_355_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[39] ;static  _GLOBAL_355_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[40] ;static  _GLOBAL_355_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[41] ;static  _GLOBAL_355_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[42] ;static  _GLOBAL_355_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[43] ;static  _GLOBAL_355_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[44] ;static  _GLOBAL_355_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[45] ;static  _GLOBAL_355_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[46] ;static  _GLOBAL_355_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[47] ;static  _GLOBAL_355_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[48] ;static  _GLOBAL_355_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_min __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_min[49] ;    
 
# 198 "freebsd5/netinet/tcp_subr.c"
    
                                                                

typedef  int  _GLOBAL_356_T; static  _GLOBAL_356_T  global_tcp_inflight_max[NUM_STACKS] = {  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  65535 << 14 ,  };       
typedef  struct sysctl_oid   _GLOBAL_357_T; static  _GLOBAL_357_T  global_sysctl___net_inet_tcp_inflight_max[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_inflight_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[0]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[1]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[2]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[3]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[4]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[5]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[6]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[7]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[8]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[9]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[10]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[11]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[12]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[13]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[14]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[15]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[16]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[17]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[18]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[19]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[20]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[21]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[22]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[23]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[24]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[25]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[26]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[27]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[28]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[29]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[30]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[31]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[32]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[33]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[34]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[35]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[36]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[37]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[38]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[39]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[40]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[41]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[42]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[43]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[44]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[45]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[46]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[47]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[48]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_max[49]   , 0  , "max"  , sysctl_handle_int  , "I"  , 0  , "Upper-bound for TCP inflight window"  } ,  };   
 
# 202 "freebsd5/netinet/tcp_subr.c"
   
 
# 202 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_358_T; static  _GLOBAL_358_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[0] ;static  _GLOBAL_358_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[1] ;static  _GLOBAL_358_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[2] ;static  _GLOBAL_358_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[3] ;static  _GLOBAL_358_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[4] ;static  _GLOBAL_358_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[5] ;static  _GLOBAL_358_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[6] ;static  _GLOBAL_358_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[7] ;static  _GLOBAL_358_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[8] ;static  _GLOBAL_358_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[9] ;static  _GLOBAL_358_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[10] ;static  _GLOBAL_358_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[11] ;static  _GLOBAL_358_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[12] ;static  _GLOBAL_358_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[13] ;static  _GLOBAL_358_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[14] ;static  _GLOBAL_358_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[15] ;static  _GLOBAL_358_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[16] ;static  _GLOBAL_358_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[17] ;static  _GLOBAL_358_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[18] ;static  _GLOBAL_358_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[19] ;static  _GLOBAL_358_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[20] ;static  _GLOBAL_358_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[21] ;static  _GLOBAL_358_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[22] ;static  _GLOBAL_358_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[23] ;static  _GLOBAL_358_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[24] ;static  _GLOBAL_358_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[25] ;static  _GLOBAL_358_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[26] ;static  _GLOBAL_358_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[27] ;static  _GLOBAL_358_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[28] ;static  _GLOBAL_358_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[29] ;static  _GLOBAL_358_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[30] ;static  _GLOBAL_358_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[31] ;static  _GLOBAL_358_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[32] ;static  _GLOBAL_358_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[33] ;static  _GLOBAL_358_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[34] ;static  _GLOBAL_358_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[35] ;static  _GLOBAL_358_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[36] ;static  _GLOBAL_358_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[37] ;static  _GLOBAL_358_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[38] ;static  _GLOBAL_358_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[39] ;static  _GLOBAL_358_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[40] ;static  _GLOBAL_358_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[41] ;static  _GLOBAL_358_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[42] ;static  _GLOBAL_358_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[43] ;static  _GLOBAL_358_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[44] ;static  _GLOBAL_358_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[45] ;static  _GLOBAL_358_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[46] ;static  _GLOBAL_358_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[47] ;static  _GLOBAL_358_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[48] ;static  _GLOBAL_358_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_max __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_max[49] ;    
 
# 202 "freebsd5/netinet/tcp_subr.c"
    
                                                                

typedef  int  _GLOBAL_359_T; static  _GLOBAL_359_T  global_tcp_inflight_stab[NUM_STACKS] = {  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  };     
typedef  struct sysctl_oid   _GLOBAL_360_T; static  _GLOBAL_360_T  global_sysctl___net_inet_tcp_inflight_stab[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_inflight_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[0]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[1]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[2]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[3]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[4]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[5]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[6]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[7]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[8]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[9]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[10]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[11]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[12]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[13]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[14]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[15]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[16]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[17]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[18]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[19]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[20]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[21]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[22]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[23]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[24]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[25]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[26]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[27]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[28]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[29]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[30]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[31]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[32]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[33]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[34]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[35]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[36]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[37]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[38]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[39]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[40]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[41]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[42]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[43]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[44]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[45]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[46]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[47]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[48]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  { & global_sysctl__net_inet_tcp_inflight_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tcp_inflight_stab[49]   , 0  , "stab"  , sysctl_handle_int  , "I"  , 0  , "Inflight Algorithm Stabilization 20 = 2 packets"  } ,  };   
 
# 206 "freebsd5/netinet/tcp_subr.c"
   
 
# 206 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_361_T; static  _GLOBAL_361_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[0] ;static  _GLOBAL_361_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[1] ;static  _GLOBAL_361_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[2] ;static  _GLOBAL_361_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[3] ;static  _GLOBAL_361_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[4] ;static  _GLOBAL_361_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[5] ;static  _GLOBAL_361_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[6] ;static  _GLOBAL_361_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[7] ;static  _GLOBAL_361_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[8] ;static  _GLOBAL_361_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[9] ;static  _GLOBAL_361_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[10] ;static  _GLOBAL_361_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[11] ;static  _GLOBAL_361_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[12] ;static  _GLOBAL_361_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[13] ;static  _GLOBAL_361_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[14] ;static  _GLOBAL_361_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[15] ;static  _GLOBAL_361_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[16] ;static  _GLOBAL_361_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[17] ;static  _GLOBAL_361_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[18] ;static  _GLOBAL_361_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[19] ;static  _GLOBAL_361_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[20] ;static  _GLOBAL_361_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[21] ;static  _GLOBAL_361_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[22] ;static  _GLOBAL_361_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[23] ;static  _GLOBAL_361_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[24] ;static  _GLOBAL_361_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[25] ;static  _GLOBAL_361_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[26] ;static  _GLOBAL_361_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[27] ;static  _GLOBAL_361_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[28] ;static  _GLOBAL_361_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[29] ;static  _GLOBAL_361_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[30] ;static  _GLOBAL_361_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[31] ;static  _GLOBAL_361_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[32] ;static  _GLOBAL_361_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[33] ;static  _GLOBAL_361_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[34] ;static  _GLOBAL_361_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[35] ;static  _GLOBAL_361_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[36] ;static  _GLOBAL_361_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[37] ;static  _GLOBAL_361_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[38] ;static  _GLOBAL_361_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[39] ;static  _GLOBAL_361_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[40] ;static  _GLOBAL_361_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[41] ;static  _GLOBAL_361_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[42] ;static  _GLOBAL_361_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[43] ;static  _GLOBAL_361_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[44] ;static  _GLOBAL_361_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[45] ;static  _GLOBAL_361_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[46] ;static  _GLOBAL_361_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[47] ;static  _GLOBAL_361_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[48] ;static  _GLOBAL_361_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_inflight_stab __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_inflight_stab[49] ;    
 
# 206 "freebsd5/netinet/tcp_subr.c"
    
                                                                             

typedef  uma_zone_t _GLOBAL_362_T;  _GLOBAL_362_T  global_sack_hole_zone[NUM_STACKS];  

static struct inpcb *tcp_notify(struct inpcb *, int);
static void tcp_discardcb(struct tcpcb *);
static void tcp_isn_tick(void *);
# 231 "freebsd5/netinet/tcp_subr.c"
struct tcpcb_mem {
 struct tcpcb tcb;
 struct callout tcpcb_mem_rexmt, tcpcb_mem_persist, tcpcb_mem_keep;
 struct callout tcpcb_mem_2msl, tcpcb_mem_delack;
};

typedef  uma_zone_t  _GLOBAL_363_T; static  _GLOBAL_363_T  global_tcpcb_zone[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_364_T; static  _GLOBAL_364_T  global_tcptw_zone[NUM_STACKS];   
typedef  struct callout  _GLOBAL_365_T;  _GLOBAL_365_T  global_isn_callout[NUM_STACKS];   




void
tcp_init()
{
 int hashsize = 512;

 global_tcp_ccgen[get_stack_id()] = 1;

 global_tcp_delacktime[get_stack_id()] = (global_hz[get_stack_id()] / 5 / 2);
 global_tcp_keepinit[get_stack_id()] = ( 75*global_hz[get_stack_id()]);
 global_tcp_keepidle[get_stack_id()] = (120*60*global_hz[get_stack_id()]);
 global_tcp_keepintvl[get_stack_id()] = ( 75*global_hz[get_stack_id()]);
 global_tcp_maxpersistidle[get_stack_id()] = (120*60*global_hz[get_stack_id()]);
 global_tcp_msl[get_stack_id()] = ( 30*global_hz[get_stack_id()]);
 global_tcp_rexmit_min[get_stack_id()] = ( 3 );
 global_tcp_rexmit_slop[get_stack_id()] = ( global_hz[get_stack_id()]/5 );

 mtx_init(&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx, ("tcp"), ((void *)0), 0x00000000 | 0x00000004);
 do { (((&global_tcb[get_stack_id()]))->lh_first) = ((void *)0); } while (0);
 (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).listhead = &global_tcb[get_stack_id()];
 getenv_int(("net.inet.tcp.tcbhashsize"), (&hashsize));
 if (!((((hashsize)-1)&(hashsize))==0)) {
  nsc_printf("WARNING: TCB hash size not a power of 2\n");
  hashsize = 512;
 }
 global_tcp_tcbhashsize[get_stack_id()] = hashsize;
 (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).hashbase = hashinit(hashsize, (*_GLOBAL_M_PCB_39_A[get_stack_id()]), &(*_GLOBAL_tcbinfo_55_A[get_stack_id()]).hashmask);
 (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).porthashbase = hashinit(hashsize, (*_GLOBAL_M_PCB_39_A[get_stack_id()]),
     &(*_GLOBAL_tcbinfo_55_A[get_stack_id()]).porthashmask);
 (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_zone = uma_zcreate("inpcb", sizeof(struct inpcb),
     ((void *)0), ((void *)0), ((void *)0), ((void *)0), (sizeof(void *) - 1), 0x0020);
 uma_zone_set_max((*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_zone, global_maxsockets[get_stack_id()]);





 if (global_max_protohdr[get_stack_id()] < (sizeof(struct ip6_hdr) + sizeof(struct tcphdr)))
  global_max_protohdr[get_stack_id()] = (sizeof(struct ip6_hdr) + sizeof(struct tcphdr));
 if (global_max_linkhdr[get_stack_id()] + (sizeof(struct ip6_hdr) + sizeof(struct tcphdr)) > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  panic("tcp_init");




 global_tcpcb_zone[get_stack_id()] = uma_zcreate("tcpcb", sizeof(struct tcpcb_mem),
     ((void *)0), ((void *)0), ((void *)0), ((void *)0), (sizeof(void *) - 1), 0x0020);
 uma_zone_set_max(global_tcpcb_zone[get_stack_id()], global_maxsockets[get_stack_id()]);
 global_tcptw_zone[get_stack_id()] = uma_zcreate("tcptw", sizeof(struct tcptw),
     ((void *)0), ((void *)0), ((void *)0), ((void *)0), (sizeof(void *) - 1), 0x0020);
 uma_zone_set_max(global_tcptw_zone[get_stack_id()], global_maxsockets[get_stack_id()] / 5);
 tcp_timer_init();
 syncache_init();
 tcp_hc_init();
 tcp_reass_init();
 callout_init(&global_isn_callout[get_stack_id()], 0x0008);
 tcp_isn_tick(((void *)0));
 eventhandler_register(((void *)0), "shutdown_pre_sync", tcp_fini, ((void *)0), 10000)
                       ;
 global_sack_hole_zone[get_stack_id()] = uma_zcreate("sackhole", sizeof(struct sackhole),
     ((void *)0), ((void *)0), ((void *)0), ((void *)0), (sizeof(void *) - 1), 0x0020);
}

void
tcp_fini(xtp)
 void *xtp;
{
 _callout_stop_safe(&global_isn_callout[get_stack_id()], 0);

}






void
tcpip_fillheaders(inp, ip_ptr, tcp_ptr)
 struct inpcb *inp;
 void *ip_ptr;
 void *tcp_ptr;
{
 struct tcphdr *th = (struct tcphdr *)tcp_ptr;


 if ((inp->inp_vflag & 0x2) != 0) {
  struct ip6_hdr *ip6;

  ip6 = (struct ip6_hdr *)ip_ptr;
  ip6->ip6_ctlun.ip6_un1.ip6_un1_flow = (ip6->ip6_ctlun.ip6_un1.ip6_un1_flow & ~0xffffff0f) |
   (inp->inp_flow & 0xffffff0f);
  ip6->ip6_ctlun.ip6_un2_vfc = (ip6->ip6_ctlun.ip6_un2_vfc & ~0xf0) |
   (0x60 & 0xf0);
  ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 6;
  ip6->ip6_ctlun.ip6_un1.ip6_un1_plen = sizeof(struct tcphdr);
  ip6->ip6_src = inp->inp_inc.inc_ie.ie_dependladdr.ie6_local;
  ip6->ip6_dst = inp->inp_inc.inc_ie.ie_dependfaddr.ie6_foreign;
 } else

 {
  struct ip *ip;

  ip = (struct ip *)ip_ptr;
  ip->ip_v = 4;
  ip->ip_hl = 5;
  ip->ip_tos = inp->inp_depend4.inp4_ip_tos;
  ip->ip_len = 0;
  ip->ip_id = 0;
  ip->ip_off = 0;
  ip->ip_ttl = inp->inp_ip_ttl;
  ip->ip_sum = 0;
  ip->ip_p = 6;
  ip->ip_src = inp->inp_inc.inc_ie.ie_dependladdr.ie46_local.ia46_addr4;
  ip->ip_dst = inp->inp_inc.inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4;
 }
 th->th_sport = inp->inp_inc.inc_ie.ie_lport;
 th->th_dport = inp->inp_inc.inc_ie.ie_fport;
 th->th_seq = 0;
 th->th_ack = 0;
 th->th_x2 = 0;
 th->th_off = 5;
 th->th_flags = 0;
 th->th_win = 0;
 th->th_urp = 0;
 th->th_sum = 0;
}






struct tcptemp *
tcpip_maketemplate(inp)
 struct inpcb *inp;
{
 struct mbuf *m;
 struct tcptemp *n;

 m = m_get(0x0001, 2);
 if (m == ((void *)0))
  return (0);
 m->m_hdr.mh_len = sizeof(struct tcptemp);
 n = ((struct tcptemp *)((m)->m_hdr.mh_data));

 tcpip_fillheaders(inp, (void *)&n->tt_ipgen, (void *)&n->tt_t);
 return (n);
}
# 406 "freebsd5/netinet/tcp_subr.c"
void
tcp_respond(tp, ipgen, th, m, ack, seq, flags)
 struct tcpcb *tp;
 void *ipgen;
 register struct tcphdr *th;
 register struct mbuf *m;
 tcp_seq ack, seq;
 int flags;
{
 register int tlen;
 int win = 0;
 struct ip *ip;
 struct tcphdr *nth;

 struct ip6_hdr *ip6;
 int isipv6;

 int ipflags = 0;
 struct inpcb *inp;

 ;


 isipv6 = ((struct ip *)ipgen)->ip_v == 6;
 ip6 = ipgen;

 ip = ipgen;

 if (tp != ((void *)0)) {
  inp = tp->t_inpcb;
  ;
  do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);
  do { ; do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0); } while (0);
 } else
  inp = ((void *)0);

 if (tp != ((void *)0)) {
  if (!(flags & 0x04)) {
   win = ((long) imin((int)((&inp->inp_socket->so_rcv)->sb_hiwat - (&inp->inp_socket->so_rcv)->sb_cc), (int)((&inp->inp_socket->so_rcv)->sb_mbmax - (&inp->inp_socket->so_rcv)->sb_mbcnt)));
   if (win > (long)65535 << tp->rcv_scale)
    win = (long)65535 << tp->rcv_scale;
  }
 }
 if (m == ((void *)0)) {
  m = m_gethdr(0x0001, 2);
  if (m == ((void *)0))
   return;
  tlen = 0;
  m->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];

  if (isipv6) {
   bcopy((caddr_t)ip6, ((caddr_t)((m)->m_hdr.mh_data)),
         sizeof(struct ip6_hdr));
   ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
   nth = (struct tcphdr *)(ip6 + 1);
  } else

       {
  bcopy((caddr_t)ip, ((caddr_t)((m)->m_hdr.mh_data)), sizeof(struct ip));
  ip = ((struct ip *)((m)->m_hdr.mh_data));
  nth = (struct tcphdr *)(ip + 1);
       }
  bcopy((caddr_t)th, (caddr_t)nth, sizeof(struct tcphdr));
  flags = 0x10;
 } else {
  m_freem(m->m_hdr.mh_next);
  m->m_hdr.mh_next = ((void *)0);
  m->m_hdr.mh_data = (caddr_t)ipgen;

  tlen = 0;


  if (isipv6) {
   { struct in6_addr t; t=ip6->ip6_dst; ip6->ip6_dst=ip6->ip6_src; ip6->ip6_src=t; };
   nth = (struct tcphdr *)(ip6 + 1);
  } else

       {
  { n_long t; t=ip->ip_dst.s_addr; ip->ip_dst.s_addr=ip->ip_src.s_addr; ip->ip_src.s_addr=t; };
  nth = (struct tcphdr *)(ip + 1);
       }
  if (th != nth) {





   nth->th_sport = th->th_sport;
   nth->th_dport = th->th_dport;
  }
  { n_short t; t=nth->th_dport; nth->th_dport=nth->th_sport; nth->th_sport=t; };

 }

 if (isipv6) {
  ip6->ip6_ctlun.ip6_un1.ip6_un1_flow = 0;
  ip6->ip6_ctlun.ip6_un2_vfc = 0x60;
  ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 6;
  ip6->ip6_ctlun.ip6_un1.ip6_un1_plen = __bswap16((u_short)(sizeof (struct tcphdr) + tlen))
            ;
  tlen += sizeof (struct ip6_hdr) + sizeof (struct tcphdr);
 } else

      {
 tlen += sizeof (struct tcpiphdr);
 ip->ip_len = tlen;
 ip->ip_ttl = global_ip_defttl[get_stack_id()];
  if (global_path_mtu_discovery[get_stack_id()])
   ip->ip_off |= 0x4000;
      }
 m->m_hdr.mh_len = tlen;
 m->M_dat.MH.MH_pkthdr.len = tlen;
 m->M_dat.MH.MH_pkthdr.rcvif = ((void *)0);
# 535 "freebsd5/netinet/tcp_subr.c"
 nth->th_seq = __bswap32(seq);
 nth->th_ack = __bswap32(ack);
 nth->th_x2 = 0;
 nth->th_off = sizeof (struct tcphdr) >> 2;
 nth->th_flags = flags;
 if (tp != ((void *)0))
  nth->th_win = __bswap16((u_short) (win >> tp->rcv_scale));
 else
  nth->th_win = __bswap16((u_short)win);
 nth->th_urp = 0;

 if (isipv6) {
  nth->th_sum = 0;
  nth->th_sum = in6_cksum(m, 6,
     sizeof(struct ip6_hdr),
     tlen - sizeof(struct ip6_hdr));
  ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim = in6_selecthlim(tp != ((void *)0) ? tp->t_inpcb :
      ((void *)0), ((void *)0));
 } else

      {
        nth->th_sum = in_pseudo(ip->ip_src.s_addr, ip->ip_dst.s_addr,
     __bswap16((u_short)(tlen - sizeof(struct ip) + ip->ip_p)));
        m->M_dat.MH.MH_pkthdr.csum_flags = 0x0002;
        m->M_dat.MH.MH_pkthdr.csum_data = ((size_t)(&((struct tcphdr *)0)->th_sum));
      }





 if (isipv6)
  (void) ip6_output(m, ((void *)0), ((void *)0), ipflags, ((void *)0), ((void *)0), inp);
 else

 (void) ip_output(m, ((void *)0), ((void *)0), ipflags, ((void *)0), inp);
}







struct tcpcb *
tcp_newtcpcb(inp)
 struct inpcb *inp;
{
 struct tcpcb_mem *tm;
 struct tcpcb *tp;

 int isipv6 = (inp->inp_vflag & 0x2) != 0;

 int callout_flag;

 tm = uma_zalloc(global_tcpcb_zone[get_stack_id()], 0x0001 | 0x0100);
 if (tm == ((void *)0))
  return (((void *)0));
 tp = &tm->tcb;

 tp->t_maxseg = tp->t_maxopd =

  isipv6 ? global_tcp_v6mssdflt[get_stack_id()] :

  global_tcp_mssdflt[get_stack_id()];







 callout_flag = global_debug_mpsafenet[get_stack_id()] ? 0x0008 : 0;
 callout_init(tp->tt_rexmt = &tm->tcpcb_mem_rexmt, callout_flag);
 callout_init(tp->tt_persist = &tm->tcpcb_mem_persist, callout_flag);
 callout_init(tp->tt_keep = &tm->tcpcb_mem_keep, callout_flag);
 callout_init(tp->tt_2msl = &tm->tcpcb_mem_2msl, callout_flag);
 callout_init(tp->tt_delack = &tm->tcpcb_mem_delack, callout_flag);

 if (global_tcp_do_rfc1323[get_stack_id()])
  tp->t_flags = (0x000020|0x000080);
 if (global_tcp_do_rfc1644[get_stack_id()])
  tp->t_flags |= 0x002000;
 tp->sack_enable = global_tcp_do_sack[get_stack_id()];
 tp->t_inpcb = inp;





 tp->t_srtt = 0;
 tp->t_rttvar = ((( 3*global_hz[get_stack_id()]) - 0) << 4) / 4;
 tp->t_rttmin = global_tcp_rexmit_min[get_stack_id()];
 tp->t_rxtcur = ( 3*global_hz[get_stack_id()]);
 tp->snd_cwnd = 65535 << 14;
 tp->snd_bwnd = 65535 << 14;
 tp->snd_ssthresh = 65535 << 14;
 tp->t_rcvtime = global_ticks[get_stack_id()];
 tp->t_bw_rtttime = global_ticks[get_stack_id()];





 inp->inp_ip_ttl = global_ip_defttl[get_stack_id()];
 inp->inp_ppcb = (caddr_t)tp;
 return (tp);
}






struct tcpcb *
tcp_drop(tp, errno)
 register struct tcpcb *tp;
 int errno;
{
 struct socket *so = tp->t_inpcb->inp_socket;

 if (((tp->t_state) >= 3)) {
  tp->t_state = 0;
  (void) tcp_output(tp);
  global_tcpstat[get_stack_id()].tcps_drops++;
 } else
  global_tcpstat[get_stack_id()].tcps_conndrops++;
 if (errno == 60 && tp->t_softerror)
  errno = tp->t_softerror;
 so->so_error = errno;
 return (tcp_close(tp));
}

static void
tcp_discardcb(tp)
 struct tcpcb *tp;
{
 struct tseg_qent *q;
 struct inpcb *inp = tp->t_inpcb;
 struct socket *so = inp->inp_socket;

 int isipv6 = (inp->inp_vflag & 0x2) != 0;






 _callout_stop_safe(tp->tt_rexmt, 0);
 _callout_stop_safe(tp->tt_persist, 0);
 _callout_stop_safe(tp->tt_keep, 0);
 _callout_stop_safe(tp->tt_2msl, 0);
 _callout_stop_safe(tp->tt_delack, 0);
# 699 "freebsd5/netinet/tcp_subr.c"
 if (tp->t_rttupdated >= 4) {
  struct hc_metrics_lite metrics;
  u_long ssthresh;

  bzero(&metrics, sizeof(metrics));






  ssthresh = tp->snd_ssthresh;
  if (ssthresh != 0 && ssthresh < so->so_snd.sb_hiwat / 2) {




   ssthresh = (ssthresh + tp->t_maxseg / 2) / tp->t_maxseg;
   if (ssthresh < 2)
    ssthresh = 2;
   ssthresh *= (u_long)(tp->t_maxseg +

          (isipv6 ? sizeof (struct ip6_hdr) +
            sizeof (struct tcphdr) :

           sizeof (struct tcpiphdr)

           )

          );
  } else
   ssthresh = 0;
  metrics.rmx_ssthresh = ssthresh;

  metrics.rmx_rtt = tp->t_srtt;
  metrics.rmx_rttvar = tp->t_rttvar;

  metrics.rmx_bandwidth = tp->snd_bandwidth;
  metrics.rmx_cwnd = tp->snd_cwnd;
  metrics.rmx_sendpipe = 0;
  metrics.rmx_recvpipe = 0;

  tcp_hc_update(&inp->inp_inc, &metrics);
 }


 while ((q = ((&tp->t_segq)->lh_first)) != ((void *)0)) {
  do { if ((((q))->tqe_q.le_next) != ((void *)0)) (((q))->tqe_q.le_next)->tqe_q.le_prev = (q)->tqe_q.le_prev; *(q)->tqe_q.le_prev = (((q))->tqe_q.le_next); } while (0);
  m_freem(q->tqe_m);
  uma_zfree(global_tcp_reass_zone[get_stack_id()], q);
  tp->t_segqlen--;
  global_tcp_reass_qsize[get_stack_id()]--;
 }
 tcp_free_sackholes(tp);
 inp->inp_ppcb = ((void *)0);
 tp->t_inpcb = ((void *)0);
 uma_zfree(global_tcpcb_zone[get_stack_id()], tp);
 soisdisconnected(so);
}







struct tcpcb *
tcp_close(tp)
 struct tcpcb *tp;
{
 struct inpcb *inp = tp->t_inpcb;

 struct socket *so = inp->inp_socket;


 tcp_discardcb(tp);

 if ((so->so_proto->pr_domain->dom_family == 28))
  in6_pcbdetach(inp);
 else

  in_pcbdetach(inp);
 global_tcpstat[get_stack_id()].tcps_closed++;
 return (((void *)0));
}

void
tcp_drain()
{
 if (global_do_tcpdrain[get_stack_id()])
 {
  struct inpcb *inpb;
  struct tcpcb *tcpb;
  struct tseg_qent *te;
# 802 "freebsd5/netinet/tcp_subr.c"
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  for ((inpb) = ((((*_GLOBAL_tcbinfo_55_A[get_stack_id()]).listhead))->lh_first); (inpb); (inpb) = (((inpb))->inp_list.le_next)) {
   if (inpb->inp_vflag & 0x8)
    continue;
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(inpb)->inp_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(inpb)->inp_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if ((tcpb = ((struct tcpcb *)(inpb)->inp_ppcb)) != ((void *)0)) {
    while ((te = ((&tcpb->t_segq)->lh_first))
               != ((void *)0)) {
     do { if ((((te))->tqe_q.le_next) != ((void *)0)) (((te))->tqe_q.le_next)->tqe_q.le_prev = (te)->tqe_q.le_prev; *(te)->tqe_q.le_prev = (((te))->tqe_q.le_next); } while (0);
     m_freem(te->tqe_m);
     uma_zfree(global_tcp_reass_zone[get_stack_id()], te);
     tcpb->t_segqlen--;
     global_tcp_reass_qsize[get_stack_id()]--;
    }
   }
   do { if (!atomic_cmpset_ptr(&((((&(inpb)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inpb)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  }
  do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 }
}
# 831 "freebsd5/netinet/tcp_subr.c"
static struct inpcb *
tcp_notify(inp, error)
 struct inpcb *inp;
 int error;
{
 struct tcpcb *tp = (struct tcpcb *)inp->inp_ppcb;
# 845 "freebsd5/netinet/tcp_subr.c"
 if (tp->t_state == 4 &&
     (error == 65 || error == 51 ||
      error == 64)) {
  return inp;
 } else if (tp->t_state < 4 && tp->t_rxtshift > 3 &&
     tp->t_softerror) {
  tcp_drop(tp, error);
  return (struct inpcb *)0;
 } else {
  tp->t_softerror = error;
  return inp;
 }





}

static int
tcp_pcblist(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 int error, i, n, s;
 struct inpcb *inp, **inp_list;
 inp_gen_t gencnt;
 struct xinpgen xig;





 if (req->oldptr == ((void *)0)) {
  n = (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_count;
  req->oldidx = 2 * (sizeof xig)
   + (n + n/8) * sizeof(struct xtcpcb);
  return 0;
 }

 if (req->newptr != ((void *)0))
  return 1;




 s = splnet();
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 gencnt = (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_gencnt;
 n = (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_count;
 do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);

 error = sysctl_wire_old_buffer(req, 2 * (sizeof xig)
  + n * sizeof(struct xtcpcb));
 if (error != 0)
  return (error);

 xig.xig_len = sizeof xig;
 xig.xig_count = n;
 xig.xig_gen = gencnt;
 xig.xig_sogen = global_so_gencnt[get_stack_id()];
 error = (req->oldfunc)(req, &xig, sizeof xig);
 if (error)
  return error;

 inp_list = nsc_malloc(n * sizeof *inp_list, (*_GLOBAL_M_TEMP_22_A[get_stack_id()]), 0x0002);
 if (inp_list == ((void *)0))
  return 12;

 s = splnet();
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for (inp = (((*_GLOBAL_tcbinfo_55_A[get_stack_id()]).listhead)->lh_first), i = 0; inp != ((void *)0) && i < n;
      inp = ((inp)->inp_list.le_next)) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(inp)->inp_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  if (inp->inp_gencnt <= gencnt) {





   if (inp->inp_vflag & 0x8)
    error = cr_cansee(req->td->td_ucred,
        ((struct tcptw *)(inp)->inp_ppcb)->tw_cred);
   else
    error = cr_canseesocket(req->td->td_ucred,
        inp->inp_socket);
   if (error == 0)
    inp_list[i++] = inp;
  }
  do { if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inp)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 }
 do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
 n = i;

 error = 0;
 for (i = 0; i < n; i++) {
  inp = inp_list[i];
  if (inp->inp_gencnt <= gencnt) {
   struct xtcpcb xt;
   caddr_t inp_ppcb;
   xt.xt_len = sizeof xt;

   bcopy(inp, &xt.xt_inp, sizeof *inp);
   inp_ppcb = inp->inp_ppcb;
   if (inp_ppcb == ((void *)0))
    bzero((char *) &xt.xt_tp, sizeof xt.xt_tp);
   else if (inp->inp_vflag & 0x8) {
    bzero((char *) &xt.xt_tp, sizeof xt.xt_tp);
    xt.xt_tp.t_state = 10;
   } else
    bcopy(inp_ppcb, &xt.xt_tp, sizeof xt.xt_tp);
   if (inp->inp_socket != ((void *)0))
    sotoxsocket(inp->inp_socket, &xt.xt_socket);
   else {
    bzero(&xt.xt_socket, sizeof xt.xt_socket);
    xt.xt_socket.xso_protocol = 6;
   }
   xt.xt_inp.inp_gencnt = inp->inp_gencnt;
   error = (req->oldfunc)(req, &xt, sizeof xt);
  }
 }
 if (!error) {







  s = splnet();
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  xig.xig_gen = (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_gencnt;
  xig.xig_sogen = global_so_gencnt[get_stack_id()];
  xig.xig_count = (*_GLOBAL_tcbinfo_55_A[get_stack_id()]).ipi_count;
  do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  splx(s);
  error = (req->oldfunc)(req, &xig, sizeof xig);
 }
 nsc_free(inp_list, (*_GLOBAL_M_TEMP_22_A[get_stack_id()]));
 return error;
}

typedef  struct sysctl_oid   _GLOBAL_366_T; static  _GLOBAL_366_T  global_sysctl___net_inet_tcp_pcblist[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , 11  , ( 0x80000000 )   , 0  , 0  , "pcblist"  , tcp_pcblist  , "S,xtcpcb"  , 0  , "List of active TCP connections"  } ,  };   
 
# 987 "freebsd5/netinet/tcp_subr.c"
   
 
# 987 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_367_T; static  _GLOBAL_367_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[0] ;static  _GLOBAL_367_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[1] ;static  _GLOBAL_367_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[2] ;static  _GLOBAL_367_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[3] ;static  _GLOBAL_367_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[4] ;static  _GLOBAL_367_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[5] ;static  _GLOBAL_367_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[6] ;static  _GLOBAL_367_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[7] ;static  _GLOBAL_367_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[8] ;static  _GLOBAL_367_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[9] ;static  _GLOBAL_367_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[10] ;static  _GLOBAL_367_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[11] ;static  _GLOBAL_367_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[12] ;static  _GLOBAL_367_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[13] ;static  _GLOBAL_367_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[14] ;static  _GLOBAL_367_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[15] ;static  _GLOBAL_367_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[16] ;static  _GLOBAL_367_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[17] ;static  _GLOBAL_367_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[18] ;static  _GLOBAL_367_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[19] ;static  _GLOBAL_367_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[20] ;static  _GLOBAL_367_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[21] ;static  _GLOBAL_367_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[22] ;static  _GLOBAL_367_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[23] ;static  _GLOBAL_367_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[24] ;static  _GLOBAL_367_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[25] ;static  _GLOBAL_367_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[26] ;static  _GLOBAL_367_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[27] ;static  _GLOBAL_367_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[28] ;static  _GLOBAL_367_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[29] ;static  _GLOBAL_367_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[30] ;static  _GLOBAL_367_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[31] ;static  _GLOBAL_367_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[32] ;static  _GLOBAL_367_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[33] ;static  _GLOBAL_367_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[34] ;static  _GLOBAL_367_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[35] ;static  _GLOBAL_367_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[36] ;static  _GLOBAL_367_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[37] ;static  _GLOBAL_367_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[38] ;static  _GLOBAL_367_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[39] ;static  _GLOBAL_367_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[40] ;static  _GLOBAL_367_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[41] ;static  _GLOBAL_367_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[42] ;static  _GLOBAL_367_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[43] ;static  _GLOBAL_367_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[44] ;static  _GLOBAL_367_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[45] ;static  _GLOBAL_367_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[46] ;static  _GLOBAL_367_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[47] ;static  _GLOBAL_367_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[48] ;static  _GLOBAL_367_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_pcblist __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_pcblist[49] ;    
 
# 987 "freebsd5/netinet/tcp_subr.c"
    
                                                               

static int
tcp_getcred(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 struct xucred xuc;
 struct sockaddr_in addrs[2];
 struct inpcb *inp;
 int error, s;

 error = suser_cred(req->td->td_ucred, 1);
 if (error)
  return (error);
 error = (req->newfunc)(req, addrs, sizeof(addrs));
 if (error)
  return (error);
 s = splnet();
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 inp = in_pcblookup_hash(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), addrs[1].sin_addr, addrs[1].sin_port,
     addrs[0].sin_addr, addrs[0].sin_port, 0, ((void *)0));
 if (inp == ((void *)0)) {
  error = 2;
  goto outunlocked;
 }
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(inp)->inp_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (inp->inp_socket == ((void *)0)) {
  error = 2;
  goto out;
 }
 error = cr_canseesocket(req->td->td_ucred, inp->inp_socket);
 if (error)
  goto out;
 cru2x(inp->inp_socket->so_cred, &xuc);
out:
 do { if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inp)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
outunlocked:
 do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
 if (error == 0)
  error = (req->oldfunc)(req, &xuc, sizeof(struct xucred));
 return (error);
}

typedef  struct sysctl_oid   _GLOBAL_368_T; static  _GLOBAL_368_T  global_sysctl___net_inet_tcp_getcred[NUM_STACKS] = {  { & global_sysctl__net_inet_tcp_children[0]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[1]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[2]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[3]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[4]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[5]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[6]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[7]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[8]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[9]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[10]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[11]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[12]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[13]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[14]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[15]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[16]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[17]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[18]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[19]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[20]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[21]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[22]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[23]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[24]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[25]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[26]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[27]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[28]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[29]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[30]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[31]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[32]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[33]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[34]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[35]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[36]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[37]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[38]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[39]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[40]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[41]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[42]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[43]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[44]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[45]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[46]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[47]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[48]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  { & global_sysctl__net_inet_tcp_children[49]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP connection"  } ,  };   

 
# 1031 "freebsd5/netinet/tcp_subr.c"
   

 
# 1031 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_369_T; static  _GLOBAL_369_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[0] ;static  _GLOBAL_369_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[1] ;static  _GLOBAL_369_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[2] ;static  _GLOBAL_369_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[3] ;static  _GLOBAL_369_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[4] ;static  _GLOBAL_369_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[5] ;static  _GLOBAL_369_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[6] ;static  _GLOBAL_369_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[7] ;static  _GLOBAL_369_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[8] ;static  _GLOBAL_369_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[9] ;static  _GLOBAL_369_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[10] ;static  _GLOBAL_369_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[11] ;static  _GLOBAL_369_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[12] ;static  _GLOBAL_369_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[13] ;static  _GLOBAL_369_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[14] ;static  _GLOBAL_369_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[15] ;static  _GLOBAL_369_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[16] ;static  _GLOBAL_369_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[17] ;static  _GLOBAL_369_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[18] ;static  _GLOBAL_369_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[19] ;static  _GLOBAL_369_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[20] ;static  _GLOBAL_369_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[21] ;static  _GLOBAL_369_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[22] ;static  _GLOBAL_369_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[23] ;static  _GLOBAL_369_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[24] ;static  _GLOBAL_369_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[25] ;static  _GLOBAL_369_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[26] ;static  _GLOBAL_369_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[27] ;static  _GLOBAL_369_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[28] ;static  _GLOBAL_369_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[29] ;static  _GLOBAL_369_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[30] ;static  _GLOBAL_369_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[31] ;static  _GLOBAL_369_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[32] ;static  _GLOBAL_369_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[33] ;static  _GLOBAL_369_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[34] ;static  _GLOBAL_369_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[35] ;static  _GLOBAL_369_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[36] ;static  _GLOBAL_369_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[37] ;static  _GLOBAL_369_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[38] ;static  _GLOBAL_369_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[39] ;static  _GLOBAL_369_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[40] ;static  _GLOBAL_369_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[41] ;static  _GLOBAL_369_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[42] ;static  _GLOBAL_369_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[43] ;static  _GLOBAL_369_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[44] ;static  _GLOBAL_369_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[45] ;static  _GLOBAL_369_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[46] ;static  _GLOBAL_369_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[47] ;static  _GLOBAL_369_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[48] ;static  _GLOBAL_369_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_tcp_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_tcp_getcred[49] ;    

 
# 1031 "freebsd5/netinet/tcp_subr.c"
    

                                                                  


static int
tcp6_getcred(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 struct xucred xuc;
 struct sockaddr_in6 addrs[2];
 struct inpcb *inp;
 int error, s, mapped = 0;

 error = suser_cred(req->td->td_ucred, 1);
 if (error)
  return (error);
 error = (req->newfunc)(req, addrs, sizeof(addrs));
 if (error)
  return (error);
 if (((*(const u_int32_t *)(const void *)(&(&addrs[0].sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&addrs[0].sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&addrs[0].sin6_addr)->__u6_addr.__u6_addr8[8]) == __bswap32(0x0000ffff)))) {
  if (((*(const u_int32_t *)(const void *)(&(&addrs[1].sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&addrs[1].sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&addrs[1].sin6_addr)->__u6_addr.__u6_addr8[8]) == __bswap32(0x0000ffff))))
   mapped = 1;
  else
   return (22);
 }
 s = splnet();
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (mapped == 1)
  inp = in_pcblookup_hash(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]),
   *(struct in_addr *)&addrs[1].sin6_addr.__u6_addr.__u6_addr8[12],
   addrs[1].sin6_port,
   *(struct in_addr *)&addrs[0].sin6_addr.__u6_addr.__u6_addr8[12],
   addrs[0].sin6_port,
   0, ((void *)0));
 else
  inp = in6_pcblookup_hash(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), &addrs[1].sin6_addr,
     addrs[1].sin6_port,
     &addrs[0].sin6_addr, addrs[0].sin6_port,
     0, ((void *)0));
 if (inp == ((void *)0)) {
  error = 2;
  goto outunlocked;
 }
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(inp)->inp_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (inp->inp_socket == ((void *)0)) {
  error = 2;
  goto out;
 }
 error = cr_canseesocket(req->td->td_ucred, inp->inp_socket);
 if (error)
  goto out;
 cru2x(inp->inp_socket->so_cred, &xuc);
out:
 do { if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inp)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
outunlocked:
 do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
 if (error == 0)
  error = (req->oldfunc)(req, &xuc, sizeof(struct xucred));
 return (error);
}

typedef  struct sysctl_oid   _GLOBAL_370_T; static  _GLOBAL_370_T  global_sysctl___net_inet6_tcp6_getcred[NUM_STACKS] = {  { & global_sysctl__net_inet6_tcp6_children[0]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[1]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[2]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[3]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[4]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[5]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[6]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[7]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[8]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[9]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[10]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[11]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[12]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[13]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[14]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[15]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[16]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[17]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[18]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[19]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[20]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[21]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[22]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[23]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[24]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[25]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[26]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[27]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[28]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[29]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[30]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[31]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[32]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[33]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[34]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[35]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[36]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[37]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[38]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[39]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[40]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[41]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[42]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[43]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[44]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[45]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[46]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[47]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[48]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  { & global_sysctl__net_inet6_tcp6_children[49]  , { 0 }   , ( - 1  )   , ( 5 | ( 0x80000000 | 0x40000000  )   | 0x04000000  )   , 0  , 0  , "getcred"  , tcp6_getcred  , "S,xucred"  , 0  , "Get the xucred of a TCP6 connection"  } ,  };   

 
# 1093 "freebsd5/netinet/tcp_subr.c"
   

 
# 1093 "freebsd5/netinet/tcp_subr.c"
               typedef  void const   _GLOBAL_371_T; static  _GLOBAL_371_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[0] ;static  _GLOBAL_371_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[1] ;static  _GLOBAL_371_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[2] ;static  _GLOBAL_371_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[3] ;static  _GLOBAL_371_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[4] ;static  _GLOBAL_371_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[5] ;static  _GLOBAL_371_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[6] ;static  _GLOBAL_371_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[7] ;static  _GLOBAL_371_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[8] ;static  _GLOBAL_371_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[9] ;static  _GLOBAL_371_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[10] ;static  _GLOBAL_371_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[11] ;static  _GLOBAL_371_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[12] ;static  _GLOBAL_371_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[13] ;static  _GLOBAL_371_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[14] ;static  _GLOBAL_371_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[15] ;static  _GLOBAL_371_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[16] ;static  _GLOBAL_371_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[17] ;static  _GLOBAL_371_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[18] ;static  _GLOBAL_371_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[19] ;static  _GLOBAL_371_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[20] ;static  _GLOBAL_371_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[21] ;static  _GLOBAL_371_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[22] ;static  _GLOBAL_371_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[23] ;static  _GLOBAL_371_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[24] ;static  _GLOBAL_371_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[25] ;static  _GLOBAL_371_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[26] ;static  _GLOBAL_371_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[27] ;static  _GLOBAL_371_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[28] ;static  _GLOBAL_371_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[29] ;static  _GLOBAL_371_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[30] ;static  _GLOBAL_371_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[31] ;static  _GLOBAL_371_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[32] ;static  _GLOBAL_371_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[33] ;static  _GLOBAL_371_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[34] ;static  _GLOBAL_371_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[35] ;static  _GLOBAL_371_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[36] ;static  _GLOBAL_371_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[37] ;static  _GLOBAL_371_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[38] ;static  _GLOBAL_371_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[39] ;static  _GLOBAL_371_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[40] ;static  _GLOBAL_371_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[41] ;static  _GLOBAL_371_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[42] ;static  _GLOBAL_371_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[43] ;static  _GLOBAL_371_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[44] ;static  _GLOBAL_371_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[45] ;static  _GLOBAL_371_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[46] ;static  _GLOBAL_371_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[47] ;static  _GLOBAL_371_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[48] ;static  _GLOBAL_371_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet6_tcp6_getcred __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_tcp6_getcred[49] ;    

 
# 1093 "freebsd5/netinet/tcp_subr.c"
    

                                                                    



void
tcp_ctlinput(cmd, sa, vip)
 int cmd;
 struct sockaddr *sa;
 void *vip;
{
 struct ip *ip = vip;
 struct tcphdr *th;
 struct in_addr faddr;
 struct inpcb *inp;
 struct tcpcb *tp;
 struct inpcb *(*notify)(struct inpcb *, int) = tcp_notify;
 tcp_seq icmp_seq;
 int s;

 faddr = ((struct sockaddr_in *)sa)->sin_addr;
 if (sa->sa_family != 2 || faddr.s_addr == (u_int32_t)0x00000000)
  return;

 if (cmd == 4)
  notify = tcp_quench;
 else if (global_icmp_may_rst[get_stack_id()] && (cmd == 21 ||
  cmd == 11 || cmd == 18) && ip)
  notify = tcp_drop_syn_sent;
 else if (cmd == 5)
  notify = tcp_mtudisc;



 else if (((cmd) >= 14 && (cmd) <= 17))
  return;





 else if (cmd == 6)
  ip = ((void *)0);
 else if ((unsigned)cmd >= 22 || (*_GLOBAL_inetctlerrmap_47_A[get_stack_id()])[cmd] == 0)
  return;
 if (ip != ((void *)0)) {
  s = splnet();
  th = (struct tcphdr *)((caddr_t)ip
           + (ip->ip_hl << 2));
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  inp = in_pcblookup_hash(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), faddr, th->th_dport,
      ip->ip_src, th->th_sport, 0, ((void *)0));
  if (inp != ((void *)0)) {
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(inp)->inp_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if (inp->inp_socket != ((void *)0)) {
    icmp_seq = __bswap32(th->th_seq);
    tp = ((struct tcpcb *)(inp)->inp_ppcb);
    if (((int)((icmp_seq)-(tp->snd_una)) >= 0) &&
         ((int)((icmp_seq)-(tp->snd_max)) < 0))
     inp = (*notify)(inp, (*_GLOBAL_inetctlerrmap_47_A[get_stack_id()])[cmd]);
   }
   if (inp != ((void *)0))
    do { if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inp)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  } else {
   struct in_conninfo inc;

   inc.inc_ie.ie_fport = th->th_dport;
   inc.inc_ie.ie_lport = th->th_sport;
   inc.inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4 = faddr;
   inc.inc_ie.ie_dependladdr.ie46_local.ia46_addr4 = ip->ip_src;

   inc.inc_flags = 0;

   syncache_unreach(&inc, th);
  }
  do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  splx(s);
 } else
  in_pcbnotifyall(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), faddr, (*_GLOBAL_inetctlerrmap_47_A[get_stack_id()])[cmd], notify);
}


void
tcp6_ctlinput(cmd, sa, d)
 int cmd;
 struct sockaddr *sa;
 void *d;
{
 struct tcphdr th;
 struct inpcb *(*notify)(struct inpcb *, int) = tcp_notify;
 struct ip6_hdr *ip6;
 struct mbuf *m;
 struct ip6ctlparam *ip6cp = ((void *)0);
 const struct sockaddr_in6 *sa6_src = ((void *)0);
 int off;
 struct tcp_portonly {
  u_int16_t th_sport;
  u_int16_t th_dport;
 } *thp;

 if (sa->sa_family != 28 ||
     sa->sa_len != sizeof(struct sockaddr_in6))
  return;

 if (cmd == 4)
  notify = tcp_quench;
 else if (cmd == 5)
  notify = tcp_mtudisc;
 else if (!((cmd) >= 14 && (cmd) <= 17) &&
   ((unsigned)cmd >= 22 || (*_GLOBAL_inet6ctlerrmap_49_A[get_stack_id()])[cmd] == 0))
  return;


 if (d != ((void *)0)) {
  ip6cp = (struct ip6ctlparam *)d;
  m = ip6cp->ip6c_m;
  ip6 = ip6cp->ip6c_ip6;
  off = ip6cp->ip6c_off;
  sa6_src = ip6cp->ip6c_src;
 } else {
  m = ((void *)0);
  ip6 = ((void *)0);
  off = 0;
  sa6_src = &global_sa6_any[get_stack_id()];
 }

 if (ip6 != ((void *)0)) {
  struct in_conninfo inc;






  if (m->M_dat.MH.MH_pkthdr.len < off + sizeof(*thp))
   return;

  bzero(&th, sizeof(th));
  m_copydata(m, off, sizeof(*thp), (caddr_t)&th);

  in6_pcbnotify(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), sa, th.th_dport,
      (struct sockaddr *)ip6cp->ip6c_src,
      th.th_sport, cmd, ((void *)0), notify);

  inc.inc_ie.ie_fport = th.th_dport;
  inc.inc_ie.ie_lport = th.th_sport;
  inc.inc_ie.ie_dependfaddr.ie6_foreign = ((struct sockaddr_in6 *)sa)->sin6_addr;
  inc.inc_ie.ie_dependladdr.ie6_local = ip6cp->ip6c_src->sin6_addr;
  inc.inc_flags = 1;
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  syncache_unreach(&inc, &th);
  do { if (!atomic_cmpset_ptr(&((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]))->ipi_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 } else
  in6_pcbnotify(&(*_GLOBAL_tcbinfo_55_A[get_stack_id()]), sa, 0, (const struct sockaddr *)sa6_src,
         0, cmd, ((void *)0), notify);
}
# 1298 "freebsd5/netinet/tcp_subr.c"
typedef  u_char _GLOBAL_372_T;  _GLOBAL_372_T  _GLOBAL_0_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_1_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_2_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_3_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_4_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_5_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_6_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_7_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_8_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_9_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_10_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_11_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_12_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_13_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_14_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_15_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_16_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_17_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_18_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_19_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_20_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_21_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_22_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_23_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_24_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_25_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_26_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_27_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_28_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_29_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_30_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_31_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_32_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_33_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_34_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_35_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_36_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_37_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_38_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_39_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_40_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_41_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_42_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_43_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_44_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_45_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_46_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_47_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_48_isn_secret_I [ 32 ] ;  _GLOBAL_372_T  _GLOBAL_49_isn_secret_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_isn_secret_I) *_GLOBAL_isn_secret_57_A[NUM_STACKS] = { &_GLOBAL_0_isn_secret_I, &_GLOBAL_1_isn_secret_I, &_GLOBAL_2_isn_secret_I, &_GLOBAL_3_isn_secret_I, &_GLOBAL_4_isn_secret_I, &_GLOBAL_5_isn_secret_I, &_GLOBAL_6_isn_secret_I, &_GLOBAL_7_isn_secret_I, &_GLOBAL_8_isn_secret_I, &_GLOBAL_9_isn_secret_I, &_GLOBAL_10_isn_secret_I, &_GLOBAL_11_isn_secret_I, &_GLOBAL_12_isn_secret_I, &_GLOBAL_13_isn_secret_I, &_GLOBAL_14_isn_secret_I, &_GLOBAL_15_isn_secret_I, &_GLOBAL_16_isn_secret_I, &_GLOBAL_17_isn_secret_I, &_GLOBAL_18_isn_secret_I, &_GLOBAL_19_isn_secret_I, &_GLOBAL_20_isn_secret_I, &_GLOBAL_21_isn_secret_I, &_GLOBAL_22_isn_secret_I, &_GLOBAL_23_isn_secret_I, &_GLOBAL_24_isn_secret_I, &_GLOBAL_25_isn_secret_I, &_GLOBAL_26_isn_secret_I, &_GLOBAL_27_isn_secret_I, &_GLOBAL_28_isn_secret_I, &_GLOBAL_29_isn_secret_I, &_GLOBAL_30_isn_secret_I, &_GLOBAL_31_isn_secret_I, &_GLOBAL_32_isn_secret_I, &_GLOBAL_33_isn_secret_I, &_GLOBAL_34_isn_secret_I, &_GLOBAL_35_isn_secret_I, &_GLOBAL_36_isn_secret_I, &_GLOBAL_37_isn_secret_I, &_GLOBAL_38_isn_secret_I, &_GLOBAL_39_isn_secret_I, &_GLOBAL_40_isn_secret_I, &_GLOBAL_41_isn_secret_I, &_GLOBAL_42_isn_secret_I, &_GLOBAL_43_isn_secret_I, &_GLOBAL_44_isn_secret_I, &_GLOBAL_45_isn_secret_I, &_GLOBAL_46_isn_secret_I, &_GLOBAL_47_isn_secret_I, &_GLOBAL_48_isn_secret_I, &_GLOBAL_49_isn_secret_I, }; 
typedef  int _GLOBAL_373_T;  _GLOBAL_373_T  global_isn_last_reseed[NUM_STACKS];  
typedef  u_int32_t _GLOBAL_374_T;  _GLOBAL_374_T  global_isn_offset[NUM_STACKS];  _GLOBAL_374_T  global_isn_offset_old[NUM_STACKS];   
typedef  MD5_CTX _GLOBAL_375_T;  _GLOBAL_375_T  global_isn_ctx[NUM_STACKS];  

tcp_seq
tcp_new_isn(tp)
 struct tcpcb *tp;
{
 u_int32_t md5_buffer[4];
 tcp_seq new_isn;


 if ((global_isn_last_reseed[get_stack_id()] == 0) || ((global_tcp_isn_reseed_interval[get_stack_id()] > 0) &&
      (((u_int)global_isn_last_reseed[get_stack_id()] + (u_int)global_tcp_isn_reseed_interval[get_stack_id()]*global_hz[get_stack_id()])
  < (u_int)global_ticks[get_stack_id()]))) {
  read_random(&(*_GLOBAL_isn_secret_57_A[get_stack_id()]), sizeof((*_GLOBAL_isn_secret_57_A[get_stack_id()])));
  global_isn_last_reseed[get_stack_id()] = global_ticks[get_stack_id()];
 }


 MD5Init(&global_isn_ctx[get_stack_id()]);
 MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_fport, sizeof(u_short));
 MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_lport, sizeof(u_short));

 if ((tp->t_inpcb->inp_vflag & 0x2) != 0) {
  MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_dependfaddr.ie6_foreign,
     sizeof(struct in6_addr));
  MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_dependladdr.ie6_local,
     sizeof(struct in6_addr));
 } else

 {
  MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4,
     sizeof(struct in_addr));
  MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &tp->t_inpcb->inp_inc.inc_ie.ie_dependladdr.ie46_local.ia46_addr4,
     sizeof(struct in_addr));
 }
 MD5Update(&global_isn_ctx[get_stack_id()], (u_char *) &(*_GLOBAL_isn_secret_57_A[get_stack_id()]), sizeof((*_GLOBAL_isn_secret_57_A[get_stack_id()])));
 MD5Final((u_char *) &md5_buffer, &global_isn_ctx[get_stack_id()]);
 new_isn = (tcp_seq) md5_buffer[0];
 global_isn_offset[get_stack_id()] += 4096 +
  (arc4random() & (4096 - 1));
 new_isn += global_isn_offset[get_stack_id()];
 return new_isn;
}






static void
tcp_isn_tick(xtp)
 void *xtp;
{
 u_int32_t projected_offset;

 projected_offset = global_isn_offset_old[get_stack_id()] + 1048576 / global_hz[get_stack_id()];

 if (projected_offset > global_isn_offset[get_stack_id()])
  global_isn_offset[get_stack_id()] = projected_offset;

 global_isn_offset_old[get_stack_id()] = global_isn_offset[get_stack_id()];
 callout_reset(&global_isn_callout[get_stack_id()], 1, tcp_isn_tick, ((void *)0));
}





struct inpcb *
tcp_quench(inp, errno)
 struct inpcb *inp;
 int errno;
{
 struct tcpcb *tp = ((struct tcpcb *)(inp)->inp_ppcb);

 if (tp != ((void *)0))
  tp->snd_cwnd = tp->t_maxseg;
 return (inp);
}






struct inpcb *
tcp_drop_syn_sent(inp, errno)
 struct inpcb *inp;
 int errno;
{
 struct tcpcb *tp = ((struct tcpcb *)(inp)->inp_ppcb);

 if (tp != ((void *)0) && tp->t_state == 2) {
  tcp_drop(tp, errno);
  return (struct inpcb *)0;
 }
 return inp;
}







struct inpcb *
tcp_mtudisc(inp, errno)
 struct inpcb *inp;
 int errno;
{
 struct tcpcb *tp = ((struct tcpcb *)(inp)->inp_ppcb);
 struct rmxp_tao tao;
 struct socket *so = inp->inp_socket;
 u_int maxmtu;
 u_int romtu;
 int mss;

 int isipv6;

 bzero(&tao, sizeof(tao));

 if (tp != ((void *)0)) {

  isipv6 = (tp->t_inpcb->inp_vflag & 0x2) != 0;

  maxmtu = tcp_hc_getmtu(&inp->inp_inc);
  romtu =

      isipv6 ? tcp_maxmtu6(&inp->inp_inc) :

      tcp_maxmtu(&inp->inp_inc);
  if (!maxmtu)
   maxmtu = romtu;
  else
   maxmtu = min(maxmtu, romtu);
  if (!maxmtu) {
   tp->t_maxopd = tp->t_maxseg =

    isipv6 ? global_tcp_v6mssdflt[get_stack_id()] :

    global_tcp_mssdflt[get_stack_id()];
   return inp;
  }
  mss = maxmtu -

   (isipv6 ?
    sizeof(struct ip6_hdr) + sizeof(struct tcphdr) :

    sizeof(struct tcpiphdr)

    )

   ;

  if (global_tcp_do_rfc1644[get_stack_id()]) {
   tcp_hc_gettao(&inp->inp_inc, &tao);
   if (tao.tao_mssopt)
    mss = min(mss, tao.tao_mssopt);
  }
# 1477 "freebsd5/netinet/tcp_subr.c"
  if (tp->t_maxopd <= mss)
   return inp;
  tp->t_maxopd = mss;

  if ((tp->t_flags & (0x000080|0x000008)) == 0x000080 &&
      (tp->t_flags & 0x000100) == 0x000100)
   mss -= (10 +2);
  if ((tp->t_flags & (0x002000|0x000008)) == 0x002000 &&
      (tp->t_flags & 0x004000) == 0x004000)
   mss -= (6 +2);

  if (mss > (1 << 11))
   mss &= ~((1 << 11)-1);




  if (so->so_snd.sb_hiwat < mss)
   mss = so->so_snd.sb_hiwat;

  tp->t_maxseg = mss;

  global_tcpstat[get_stack_id()].tcps_mturesent++;
  tp->t_rtttime = 0;
  tp->snd_nxt = tp->snd_una;
  tcp_output(tp);
 }
 return inp;
}







u_long
tcp_maxmtu(inc)
 struct in_conninfo *inc;
{
 struct route sro;
 struct sockaddr_in *dst;
 struct ifnet *ifp;
 u_long maxmtu = 0;

 ;

 bzero(&sro, sizeof(sro));
  if (inc->inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4.s_addr != (u_int32_t)0x00000000) {
         dst = (struct sockaddr_in *)&sro.ro_dst;
  dst->sin_family = 2;
  dst->sin_len = sizeof(*dst);
  dst->sin_addr = inc->inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4;
  rtalloc_ign(&sro, 0x100);
 }
 if (sro.ro_rt != ((void *)0)) {
  ifp = sro.ro_rt->rt_ifp;
  if (sro.ro_rt->rt_rmx.rmx_mtu == 0)
   maxmtu = ifp->if_data.ifi_mtu;
  else
   maxmtu = min(sro.ro_rt->rt_rmx.rmx_mtu, ifp->if_data.ifi_mtu);
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(sro.ro_rt)->rt_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(sro.ro_rt)->rt_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { if ((sro.ro_rt)->rt_refcnt <= 1) rtfree(sro.ro_rt); else { do { ; ; (sro.ro_rt)->rt_refcnt--; } while (0);; do { if (!atomic_cmpset_ptr(&((((&(sro.ro_rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(sro.ro_rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0); } sro.ro_rt = 0; } while (0); } while (0);
 }
 return (maxmtu);
}


u_long
tcp_maxmtu6(inc)
 struct in_conninfo *inc;
{
 struct route_in6 sro6;
 struct ifnet *ifp;
 u_long maxmtu = 0;

 ;

 bzero(&sro6, sizeof(sro6));
  if (!((*(const u_int32_t *)(const void *)(&(&inc->inc_ie.ie_dependfaddr.ie6_foreign)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&inc->inc_ie.ie_dependfaddr.ie6_foreign)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&inc->inc_ie.ie_dependfaddr.ie6_foreign)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&inc->inc_ie.ie_dependfaddr.ie6_foreign)->__u6_addr.__u6_addr8[12]) == 0))) {
  sro6.ro_dst.sin6_family = 28;
  sro6.ro_dst.sin6_len = sizeof(struct sockaddr_in6);
  sro6.ro_dst.sin6_addr = inc->inc_ie.ie_dependfaddr.ie6_foreign;
  rtalloc_ign((struct route *)&sro6, 0x100);
 }
 if (sro6.ro_rt != ((void *)0)) {
  ifp = sro6.ro_rt->rt_ifp;
  if (sro6.ro_rt->rt_rmx.rmx_mtu == 0)
   maxmtu = (((((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu < (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu < (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu : (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu));
  else
   maxmtu = min(sro6.ro_rt->rt_rmx.rmx_mtu,
         (((((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu < (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu < (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(sro6.ro_rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->maxmtu : (sro6.ro_rt->rt_ifp)->if_data.ifi_mtu)));
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(sro6.ro_rt)->rt_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(sro6.ro_rt)->rt_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { if ((sro6.ro_rt)->rt_refcnt <= 1) rtfree(sro6.ro_rt); else { do { ; ; (sro6.ro_rt)->rt_refcnt--; } while (0);; do { if (!atomic_cmpset_ptr(&((((&(sro6.ro_rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(sro6.ro_rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0); } sro6.ro_rt = 0; } while (0); } while (0);
 }

 return (maxmtu);
}
# 1624 "freebsd5/netinet/tcp_subr.c"
void
tcp_twstart(tp)
 struct tcpcb *tp;
{
 struct tcptw *tw;
 struct inpcb *inp;
 int tw_time, acknow;
 struct socket *so;

 tw = uma_zalloc(global_tcptw_zone[get_stack_id()], 0x0001);
 if (tw == ((void *)0)) {
  tw = tcp_timer_2msl_tw(1);
  if (tw == ((void *)0)) {
   tcp_close(tp);
   return;
  }
 }
 inp = tp->t_inpcb;
 tw->tw_inpcb = inp;




 tw->last_win = (tp->rcv_adv - tp->rcv_nxt) >> tp->rcv_scale;




        if ((tp->t_flags & (0x000080|0x000100|0x000008)) ==
            (0x000080|0x000100))
  tw->t_recent = tp->ts_recent;
 else
  tw->t_recent = 0;

 tw->snd_nxt = tp->snd_nxt;
 tw->rcv_nxt = tp->rcv_nxt;
 tw->iss = tp->iss;
 tw->irs = tp->irs;
 tw->cc_recv = tp->cc_recv;
 tw->cc_send = tp->cc_send;
 tw->t_starttime = tp->t_starttime;
 tw->tw_time = 0;







 if (tp->cc_recv != 0 && (global_ticks[get_stack_id()] - tp->t_starttime) < global_tcp_msl[get_stack_id()]) {
  tw_time = tp->t_rxtcur * 8;

  acknow = 1;
 } else {
  tw_time = 2 * global_tcp_msl[get_stack_id()];
  acknow = tp->t_flags & 0x000001;
 }
 tcp_discardcb(tp);
 so = inp->inp_socket;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_accept_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 so->so_pcb = ((void *)0);
 tw->tw_cred = crhold(so->so_cred);
 tw->tw_so_options = so->so_options;
 do { ; ; if ((so)->so_count == 0) sofree(so); else { do { if (!atomic_cmpset_ptr(&(((((&(&(so)->so_rcv)->sb_mtx)))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep(((((&(&(so)->so_rcv)->sb_mtx)))), ((0)), (((void *)0)), (0)); } while (0); do { if (!atomic_cmpset_ptr(&((((&global_accept_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_accept_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } } while(0);
 inp->inp_socket = ((void *)0);
 if (acknow)
  tcp_twrespond(tw, 0x10);
 inp->inp_ppcb = (caddr_t)tw;
 inp->inp_vflag |= 0x8;
 tcp_timer_2msl_reset(tw, tw_time);
 do { if (!atomic_cmpset_ptr(&((((&(inp)->inp_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(inp)->inp_mtx))), ((0)), (((void *)0)), (0)); } while (0);
}
# 1713 "freebsd5/netinet/tcp_subr.c"
int
tcp_twrecycleable(struct tcptw *tw)
{
 tcp_seq new_iss = tw->iss;
 tcp_seq new_irs = tw->irs;

 new_iss += (global_ticks[get_stack_id()] - tw->t_starttime) * (1048576 / global_hz[get_stack_id()]);
 new_irs += (global_ticks[get_stack_id()] - tw->t_starttime) * (250000 / global_hz[get_stack_id()]);

 if (((int)((new_iss)-(tw->snd_nxt)) > 0) && ((int)((new_irs)-(tw->rcv_nxt)) > 0))
  return 1;
 else
  return 0;
}

struct tcptw *
tcp_twclose(struct tcptw *tw, int reuse)
{
 struct inpcb *inp;

 inp = tw->tw_inpcb;
 tw->tw_inpcb = ((void *)0);
 tcp_timer_2msl_stop(tw);
 inp->inp_ppcb = ((void *)0);

 if (inp->inp_vflag & 0x4)
  in6_pcbdetach(inp);
 else

  in_pcbdetach(inp);
 global_tcpstat[get_stack_id()].tcps_closed++;
 crfree(tw->tw_cred);
 tw->tw_cred = ((void *)0);
 if (reuse)
  return (tw);
 uma_zfree(global_tcptw_zone[get_stack_id()], tw);
 return (((void *)0));
}

int
tcp_twrespond(struct tcptw *tw, int flags)
{
 struct inpcb *inp = tw->tw_inpcb;
 struct tcphdr *th;
 struct mbuf *m;
 struct ip *ip = ((void *)0);
 u_int8_t *optp;
 u_int hdrlen, optlen;
 int error;

 struct ip6_hdr *ip6 = ((void *)0);
 int isipv6 = inp->inp_inc.inc_flags;


 m = m_gethdr(0x0001, 2);
 if (m == ((void *)0))
  return (55);
 m->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];






 if (isipv6) {
  hdrlen = sizeof(struct ip6_hdr) + sizeof(struct tcphdr);
  ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
  th = (struct tcphdr *)(ip6 + 1);
  tcpip_fillheaders(inp, ip6, th);
 } else

 {
  hdrlen = sizeof(struct tcpiphdr);
  ip = ((struct ip *)((m)->m_hdr.mh_data));
  th = (struct tcphdr *)(ip + 1);
  tcpip_fillheaders(inp, ip, th);
 }
 optp = (u_int8_t *)(th + 1);





 if (tw->t_recent && flags == 0x10) {
  u_int32_t *lp = (u_int32_t *)optp;


   *lp++ = __bswap32((1<<24|1<<16|8<<8|10));
   *lp++ = __bswap32(global_ticks[get_stack_id()]);
   *lp = __bswap32(tw->t_recent);
   optp += (10 +2);
  }




 if (tw->cc_recv != 0 && flags == 0x10) {
  u_int32_t *lp = (u_int32_t *)optp;

  *lp++ = __bswap32((1<<24|1<<16|(11)<<8|6));
  *lp = __bswap32(tw->cc_send);
  optp += (6 +2);
  }
 optlen = optp - (u_int8_t *)(th + 1);

 m->m_hdr.mh_len = hdrlen + optlen;
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len;

 ;

 th->th_seq = __bswap32(tw->snd_nxt);
 th->th_ack = __bswap32(tw->rcv_nxt);
 th->th_off = (sizeof(struct tcphdr) + optlen) >> 2;
 th->th_flags = flags;
 th->th_win = __bswap16(tw->last_win);


 if (isipv6) {
  th->th_sum = in6_cksum(m, 6, sizeof(struct ip6_hdr),
      sizeof(struct tcphdr) + optlen);
  ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim = in6_selecthlim(inp, ((void *)0));
  error = ip6_output(m, inp->inp_depend6.inp6_outputopts, ((void *)0),
      (tw->tw_so_options & 0x0010), ((void *)0), ((void *)0), inp);
 } else

 {
  th->th_sum = in_pseudo(ip->ip_src.s_addr, ip->ip_dst.s_addr,
                    __bswap16(sizeof(struct tcphdr) + optlen + 6));
  m->M_dat.MH.MH_pkthdr.csum_flags = 0x0002;
  m->M_dat.MH.MH_pkthdr.csum_data = ((size_t)(&((struct tcphdr *)0)->th_sum));
  ip->ip_len = m->M_dat.MH.MH_pkthdr.len;
  if (global_path_mtu_discovery[get_stack_id()])
   ip->ip_off |= 0x4000;
  error = ip_output(m, inp->inp_depend4.inp4_options, ((void *)0),
      (tw->tw_so_options & 0x0010), ((void *)0), inp);
 }
 if (flags & 0x10)
  global_tcpstat[get_stack_id()].tcps_sndacks++;
 else
  global_tcpstat[get_stack_id()].tcps_sndctrl++;
 global_tcpstat[get_stack_id()].tcps_sndtotal++;
 return (error);
}
# 1906 "freebsd5/netinet/tcp_subr.c"
void
tcp_xmit_bandwidth_limit(struct tcpcb *tp, tcp_seq ack_seq)
{
 u_long bw;
 u_long bwnd;
 int save_ticks;





 if (global_tcp_inflight_enable[get_stack_id()] == 0) {
  tp->snd_bwnd = 65535 << 14;
  tp->snd_bandwidth = 0;
  return;
 }
# 1934 "freebsd5/netinet/tcp_subr.c"
 save_ticks = global_ticks[get_stack_id()];
 if ((u_int)(save_ticks - tp->t_bw_rtttime) < 1)
  return;

 bw = (int64_t)(ack_seq - tp->t_bw_rtseq) * global_hz[get_stack_id()] /
     (save_ticks - tp->t_bw_rtttime);
 tp->t_bw_rtttime = save_ticks;
 tp->t_bw_rtseq = ack_seq;
 if (tp->t_bw_rtttime == 0 || (int)bw < 0)
  return;
 bw = ((int64_t)tp->snd_bandwidth * 15 + bw) >> 4;

 tp->snd_bandwidth = bw;
# 1977 "freebsd5/netinet/tcp_subr.c"
 bwnd = (int64_t)bw * ((tp->t_srtt + tp->t_rttbest) / 2) / (global_hz[get_stack_id()] << 5) + global_tcp_inflight_stab[get_stack_id()] * tp->t_maxseg / 10;


 if (global_tcp_inflight_debug[get_stack_id()] > 0) {
  typedef  int  _GLOBAL_376_T; static  _GLOBAL_376_T  global_ltime[NUM_STACKS];   
  if ((u_int)(global_ticks[get_stack_id()] - global_ltime[get_stack_id()]) >= global_hz[get_stack_id()] / global_tcp_inflight_debug[get_stack_id()]) {
   global_ltime[get_stack_id()] = global_ticks[get_stack_id()];
   nsc_printf("%p bw %ld rttbest %d srtt %d bwnd %ld\n",
       tp,
       bw,
       tp->t_rttbest,
       tp->t_srtt,
       bwnd
   );
  }
 }
 if ((long)bwnd < global_tcp_inflight_min[get_stack_id()])
  bwnd = global_tcp_inflight_min[get_stack_id()];
 if (bwnd > global_tcp_inflight_max[get_stack_id()])
  bwnd = global_tcp_inflight_max[get_stack_id()];
 if ((long)bwnd < tp->t_maxseg * 2)
  bwnd = tp->t_maxseg * 2;
 tp->snd_bwnd = bwnd;
}

