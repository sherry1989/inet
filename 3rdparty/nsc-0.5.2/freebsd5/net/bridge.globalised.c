# 1 "freebsd5/net/bridge.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/bridge.c"
# 91 "freebsd5/net/bridge.c"
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

# 92 "freebsd5/net/bridge.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2

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
# 43 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
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
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
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
# 93 "freebsd5/net/bridge.c" 2

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
# 95 "freebsd5/net/bridge.c" 2

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
# 97 "freebsd5/net/bridge.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ctype.h" 1
# 98 "freebsd5/net/bridge.c" 2
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
# 99 "freebsd5/net/bridge.c" 2
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
# 100 "freebsd5/net/bridge.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_25_A[NUM_STACKS];  
typedef  char  _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_26_A[NUM_STACKS];  


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
# 101 "freebsd5/net/bridge.c" 2

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
# 103 "freebsd5/net/bridge.c" 2
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





typedef  struct malloc_type   _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_27_A[NUM_STACKS] = { &_GLOBAL_0_M_IFADDR_I, &_GLOBAL_1_M_IFADDR_I, &_GLOBAL_2_M_IFADDR_I, &_GLOBAL_3_M_IFADDR_I, &_GLOBAL_4_M_IFADDR_I, &_GLOBAL_5_M_IFADDR_I, &_GLOBAL_6_M_IFADDR_I, &_GLOBAL_7_M_IFADDR_I, &_GLOBAL_8_M_IFADDR_I, &_GLOBAL_9_M_IFADDR_I, &_GLOBAL_10_M_IFADDR_I, &_GLOBAL_11_M_IFADDR_I, &_GLOBAL_12_M_IFADDR_I, &_GLOBAL_13_M_IFADDR_I, &_GLOBAL_14_M_IFADDR_I, &_GLOBAL_15_M_IFADDR_I, &_GLOBAL_16_M_IFADDR_I, &_GLOBAL_17_M_IFADDR_I, &_GLOBAL_18_M_IFADDR_I, &_GLOBAL_19_M_IFADDR_I, &_GLOBAL_20_M_IFADDR_I, &_GLOBAL_21_M_IFADDR_I, &_GLOBAL_22_M_IFADDR_I, &_GLOBAL_23_M_IFADDR_I, &_GLOBAL_24_M_IFADDR_I, &_GLOBAL_25_M_IFADDR_I, &_GLOBAL_26_M_IFADDR_I, &_GLOBAL_27_M_IFADDR_I, &_GLOBAL_28_M_IFADDR_I, &_GLOBAL_29_M_IFADDR_I, &_GLOBAL_30_M_IFADDR_I, &_GLOBAL_31_M_IFADDR_I, &_GLOBAL_32_M_IFADDR_I, &_GLOBAL_33_M_IFADDR_I, &_GLOBAL_34_M_IFADDR_I, &_GLOBAL_35_M_IFADDR_I, &_GLOBAL_36_M_IFADDR_I, &_GLOBAL_37_M_IFADDR_I, &_GLOBAL_38_M_IFADDR_I, &_GLOBAL_39_M_IFADDR_I, &_GLOBAL_40_M_IFADDR_I, &_GLOBAL_41_M_IFADDR_I, &_GLOBAL_42_M_IFADDR_I, &_GLOBAL_43_M_IFADDR_I, &_GLOBAL_44_M_IFADDR_I, &_GLOBAL_45_M_IFADDR_I, &_GLOBAL_46_M_IFADDR_I, &_GLOBAL_47_M_IFADDR_I, &_GLOBAL_48_M_IFADDR_I, &_GLOBAL_49_M_IFADDR_I, };   
typedef  struct malloc_type   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_90_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_28_A[NUM_STACKS];   
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
typedef  struct lock_class   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_lock_class_sx[NUM_STACKS];    

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

typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_98_T; extern volatile  _GLOBAL_98_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_29_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
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


typedef  struct vmmeter   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_30_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_31_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_105_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_32_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_106_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_108_T; extern  _GLOBAL_108_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_111_T; extern  _GLOBAL_111_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_debug_mpsafenet[NUM_STACKS];   
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





typedef  struct malloc_type   _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_33_A[NUM_STACKS];   
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
# 82 "freebsd5/net/if_var.h" 2
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
typedef  struct mbuf    * ( *_GLOBAL_117_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_117_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_119_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_119_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_if_index[NUM_STACKS];   

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
# 104 "freebsd5/net/bridge.c" 2
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
# 105 "freebsd5/net/bridge.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 106 "freebsd5/net/bridge.c" 2

# 1 "freebsd5/net/pfil.h" 1
# 39 "freebsd5/net/pfil.h"
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
# 40 "freebsd5/net/pfil.h" 2

struct mbuf;
struct ifnet;
struct inpcb;





struct packet_filter_hook {
        struct { struct packet_filter_hook *tqe_next; struct packet_filter_hook **tqe_prev; } pfil_link;
 int (*pfil_func)(void *, struct mbuf **, struct ifnet *, int, struct inpcb *);
 void *pfil_arg;
 int pfil_flags;
};






typedef struct pfil_list { struct packet_filter_hook *tqh_first; struct packet_filter_hook **tqh_last; } pfil_list_t;




struct pfil_head {
 pfil_list_t ph_in;
 pfil_list_t ph_out;
 int ph_type;




 int ph_busy_count;
 int ph_want_write;
 struct cv ph_cv;
 struct mtx ph_mtx;
 union {
  u_long phu_val;
  void *phu_ptr;
 } ph_un;


 struct { struct pfil_head *le_next; struct pfil_head **le_prev; } ph_list;
};

int pfil_run_hooks(struct pfil_head *, struct mbuf **, struct ifnet *,
     int, struct inpcb *inp);

int pfil_add_hook(int (*func)(void *, struct mbuf **,
     struct ifnet *, int, struct inpcb *), void *, int, struct pfil_head *);
int pfil_remove_hook(int (*func)(void *, struct mbuf **,
     struct ifnet *, int, struct inpcb *), void *, int, struct pfil_head *);

int pfil_head_register(struct pfil_head *);
int pfil_head_unregister(struct pfil_head *);

struct pfil_head *pfil_head_get(int, u_long);

static __inline struct packet_filter_hook *
pfil_hook_get(int dir, struct pfil_head *ph)
{

                                                   ;
 if (dir == 0x00000001)
  return (((&ph->ph_in)->tqh_first));
 else if (dir == 0x00000002)
  return (((&ph->ph_out)->tqh_first));
 else
  return (((void *)0));
}
# 108 "freebsd5/net/bridge.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_126_T; extern  _GLOBAL_126_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_127_T; extern  _GLOBAL_127_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_128_T; extern  _GLOBAL_128_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_137_T; extern  _GLOBAL_137_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_137_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_34_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_139_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_139_T global_faithprefix_p[NUM_STACKS];     
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
# 110 "freebsd5/net/bridge.c" 2
# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 111 "freebsd5/net/bridge.c" 2
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
typedef  u_char  _GLOBAL_140_T; extern  _GLOBAL_140_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_35_A[NUM_STACKS];  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_141_T; extern  _GLOBAL_141_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_in_ifaddrhmask[NUM_STACKS];   
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




typedef  struct sysctl_oid_list   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_sysctl__net_inet_ip_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_145_T; extern  _GLOBAL_145_T  global_sysctl__net_inet_raw_children[NUM_STACKS];    


typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_in_multihead[NUM_STACKS];         





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
typedef  struct in6_ifaddr   _GLOBAL_147_T; extern  _GLOBAL_147_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_148_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_36_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_37_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_152_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_38_A[NUM_STACKS];   
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


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_in6_multihead[NUM_STACKS];         





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
# 112 "freebsd5/net/bridge.c" 2
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
# 113 "freebsd5/net/bridge.c" 2
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

typedef  struct ipstat   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_ipstat[NUM_STACKS];    
typedef  u_short  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ip_id[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ip_defttl[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_ipforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ip_doopts[NUM_STACKS];   



typedef  u_char  _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_1_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_2_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_3_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_4_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_5_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_6_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_7_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_8_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_9_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_10_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_11_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_12_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_13_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_14_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_15_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_16_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_17_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_18_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_19_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_20_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_21_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_22_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_23_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_24_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_25_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_26_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_27_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_28_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_29_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_30_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_31_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_32_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_33_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_34_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_35_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_36_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_37_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_38_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_39_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_40_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_41_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_42_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_43_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_44_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_45_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_46_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_47_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_48_ip_protox_I [ ] ; extern  _GLOBAL_159_T  _GLOBAL_49_ip_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_protox_I) *_GLOBAL_ip_protox_39_A[NUM_STACKS];  
typedef  struct socket   _GLOBAL_160_T; extern  _GLOBAL_160_T  * global_ip_rsvpd[NUM_STACKS];    
typedef  struct socket   _GLOBAL_161_T; extern  _GLOBAL_161_T  * global_ip_mrouter[NUM_STACKS];    
typedef  int   ( *_GLOBAL_163_T  )  ( int  ) ; extern  _GLOBAL_163_T global_legal_vif_num[NUM_STACKS];   
typedef  u_long   ( *_GLOBAL_165_T  )  ( int  ) ; extern  _GLOBAL_165_T global_ip_mcast_src[NUM_STACKS];   
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_rsvp_on[NUM_STACKS];   
typedef  struct pr_usrreqs   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_rip_usrreqs[NUM_STACKS];    

int ip_ctloutput(struct socket *, struct sockopt *sopt);
void ip_drain(void);
int ip_fragment(struct ip *ip, struct mbuf **m_frag, int mtu,
     u_long if_hwassist_flags, int sw_csum);
void ip_freemoptions(struct ip_moptions *);
void ip_init(void);
typedef  int   ( *_GLOBAL_169_T  )  ( struct ip   *  , struct ifnet   *   , struct mbuf   *   , struct ip_moptions   *   ) ; extern  _GLOBAL_169_T global_ip_mforward[NUM_STACKS];           
       
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
typedef  int   ( *_GLOBAL_171_T  )  ( struct socket   *  , struct sockopt   *   ) ; extern  _GLOBAL_171_T global_ip_rsvp_vif[NUM_STACKS];        
typedef  void   ( *_GLOBAL_173_T  )  ( struct socket   *  ) ; extern  _GLOBAL_173_T global_ip_rsvp_force_done[NUM_STACKS];     
typedef  void   ( *_GLOBAL_175_T  )  ( struct mbuf   * m   , int  off   ) ; extern  _GLOBAL_175_T global_rsvp_input_p[NUM_STACKS];       

typedef  struct pfil_head   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_inet_pfil_hook[NUM_STACKS];    

void in_delayed_cksum(struct mbuf *m);

static __inline uint16_t ip_newid(void);
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_ip_do_randomid[NUM_STACKS];   

static __inline uint16_t
ip_newid(void)
{
 if (global_ip_do_randomid[get_stack_id()])
  return ip_randomid();

 return __bswap16(global_ip_id[get_stack_id()]++);
}
# 114 "freebsd5/net/bridge.c" 2

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
typedef  struct malloc_type   _GLOBAL_178_T; extern  _GLOBAL_178_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_178_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_40_A[NUM_STACKS];   






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
typedef  struct radix_node_head   _GLOBAL_179_T; extern  _GLOBAL_179_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_179_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_41_A[NUM_STACKS];    

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
# 116 "freebsd5/net/bridge.c" 2
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
typedef  ip_fw_ctl_t  _GLOBAL_180_T; extern  _GLOBAL_180_T  * global_ip_fw_ctl_ptr[NUM_STACKS];   
typedef  int  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_fw_one_pass[NUM_STACKS];   
typedef  int  _GLOBAL_182_T; extern  _GLOBAL_182_T  global_fw_enable[NUM_STACKS];   


typedef int ip_fw_chk_t(struct ip_fw_args *args);
typedef  ip_fw_chk_t  _GLOBAL_183_T; extern  _GLOBAL_183_T  * global_ip_fw_chk_ptr[NUM_STACKS];   
# 117 "freebsd5/net/bridge.c" 2
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
typedef  ip_dn_ctl_t  _GLOBAL_184_T; extern  _GLOBAL_184_T  * global_ip_dn_ctl_ptr[NUM_STACKS];   
typedef  ip_dn_ruledel_t  _GLOBAL_185_T; extern  _GLOBAL_185_T  * global_ip_dn_ruledel_ptr[NUM_STACKS];   
typedef  ip_dn_io_t  _GLOBAL_186_T; extern  _GLOBAL_186_T  * global_ip_dn_io_ptr[NUM_STACKS];   






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
# 118 "freebsd5/net/bridge.c" 2
# 1 "freebsd5/net/bridge.h" 1
# 30 "freebsd5/net/bridge.h"
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_do_bridge[NUM_STACKS];   
# 41 "freebsd5/net/bridge.h"
struct cluster_softc;

struct bdg_softc {
    struct ifnet *ifp ;

    int flags ;



    struct cluster_softc *cluster;
} ;

typedef  struct bdg_softc   _GLOBAL_188_T; extern  _GLOBAL_188_T  * global_ifp2sc[NUM_STACKS];    
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
typedef  bridge_in_t  _GLOBAL_189_T; extern  _GLOBAL_189_T  * global_bridge_in_ptr[NUM_STACKS];   
typedef  bdg_forward_t  _GLOBAL_190_T; extern  _GLOBAL_190_T  * global_bdg_forward_ptr[NUM_STACKS];   
typedef  bdgtakeifaces_t  _GLOBAL_191_T; extern  _GLOBAL_191_T  * global_bdgtakeifaces_ptr[NUM_STACKS];   
# 119 "freebsd5/net/bridge.c" 2
# 131 "freebsd5/net/bridge.c"
typedef struct hash_table {
    struct ifnet * name;
    u_char etheraddr[6];
    u_int16_t used;
} bdg_hash_table ;
# 148 "freebsd5/net/bridge.c"
struct bdg_addr {
    u_char etheraddr[6];
    u_int16_t _padding;
};





struct cluster_softc {
    u_int16_t cluster_id;
    u_int16_t ports;
    bdg_hash_table *ht;
    struct bdg_addr *my_macs;
};


typedef  struct protosw   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_1_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_2_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_3_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_4_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_5_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_6_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_7_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_8_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_9_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_10_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_11_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_12_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_13_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_14_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_15_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_16_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_17_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_18_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_19_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_20_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_21_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_22_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_23_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_24_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_25_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_26_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_27_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_28_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_29_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_30_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_31_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_32_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_33_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_34_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_35_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_36_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_37_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_38_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_39_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_40_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_41_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_42_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_43_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_44_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_45_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_46_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_47_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_48_inetsw_I [ ] ; extern  _GLOBAL_192_T  _GLOBAL_49_inetsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetsw_I) *_GLOBAL_inetsw_42_A[NUM_STACKS];   

typedef  int  _GLOBAL_193_T; static  _GLOBAL_193_T  global_n_clusters[NUM_STACKS];   
typedef  struct cluster_softc   _GLOBAL_194_T; static  _GLOBAL_194_T  * global_clusters[NUM_STACKS];    

typedef  struct mtx   _GLOBAL_195_T; static  _GLOBAL_195_T  global_bdg_mtx[NUM_STACKS];    
# 197 "freebsd5/net/bridge.c"
typedef  struct sysctl_oid_list   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_sysctl__net_link_ether_children[NUM_STACKS];    
typedef  struct sysctl_oid_list  _GLOBAL_197_T;  _GLOBAL_197_T  global_sysctl__net_link_ether_bridge_children[NUM_STACKS];  
 
# 198 "freebsd5/net/bridge.c"
  typedef  struct sysctl_oid   _GLOBAL_198_T; static  _GLOBAL_198_T  global_sysctl___net_link_ether_bridge[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[0]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[1]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[2]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[3]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[4]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[5]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[6]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[7]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[8]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[9]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[10]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[11]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[12]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[13]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[14]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[15]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[16]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[17]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[18]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[19]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[20]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[21]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[22]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[23]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[24]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[25]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[26]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[27]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[28]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[29]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[30]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[31]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[32]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[33]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[34]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[35]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[36]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[37]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[38]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[39]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[40]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[41]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[42]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[43]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[44]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[45]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[46]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[47]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[48]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , ( - 1  )   , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_link_ether_bridge_children[49]    , 0  , "bridge"  , 0  , "N"  , 0  , "Bridge parameters"  } ,  };   
 
# 198 "freebsd5/net/bridge.c"
   
 
# 198 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_199_T; static  _GLOBAL_199_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[0] ;static  _GLOBAL_199_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[1] ;static  _GLOBAL_199_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[2] ;static  _GLOBAL_199_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[3] ;static  _GLOBAL_199_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[4] ;static  _GLOBAL_199_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[5] ;static  _GLOBAL_199_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[6] ;static  _GLOBAL_199_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[7] ;static  _GLOBAL_199_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[8] ;static  _GLOBAL_199_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[9] ;static  _GLOBAL_199_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[10] ;static  _GLOBAL_199_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[11] ;static  _GLOBAL_199_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[12] ;static  _GLOBAL_199_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[13] ;static  _GLOBAL_199_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[14] ;static  _GLOBAL_199_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[15] ;static  _GLOBAL_199_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[16] ;static  _GLOBAL_199_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[17] ;static  _GLOBAL_199_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[18] ;static  _GLOBAL_199_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[19] ;static  _GLOBAL_199_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[20] ;static  _GLOBAL_199_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[21] ;static  _GLOBAL_199_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[22] ;static  _GLOBAL_199_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[23] ;static  _GLOBAL_199_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[24] ;static  _GLOBAL_199_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[25] ;static  _GLOBAL_199_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[26] ;static  _GLOBAL_199_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[27] ;static  _GLOBAL_199_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[28] ;static  _GLOBAL_199_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[29] ;static  _GLOBAL_199_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[30] ;static  _GLOBAL_199_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[31] ;static  _GLOBAL_199_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[32] ;static  _GLOBAL_199_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[33] ;static  _GLOBAL_199_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[34] ;static  _GLOBAL_199_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[35] ;static  _GLOBAL_199_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[36] ;static  _GLOBAL_199_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[37] ;static  _GLOBAL_199_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[38] ;static  _GLOBAL_199_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[39] ;static  _GLOBAL_199_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[40] ;static  _GLOBAL_199_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[41] ;static  _GLOBAL_199_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[42] ;static  _GLOBAL_199_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[43] ;static  _GLOBAL_199_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[44] ;static  _GLOBAL_199_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[45] ;static  _GLOBAL_199_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[46] ;static  _GLOBAL_199_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[47] ;static  _GLOBAL_199_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[48] ;static  _GLOBAL_199_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge[49] ;    
 
# 198 "freebsd5/net/bridge.c"
    
                     
typedef  char  _GLOBAL_200_T; static  _GLOBAL_200_T  _GLOBAL_0_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_1_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_2_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_3_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_4_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_5_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_6_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_7_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_8_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_9_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_10_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_11_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_12_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_13_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_14_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_15_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_16_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_17_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_18_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_19_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_20_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_21_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_22_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_23_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_24_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_25_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_26_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_27_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_28_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_29_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_30_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_31_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_32_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_33_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_34_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_35_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_36_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_37_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_38_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_39_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_40_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_41_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_42_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_43_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_44_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_45_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_46_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_47_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_48_bridge_version_I [ ]  = "031224" ; static  _GLOBAL_200_T  _GLOBAL_49_bridge_version_I [ ]  = "031224" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bridge_version_I) *_GLOBAL_bridge_version_43_A[NUM_STACKS] = { &_GLOBAL_0_bridge_version_I, &_GLOBAL_1_bridge_version_I, &_GLOBAL_2_bridge_version_I, &_GLOBAL_3_bridge_version_I, &_GLOBAL_4_bridge_version_I, &_GLOBAL_5_bridge_version_I, &_GLOBAL_6_bridge_version_I, &_GLOBAL_7_bridge_version_I, &_GLOBAL_8_bridge_version_I, &_GLOBAL_9_bridge_version_I, &_GLOBAL_10_bridge_version_I, &_GLOBAL_11_bridge_version_I, &_GLOBAL_12_bridge_version_I, &_GLOBAL_13_bridge_version_I, &_GLOBAL_14_bridge_version_I, &_GLOBAL_15_bridge_version_I, &_GLOBAL_16_bridge_version_I, &_GLOBAL_17_bridge_version_I, &_GLOBAL_18_bridge_version_I, &_GLOBAL_19_bridge_version_I, &_GLOBAL_20_bridge_version_I, &_GLOBAL_21_bridge_version_I, &_GLOBAL_22_bridge_version_I, &_GLOBAL_23_bridge_version_I, &_GLOBAL_24_bridge_version_I, &_GLOBAL_25_bridge_version_I, &_GLOBAL_26_bridge_version_I, &_GLOBAL_27_bridge_version_I, &_GLOBAL_28_bridge_version_I, &_GLOBAL_29_bridge_version_I, &_GLOBAL_30_bridge_version_I, &_GLOBAL_31_bridge_version_I, &_GLOBAL_32_bridge_version_I, &_GLOBAL_33_bridge_version_I, &_GLOBAL_34_bridge_version_I, &_GLOBAL_35_bridge_version_I, &_GLOBAL_36_bridge_version_I, &_GLOBAL_37_bridge_version_I, &_GLOBAL_38_bridge_version_I, &_GLOBAL_39_bridge_version_I, &_GLOBAL_40_bridge_version_I, &_GLOBAL_41_bridge_version_I, &_GLOBAL_42_bridge_version_I, &_GLOBAL_43_bridge_version_I, &_GLOBAL_44_bridge_version_I, &_GLOBAL_45_bridge_version_I, &_GLOBAL_46_bridge_version_I, &_GLOBAL_47_bridge_version_I, &_GLOBAL_48_bridge_version_I, &_GLOBAL_49_bridge_version_I, };    
typedef  struct sysctl_oid   _GLOBAL_201_T; static  _GLOBAL_201_T  global_sysctl___net_link_ether_bridge_version[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_0_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_1_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_2_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_3_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_4_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_5_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_6_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_7_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_8_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_9_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_10_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_11_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_12_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_13_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_14_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_15_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_16_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_17_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_18_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_19_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_20_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_21_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_22_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_23_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_24_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_25_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_26_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_27_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_28_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_29_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_30_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_31_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_32_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_33_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_34_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_35_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_36_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_37_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_38_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_39_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_40_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_41_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_42_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_43_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_44_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_45_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_46_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_47_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_48_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 3 | ( 0x80000000 )    , _GLOBAL_49_bridge_version_I  , 0  , "version"  , sysctl_handle_string  , "A"  , 0  , "software version"  } ,  };   
 
# 201 "freebsd5/net/bridge.c"
   
 
# 201 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_202_T; static  _GLOBAL_202_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[0] ;static  _GLOBAL_202_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[1] ;static  _GLOBAL_202_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[2] ;static  _GLOBAL_202_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[3] ;static  _GLOBAL_202_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[4] ;static  _GLOBAL_202_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[5] ;static  _GLOBAL_202_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[6] ;static  _GLOBAL_202_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[7] ;static  _GLOBAL_202_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[8] ;static  _GLOBAL_202_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[9] ;static  _GLOBAL_202_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[10] ;static  _GLOBAL_202_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[11] ;static  _GLOBAL_202_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[12] ;static  _GLOBAL_202_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[13] ;static  _GLOBAL_202_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[14] ;static  _GLOBAL_202_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[15] ;static  _GLOBAL_202_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[16] ;static  _GLOBAL_202_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[17] ;static  _GLOBAL_202_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[18] ;static  _GLOBAL_202_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[19] ;static  _GLOBAL_202_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[20] ;static  _GLOBAL_202_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[21] ;static  _GLOBAL_202_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[22] ;static  _GLOBAL_202_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[23] ;static  _GLOBAL_202_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[24] ;static  _GLOBAL_202_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[25] ;static  _GLOBAL_202_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[26] ;static  _GLOBAL_202_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[27] ;static  _GLOBAL_202_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[28] ;static  _GLOBAL_202_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[29] ;static  _GLOBAL_202_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[30] ;static  _GLOBAL_202_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[31] ;static  _GLOBAL_202_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[32] ;static  _GLOBAL_202_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[33] ;static  _GLOBAL_202_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[34] ;static  _GLOBAL_202_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[35] ;static  _GLOBAL_202_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[36] ;static  _GLOBAL_202_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[37] ;static  _GLOBAL_202_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[38] ;static  _GLOBAL_202_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[39] ;static  _GLOBAL_202_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[40] ;static  _GLOBAL_202_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[41] ;static  _GLOBAL_202_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[42] ;static  _GLOBAL_202_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[43] ;static  _GLOBAL_202_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[44] ;static  _GLOBAL_202_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[45] ;static  _GLOBAL_202_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[46] ;static  _GLOBAL_202_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[47] ;static  _GLOBAL_202_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[48] ;static  _GLOBAL_202_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_version __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_version[49] ;    
 
# 201 "freebsd5/net/bridge.c"
    
                                       



typedef  int _GLOBAL_203_T;  _GLOBAL_203_T  global_bridge_debug[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  struct sysctl_oid   _GLOBAL_204_T; static  _GLOBAL_204_T  global_sysctl___net_link_ether_bridge_debug[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[0]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[1]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[2]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[3]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[4]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[5]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[6]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[7]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[8]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[9]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[10]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[11]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[12]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[13]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[14]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[15]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[16]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[17]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[18]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[19]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[20]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[21]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[22]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[23]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[24]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[25]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[26]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[27]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[28]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[29]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[30]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[31]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[32]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[33]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[34]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[35]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[36]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[37]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[38]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[39]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[40]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[41]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[42]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[43]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[44]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[45]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[46]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[47]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[48]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bridge_debug[49]   , 0  , "debug"  , sysctl_handle_int  , "I"  , 0  , "control debugging printfs"  } ,  };   
 
# 207 "freebsd5/net/bridge.c"
   
 
# 207 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_205_T; static  _GLOBAL_205_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[0] ;static  _GLOBAL_205_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[1] ;static  _GLOBAL_205_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[2] ;static  _GLOBAL_205_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[3] ;static  _GLOBAL_205_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[4] ;static  _GLOBAL_205_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[5] ;static  _GLOBAL_205_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[6] ;static  _GLOBAL_205_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[7] ;static  _GLOBAL_205_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[8] ;static  _GLOBAL_205_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[9] ;static  _GLOBAL_205_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[10] ;static  _GLOBAL_205_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[11] ;static  _GLOBAL_205_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[12] ;static  _GLOBAL_205_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[13] ;static  _GLOBAL_205_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[14] ;static  _GLOBAL_205_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[15] ;static  _GLOBAL_205_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[16] ;static  _GLOBAL_205_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[17] ;static  _GLOBAL_205_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[18] ;static  _GLOBAL_205_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[19] ;static  _GLOBAL_205_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[20] ;static  _GLOBAL_205_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[21] ;static  _GLOBAL_205_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[22] ;static  _GLOBAL_205_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[23] ;static  _GLOBAL_205_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[24] ;static  _GLOBAL_205_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[25] ;static  _GLOBAL_205_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[26] ;static  _GLOBAL_205_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[27] ;static  _GLOBAL_205_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[28] ;static  _GLOBAL_205_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[29] ;static  _GLOBAL_205_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[30] ;static  _GLOBAL_205_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[31] ;static  _GLOBAL_205_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[32] ;static  _GLOBAL_205_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[33] ;static  _GLOBAL_205_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[34] ;static  _GLOBAL_205_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[35] ;static  _GLOBAL_205_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[36] ;static  _GLOBAL_205_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[37] ;static  _GLOBAL_205_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[38] ;static  _GLOBAL_205_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[39] ;static  _GLOBAL_205_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[40] ;static  _GLOBAL_205_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[41] ;static  _GLOBAL_205_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[42] ;static  _GLOBAL_205_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[43] ;static  _GLOBAL_205_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[44] ;static  _GLOBAL_205_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[45] ;static  _GLOBAL_205_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[46] ;static  _GLOBAL_205_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[47] ;static  _GLOBAL_205_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[48] ;static  _GLOBAL_205_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_debug[49] ;    
 
# 207 "freebsd5/net/bridge.c"
    
                                    
# 241 "freebsd5/net/bridge.c"
static int bdginit(void);
static void parse_bdg_cfg(void);

typedef  int  _GLOBAL_206_T; static  _GLOBAL_206_T  global_bdg_ipf[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_207_T; static  _GLOBAL_207_T  global_sysctl___net_link_ether_bridge_ipf[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[0]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[1]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[2]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[3]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[4]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[5]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[6]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[7]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[8]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[9]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[10]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[11]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[12]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[13]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[14]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[15]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[16]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[17]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[18]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[19]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[20]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[21]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[22]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[23]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[24]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[25]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[26]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[27]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[28]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[29]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[30]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[31]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[32]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[33]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[34]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[35]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[36]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[37]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[38]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[39]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[40]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[41]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[42]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[43]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[44]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[45]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[46]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[47]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[48]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[49]   , 0  , "ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  };   
 
# 245 "freebsd5/net/bridge.c"
   
 
# 245 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_208_T; static  _GLOBAL_208_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[0] ;static  _GLOBAL_208_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[1] ;static  _GLOBAL_208_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[2] ;static  _GLOBAL_208_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[3] ;static  _GLOBAL_208_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[4] ;static  _GLOBAL_208_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[5] ;static  _GLOBAL_208_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[6] ;static  _GLOBAL_208_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[7] ;static  _GLOBAL_208_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[8] ;static  _GLOBAL_208_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[9] ;static  _GLOBAL_208_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[10] ;static  _GLOBAL_208_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[11] ;static  _GLOBAL_208_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[12] ;static  _GLOBAL_208_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[13] ;static  _GLOBAL_208_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[14] ;static  _GLOBAL_208_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[15] ;static  _GLOBAL_208_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[16] ;static  _GLOBAL_208_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[17] ;static  _GLOBAL_208_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[18] ;static  _GLOBAL_208_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[19] ;static  _GLOBAL_208_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[20] ;static  _GLOBAL_208_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[21] ;static  _GLOBAL_208_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[22] ;static  _GLOBAL_208_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[23] ;static  _GLOBAL_208_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[24] ;static  _GLOBAL_208_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[25] ;static  _GLOBAL_208_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[26] ;static  _GLOBAL_208_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[27] ;static  _GLOBAL_208_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[28] ;static  _GLOBAL_208_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[29] ;static  _GLOBAL_208_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[30] ;static  _GLOBAL_208_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[31] ;static  _GLOBAL_208_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[32] ;static  _GLOBAL_208_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[33] ;static  _GLOBAL_208_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[34] ;static  _GLOBAL_208_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[35] ;static  _GLOBAL_208_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[36] ;static  _GLOBAL_208_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[37] ;static  _GLOBAL_208_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[38] ;static  _GLOBAL_208_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[39] ;static  _GLOBAL_208_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[40] ;static  _GLOBAL_208_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[41] ;static  _GLOBAL_208_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[42] ;static  _GLOBAL_208_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[43] ;static  _GLOBAL_208_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[44] ;static  _GLOBAL_208_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[45] ;static  _GLOBAL_208_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[46] ;static  _GLOBAL_208_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[47] ;static  _GLOBAL_208_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[48] ;static  _GLOBAL_208_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf[49] ;    
 
# 245 "freebsd5/net/bridge.c"
    
                                                      
typedef  int  _GLOBAL_209_T; static  _GLOBAL_209_T  global_bdg_ipfw[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_210_T; static  _GLOBAL_210_T  global_sysctl___net_link_ether_bridge_ipfw[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[0]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[1]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[2]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[3]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[4]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[5]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[6]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[7]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[8]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[9]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[10]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[11]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[12]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[13]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[14]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[15]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[16]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[17]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[18]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[19]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[20]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[21]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[22]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[23]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[24]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[25]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[26]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[27]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[28]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[29]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[30]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[31]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[32]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[33]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[34]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[35]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[36]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[37]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[38]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[39]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[40]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[41]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[42]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[43]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[44]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[45]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[46]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[47]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[48]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[49]   , 0  , "ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  };   
 
# 248 "freebsd5/net/bridge.c"
   
 
# 248 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_211_T; static  _GLOBAL_211_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[0] ;static  _GLOBAL_211_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[1] ;static  _GLOBAL_211_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[2] ;static  _GLOBAL_211_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[3] ;static  _GLOBAL_211_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[4] ;static  _GLOBAL_211_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[5] ;static  _GLOBAL_211_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[6] ;static  _GLOBAL_211_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[7] ;static  _GLOBAL_211_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[8] ;static  _GLOBAL_211_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[9] ;static  _GLOBAL_211_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[10] ;static  _GLOBAL_211_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[11] ;static  _GLOBAL_211_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[12] ;static  _GLOBAL_211_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[13] ;static  _GLOBAL_211_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[14] ;static  _GLOBAL_211_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[15] ;static  _GLOBAL_211_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[16] ;static  _GLOBAL_211_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[17] ;static  _GLOBAL_211_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[18] ;static  _GLOBAL_211_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[19] ;static  _GLOBAL_211_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[20] ;static  _GLOBAL_211_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[21] ;static  _GLOBAL_211_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[22] ;static  _GLOBAL_211_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[23] ;static  _GLOBAL_211_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[24] ;static  _GLOBAL_211_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[25] ;static  _GLOBAL_211_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[26] ;static  _GLOBAL_211_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[27] ;static  _GLOBAL_211_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[28] ;static  _GLOBAL_211_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[29] ;static  _GLOBAL_211_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[30] ;static  _GLOBAL_211_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[31] ;static  _GLOBAL_211_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[32] ;static  _GLOBAL_211_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[33] ;static  _GLOBAL_211_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[34] ;static  _GLOBAL_211_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[35] ;static  _GLOBAL_211_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[36] ;static  _GLOBAL_211_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[37] ;static  _GLOBAL_211_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[38] ;static  _GLOBAL_211_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[39] ;static  _GLOBAL_211_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[40] ;static  _GLOBAL_211_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[41] ;static  _GLOBAL_211_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[42] ;static  _GLOBAL_211_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[43] ;static  _GLOBAL_211_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[44] ;static  _GLOBAL_211_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[45] ;static  _GLOBAL_211_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[46] ;static  _GLOBAL_211_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[47] ;static  _GLOBAL_211_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[48] ;static  _GLOBAL_211_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw[49] ;    
 
# 248 "freebsd5/net/bridge.c"
    
                                                      

typedef  int  _GLOBAL_212_T; static  _GLOBAL_212_T  global_bdg_copy[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_213_T; static  _GLOBAL_213_T  global_sysctl___net_link_ether_bridge_copy[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[0]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[1]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[2]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[3]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[4]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[5]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[6]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[7]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[8]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[9]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[10]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[11]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[12]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[13]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[14]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[15]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[16]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[17]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[18]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[19]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[20]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[21]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[22]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[23]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[24]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[25]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[26]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[27]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[28]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[29]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[30]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[31]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[32]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[33]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[34]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[35]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[36]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[37]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[38]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[39]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[40]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[41]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[42]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[43]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[44]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[45]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[46]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[47]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[48]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_copy[49]   , 0  , "copy"  , sysctl_handle_int  , "I"  , 0  , "Force packet copy in bdg_forward"  } ,  };   
 
# 252 "freebsd5/net/bridge.c"
   
 
# 252 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_214_T; static  _GLOBAL_214_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[0] ;static  _GLOBAL_214_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[1] ;static  _GLOBAL_214_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[2] ;static  _GLOBAL_214_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[3] ;static  _GLOBAL_214_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[4] ;static  _GLOBAL_214_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[5] ;static  _GLOBAL_214_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[6] ;static  _GLOBAL_214_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[7] ;static  _GLOBAL_214_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[8] ;static  _GLOBAL_214_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[9] ;static  _GLOBAL_214_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[10] ;static  _GLOBAL_214_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[11] ;static  _GLOBAL_214_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[12] ;static  _GLOBAL_214_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[13] ;static  _GLOBAL_214_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[14] ;static  _GLOBAL_214_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[15] ;static  _GLOBAL_214_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[16] ;static  _GLOBAL_214_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[17] ;static  _GLOBAL_214_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[18] ;static  _GLOBAL_214_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[19] ;static  _GLOBAL_214_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[20] ;static  _GLOBAL_214_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[21] ;static  _GLOBAL_214_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[22] ;static  _GLOBAL_214_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[23] ;static  _GLOBAL_214_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[24] ;static  _GLOBAL_214_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[25] ;static  _GLOBAL_214_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[26] ;static  _GLOBAL_214_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[27] ;static  _GLOBAL_214_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[28] ;static  _GLOBAL_214_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[29] ;static  _GLOBAL_214_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[30] ;static  _GLOBAL_214_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[31] ;static  _GLOBAL_214_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[32] ;static  _GLOBAL_214_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[33] ;static  _GLOBAL_214_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[34] ;static  _GLOBAL_214_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[35] ;static  _GLOBAL_214_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[36] ;static  _GLOBAL_214_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[37] ;static  _GLOBAL_214_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[38] ;static  _GLOBAL_214_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[39] ;static  _GLOBAL_214_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[40] ;static  _GLOBAL_214_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[41] ;static  _GLOBAL_214_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[42] ;static  _GLOBAL_214_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[43] ;static  _GLOBAL_214_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[44] ;static  _GLOBAL_214_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[45] ;static  _GLOBAL_214_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[46] ;static  _GLOBAL_214_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[47] ;static  _GLOBAL_214_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[48] ;static  _GLOBAL_214_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_copy __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_copy[49] ;    
 
# 252 "freebsd5/net/bridge.c"
    
                                                  

typedef  int _GLOBAL_215_T;  _GLOBAL_215_T  global_bdg_ipfw_drops[NUM_STACKS];  
typedef  struct sysctl_oid   _GLOBAL_216_T; static  _GLOBAL_216_T  global_sysctl___net_link_ether_bridge_ipfw_drop[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[0]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[1]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[2]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[3]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[4]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[5]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[6]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[7]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[8]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[9]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[10]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[11]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[12]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[13]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[14]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[15]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[16]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[17]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[18]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[19]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[20]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[21]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[22]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[23]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[24]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[25]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[26]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[27]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[28]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[29]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[30]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[31]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[32]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[33]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[34]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[35]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[36]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[37]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[38]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[39]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[40]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[41]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[42]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[43]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[44]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[45]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[46]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[47]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[48]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_drops[49]   , 0  , "ipfw_drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 256 "freebsd5/net/bridge.c"
   
 
# 256 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_217_T; static  _GLOBAL_217_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[0] ;static  _GLOBAL_217_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[1] ;static  _GLOBAL_217_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[2] ;static  _GLOBAL_217_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[3] ;static  _GLOBAL_217_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[4] ;static  _GLOBAL_217_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[5] ;static  _GLOBAL_217_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[6] ;static  _GLOBAL_217_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[7] ;static  _GLOBAL_217_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[8] ;static  _GLOBAL_217_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[9] ;static  _GLOBAL_217_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[10] ;static  _GLOBAL_217_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[11] ;static  _GLOBAL_217_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[12] ;static  _GLOBAL_217_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[13] ;static  _GLOBAL_217_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[14] ;static  _GLOBAL_217_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[15] ;static  _GLOBAL_217_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[16] ;static  _GLOBAL_217_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[17] ;static  _GLOBAL_217_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[18] ;static  _GLOBAL_217_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[19] ;static  _GLOBAL_217_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[20] ;static  _GLOBAL_217_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[21] ;static  _GLOBAL_217_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[22] ;static  _GLOBAL_217_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[23] ;static  _GLOBAL_217_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[24] ;static  _GLOBAL_217_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[25] ;static  _GLOBAL_217_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[26] ;static  _GLOBAL_217_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[27] ;static  _GLOBAL_217_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[28] ;static  _GLOBAL_217_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[29] ;static  _GLOBAL_217_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[30] ;static  _GLOBAL_217_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[31] ;static  _GLOBAL_217_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[32] ;static  _GLOBAL_217_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[33] ;static  _GLOBAL_217_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[34] ;static  _GLOBAL_217_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[35] ;static  _GLOBAL_217_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[36] ;static  _GLOBAL_217_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[37] ;static  _GLOBAL_217_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[38] ;static  _GLOBAL_217_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[39] ;static  _GLOBAL_217_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[40] ;static  _GLOBAL_217_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[41] ;static  _GLOBAL_217_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[42] ;static  _GLOBAL_217_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[43] ;static  _GLOBAL_217_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[44] ;static  _GLOBAL_217_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[45] ;static  _GLOBAL_217_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[46] ;static  _GLOBAL_217_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[47] ;static  _GLOBAL_217_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[48] ;static  _GLOBAL_217_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_drop[49] ;    
 
# 256 "freebsd5/net/bridge.c"
    
                                  
typedef  int _GLOBAL_218_T;  _GLOBAL_218_T  global_bdg_ipfw_colls[NUM_STACKS];  
typedef  struct sysctl_oid   _GLOBAL_219_T; static  _GLOBAL_219_T  global_sysctl___net_link_ether_bridge_ipfw_collisions[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[0]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[1]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[2]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[3]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[4]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[5]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[6]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[7]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[8]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[9]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[10]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[11]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[12]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[13]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[14]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[15]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[16]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[17]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[18]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[19]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[20]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[21]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[22]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[23]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[24]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[25]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[26]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[27]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[28]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[29]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[30]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[31]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[32]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[33]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[34]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[35]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[36]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[37]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[38]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[39]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[40]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[41]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[42]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[43]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[44]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[45]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[46]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[47]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[48]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw_colls[49]   , 0  , "ipfw_collisions"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 259 "freebsd5/net/bridge.c"
   
 
# 259 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_220_T; static  _GLOBAL_220_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[0] ;static  _GLOBAL_220_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[1] ;static  _GLOBAL_220_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[2] ;static  _GLOBAL_220_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[3] ;static  _GLOBAL_220_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[4] ;static  _GLOBAL_220_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[5] ;static  _GLOBAL_220_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[6] ;static  _GLOBAL_220_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[7] ;static  _GLOBAL_220_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[8] ;static  _GLOBAL_220_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[9] ;static  _GLOBAL_220_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[10] ;static  _GLOBAL_220_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[11] ;static  _GLOBAL_220_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[12] ;static  _GLOBAL_220_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[13] ;static  _GLOBAL_220_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[14] ;static  _GLOBAL_220_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[15] ;static  _GLOBAL_220_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[16] ;static  _GLOBAL_220_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[17] ;static  _GLOBAL_220_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[18] ;static  _GLOBAL_220_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[19] ;static  _GLOBAL_220_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[20] ;static  _GLOBAL_220_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[21] ;static  _GLOBAL_220_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[22] ;static  _GLOBAL_220_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[23] ;static  _GLOBAL_220_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[24] ;static  _GLOBAL_220_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[25] ;static  _GLOBAL_220_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[26] ;static  _GLOBAL_220_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[27] ;static  _GLOBAL_220_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[28] ;static  _GLOBAL_220_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[29] ;static  _GLOBAL_220_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[30] ;static  _GLOBAL_220_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[31] ;static  _GLOBAL_220_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[32] ;static  _GLOBAL_220_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[33] ;static  _GLOBAL_220_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[34] ;static  _GLOBAL_220_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[35] ;static  _GLOBAL_220_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[36] ;static  _GLOBAL_220_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[37] ;static  _GLOBAL_220_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[38] ;static  _GLOBAL_220_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[39] ;static  _GLOBAL_220_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[40] ;static  _GLOBAL_220_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[41] ;static  _GLOBAL_220_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[42] ;static  _GLOBAL_220_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[43] ;static  _GLOBAL_220_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[44] ;static  _GLOBAL_220_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[45] ;static  _GLOBAL_220_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[46] ;static  _GLOBAL_220_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[47] ;static  _GLOBAL_220_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[48] ;static  _GLOBAL_220_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_collisions __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_collisions[49] ;    
 
# 259 "freebsd5/net/bridge.c"
    
                                  

typedef  int  _GLOBAL_221_T; static  _GLOBAL_221_T  global_bdg_thru[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_222_T; static  _GLOBAL_222_T  global_sysctl___net_link_ether_bridge_packets[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[0]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[1]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[2]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[3]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[4]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[5]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[6]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[7]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[8]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[9]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[10]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[11]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[12]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[13]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[14]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[15]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[16]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[17]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[18]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[19]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[20]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[21]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[22]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[23]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[24]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[25]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[26]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[27]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[28]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[29]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[30]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[31]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[32]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[33]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[34]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[35]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[36]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[37]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[38]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[39]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[40]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[41]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[42]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[43]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[44]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[45]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[46]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[47]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[48]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_thru[49]   , 0  , "packets"  , sysctl_handle_int  , "I"  , 0  , "Packets through bridge"  } ,  };   
 
# 263 "freebsd5/net/bridge.c"
   
 
# 263 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_223_T; static  _GLOBAL_223_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[0] ;static  _GLOBAL_223_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[1] ;static  _GLOBAL_223_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[2] ;static  _GLOBAL_223_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[3] ;static  _GLOBAL_223_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[4] ;static  _GLOBAL_223_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[5] ;static  _GLOBAL_223_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[6] ;static  _GLOBAL_223_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[7] ;static  _GLOBAL_223_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[8] ;static  _GLOBAL_223_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[9] ;static  _GLOBAL_223_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[10] ;static  _GLOBAL_223_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[11] ;static  _GLOBAL_223_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[12] ;static  _GLOBAL_223_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[13] ;static  _GLOBAL_223_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[14] ;static  _GLOBAL_223_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[15] ;static  _GLOBAL_223_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[16] ;static  _GLOBAL_223_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[17] ;static  _GLOBAL_223_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[18] ;static  _GLOBAL_223_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[19] ;static  _GLOBAL_223_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[20] ;static  _GLOBAL_223_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[21] ;static  _GLOBAL_223_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[22] ;static  _GLOBAL_223_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[23] ;static  _GLOBAL_223_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[24] ;static  _GLOBAL_223_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[25] ;static  _GLOBAL_223_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[26] ;static  _GLOBAL_223_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[27] ;static  _GLOBAL_223_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[28] ;static  _GLOBAL_223_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[29] ;static  _GLOBAL_223_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[30] ;static  _GLOBAL_223_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[31] ;static  _GLOBAL_223_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[32] ;static  _GLOBAL_223_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[33] ;static  _GLOBAL_223_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[34] ;static  _GLOBAL_223_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[35] ;static  _GLOBAL_223_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[36] ;static  _GLOBAL_223_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[37] ;static  _GLOBAL_223_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[38] ;static  _GLOBAL_223_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[39] ;static  _GLOBAL_223_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[40] ;static  _GLOBAL_223_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[41] ;static  _GLOBAL_223_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[42] ;static  _GLOBAL_223_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[43] ;static  _GLOBAL_223_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[44] ;static  _GLOBAL_223_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[45] ;static  _GLOBAL_223_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[46] ;static  _GLOBAL_223_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[47] ;static  _GLOBAL_223_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[48] ;static  _GLOBAL_223_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_packets __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_packets[49] ;    
 
# 263 "freebsd5/net/bridge.c"
    
                                        
typedef  int  _GLOBAL_224_T; static  _GLOBAL_224_T  global_bdg_dropped[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_225_T; static  _GLOBAL_225_T  global_sysctl___net_link_ether_bridge_dropped[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[0]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[1]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[2]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[3]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[4]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[5]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[6]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[7]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[8]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[9]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[10]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[11]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[12]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[13]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[14]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[15]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[16]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[17]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[18]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[19]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[20]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[21]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[22]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[23]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[24]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[25]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[26]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[27]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[28]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[29]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[30]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[31]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[32]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[33]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[34]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[35]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[36]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[37]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[38]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[39]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[40]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[41]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[42]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[43]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[44]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[45]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[46]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[47]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[48]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_dropped[49]   , 0  , "dropped"  , sysctl_handle_int  , "I"  , 0  , "Packets dropped in bdg_forward"  } ,  };   
 
# 266 "freebsd5/net/bridge.c"
   
 
# 266 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_226_T; static  _GLOBAL_226_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[0] ;static  _GLOBAL_226_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[1] ;static  _GLOBAL_226_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[2] ;static  _GLOBAL_226_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[3] ;static  _GLOBAL_226_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[4] ;static  _GLOBAL_226_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[5] ;static  _GLOBAL_226_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[6] ;static  _GLOBAL_226_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[7] ;static  _GLOBAL_226_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[8] ;static  _GLOBAL_226_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[9] ;static  _GLOBAL_226_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[10] ;static  _GLOBAL_226_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[11] ;static  _GLOBAL_226_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[12] ;static  _GLOBAL_226_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[13] ;static  _GLOBAL_226_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[14] ;static  _GLOBAL_226_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[15] ;static  _GLOBAL_226_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[16] ;static  _GLOBAL_226_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[17] ;static  _GLOBAL_226_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[18] ;static  _GLOBAL_226_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[19] ;static  _GLOBAL_226_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[20] ;static  _GLOBAL_226_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[21] ;static  _GLOBAL_226_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[22] ;static  _GLOBAL_226_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[23] ;static  _GLOBAL_226_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[24] ;static  _GLOBAL_226_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[25] ;static  _GLOBAL_226_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[26] ;static  _GLOBAL_226_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[27] ;static  _GLOBAL_226_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[28] ;static  _GLOBAL_226_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[29] ;static  _GLOBAL_226_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[30] ;static  _GLOBAL_226_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[31] ;static  _GLOBAL_226_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[32] ;static  _GLOBAL_226_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[33] ;static  _GLOBAL_226_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[34] ;static  _GLOBAL_226_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[35] ;static  _GLOBAL_226_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[36] ;static  _GLOBAL_226_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[37] ;static  _GLOBAL_226_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[38] ;static  _GLOBAL_226_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[39] ;static  _GLOBAL_226_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[40] ;static  _GLOBAL_226_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[41] ;static  _GLOBAL_226_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[42] ;static  _GLOBAL_226_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[43] ;static  _GLOBAL_226_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[44] ;static  _GLOBAL_226_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[45] ;static  _GLOBAL_226_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[46] ;static  _GLOBAL_226_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[47] ;static  _GLOBAL_226_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[48] ;static  _GLOBAL_226_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_dropped __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_dropped[49] ;    
 
# 266 "freebsd5/net/bridge.c"
    
                                                   
typedef  int  _GLOBAL_227_T; static  _GLOBAL_227_T  global_bdg_predict[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_228_T; static  _GLOBAL_228_T  global_sysctl___net_link_ether_bridge_predict[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[0]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[1]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[2]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[3]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[4]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[5]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[6]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[7]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[8]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[9]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[10]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[11]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[12]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[13]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[14]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[15]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[16]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[17]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[18]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[19]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[20]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[21]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[22]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[23]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[24]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[25]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[26]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[27]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[28]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[29]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[30]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[31]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[32]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[33]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[34]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[35]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[36]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[37]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[38]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[39]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[40]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[41]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[42]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[43]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[44]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[45]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[46]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[47]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[48]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_predict[49]   , 0  , "predict"  , sysctl_handle_int  , "I"  , 0  , "Correctly predicted header location"  } ,  };   
 
# 269 "freebsd5/net/bridge.c"
   
 
# 269 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_229_T; static  _GLOBAL_229_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[0] ;static  _GLOBAL_229_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[1] ;static  _GLOBAL_229_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[2] ;static  _GLOBAL_229_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[3] ;static  _GLOBAL_229_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[4] ;static  _GLOBAL_229_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[5] ;static  _GLOBAL_229_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[6] ;static  _GLOBAL_229_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[7] ;static  _GLOBAL_229_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[8] ;static  _GLOBAL_229_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[9] ;static  _GLOBAL_229_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[10] ;static  _GLOBAL_229_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[11] ;static  _GLOBAL_229_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[12] ;static  _GLOBAL_229_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[13] ;static  _GLOBAL_229_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[14] ;static  _GLOBAL_229_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[15] ;static  _GLOBAL_229_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[16] ;static  _GLOBAL_229_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[17] ;static  _GLOBAL_229_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[18] ;static  _GLOBAL_229_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[19] ;static  _GLOBAL_229_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[20] ;static  _GLOBAL_229_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[21] ;static  _GLOBAL_229_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[22] ;static  _GLOBAL_229_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[23] ;static  _GLOBAL_229_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[24] ;static  _GLOBAL_229_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[25] ;static  _GLOBAL_229_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[26] ;static  _GLOBAL_229_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[27] ;static  _GLOBAL_229_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[28] ;static  _GLOBAL_229_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[29] ;static  _GLOBAL_229_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[30] ;static  _GLOBAL_229_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[31] ;static  _GLOBAL_229_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[32] ;static  _GLOBAL_229_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[33] ;static  _GLOBAL_229_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[34] ;static  _GLOBAL_229_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[35] ;static  _GLOBAL_229_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[36] ;static  _GLOBAL_229_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[37] ;static  _GLOBAL_229_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[38] ;static  _GLOBAL_229_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[39] ;static  _GLOBAL_229_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[40] ;static  _GLOBAL_229_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[41] ;static  _GLOBAL_229_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[42] ;static  _GLOBAL_229_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[43] ;static  _GLOBAL_229_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[44] ;static  _GLOBAL_229_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[45] ;static  _GLOBAL_229_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[46] ;static  _GLOBAL_229_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[47] ;static  _GLOBAL_229_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[48] ;static  _GLOBAL_229_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_predict __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_predict[49] ;    
 
# 269 "freebsd5/net/bridge.c"
    
                                                        


typedef  char  _GLOBAL_230_T; static  _GLOBAL_230_T  * _GLOBAL_0_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_1_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_2_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_3_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_4_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_5_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_6_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_7_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_8_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_9_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_10_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_11_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_12_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_13_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_14_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_15_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_16_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_17_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_18_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_19_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_20_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_21_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_22_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_23_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_24_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_25_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_26_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_27_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_28_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_29_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_30_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_31_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_32_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_33_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_34_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_35_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_36_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_37_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_38_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_39_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_40_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_41_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_42_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_43_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_44_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_45_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_46_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_47_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_48_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static  _GLOBAL_230_T  * _GLOBAL_49_bdg_dst_names_I [ ]   = { "BDG_NULL    " , "BDG_BCAST   "  , "BDG_MCAST   "  , "BDG_LOCAL   "  , "BDG_DROP    "  , "BDG_UNKNOWN "  , "BDG_IN      "  , "BDG_OUT     "  , "BDG_FORWARD "  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bdg_dst_names_I) *_GLOBAL_bdg_dst_names_44_A[NUM_STACKS] = { &_GLOBAL_0_bdg_dst_names_I, &_GLOBAL_1_bdg_dst_names_I, &_GLOBAL_2_bdg_dst_names_I, &_GLOBAL_3_bdg_dst_names_I, &_GLOBAL_4_bdg_dst_names_I, &_GLOBAL_5_bdg_dst_names_I, &_GLOBAL_6_bdg_dst_names_I, &_GLOBAL_7_bdg_dst_names_I, &_GLOBAL_8_bdg_dst_names_I, &_GLOBAL_9_bdg_dst_names_I, &_GLOBAL_10_bdg_dst_names_I, &_GLOBAL_11_bdg_dst_names_I, &_GLOBAL_12_bdg_dst_names_I, &_GLOBAL_13_bdg_dst_names_I, &_GLOBAL_14_bdg_dst_names_I, &_GLOBAL_15_bdg_dst_names_I, &_GLOBAL_16_bdg_dst_names_I, &_GLOBAL_17_bdg_dst_names_I, &_GLOBAL_18_bdg_dst_names_I, &_GLOBAL_19_bdg_dst_names_I, &_GLOBAL_20_bdg_dst_names_I, &_GLOBAL_21_bdg_dst_names_I, &_GLOBAL_22_bdg_dst_names_I, &_GLOBAL_23_bdg_dst_names_I, &_GLOBAL_24_bdg_dst_names_I, &_GLOBAL_25_bdg_dst_names_I, &_GLOBAL_26_bdg_dst_names_I, &_GLOBAL_27_bdg_dst_names_I, &_GLOBAL_28_bdg_dst_names_I, &_GLOBAL_29_bdg_dst_names_I, &_GLOBAL_30_bdg_dst_names_I, &_GLOBAL_31_bdg_dst_names_I, &_GLOBAL_32_bdg_dst_names_I, &_GLOBAL_33_bdg_dst_names_I, &_GLOBAL_34_bdg_dst_names_I, &_GLOBAL_35_bdg_dst_names_I, &_GLOBAL_36_bdg_dst_names_I, &_GLOBAL_37_bdg_dst_names_I, &_GLOBAL_38_bdg_dst_names_I, &_GLOBAL_39_bdg_dst_names_I, &_GLOBAL_40_bdg_dst_names_I, &_GLOBAL_41_bdg_dst_names_I, &_GLOBAL_42_bdg_dst_names_I, &_GLOBAL_43_bdg_dst_names_I, &_GLOBAL_44_bdg_dst_names_I, &_GLOBAL_45_bdg_dst_names_I, &_GLOBAL_46_bdg_dst_names_I, &_GLOBAL_47_bdg_dst_names_I, &_GLOBAL_48_bdg_dst_names_I, &_GLOBAL_49_bdg_dst_names_I, };    
 
 
 
 
 
 
 
 
  





typedef  struct bdg_stats   _GLOBAL_231_T; static  _GLOBAL_231_T  global_bdg_stats[NUM_STACKS];     
typedef  struct sysctl_oid   _GLOBAL_232_T; static  _GLOBAL_232_T  global_sysctl___net_link_ether_bridge_stats[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[0]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[1]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[2]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[3]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[4]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[5]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[6]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[7]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[8]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[9]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[10]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[11]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[12]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[13]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[14]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[15]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[16]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[17]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[18]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[19]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[20]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[21]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[22]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[23]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[24]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[25]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[26]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[27]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[28]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[29]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[30]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[31]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[32]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[33]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[34]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[35]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[36]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[37]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[38]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[39]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[40]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[41]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[42]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[43]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[44]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[45]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[46]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[47]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[48]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , 5 | ( 0x80000000 )    , & global_bdg_stats[49]   , sizeof ( struct bdg_stats  )   , "stats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  };   
 
# 289 "freebsd5/net/bridge.c"
   
 
# 289 "freebsd5/net/bridge.c"
                 typedef  void const   _GLOBAL_233_T; static  _GLOBAL_233_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[0] ;static  _GLOBAL_233_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[1] ;static  _GLOBAL_233_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[2] ;static  _GLOBAL_233_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[3] ;static  _GLOBAL_233_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[4] ;static  _GLOBAL_233_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[5] ;static  _GLOBAL_233_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[6] ;static  _GLOBAL_233_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[7] ;static  _GLOBAL_233_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[8] ;static  _GLOBAL_233_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[9] ;static  _GLOBAL_233_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[10] ;static  _GLOBAL_233_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[11] ;static  _GLOBAL_233_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[12] ;static  _GLOBAL_233_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[13] ;static  _GLOBAL_233_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[14] ;static  _GLOBAL_233_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[15] ;static  _GLOBAL_233_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[16] ;static  _GLOBAL_233_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[17] ;static  _GLOBAL_233_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[18] ;static  _GLOBAL_233_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[19] ;static  _GLOBAL_233_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[20] ;static  _GLOBAL_233_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[21] ;static  _GLOBAL_233_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[22] ;static  _GLOBAL_233_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[23] ;static  _GLOBAL_233_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[24] ;static  _GLOBAL_233_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[25] ;static  _GLOBAL_233_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[26] ;static  _GLOBAL_233_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[27] ;static  _GLOBAL_233_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[28] ;static  _GLOBAL_233_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[29] ;static  _GLOBAL_233_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[30] ;static  _GLOBAL_233_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[31] ;static  _GLOBAL_233_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[32] ;static  _GLOBAL_233_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[33] ;static  _GLOBAL_233_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[34] ;static  _GLOBAL_233_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[35] ;static  _GLOBAL_233_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[36] ;static  _GLOBAL_233_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[37] ;static  _GLOBAL_233_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[38] ;static  _GLOBAL_233_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[39] ;static  _GLOBAL_233_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[40] ;static  _GLOBAL_233_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[41] ;static  _GLOBAL_233_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[42] ;static  _GLOBAL_233_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[43] ;static  _GLOBAL_233_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[44] ;static  _GLOBAL_233_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[45] ;static  _GLOBAL_233_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[46] ;static  _GLOBAL_233_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[47] ;static  _GLOBAL_233_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[48] ;static  _GLOBAL_233_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_stats[49] ;    
 
# 289 "freebsd5/net/bridge.c"
    
                                            

typedef  struct callout   _GLOBAL_234_T; static  _GLOBAL_234_T  global_bdg_callout[NUM_STACKS];    






static struct cluster_softc *
add_cluster(u_int16_t cluster_id, struct ifnet *ifp)
{
    struct cluster_softc *c = ((void *)0);
    int i;

    ;

    for (i = 0; i < global_n_clusters[get_stack_id()] ; i++)
 if (global_clusters[get_stack_id()][i].cluster_id == cluster_id)
     goto found;


    c = nsc_malloc((1+global_n_clusters[get_stack_id()]) * sizeof (*c), (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]), 0x0001 | 0x0100);
    if (c == ((void *)0)) {
 nsc_printf("-- bridge: cannot add new cluster\n");
 goto bad;
    }
    c[global_n_clusters[get_stack_id()]].ht = (struct hash_table *)
     nsc_malloc(8192 * sizeof(struct hash_table),
  (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]), 0x0001 | 0x0100);
    if (c[global_n_clusters[get_stack_id()]].ht == ((void *)0)) {
 nsc_printf("-- bridge: cannot allocate hash table for new cluster\n");
 goto bad;
    }
    c[global_n_clusters[get_stack_id()]].my_macs = (struct bdg_addr *)
     nsc_malloc(128 * sizeof(struct bdg_addr),
  (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]), 0x0001 | 0x0100);
    if (c[global_n_clusters[get_stack_id()]].my_macs == ((void *)0)) {
        nsc_printf("-- bridge: cannot allocate mac addr table for new cluster\n");
 nsc_free(c[global_n_clusters[get_stack_id()]].ht, (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
 goto bad;
    }

    c[global_n_clusters[get_stack_id()]].cluster_id = cluster_id;
    c[global_n_clusters[get_stack_id()]].ports = 0;



    if (global_n_clusters[get_stack_id()] > 0) {
 for (i=0; i < global_n_clusters[get_stack_id()]; i++)
     c[i] = global_clusters[get_stack_id()][i];



 for (i = 0 ; i < global_if_index[get_stack_id()] && i < 128; i++)
     if (global_ifp2sc[get_stack_id()][i].cluster != ((void *)0))
  global_ifp2sc[get_stack_id()][i].cluster = c + (global_ifp2sc[get_stack_id()][i].cluster - global_clusters[get_stack_id()]);
 nsc_free(global_clusters[get_stack_id()], (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
    }
    global_clusters[get_stack_id()] = c;
    i = global_n_clusters[get_stack_id()];
    global_n_clusters[get_stack_id()]++;
found:
    c = global_clusters[get_stack_id()] + i;
    bcopy(((struct arpcom *)(ifp))->ac_enaddr, c->my_macs[c->ports].etheraddr, 6);
    c->ports++;
    return c;
bad:
    if (c)
 nsc_free(c, (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
    return ((void *)0);
}
# 370 "freebsd5/net/bridge.c"
static void
bridge_off(void)
{
    struct ifnet *ifp ;
    int i;

    ;

    if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: n_clusters %d\n", __func__, global_n_clusters[get_stack_id()]);

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
 struct bdg_softc *b;

 if (ifp->if_index >= 128)
     continue;
 b = &global_ifp2sc[get_stack_id()][ifp->if_index];

 if ( b->flags & 0x0001 ) {
     ifpromisc(ifp, 0);
     b->flags &= ~(0x0001|0x0002) ;
     if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: %s promisc OFF if_flags 0x%x " "bdg_flags 0x%x\n", __func__, ifp->if_xname, ifp->if_flags, b->flags)

                           ;
 }
 b->flags &= ~(0x0004) ;
 b->cluster = ((void *)0);
 global_bdg_stats[get_stack_id()].s[ifp->if_index].name[0] = '\0';
    }
    do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);


    for (i=0; i < global_n_clusters[get_stack_id()]; i++) {
 nsc_free(global_clusters[get_stack_id()][i].ht, (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
 nsc_free(global_clusters[get_stack_id()][i].my_macs, (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
    }
    if (global_clusters[get_stack_id()] != ((void *)0))
 nsc_free(global_clusters[get_stack_id()], (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
    global_clusters[get_stack_id()] = ((void *)0);
    global_n_clusters[get_stack_id()] =0;
}




static void
bridge_on(void)
{
    struct ifnet *ifp ;

    ;

    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
 struct bdg_softc *b = &global_ifp2sc[get_stack_id()][ifp->if_index];

 if ( !(b->flags & 0x0004) )
     continue ;
 if ( !( ifp->if_flags & 0x1) ) {
     if_up(ifp);
 }
 if ( !(b->flags & 0x0001) ) {
     (void) ifpromisc(ifp, 1);
     b->flags |= 0x0001 ;
     if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: %s promisc ON if_flags 0x%x bdg_flags 0x%x\n", __func__, ifp->if_xname, ifp->if_flags, b->flags)
                                                    ;
 }
 if (b->flags & 0x0002) {
     if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: unmuting %s\n", __func__, ifp->if_xname);
     b->flags &= ~0x0002;
 }
    }
    do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}

typedef  char  _GLOBAL_235_T; static  _GLOBAL_235_T  _GLOBAL_0_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_1_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_2_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_3_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_4_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_5_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_6_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_7_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_8_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_9_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_10_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_11_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_12_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_13_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_14_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_15_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_16_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_17_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_18_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_19_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_20_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_21_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_22_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_23_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_24_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_25_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_26_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_27_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_28_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_29_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_30_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_31_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_32_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_33_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_34_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_35_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_36_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_37_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_38_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_39_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_40_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_41_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_42_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_43_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_44_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_45_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_46_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_47_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_48_bridge_cfg_I [ 1024 ] ; static  _GLOBAL_235_T  _GLOBAL_49_bridge_cfg_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bridge_cfg_I) *_GLOBAL_bridge_cfg_45_A[NUM_STACKS] = { &_GLOBAL_0_bridge_cfg_I, &_GLOBAL_1_bridge_cfg_I, &_GLOBAL_2_bridge_cfg_I, &_GLOBAL_3_bridge_cfg_I, &_GLOBAL_4_bridge_cfg_I, &_GLOBAL_5_bridge_cfg_I, &_GLOBAL_6_bridge_cfg_I, &_GLOBAL_7_bridge_cfg_I, &_GLOBAL_8_bridge_cfg_I, &_GLOBAL_9_bridge_cfg_I, &_GLOBAL_10_bridge_cfg_I, &_GLOBAL_11_bridge_cfg_I, &_GLOBAL_12_bridge_cfg_I, &_GLOBAL_13_bridge_cfg_I, &_GLOBAL_14_bridge_cfg_I, &_GLOBAL_15_bridge_cfg_I, &_GLOBAL_16_bridge_cfg_I, &_GLOBAL_17_bridge_cfg_I, &_GLOBAL_18_bridge_cfg_I, &_GLOBAL_19_bridge_cfg_I, &_GLOBAL_20_bridge_cfg_I, &_GLOBAL_21_bridge_cfg_I, &_GLOBAL_22_bridge_cfg_I, &_GLOBAL_23_bridge_cfg_I, &_GLOBAL_24_bridge_cfg_I, &_GLOBAL_25_bridge_cfg_I, &_GLOBAL_26_bridge_cfg_I, &_GLOBAL_27_bridge_cfg_I, &_GLOBAL_28_bridge_cfg_I, &_GLOBAL_29_bridge_cfg_I, &_GLOBAL_30_bridge_cfg_I, &_GLOBAL_31_bridge_cfg_I, &_GLOBAL_32_bridge_cfg_I, &_GLOBAL_33_bridge_cfg_I, &_GLOBAL_34_bridge_cfg_I, &_GLOBAL_35_bridge_cfg_I, &_GLOBAL_36_bridge_cfg_I, &_GLOBAL_37_bridge_cfg_I, &_GLOBAL_38_bridge_cfg_I, &_GLOBAL_39_bridge_cfg_I, &_GLOBAL_40_bridge_cfg_I, &_GLOBAL_41_bridge_cfg_I, &_GLOBAL_42_bridge_cfg_I, &_GLOBAL_43_bridge_cfg_I, &_GLOBAL_44_bridge_cfg_I, &_GLOBAL_45_bridge_cfg_I, &_GLOBAL_46_bridge_cfg_I, &_GLOBAL_47_bridge_cfg_I, &_GLOBAL_48_bridge_cfg_I, &_GLOBAL_49_bridge_cfg_I, };  
# 455 "freebsd5/net/bridge.c"
static void
reconfigure_bridge_locked(void)
{
    ;

    bridge_off();
    if (global_do_bridge[get_stack_id()]) {
 if (global_if_index[get_stack_id()] >= 128) {
     nsc_printf("-- sorry too many interfaces (%d, max is %d),"
  " disabling bridging\n", global_if_index[get_stack_id()], 128);
     global_do_bridge[get_stack_id()] = 0;
     return;
 }
 parse_bdg_cfg();
 bridge_on();
    }
}

static void
reconfigure_bridge(void)
{
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    reconfigure_bridge_locked();
    do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
}
# 489 "freebsd5/net/bridge.c"
static void
parse_bdg_cfg(void)
{
    char *p, *beg;
    int l, cluster;
    typedef  const char   _GLOBAL_236_T; static  _GLOBAL_236_T  * global_sep[NUM_STACKS] = {  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  ", \t",  };      

    ;

    for (p = (*_GLOBAL_bridge_cfg_45_A[get_stack_id()]); *p ; p++) {
 struct ifnet *ifp;
 int found = 0;
 char c;

 if (index(global_sep[get_stack_id()], *p))
     continue ;

 for ( beg = p ; ((*p) >= 'a' && (*p) <= 'z') || ((*p) >= '0' && (*p) <= '9') ; p++ )
     ;
 l = p - beg ;
 if (l == 0)
     break ;
 if ( *p != ':' )
     cluster = 1 ;
 else
     cluster = strtoul( p+1, &p, 10);
 c = *p;
 *p = '\0';



 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {

     if (!strncmp(beg, ifp->if_xname, max(l, strlen(ifp->if_xname)))) {
  struct bdg_softc *b = &global_ifp2sc[get_stack_id()][ifp->if_index];
  if (ifp->if_data.ifi_type != 0x6 && ifp->if_data.ifi_type != 0x87) {
      nsc_printf("%s is not an ethernet, continue\n", ifp->if_xname);
      continue;
  }
  if (b->flags & 0x0004) {
      nsc_printf("%s already used, skipping\n", ifp->if_xname);
      break;
  }
  b->cluster = add_cluster(__bswap16(cluster), ifp);
  b->flags |= 0x0004 ;
  snprintf(global_bdg_stats[get_stack_id()].s[ifp->if_index].name,
      sizeof(global_bdg_stats[get_stack_id()].s[ifp->if_index].name),
      "%s:%d", ifp->if_xname, cluster);

  if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: found %s next c %d\n", __func__, global_bdg_stats[get_stack_id()].s[ifp->if_index].name, c)
                                          ;
  found = 1;
  break ;
     }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 if (!found)
     nsc_printf("interface %s Not found in bridge\n", beg);
 *p = c;
 if (c == '\0')
     break;
    }
}





static int
sysctl_bdg(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
    int enable = global_do_bridge[get_stack_id()];
    int error;

    error = sysctl_handle_int(oidp, &enable, 0, req);
    enable = (enable) ? 1 : 0;
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    if (enable != global_do_bridge[get_stack_id()]) {
 global_do_bridge[get_stack_id()] = enable;
 reconfigure_bridge_locked();
    }
    do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    return error ;
}
typedef  struct sysctl_oid   _GLOBAL_237_T; static  _GLOBAL_237_T  global_sysctl___net_link_ether_bridge_enable[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[0]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[1]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[2]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[3]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[4]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[5]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[6]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[7]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[8]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[9]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[10]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[11]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[12]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[13]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[14]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[15]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[16]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[17]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[18]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[19]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[20]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[21]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[22]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[23]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[24]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[25]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[26]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[27]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[28]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[29]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[30]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[31]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[32]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[33]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[34]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[35]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[36]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[37]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[38]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[39]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[40]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[41]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[42]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[43]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[44]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[45]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[46]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[47]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[48]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , ( 2 | ( 0x80000000 | 0x40000000  )   )   , & global_do_bridge[49]   , 0  , "enable"  , & sysctl_bdg   , "I"  , 0  , "Bridging"  } ,  };   
 
# 574 "freebsd5/net/bridge.c"
   
 
# 574 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_238_T; static  _GLOBAL_238_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[0] ;static  _GLOBAL_238_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[1] ;static  _GLOBAL_238_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[2] ;static  _GLOBAL_238_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[3] ;static  _GLOBAL_238_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[4] ;static  _GLOBAL_238_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[5] ;static  _GLOBAL_238_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[6] ;static  _GLOBAL_238_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[7] ;static  _GLOBAL_238_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[8] ;static  _GLOBAL_238_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[9] ;static  _GLOBAL_238_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[10] ;static  _GLOBAL_238_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[11] ;static  _GLOBAL_238_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[12] ;static  _GLOBAL_238_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[13] ;static  _GLOBAL_238_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[14] ;static  _GLOBAL_238_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[15] ;static  _GLOBAL_238_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[16] ;static  _GLOBAL_238_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[17] ;static  _GLOBAL_238_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[18] ;static  _GLOBAL_238_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[19] ;static  _GLOBAL_238_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[20] ;static  _GLOBAL_238_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[21] ;static  _GLOBAL_238_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[22] ;static  _GLOBAL_238_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[23] ;static  _GLOBAL_238_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[24] ;static  _GLOBAL_238_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[25] ;static  _GLOBAL_238_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[26] ;static  _GLOBAL_238_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[27] ;static  _GLOBAL_238_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[28] ;static  _GLOBAL_238_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[29] ;static  _GLOBAL_238_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[30] ;static  _GLOBAL_238_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[31] ;static  _GLOBAL_238_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[32] ;static  _GLOBAL_238_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[33] ;static  _GLOBAL_238_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[34] ;static  _GLOBAL_238_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[35] ;static  _GLOBAL_238_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[36] ;static  _GLOBAL_238_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[37] ;static  _GLOBAL_238_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[38] ;static  _GLOBAL_238_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[39] ;static  _GLOBAL_238_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[40] ;static  _GLOBAL_238_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[41] ;static  _GLOBAL_238_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[42] ;static  _GLOBAL_238_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[43] ;static  _GLOBAL_238_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[44] ;static  _GLOBAL_238_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[45] ;static  _GLOBAL_238_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[46] ;static  _GLOBAL_238_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[47] ;static  _GLOBAL_238_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[48] ;static  _GLOBAL_238_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_enable[49] ;    
 
# 574 "freebsd5/net/bridge.c"
    
                                                 




static int
sysctl_bdg_cfg(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
    int error;
    char *new_cfg;

    new_cfg = nsc_malloc(sizeof((*_GLOBAL_bridge_cfg_45_A[get_stack_id()])), (*_GLOBAL_M_TEMP_15_A[get_stack_id()]), 0x0002);
    bcopy((*_GLOBAL_bridge_cfg_45_A[get_stack_id()]), new_cfg, sizeof((*_GLOBAL_bridge_cfg_45_A[get_stack_id()])));

    error = sysctl_handle_string(oidp, new_cfg, oidp->oid_arg2, req);
    if (error == 0) {
        do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (strcmp(new_cfg, (*_GLOBAL_bridge_cfg_45_A[get_stack_id()]))) {
     bcopy(new_cfg, (*_GLOBAL_bridge_cfg_45_A[get_stack_id()]), sizeof((*_GLOBAL_bridge_cfg_45_A[get_stack_id()])));
     reconfigure_bridge_locked();
 }
 do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    }

    nsc_free(new_cfg, (*_GLOBAL_M_TEMP_15_A[get_stack_id()]));

    return error;
}
typedef  struct sysctl_oid   _GLOBAL_239_T; static  _GLOBAL_239_T  global_sysctl___net_link_ether_bridge_config[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_0_bridge_cfg_I   , sizeof ( _GLOBAL_0_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_1_bridge_cfg_I   , sizeof ( _GLOBAL_1_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_2_bridge_cfg_I   , sizeof ( _GLOBAL_2_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_3_bridge_cfg_I   , sizeof ( _GLOBAL_3_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_4_bridge_cfg_I   , sizeof ( _GLOBAL_4_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_5_bridge_cfg_I   , sizeof ( _GLOBAL_5_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_6_bridge_cfg_I   , sizeof ( _GLOBAL_6_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_7_bridge_cfg_I   , sizeof ( _GLOBAL_7_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_8_bridge_cfg_I   , sizeof ( _GLOBAL_8_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_9_bridge_cfg_I   , sizeof ( _GLOBAL_9_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_10_bridge_cfg_I   , sizeof ( _GLOBAL_10_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_11_bridge_cfg_I   , sizeof ( _GLOBAL_11_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_12_bridge_cfg_I   , sizeof ( _GLOBAL_12_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_13_bridge_cfg_I   , sizeof ( _GLOBAL_13_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_14_bridge_cfg_I   , sizeof ( _GLOBAL_14_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_15_bridge_cfg_I   , sizeof ( _GLOBAL_15_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_16_bridge_cfg_I   , sizeof ( _GLOBAL_16_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_17_bridge_cfg_I   , sizeof ( _GLOBAL_17_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_18_bridge_cfg_I   , sizeof ( _GLOBAL_18_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_19_bridge_cfg_I   , sizeof ( _GLOBAL_19_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_20_bridge_cfg_I   , sizeof ( _GLOBAL_20_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_21_bridge_cfg_I   , sizeof ( _GLOBAL_21_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_22_bridge_cfg_I   , sizeof ( _GLOBAL_22_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_23_bridge_cfg_I   , sizeof ( _GLOBAL_23_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_24_bridge_cfg_I   , sizeof ( _GLOBAL_24_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_25_bridge_cfg_I   , sizeof ( _GLOBAL_25_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_26_bridge_cfg_I   , sizeof ( _GLOBAL_26_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_27_bridge_cfg_I   , sizeof ( _GLOBAL_27_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_28_bridge_cfg_I   , sizeof ( _GLOBAL_28_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_29_bridge_cfg_I   , sizeof ( _GLOBAL_29_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_30_bridge_cfg_I   , sizeof ( _GLOBAL_30_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_31_bridge_cfg_I   , sizeof ( _GLOBAL_31_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_32_bridge_cfg_I   , sizeof ( _GLOBAL_32_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_33_bridge_cfg_I   , sizeof ( _GLOBAL_33_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_34_bridge_cfg_I   , sizeof ( _GLOBAL_34_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_35_bridge_cfg_I   , sizeof ( _GLOBAL_35_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_36_bridge_cfg_I   , sizeof ( _GLOBAL_36_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_37_bridge_cfg_I   , sizeof ( _GLOBAL_37_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_38_bridge_cfg_I   , sizeof ( _GLOBAL_38_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_39_bridge_cfg_I   , sizeof ( _GLOBAL_39_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_40_bridge_cfg_I   , sizeof ( _GLOBAL_40_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_41_bridge_cfg_I   , sizeof ( _GLOBAL_41_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_42_bridge_cfg_I   , sizeof ( _GLOBAL_42_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_43_bridge_cfg_I   , sizeof ( _GLOBAL_43_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_44_bridge_cfg_I   , sizeof ( _GLOBAL_44_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_45_bridge_cfg_I   , sizeof ( _GLOBAL_45_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_46_bridge_cfg_I   , sizeof ( _GLOBAL_46_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_47_bridge_cfg_I   , sizeof ( _GLOBAL_47_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_48_bridge_cfg_I   , sizeof ( _GLOBAL_48_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_49_bridge_cfg_I   , sizeof ( _GLOBAL_49_bridge_cfg_I )    , "config"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  };   

 
# 603 "freebsd5/net/bridge.c"
   

 
# 603 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_240_T; static  _GLOBAL_240_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[0] ;static  _GLOBAL_240_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[1] ;static  _GLOBAL_240_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[2] ;static  _GLOBAL_240_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[3] ;static  _GLOBAL_240_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[4] ;static  _GLOBAL_240_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[5] ;static  _GLOBAL_240_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[6] ;static  _GLOBAL_240_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[7] ;static  _GLOBAL_240_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[8] ;static  _GLOBAL_240_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[9] ;static  _GLOBAL_240_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[10] ;static  _GLOBAL_240_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[11] ;static  _GLOBAL_240_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[12] ;static  _GLOBAL_240_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[13] ;static  _GLOBAL_240_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[14] ;static  _GLOBAL_240_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[15] ;static  _GLOBAL_240_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[16] ;static  _GLOBAL_240_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[17] ;static  _GLOBAL_240_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[18] ;static  _GLOBAL_240_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[19] ;static  _GLOBAL_240_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[20] ;static  _GLOBAL_240_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[21] ;static  _GLOBAL_240_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[22] ;static  _GLOBAL_240_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[23] ;static  _GLOBAL_240_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[24] ;static  _GLOBAL_240_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[25] ;static  _GLOBAL_240_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[26] ;static  _GLOBAL_240_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[27] ;static  _GLOBAL_240_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[28] ;static  _GLOBAL_240_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[29] ;static  _GLOBAL_240_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[30] ;static  _GLOBAL_240_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[31] ;static  _GLOBAL_240_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[32] ;static  _GLOBAL_240_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[33] ;static  _GLOBAL_240_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[34] ;static  _GLOBAL_240_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[35] ;static  _GLOBAL_240_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[36] ;static  _GLOBAL_240_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[37] ;static  _GLOBAL_240_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[38] ;static  _GLOBAL_240_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[39] ;static  _GLOBAL_240_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[40] ;static  _GLOBAL_240_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[41] ;static  _GLOBAL_240_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[42] ;static  _GLOBAL_240_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[43] ;static  _GLOBAL_240_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[44] ;static  _GLOBAL_240_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[45] ;static  _GLOBAL_240_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[46] ;static  _GLOBAL_240_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[47] ;static  _GLOBAL_240_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[48] ;static  _GLOBAL_240_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_config __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_config[49] ;    

 
# 603 "freebsd5/net/bridge.c"
    

                            

static int
sysctl_refresh(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
    if (req->newptr)
 reconfigure_bridge();

    return 0;
}
typedef  struct sysctl_oid   _GLOBAL_241_T; static  _GLOBAL_241_T  global_sysctl___net_link_ether_bridge_refresh[NUM_STACKS] = {  { & global_sysctl__net_link_ether_bridge_children[0]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[1]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[2]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[3]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[4]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[5]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[6]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[7]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[8]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[9]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[10]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[11]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[12]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[13]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[14]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[15]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[16]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[17]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[18]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[19]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[20]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[21]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[22]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[23]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[24]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[25]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[26]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[27]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[28]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[29]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[30]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[31]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[32]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[33]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[34]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[35]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[36]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[37]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[38]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[39]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[40]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[41]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[42]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[43]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[44]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[45]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[46]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[47]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[48]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_bridge_children[49]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  };   
 
# 615 "freebsd5/net/bridge.c"
   
 
# 615 "freebsd5/net/bridge.c"
                typedef  void const   _GLOBAL_242_T; static  _GLOBAL_242_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[0] ;static  _GLOBAL_242_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[1] ;static  _GLOBAL_242_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[2] ;static  _GLOBAL_242_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[3] ;static  _GLOBAL_242_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[4] ;static  _GLOBAL_242_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[5] ;static  _GLOBAL_242_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[6] ;static  _GLOBAL_242_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[7] ;static  _GLOBAL_242_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[8] ;static  _GLOBAL_242_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[9] ;static  _GLOBAL_242_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[10] ;static  _GLOBAL_242_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[11] ;static  _GLOBAL_242_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[12] ;static  _GLOBAL_242_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[13] ;static  _GLOBAL_242_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[14] ;static  _GLOBAL_242_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[15] ;static  _GLOBAL_242_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[16] ;static  _GLOBAL_242_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[17] ;static  _GLOBAL_242_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[18] ;static  _GLOBAL_242_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[19] ;static  _GLOBAL_242_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[20] ;static  _GLOBAL_242_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[21] ;static  _GLOBAL_242_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[22] ;static  _GLOBAL_242_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[23] ;static  _GLOBAL_242_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[24] ;static  _GLOBAL_242_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[25] ;static  _GLOBAL_242_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[26] ;static  _GLOBAL_242_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[27] ;static  _GLOBAL_242_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[28] ;static  _GLOBAL_242_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[29] ;static  _GLOBAL_242_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[30] ;static  _GLOBAL_242_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[31] ;static  _GLOBAL_242_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[32] ;static  _GLOBAL_242_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[33] ;static  _GLOBAL_242_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[34] ;static  _GLOBAL_242_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[35] ;static  _GLOBAL_242_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[36] ;static  _GLOBAL_242_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[37] ;static  _GLOBAL_242_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[38] ;static  _GLOBAL_242_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[39] ;static  _GLOBAL_242_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[40] ;static  _GLOBAL_242_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[41] ;static  _GLOBAL_242_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[42] ;static  _GLOBAL_242_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[43] ;static  _GLOBAL_242_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[44] ;static  _GLOBAL_242_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[45] ;static  _GLOBAL_242_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[46] ;static  _GLOBAL_242_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[47] ;static  _GLOBAL_242_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[48] ;static  _GLOBAL_242_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh[49] ;    
 
# 615 "freebsd5/net/bridge.c"
    
                                                    
# 635 "freebsd5/net/bridge.c"
typedef  struct sysctl_oid   _GLOBAL_243_T; static  _GLOBAL_243_T  global_sysctl___net_link_ether_bridge_ipf_compat[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[0]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[1]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[2]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[3]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[4]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[5]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[6]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[7]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[8]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[9]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[10]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[11]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[12]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[13]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[14]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[15]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[16]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[17]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[18]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[19]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[20]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[21]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[22]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[23]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[24]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[25]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[26]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[27]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[28]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[29]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[30]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[31]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[32]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[33]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[34]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[35]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[36]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[37]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[38]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[39]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[40]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[41]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[42]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[43]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[44]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[45]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[46]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[47]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[48]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipf[49]   , 0  , "bridge_ipf"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through IPFilter"  } ,  };   
 
# 635 "freebsd5/net/bridge.c"
   
 
# 635 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_244_T; static  _GLOBAL_244_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[0] ;static  _GLOBAL_244_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[1] ;static  _GLOBAL_244_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[2] ;static  _GLOBAL_244_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[3] ;static  _GLOBAL_244_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[4] ;static  _GLOBAL_244_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[5] ;static  _GLOBAL_244_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[6] ;static  _GLOBAL_244_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[7] ;static  _GLOBAL_244_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[8] ;static  _GLOBAL_244_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[9] ;static  _GLOBAL_244_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[10] ;static  _GLOBAL_244_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[11] ;static  _GLOBAL_244_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[12] ;static  _GLOBAL_244_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[13] ;static  _GLOBAL_244_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[14] ;static  _GLOBAL_244_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[15] ;static  _GLOBAL_244_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[16] ;static  _GLOBAL_244_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[17] ;static  _GLOBAL_244_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[18] ;static  _GLOBAL_244_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[19] ;static  _GLOBAL_244_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[20] ;static  _GLOBAL_244_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[21] ;static  _GLOBAL_244_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[22] ;static  _GLOBAL_244_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[23] ;static  _GLOBAL_244_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[24] ;static  _GLOBAL_244_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[25] ;static  _GLOBAL_244_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[26] ;static  _GLOBAL_244_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[27] ;static  _GLOBAL_244_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[28] ;static  _GLOBAL_244_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[29] ;static  _GLOBAL_244_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[30] ;static  _GLOBAL_244_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[31] ;static  _GLOBAL_244_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[32] ;static  _GLOBAL_244_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[33] ;static  _GLOBAL_244_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[34] ;static  _GLOBAL_244_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[35] ;static  _GLOBAL_244_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[36] ;static  _GLOBAL_244_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[37] ;static  _GLOBAL_244_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[38] ;static  _GLOBAL_244_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[39] ;static  _GLOBAL_244_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[40] ;static  _GLOBAL_244_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[41] ;static  _GLOBAL_244_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[42] ;static  _GLOBAL_244_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[43] ;static  _GLOBAL_244_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[44] ;static  _GLOBAL_244_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[45] ;static  _GLOBAL_244_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[46] ;static  _GLOBAL_244_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[47] ;static  _GLOBAL_244_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[48] ;static  _GLOBAL_244_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipf_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipf_compat[49] ;    
 
# 635 "freebsd5/net/bridge.c"
    
                                                      
typedef  struct sysctl_oid   _GLOBAL_245_T; static  _GLOBAL_245_T  global_sysctl___net_link_ether_bridge_ipfw_compat[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[0]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[1]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[2]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[3]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[4]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[5]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[6]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[7]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[8]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[9]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[10]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[11]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[12]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[13]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[14]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[15]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[16]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[17]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[18]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[19]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[20]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[21]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[22]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[23]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[24]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[25]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[26]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[27]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[28]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[29]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[30]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[31]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[32]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[33]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[34]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[35]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[36]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[37]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[38]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[39]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[40]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[41]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[42]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[43]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[44]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[45]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[46]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[47]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[48]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_bdg_ipfw[49]   , 0  , "bridge_ipfw"  , sysctl_handle_int  , "I"  , 0  , "Pass bridged pkts through firewall"  } ,  };   
 
# 637 "freebsd5/net/bridge.c"
   
 
# 637 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_246_T; static  _GLOBAL_246_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[0] ;static  _GLOBAL_246_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[1] ;static  _GLOBAL_246_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[2] ;static  _GLOBAL_246_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[3] ;static  _GLOBAL_246_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[4] ;static  _GLOBAL_246_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[5] ;static  _GLOBAL_246_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[6] ;static  _GLOBAL_246_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[7] ;static  _GLOBAL_246_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[8] ;static  _GLOBAL_246_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[9] ;static  _GLOBAL_246_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[10] ;static  _GLOBAL_246_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[11] ;static  _GLOBAL_246_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[12] ;static  _GLOBAL_246_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[13] ;static  _GLOBAL_246_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[14] ;static  _GLOBAL_246_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[15] ;static  _GLOBAL_246_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[16] ;static  _GLOBAL_246_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[17] ;static  _GLOBAL_246_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[18] ;static  _GLOBAL_246_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[19] ;static  _GLOBAL_246_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[20] ;static  _GLOBAL_246_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[21] ;static  _GLOBAL_246_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[22] ;static  _GLOBAL_246_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[23] ;static  _GLOBAL_246_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[24] ;static  _GLOBAL_246_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[25] ;static  _GLOBAL_246_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[26] ;static  _GLOBAL_246_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[27] ;static  _GLOBAL_246_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[28] ;static  _GLOBAL_246_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[29] ;static  _GLOBAL_246_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[30] ;static  _GLOBAL_246_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[31] ;static  _GLOBAL_246_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[32] ;static  _GLOBAL_246_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[33] ;static  _GLOBAL_246_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[34] ;static  _GLOBAL_246_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[35] ;static  _GLOBAL_246_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[36] ;static  _GLOBAL_246_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[37] ;static  _GLOBAL_246_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[38] ;static  _GLOBAL_246_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[39] ;static  _GLOBAL_246_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[40] ;static  _GLOBAL_246_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[41] ;static  _GLOBAL_246_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[42] ;static  _GLOBAL_246_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[43] ;static  _GLOBAL_246_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[44] ;static  _GLOBAL_246_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[45] ;static  _GLOBAL_246_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[46] ;static  _GLOBAL_246_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[47] ;static  _GLOBAL_246_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[48] ;static  _GLOBAL_246_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_ipfw_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_ipfw_compat[49] ;    
 
# 637 "freebsd5/net/bridge.c"
    
                                                      
typedef  struct sysctl_oid   _GLOBAL_247_T; static  _GLOBAL_247_T  global_sysctl___net_link_ether_bdgstats_compat[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[0]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[1]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[2]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[3]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[4]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[5]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[6]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[7]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[8]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[9]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[10]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[11]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[12]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[13]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[14]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[15]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[16]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[17]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[18]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[19]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[20]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[21]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[22]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[23]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[24]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[25]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[26]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[27]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[28]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[29]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[30]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[31]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[32]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[33]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[34]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[35]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[36]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[37]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[38]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[39]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[40]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[41]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[42]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[43]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[44]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[45]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[46]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[47]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[48]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , 3  , 5 | ( 0x80000000 )    , & global_bdg_stats[49]   , sizeof ( struct bdg_stats  )   , "bdgstats"  , sysctl_handle_opaque  , "S," "bdg_stats"   , 0  , "bridge statistics"  } ,  };   
 
# 639 "freebsd5/net/bridge.c"
   
 
# 639 "freebsd5/net/bridge.c"
                 typedef  void const   _GLOBAL_248_T; static  _GLOBAL_248_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[0] ;static  _GLOBAL_248_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[1] ;static  _GLOBAL_248_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[2] ;static  _GLOBAL_248_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[3] ;static  _GLOBAL_248_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[4] ;static  _GLOBAL_248_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[5] ;static  _GLOBAL_248_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[6] ;static  _GLOBAL_248_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[7] ;static  _GLOBAL_248_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[8] ;static  _GLOBAL_248_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[9] ;static  _GLOBAL_248_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[10] ;static  _GLOBAL_248_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[11] ;static  _GLOBAL_248_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[12] ;static  _GLOBAL_248_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[13] ;static  _GLOBAL_248_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[14] ;static  _GLOBAL_248_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[15] ;static  _GLOBAL_248_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[16] ;static  _GLOBAL_248_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[17] ;static  _GLOBAL_248_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[18] ;static  _GLOBAL_248_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[19] ;static  _GLOBAL_248_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[20] ;static  _GLOBAL_248_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[21] ;static  _GLOBAL_248_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[22] ;static  _GLOBAL_248_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[23] ;static  _GLOBAL_248_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[24] ;static  _GLOBAL_248_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[25] ;static  _GLOBAL_248_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[26] ;static  _GLOBAL_248_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[27] ;static  _GLOBAL_248_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[28] ;static  _GLOBAL_248_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[29] ;static  _GLOBAL_248_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[30] ;static  _GLOBAL_248_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[31] ;static  _GLOBAL_248_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[32] ;static  _GLOBAL_248_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[33] ;static  _GLOBAL_248_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[34] ;static  _GLOBAL_248_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[35] ;static  _GLOBAL_248_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[36] ;static  _GLOBAL_248_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[37] ;static  _GLOBAL_248_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[38] ;static  _GLOBAL_248_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[39] ;static  _GLOBAL_248_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[40] ;static  _GLOBAL_248_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[41] ;static  _GLOBAL_248_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[42] ;static  _GLOBAL_248_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[43] ;static  _GLOBAL_248_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[44] ;static  _GLOBAL_248_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[45] ;static  _GLOBAL_248_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[46] ;static  _GLOBAL_248_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[47] ;static  _GLOBAL_248_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[48] ;static  _GLOBAL_248_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bdgstats_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bdgstats_compat[49] ;    
 
# 639 "freebsd5/net/bridge.c"
    
                                            
typedef  struct sysctl_oid   _GLOBAL_249_T; static  _GLOBAL_249_T  global_sysctl___net_link_ether_bridge_cfg_compat[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_0_bridge_cfg_I   , sizeof ( _GLOBAL_0_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_1_bridge_cfg_I   , sizeof ( _GLOBAL_1_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_2_bridge_cfg_I   , sizeof ( _GLOBAL_2_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_3_bridge_cfg_I   , sizeof ( _GLOBAL_3_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_4_bridge_cfg_I   , sizeof ( _GLOBAL_4_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_5_bridge_cfg_I   , sizeof ( _GLOBAL_5_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_6_bridge_cfg_I   , sizeof ( _GLOBAL_6_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_7_bridge_cfg_I   , sizeof ( _GLOBAL_7_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_8_bridge_cfg_I   , sizeof ( _GLOBAL_8_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_9_bridge_cfg_I   , sizeof ( _GLOBAL_9_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_10_bridge_cfg_I   , sizeof ( _GLOBAL_10_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_11_bridge_cfg_I   , sizeof ( _GLOBAL_11_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_12_bridge_cfg_I   , sizeof ( _GLOBAL_12_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_13_bridge_cfg_I   , sizeof ( _GLOBAL_13_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_14_bridge_cfg_I   , sizeof ( _GLOBAL_14_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_15_bridge_cfg_I   , sizeof ( _GLOBAL_15_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_16_bridge_cfg_I   , sizeof ( _GLOBAL_16_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_17_bridge_cfg_I   , sizeof ( _GLOBAL_17_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_18_bridge_cfg_I   , sizeof ( _GLOBAL_18_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_19_bridge_cfg_I   , sizeof ( _GLOBAL_19_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_20_bridge_cfg_I   , sizeof ( _GLOBAL_20_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_21_bridge_cfg_I   , sizeof ( _GLOBAL_21_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_22_bridge_cfg_I   , sizeof ( _GLOBAL_22_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_23_bridge_cfg_I   , sizeof ( _GLOBAL_23_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_24_bridge_cfg_I   , sizeof ( _GLOBAL_24_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_25_bridge_cfg_I   , sizeof ( _GLOBAL_25_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_26_bridge_cfg_I   , sizeof ( _GLOBAL_26_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_27_bridge_cfg_I   , sizeof ( _GLOBAL_27_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_28_bridge_cfg_I   , sizeof ( _GLOBAL_28_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_29_bridge_cfg_I   , sizeof ( _GLOBAL_29_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_30_bridge_cfg_I   , sizeof ( _GLOBAL_30_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_31_bridge_cfg_I   , sizeof ( _GLOBAL_31_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_32_bridge_cfg_I   , sizeof ( _GLOBAL_32_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_33_bridge_cfg_I   , sizeof ( _GLOBAL_33_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_34_bridge_cfg_I   , sizeof ( _GLOBAL_34_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_35_bridge_cfg_I   , sizeof ( _GLOBAL_35_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_36_bridge_cfg_I   , sizeof ( _GLOBAL_36_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_37_bridge_cfg_I   , sizeof ( _GLOBAL_37_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_38_bridge_cfg_I   , sizeof ( _GLOBAL_38_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_39_bridge_cfg_I   , sizeof ( _GLOBAL_39_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_40_bridge_cfg_I   , sizeof ( _GLOBAL_40_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_41_bridge_cfg_I   , sizeof ( _GLOBAL_41_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_42_bridge_cfg_I   , sizeof ( _GLOBAL_42_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_43_bridge_cfg_I   , sizeof ( _GLOBAL_43_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_44_bridge_cfg_I   , sizeof ( _GLOBAL_44_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_45_bridge_cfg_I   , sizeof ( _GLOBAL_45_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_46_bridge_cfg_I   , sizeof ( _GLOBAL_46_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_47_bridge_cfg_I   , sizeof ( _GLOBAL_47_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_48_bridge_cfg_I   , sizeof ( _GLOBAL_48_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , ( - 1  )   , ( 3 | ( 0x80000000 | 0x40000000  )   )   , & _GLOBAL_49_bridge_cfg_I   , sizeof ( _GLOBAL_49_bridge_cfg_I )    , "bridge_cfg"  , & sysctl_bdg_cfg   , "A"  , 0  , "Bridge configuration"  } ,  };   


 
# 641 "freebsd5/net/bridge.c"
   


 
# 641 "freebsd5/net/bridge.c"
               typedef  void const   _GLOBAL_250_T; static  _GLOBAL_250_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[0] ;static  _GLOBAL_250_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[1] ;static  _GLOBAL_250_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[2] ;static  _GLOBAL_250_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[3] ;static  _GLOBAL_250_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[4] ;static  _GLOBAL_250_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[5] ;static  _GLOBAL_250_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[6] ;static  _GLOBAL_250_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[7] ;static  _GLOBAL_250_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[8] ;static  _GLOBAL_250_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[9] ;static  _GLOBAL_250_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[10] ;static  _GLOBAL_250_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[11] ;static  _GLOBAL_250_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[12] ;static  _GLOBAL_250_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[13] ;static  _GLOBAL_250_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[14] ;static  _GLOBAL_250_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[15] ;static  _GLOBAL_250_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[16] ;static  _GLOBAL_250_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[17] ;static  _GLOBAL_250_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[18] ;static  _GLOBAL_250_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[19] ;static  _GLOBAL_250_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[20] ;static  _GLOBAL_250_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[21] ;static  _GLOBAL_250_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[22] ;static  _GLOBAL_250_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[23] ;static  _GLOBAL_250_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[24] ;static  _GLOBAL_250_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[25] ;static  _GLOBAL_250_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[26] ;static  _GLOBAL_250_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[27] ;static  _GLOBAL_250_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[28] ;static  _GLOBAL_250_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[29] ;static  _GLOBAL_250_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[30] ;static  _GLOBAL_250_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[31] ;static  _GLOBAL_250_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[32] ;static  _GLOBAL_250_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[33] ;static  _GLOBAL_250_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[34] ;static  _GLOBAL_250_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[35] ;static  _GLOBAL_250_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[36] ;static  _GLOBAL_250_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[37] ;static  _GLOBAL_250_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[38] ;static  _GLOBAL_250_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[39] ;static  _GLOBAL_250_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[40] ;static  _GLOBAL_250_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[41] ;static  _GLOBAL_250_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[42] ;static  _GLOBAL_250_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[43] ;static  _GLOBAL_250_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[44] ;static  _GLOBAL_250_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[45] ;static  _GLOBAL_250_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[46] ;static  _GLOBAL_250_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[47] ;static  _GLOBAL_250_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[48] ;static  _GLOBAL_250_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_cfg_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_cfg_compat[49] ;    


 
# 641 "freebsd5/net/bridge.c"
    


                            
typedef  struct sysctl_oid   _GLOBAL_251_T; static  _GLOBAL_251_T  global_sysctl___net_link_ether_bridge_refresh_compat[NUM_STACKS] = {  { & global_sysctl__net_link_ether_children[0]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[1]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[2]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[3]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[4]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[5]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[6]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[7]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[8]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[9]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[10]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[11]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[12]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[13]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[14]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[15]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[16]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[17]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[18]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[19]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[20]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[21]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[22]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[23]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[24]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[25]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[26]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[27]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[28]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[29]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[30]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[31]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[32]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[33]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[34]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[35]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[36]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[37]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[38]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[39]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[40]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[41]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[42]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[43]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[44]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[45]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[46]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[47]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[48]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  { & global_sysctl__net_link_ether_children[49]  , { 0 }   , ( - 1  )   , ( 2 | 0x40000000  )   , ( ( void *  ) 0  )   , 0  , "bridge_refresh"  , & sysctl_refresh   , "I"  , 0  , "iface refresh"  } ,  };   

 
# 645 "freebsd5/net/bridge.c"
   

 
# 645 "freebsd5/net/bridge.c"
                typedef  void const   _GLOBAL_252_T; static  _GLOBAL_252_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[0] ;static  _GLOBAL_252_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[1] ;static  _GLOBAL_252_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[2] ;static  _GLOBAL_252_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[3] ;static  _GLOBAL_252_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[4] ;static  _GLOBAL_252_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[5] ;static  _GLOBAL_252_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[6] ;static  _GLOBAL_252_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[7] ;static  _GLOBAL_252_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[8] ;static  _GLOBAL_252_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[9] ;static  _GLOBAL_252_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[10] ;static  _GLOBAL_252_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[11] ;static  _GLOBAL_252_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[12] ;static  _GLOBAL_252_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[13] ;static  _GLOBAL_252_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[14] ;static  _GLOBAL_252_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[15] ;static  _GLOBAL_252_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[16] ;static  _GLOBAL_252_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[17] ;static  _GLOBAL_252_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[18] ;static  _GLOBAL_252_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[19] ;static  _GLOBAL_252_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[20] ;static  _GLOBAL_252_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[21] ;static  _GLOBAL_252_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[22] ;static  _GLOBAL_252_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[23] ;static  _GLOBAL_252_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[24] ;static  _GLOBAL_252_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[25] ;static  _GLOBAL_252_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[26] ;static  _GLOBAL_252_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[27] ;static  _GLOBAL_252_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[28] ;static  _GLOBAL_252_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[29] ;static  _GLOBAL_252_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[30] ;static  _GLOBAL_252_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[31] ;static  _GLOBAL_252_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[32] ;static  _GLOBAL_252_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[33] ;static  _GLOBAL_252_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[34] ;static  _GLOBAL_252_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[35] ;static  _GLOBAL_252_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[36] ;static  _GLOBAL_252_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[37] ;static  _GLOBAL_252_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[38] ;static  _GLOBAL_252_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[39] ;static  _GLOBAL_252_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[40] ;static  _GLOBAL_252_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[41] ;static  _GLOBAL_252_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[42] ;static  _GLOBAL_252_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[43] ;static  _GLOBAL_252_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[44] ;static  _GLOBAL_252_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[45] ;static  _GLOBAL_252_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[46] ;static  _GLOBAL_252_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[47] ;static  _GLOBAL_252_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[48] ;static  _GLOBAL_252_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_ether_bridge_refresh_compat __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_ether_bridge_refresh_compat[49] ;    

 
# 645 "freebsd5/net/bridge.c"
    

                                                    


typedef  int  _GLOBAL_253_T; static  _GLOBAL_253_T  global_bdg_loops[NUM_STACKS];   
typedef  int  _GLOBAL_254_T; static  _GLOBAL_254_T  global_bdg_slowtimer[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  int  _GLOBAL_255_T; static  _GLOBAL_255_T  global_bdg_age_index[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     




static void
bdg_timeout(void *dummy)
{
    if (global_do_bridge[get_stack_id()]) {
 int l, i;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);



 l = global_bdg_age_index[get_stack_id()] + 8192/4 ;
 if (l > 8192)
     l = 8192;

 for (i = 0; i < global_n_clusters[get_stack_id()]; i++) {
     bdg_hash_table *bdg_table = global_clusters[get_stack_id()][i].ht;
     for (; global_bdg_age_index[get_stack_id()] < l; global_bdg_age_index[get_stack_id()]++)
  if (bdg_table[global_bdg_age_index[get_stack_id()]].used)
      bdg_table[global_bdg_age_index[get_stack_id()]].used = 0;
  else if (bdg_table[global_bdg_age_index[get_stack_id()]].name) {
      if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: flushing stale entry %d\n", __func__, global_bdg_age_index[get_stack_id()])
                            ;
      bdg_table[global_bdg_age_index[get_stack_id()]].name = ((void *)0);
  }
 }
 if (global_bdg_age_index[get_stack_id()] >= 8192)
     global_bdg_age_index[get_stack_id()] = 0;

 if (--global_bdg_slowtimer[get_stack_id()] <= 0 ) {
     global_bdg_slowtimer[get_stack_id()] = 5;

     bridge_on();
     global_bdg_loops[get_stack_id()] = 0;
 }
 do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    }
    callout_reset(&global_bdg_callout[get_stack_id()], 2*global_hz[get_stack_id()], bdg_timeout, ((void *)0));
}
# 707 "freebsd5/net/bridge.c"
static __inline struct ifnet *
bridge_dst_lookup(struct ether_header *eh, struct cluster_softc *c)
{
    bdg_hash_table *bt;

    ;

    if ((*(eh->ether_dhost) & 0x01))
 return ( *((u_int32_t *)(eh->ether_dhost)) == 0xffffffff && ((u_int16_t *)(eh->ether_dhost))[2] == 0xffff ) ? ( (struct ifnet *)1 ) : ( (struct ifnet *)2 );




    ;
    switch (c->ports) {
 int i;
    default:
 for (i = c->ports-1; i > 1; i--) {
     if ((bcmp(c->my_macs[i].etheraddr, eh->ether_dhost, 6) == 0))
         return ( (struct ifnet *)3 );
 }

    case 2:
 if ((bcmp(c->my_macs[1].etheraddr, eh->ether_dhost, 6) == 0))
     return ( (struct ifnet *)3 );
    case 1:
 if ((bcmp(c->my_macs[0].etheraddr, eh->ether_dhost, 6) == 0))
     return ( (struct ifnet *)3 );
    }



    bt = &c->ht[( __bswap16(((u_int16_t *)eh->ether_dhost)[1] ^ ((u_int16_t *)eh->ether_dhost)[2]) & (8192 -1))];
    if (bt->name && (bcmp(bt->etheraddr, eh->ether_dhost, 6) == 0))
 return bt->name;
    else
 return ( (struct ifnet *)5 );
}
# 764 "freebsd5/net/bridge.c"
static struct ifnet *
bridge_in(struct ifnet *ifp, struct ether_header *eh)
{
    int index;
    struct ifnet *dst, *old;
    bdg_hash_table *bt;
    int dropit = (global_ifp2sc[get_stack_id()][ifp->if_index].flags & 0x0002);




    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    index = ( __bswap16(((u_int16_t *)eh->ether_shost)[1] ^ ((u_int16_t *)eh->ether_shost)[2]) & (8192 -1));
    bt = &(global_ifp2sc[get_stack_id()][ifp->if_index].cluster)->ht[index];
    bt->used = 1;
    old = bt->name;
    if (old) {
 if (!(bcmp(eh->ether_shost, bt->etheraddr, 6) == 0)) {
     global_bdg_ipfw_colls[get_stack_id()]++;
     bt->name = ((void *)0);
 } else if (old != ifp) {
# 793 "freebsd5/net/bridge.c"
     bt->name = ifp;
     nsc_printf("-- loop (%d) %6D to %s from %s (%s)\n",
   global_bdg_loops[get_stack_id()], eh->ether_shost, ".",
   ifp->if_xname, old->if_xname,
   (global_ifp2sc[get_stack_id()][old->if_index].flags & 0x0002) ? "muted":"active");
     dropit = 1;
     if (!(global_ifp2sc[get_stack_id()][old->if_index].flags & 0x0002)) {
  if (global_bdg_loops[get_stack_id()]++ > 10)
      global_ifp2sc[get_stack_id()][old->if_index].flags |= 0x0002;
     }
 }
    }




    if (bt->name == ((void *)0)) {
 if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: new addr %6D at %d for %s\n", __func__, eh->ether_shost, ".", index, ifp->if_xname)
                                                           ;
 bcopy(eh->ether_shost, bt->etheraddr, 6);
 bt->name = ifp;
    }
    dst = bridge_dst_lookup(eh, (global_ifp2sc[get_stack_id()][ifp->if_index].cluster));
    do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
# 827 "freebsd5/net/bridge.c"
    global_bdg_stats[get_stack_id()].s[ifp->if_index].p_in[(uintptr_t)( (struct ifnet *)7 )]++;
    switch ((uintptr_t)dst) {
    case (uintptr_t)( (struct ifnet *)1 ):
    case (uintptr_t)( (struct ifnet *)2 ):
    case (uintptr_t)( (struct ifnet *)3 ):
    case (uintptr_t)( (struct ifnet *)5 ):
    case (uintptr_t)( (struct ifnet *)4 ):
 global_bdg_stats[get_stack_id()].s[ifp->if_index].p_in[(uintptr_t)dst]++;
 break;
    default:
 if (dst == ifp || dropit)
     global_bdg_stats[get_stack_id()].s[ifp->if_index].p_in[(uintptr_t)( (struct ifnet *)4 )]++;
 else
     global_bdg_stats[get_stack_id()].s[ifp->if_index].p_in[(uintptr_t)( (struct ifnet *)9 )]++;
 break;
    }

    if (dropit) {
 if (dst == ( (struct ifnet *)1 ) || dst == ( (struct ifnet *)2 ) || dst == ( (struct ifnet *)3 ))
     dst = ( (struct ifnet *)3 );
 else
     dst = ( (struct ifnet *)4 );
    } else {
 if (dst == ifp)
     dst = ( (struct ifnet *)4 );
    }
    if (global_bridge_debug[get_stack_id()]) nsc_printf ("%s: %6D ->%6D ty 0x%04x dst %s\n", __func__, eh->ether_shost, ".", eh->ether_dhost, ".", __bswap16(eh->ether_type), (dst <= ( (struct ifnet *)9 )) ? (*_GLOBAL_bdg_dst_names_44_A[get_stack_id()])[(uintptr_t)dst] : dst->if_xname)




                 ;

    return dst;
}
# 873 "freebsd5/net/bridge.c"
static __inline int
bridge_ifok(struct ifnet *ifp, struct ifnet *src, struct ifnet *dst)
{
    return ((global_ifp2sc[get_stack_id()][ifp->if_index].flags & 0x0004)
 && !(global_ifp2sc[get_stack_id()][ifp->if_index].flags & 0x0002)
 && !((&ifp->if_snd)->ifq_len >= (&ifp->if_snd)->ifq_maxlen)
 && (ifp->if_flags & (0x1|0x40)) == (0x1|0x40)
 && ifp != src
 && (dst == ((void *)0) || (global_ifp2sc[get_stack_id()][ifp->if_index].cluster) == (global_ifp2sc[get_stack_id()][dst->if_index].cluster) ));
}
# 898 "freebsd5/net/bridge.c"
static struct mbuf *
bdg_forward(struct mbuf *m0, struct ifnet *dst)
{
# 912 "freebsd5/net/bridge.c"
    struct ether_header *eh;
    struct ifnet *src;
    struct ifnet *ifp, *last;
    int shared = global_bdg_copy[get_stack_id()];
    int error;
    struct ifnet *real_dst = dst;
    struct ip_fw_args args;
    struct ether_header save_eh;
    struct mbuf *m;

   

    args.rule = ip_dn_claim_rule(m0);
    if (args.rule)
     shared = 0;
    else
 global_bdg_thru[get_stack_id()]++;




    eh = ((struct ether_header *)((m0)->m_hdr.mh_data));

    src = m0->M_dat.MH.MH_pkthdr.rcvif;
    if (src == ((void *)0)) {
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 dst = bridge_dst_lookup(eh, (global_ifp2sc[get_stack_id()][real_dst->if_index].cluster));
 do { if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_bdg_mtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
    }

    if (dst == ( (struct ifnet *)4 )) {
 nsc_printf("xx bdg_forward for BDG_DROP\n");
 m_freem(m0);
 global_bdg_dropped[get_stack_id()]++;
 return ((void *)0);
    }
    if (dst == ( (struct ifnet *)3 )) {
 nsc_printf("xx ouch, bdg_forward for local pkt\n");
 return m0;
    }
    if (dst == ( (struct ifnet *)1 ) || dst == ( (struct ifnet *)2 )) {

  shared = 1;
    }
# 964 "freebsd5/net/bridge.c"
    if (src != ((void *)0) && (
 (global_inet_pfil_hook[get_stack_id()].ph_busy_count >= 0 && global_bdg_ipf[get_stack_id()] != 0) ||
 ((global_ip_fw_chk_ptr[get_stack_id()] != ((void *)0)) && global_bdg_ipfw[get_stack_id()] != 0))) {

 int i;

 if (args.rule != ((void *)0) && global_fw_one_pass[get_stack_id()])
     goto forward;




 i = min(m0->M_dat.MH.MH_pkthdr.len, global_max_protohdr[get_stack_id()]) ;
 if (shared || m0->m_hdr.mh_len < i) {
     m0 = m_pullup(m0, i);
     if (m0 == ((void *)0)) {
  nsc_printf("%s: m_pullup failed\n", __func__);
  global_bdg_dropped[get_stack_id()]++;
  return ((void *)0);
     }
     eh = ((struct ether_header *)((m0)->m_hdr.mh_data));
 }







 bcopy(eh, &save_eh, (6*2+2));
 m_adj(m0, (6*2+2));





 if (!(global_ip_fw_chk_ptr[get_stack_id()] != ((void *)0))) {
 if (global_inet_pfil_hook[get_stack_id()].ph_busy_count >= 0 &&
     m0->M_dat.MH.MH_pkthdr.len >= sizeof(struct ip) &&
  __bswap16(save_eh.ether_type) == 0x0800) {




     struct ip *ip = ((struct ip *)((m0)->m_hdr.mh_data));

     ip->ip_len = __bswap16(ip->ip_len);
     ip->ip_off = __bswap16(ip->ip_off);

     if (pfil_run_hooks(&global_inet_pfil_hook[get_stack_id()], &m0, src, 0x00000001, ((void *)0)) != 0) {

   return ((void *)0);
      }
     if (m0 == ((void *)0))
   return m0;




     ip = ((struct ip *)((m0)->m_hdr.mh_data));
     ip->ip_len = __bswap16(ip->ip_len);
     ip->ip_off = __bswap16(ip->ip_off);
 }
 }




 if (!(global_ip_fw_chk_ptr[get_stack_id()] != ((void *)0)) || global_bdg_ipfw[get_stack_id()] == 0) {
     do { do { struct mbuf **_mmp = &((m0)); struct mbuf *_mm = *_mmp; int _mplen = ((6*2+2)); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0); if ((m0) == ((void *)0)) { global_bdg_dropped[get_stack_id()]++; return ((void *)0); } if (eh != ((struct ether_header *)(((m0))->m_hdr.mh_data))) bcopy(&save_eh, ((struct ether_header *)(((m0))->m_hdr.mh_data)), (6*2+2)); else global_bdg_predict[get_stack_id()]++; } while (0);;
     goto forward;
 }






 args.m = m0;
 args.oif = ((void *)0);
 args.next_hop = ((void *)0);
 args.eh = &save_eh;
 i = global_ip_fw_chk_ptr[get_stack_id()](&args);
 m0 = args.m;

 if (m0 != ((void *)0))
  do { do { struct mbuf **_mmp = &((m0)); struct mbuf *_mm = *_mmp; int _mplen = ((6*2+2)); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0); if ((m0) == ((void *)0)) { global_bdg_dropped[get_stack_id()]++; return ((void *)0); } if (eh != ((struct ether_header *)(((m0))->m_hdr.mh_data))) bcopy(&save_eh, ((struct ether_header *)(((m0))->m_hdr.mh_data)), (6*2+2)); else global_bdg_predict[get_stack_id()]++; } while (0);;

 if ( (i & 0x40000) || m0 == ((void *)0))
     return m0;

 if (i == 0)
     goto forward;
 if ((global_ip_dn_io_ptr[get_stack_id()] != ((void *)0)) && (i & 0x10000)) {




     if (shared) {
  m = m_copypacket(m0, 0x0001);
  if (m == ((void *)0)) {
      global_bdg_dropped[get_stack_id()]++;
      return ((void *)0);
  }
     } else {
  m = m0 ;
  m0 = ((void *)0) ;
     }

     args.oif = real_dst;
     global_ip_dn_io_ptr[get_stack_id()](m, (i & 0xffff),3, &args);
     return m0;
 }




 global_bdg_ipfw_drops[get_stack_id()]++;
 return m0;
    }
forward:




    if (shared) {
 int i = min(m0->M_dat.MH.MH_pkthdr.len, global_max_protohdr[get_stack_id()]);

 m0 = m_pullup(m0, i);
 if (m0 == ((void *)0)) {
     global_bdg_dropped[get_stack_id()]++;
     return ((void *)0);
 }

    }
# 1107 "freebsd5/net/bridge.c"
    if (src != ((void *)0))
 real_dst = src;

    last = ((void *)0);
    if (dst == ( (struct ifnet *)1 ) || dst == ( (struct ifnet *)2 ) || dst == ( (struct ifnet *)5 )) {



 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
     if (bridge_ifok(ifp, src, real_dst)) {
  if (last) {





      m = m_copypacket(m0, 0x0001);
      if (m == ((void *)0)) {
   do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   nsc_printf("%s: , m_copypacket failed!\n", __func__);
   global_bdg_dropped[get_stack_id()]++;
   return m0;
    }
      do { int len; short mflags; len = (m)->M_dat.MH.MH_pkthdr.len; mflags = (m)->m_hdr.mh_flags; do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(last)->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(last)->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); if (((&(last)->if_snd)->altq_flags & 0x02)) (error) = (*(&(last)->if_snd)->altq_enqueue)((&(last)->if_snd),(m),(((void *)0))); else { if (((&(last)->if_snd)->ifq_len >= (&(last)->if_snd)->ifq_maxlen)) { m_freem(m); (error) = 55; } else { do { (m)->m_hdr.mh_nextpkt = ((void *)0); if ((&(last)->if_snd)->ifq_tail == ((void *)0)) (&(last)->if_snd)->ifq_head = m; else (&(last)->if_snd)->ifq_tail->m_hdr.mh_nextpkt = m; (&(last)->if_snd)->ifq_tail = m; (&(last)->if_snd)->ifq_len++; } while (0); (error) = 0; } } if (error) (&(last)->if_snd)->ifq_drops++; do { if (!atomic_cmpset_ptr(&((((&(&(last)->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(last)->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0); if ((error) == 0) { (last)->if_data.ifi_obytes += len + (0); if (mflags & 0x0400) (last)->if_data.ifi_omcasts++; if (((last)->if_flags & 0x400) == 0) if_start(last); } } while (0);
      if (!error)
   global_bdg_stats[get_stack_id()].s[last->if_index].p_in[(uintptr_t)( (struct ifnet *)8 )]++;
      else
   global_bdg_dropped[get_stack_id()]++;
  }
  last = ifp;
     }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
     } else {
 if (bridge_ifok(dst, src, real_dst))
     last = dst;
    }
    if (last) {
 if (shared) {
  m = m_copypacket(m0, 0x0001);
  if (m == ((void *)0)) {
  nsc_printf("%s: sorry, m_copypacket failed!\n", __func__);
      global_bdg_dropped[get_stack_id()]++ ;
  return m0;
     }
 } else {
     m = m0, m0 = ((void *)0);
     }
 do { int len; short mflags; len = (m)->M_dat.MH.MH_pkthdr.len; mflags = (m)->m_hdr.mh_flags; do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(last)->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(last)->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); if (((&(last)->if_snd)->altq_flags & 0x02)) (error) = (*(&(last)->if_snd)->altq_enqueue)((&(last)->if_snd),(m),(((void *)0))); else { if (((&(last)->if_snd)->ifq_len >= (&(last)->if_snd)->ifq_maxlen)) { m_freem(m); (error) = 55; } else { do { (m)->m_hdr.mh_nextpkt = ((void *)0); if ((&(last)->if_snd)->ifq_tail == ((void *)0)) (&(last)->if_snd)->ifq_head = m; else (&(last)->if_snd)->ifq_tail->m_hdr.mh_nextpkt = m; (&(last)->if_snd)->ifq_tail = m; (&(last)->if_snd)->ifq_len++; } while (0); (error) = 0; } } if (error) (&(last)->if_snd)->ifq_drops++; do { if (!atomic_cmpset_ptr(&((((&(&(last)->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(last)->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0); if ((error) == 0) { (last)->if_data.ifi_obytes += len + (0); if (mflags & 0x0400) (last)->if_data.ifi_omcasts++; if (((last)->if_flags & 0x400) == 0) if_start(last); } } while (0);
 if (!error)
     global_bdg_stats[get_stack_id()].s[last->if_index].p_in[(uintptr_t)( (struct ifnet *)8 )]++;
 else
     global_bdg_dropped[get_stack_id()]++;
    }

   

    return m0;

}




static int
bdginit(void)
{
    if (global_bootverbose[get_stack_id()])
     nsc_printf("BRIDGE %s loaded\n", (*_GLOBAL_bridge_version_43_A[get_stack_id()]));

    global_ifp2sc[get_stack_id()] = nsc_malloc(128 * sizeof(struct bdg_softc),
  (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]), 0x0002 | 0x0100 );
    if (global_ifp2sc[get_stack_id()] == ((void *)0))
 return 12;

    mtx_init(&global_bdg_mtx[get_stack_id()], "bridge", ((void *)0), 0x00000000);

    global_n_clusters[get_stack_id()] = 0;
    global_clusters[get_stack_id()] = ((void *)0);
    global_do_bridge[get_stack_id()] = 0;

    bzero(&global_bdg_stats[get_stack_id()], sizeof(global_bdg_stats[get_stack_id()]));

    global_bridge_in_ptr[get_stack_id()] = bridge_in;
    global_bdg_forward_ptr[get_stack_id()] = bdg_forward;
    global_bdgtakeifaces_ptr[get_stack_id()] = reconfigure_bridge;

    global_bdgtakeifaces_ptr[get_stack_id()]();

    callout_init(&global_bdg_callout[get_stack_id()], global_debug_mpsafenet[get_stack_id()] ? 0x0008 : 0);
    bdg_timeout(0);
    return 0 ;
}

static void
bdgdestroy(void)
{
    global_bridge_in_ptr[get_stack_id()] = ((void *)0);
    global_bdg_forward_ptr[get_stack_id()] = ((void *)0);
    global_bdgtakeifaces_ptr[get_stack_id()] = ((void *)0);

    _callout_stop_safe(&global_bdg_callout[get_stack_id()], 0);
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_bdg_mtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_bdg_mtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    bridge_off();

    if (global_ifp2sc[get_stack_id()]) {
 nsc_free(global_ifp2sc[get_stack_id()], (*_GLOBAL_M_IFADDR_27_A[get_stack_id()]));
 global_ifp2sc[get_stack_id()] = ((void *)0);
    }
    mtx_destroy(&global_bdg_mtx[get_stack_id()]);
}




static int
bridge_modevent(module_t mod, int type, void *unused)
{
 int err;

 switch (type) {
 case MOD_LOAD:
  if ((global_bdgtakeifaces_ptr[get_stack_id()] != ((void *)0)))
   err = 17;
  else
  err = bdginit();
  break;
 case MOD_UNLOAD:
  global_do_bridge[get_stack_id()] = 0;
  bdgdestroy();
  err = 0;
  break;
 default:
  err = 22;
  break;
 }
 return err;
}

typedef  moduledata_t  _GLOBAL_256_T; static  _GLOBAL_256_T  global_bridge_mod[NUM_STACKS] = {  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  { "bridge" , bridge_modevent  , 0  } ,  };     
 
 
 


typedef  struct mod_metadata   _GLOBAL_257_T; static  _GLOBAL_257_T  global__mod_metadata_md_bridge[NUM_STACKS] = {  { 1 , 2  , & global_bridge_mod[0]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[1]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[2]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[3]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[4]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[5]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[6]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[7]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[8]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[9]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[10]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[11]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[12]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[13]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[14]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[15]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[16]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[17]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[18]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[19]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[20]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[21]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[22]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[23]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[24]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[25]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[26]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[27]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[28]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[29]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[30]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[31]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[32]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[33]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[34]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[35]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[36]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[37]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[38]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[39]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[40]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[41]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[42]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[43]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[44]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[45]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[46]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[47]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[48]   , "bridge"  } ,  { 1 , 2  , & global_bridge_mod[49]   , "bridge"  } ,  };            typedef  void const   _GLOBAL_258_T; static  _GLOBAL_258_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[0] ;static  _GLOBAL_258_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[1] ;static  _GLOBAL_258_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[2] ;static  _GLOBAL_258_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[3] ;static  _GLOBAL_258_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[4] ;static  _GLOBAL_258_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[5] ;static  _GLOBAL_258_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[6] ;static  _GLOBAL_258_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[7] ;static  _GLOBAL_258_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[8] ;static  _GLOBAL_258_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[9] ;static  _GLOBAL_258_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[10] ;static  _GLOBAL_258_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[11] ;static  _GLOBAL_258_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[12] ;static  _GLOBAL_258_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[13] ;static  _GLOBAL_258_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[14] ;static  _GLOBAL_258_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[15] ;static  _GLOBAL_258_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[16] ;static  _GLOBAL_258_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[17] ;static  _GLOBAL_258_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[18] ;static  _GLOBAL_258_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[19] ;static  _GLOBAL_258_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[20] ;static  _GLOBAL_258_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[21] ;static  _GLOBAL_258_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[22] ;static  _GLOBAL_258_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[23] ;static  _GLOBAL_258_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[24] ;static  _GLOBAL_258_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[25] ;static  _GLOBAL_258_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[26] ;static  _GLOBAL_258_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[27] ;static  _GLOBAL_258_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[28] ;static  _GLOBAL_258_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[29] ;static  _GLOBAL_258_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[30] ;static  _GLOBAL_258_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[31] ;static  _GLOBAL_258_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[32] ;static  _GLOBAL_258_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[33] ;static  _GLOBAL_258_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[34] ;static  _GLOBAL_258_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[35] ;static  _GLOBAL_258_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[36] ;static  _GLOBAL_258_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[37] ;static  _GLOBAL_258_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[38] ;static  _GLOBAL_258_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[39] ;static  _GLOBAL_258_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[40] ;static  _GLOBAL_258_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[41] ;static  _GLOBAL_258_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[42] ;static  _GLOBAL_258_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[43] ;static  _GLOBAL_258_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[44] ;static  _GLOBAL_258_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[45] ;static  _GLOBAL_258_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[46] ;static  _GLOBAL_258_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[47] ;static  _GLOBAL_258_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[48] ;static  _GLOBAL_258_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_bridge __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_bridge[49] ;          typedef  struct sysinit   _GLOBAL_259_T; static  _GLOBAL_259_T  global_bridgemodule_sys_init[NUM_STACKS] = {  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[0]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[1]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[2]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[3]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[4]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[5]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[6]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[7]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[8]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[9]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[10]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[11]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[12]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[13]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[14]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[15]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[16]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[17]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[18]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[19]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[20]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[21]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[22]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[23]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[24]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[25]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[26]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[27]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[28]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[29]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[30]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[31]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[32]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[33]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[34]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[35]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[36]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[37]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[38]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[39]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[40]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[41]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[42]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[43]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[44]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[45]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[46]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[47]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[48]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_bridge_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_260_T; static  _GLOBAL_260_T  * const  _global_section_0___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[0] ;static  _GLOBAL_260_T  * const  _global_section_1___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[1] ;static  _GLOBAL_260_T  * const  _global_section_2___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[2] ;static  _GLOBAL_260_T  * const  _global_section_3___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[3] ;static  _GLOBAL_260_T  * const  _global_section_4___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[4] ;static  _GLOBAL_260_T  * const  _global_section_5___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[5] ;static  _GLOBAL_260_T  * const  _global_section_6___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[6] ;static  _GLOBAL_260_T  * const  _global_section_7___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[7] ;static  _GLOBAL_260_T  * const  _global_section_8___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[8] ;static  _GLOBAL_260_T  * const  _global_section_9___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[9] ;static  _GLOBAL_260_T  * const  _global_section_10___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[10] ;static  _GLOBAL_260_T  * const  _global_section_11___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[11] ;static  _GLOBAL_260_T  * const  _global_section_12___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[12] ;static  _GLOBAL_260_T  * const  _global_section_13___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[13] ;static  _GLOBAL_260_T  * const  _global_section_14___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[14] ;static  _GLOBAL_260_T  * const  _global_section_15___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[15] ;static  _GLOBAL_260_T  * const  _global_section_16___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[16] ;static  _GLOBAL_260_T  * const  _global_section_17___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[17] ;static  _GLOBAL_260_T  * const  _global_section_18___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[18] ;static  _GLOBAL_260_T  * const  _global_section_19___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[19] ;static  _GLOBAL_260_T  * const  _global_section_20___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[20] ;static  _GLOBAL_260_T  * const  _global_section_21___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[21] ;static  _GLOBAL_260_T  * const  _global_section_22___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[22] ;static  _GLOBAL_260_T  * const  _global_section_23___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[23] ;static  _GLOBAL_260_T  * const  _global_section_24___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[24] ;static  _GLOBAL_260_T  * const  _global_section_25___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[25] ;static  _GLOBAL_260_T  * const  _global_section_26___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[26] ;static  _GLOBAL_260_T  * const  _global_section_27___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[27] ;static  _GLOBAL_260_T  * const  _global_section_28___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[28] ;static  _GLOBAL_260_T  * const  _global_section_29___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[29] ;static  _GLOBAL_260_T  * const  _global_section_30___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[30] ;static  _GLOBAL_260_T  * const  _global_section_31___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[31] ;static  _GLOBAL_260_T  * const  _global_section_32___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[32] ;static  _GLOBAL_260_T  * const  _global_section_33___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[33] ;static  _GLOBAL_260_T  * const  _global_section_34___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[34] ;static  _GLOBAL_260_T  * const  _global_section_35___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[35] ;static  _GLOBAL_260_T  * const  _global_section_36___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[36] ;static  _GLOBAL_260_T  * const  _global_section_37___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[37] ;static  _GLOBAL_260_T  * const  _global_section_38___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[38] ;static  _GLOBAL_260_T  * const  _global_section_39___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[39] ;static  _GLOBAL_260_T  * const  _global_section_40___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[40] ;static  _GLOBAL_260_T  * const  _global_section_41___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[41] ;static  _GLOBAL_260_T  * const  _global_section_42___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[42] ;static  _GLOBAL_260_T  * const  _global_section_43___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[43] ;static  _GLOBAL_260_T  * const  _global_section_44___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[44] ;static  _GLOBAL_260_T  * const  _global_section_45___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[45] ;static  _GLOBAL_260_T  * const  _global_section_46___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[46] ;static  _GLOBAL_260_T  * const  _global_section_47___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[47] ;static  _GLOBAL_260_T  * const  _global_section_48___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[48] ;static  _GLOBAL_260_T  * const  _global_section_49___set_sysinit_set_sym_bridgemodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_bridgemodule_sys_init[49] ;          struct __hack;
typedef  struct mod_version   _GLOBAL_261_T; static  _GLOBAL_261_T  global__bridge_version[NUM_STACKS] = {  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  };         typedef  struct mod_metadata   _GLOBAL_262_T; static  _GLOBAL_262_T  global__mod_metadata_bridge_version[NUM_STACKS] = {  { 1 , 3  , & global__bridge_version[0]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[1]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[2]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[3]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[4]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[5]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[6]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[7]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[8]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[9]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[10]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[11]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[12]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[13]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[14]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[15]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[16]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[17]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[18]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[19]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[20]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[21]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[22]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[23]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[24]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[25]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[26]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[27]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[28]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[29]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[30]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[31]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[32]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[33]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[34]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[35]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[36]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[37]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[38]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[39]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[40]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[41]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[42]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[43]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[44]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[45]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[46]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[47]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[48]   , "bridge"  } ,  { 1 , 3  , & global__bridge_version[49]   , "bridge"  } ,  };            typedef  void const   _GLOBAL_263_T; static  _GLOBAL_263_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[0] ;static  _GLOBAL_263_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[1] ;static  _GLOBAL_263_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[2] ;static  _GLOBAL_263_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[3] ;static  _GLOBAL_263_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[4] ;static  _GLOBAL_263_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[5] ;static  _GLOBAL_263_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[6] ;static  _GLOBAL_263_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[7] ;static  _GLOBAL_263_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[8] ;static  _GLOBAL_263_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[9] ;static  _GLOBAL_263_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[10] ;static  _GLOBAL_263_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[11] ;static  _GLOBAL_263_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[12] ;static  _GLOBAL_263_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[13] ;static  _GLOBAL_263_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[14] ;static  _GLOBAL_263_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[15] ;static  _GLOBAL_263_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[16] ;static  _GLOBAL_263_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[17] ;static  _GLOBAL_263_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[18] ;static  _GLOBAL_263_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[19] ;static  _GLOBAL_263_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[20] ;static  _GLOBAL_263_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[21] ;static  _GLOBAL_263_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[22] ;static  _GLOBAL_263_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[23] ;static  _GLOBAL_263_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[24] ;static  _GLOBAL_263_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[25] ;static  _GLOBAL_263_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[26] ;static  _GLOBAL_263_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[27] ;static  _GLOBAL_263_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[28] ;static  _GLOBAL_263_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[29] ;static  _GLOBAL_263_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[30] ;static  _GLOBAL_263_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[31] ;static  _GLOBAL_263_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[32] ;static  _GLOBAL_263_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[33] ;static  _GLOBAL_263_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[34] ;static  _GLOBAL_263_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[35] ;static  _GLOBAL_263_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[36] ;static  _GLOBAL_263_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[37] ;static  _GLOBAL_263_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[38] ;static  _GLOBAL_263_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[39] ;static  _GLOBAL_263_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[40] ;static  _GLOBAL_263_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[41] ;static  _GLOBAL_263_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[42] ;static  _GLOBAL_263_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[43] ;static  _GLOBAL_263_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[44] ;static  _GLOBAL_263_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[45] ;static  _GLOBAL_263_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[46] ;static  _GLOBAL_263_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[47] ;static  _GLOBAL_263_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[48] ;static  _GLOBAL_263_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_bridge_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_bridge_version[49] ;         

