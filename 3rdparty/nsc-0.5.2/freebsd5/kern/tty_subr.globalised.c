# 1 "freebsd5/kern/tty_subr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/tty_subr.c"
# 32 "freebsd5/kern/tty_subr.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 33 "freebsd5/kern/tty_subr.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/tty_subr.c,v 1.42 2004/07/15 20:47:40 phk Exp $" "\"");

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

# 36 "freebsd5/kern/tty_subr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2




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
# 54 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2




typedef  unsigned long   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_4_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_0_A[NUM_STACKS];  
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_6_T; extern  _GLOBAL_6_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_6_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_1_A[NUM_STACKS];  
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_8_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_2_A[NUM_STACKS];  

typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_tz_dsttime[NUM_STACKS];   
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
# 37 "freebsd5/kern/tty_subr.c" 2
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


typedef  struct callout_list   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_20_T; extern  _GLOBAL_20_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_23_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_23_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_23_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_24_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_3_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_4_A[NUM_STACKS];  
typedef  char  _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_5_A[NUM_STACKS];  
typedef  int  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_34_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_6_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_35_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_7_A[NUM_STACKS];   

typedef  long  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_38_T; extern  _GLOBAL_38_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_39_T; extern  _GLOBAL_39_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_39_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_8_A[NUM_STACKS];  

typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_46_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_9_A[NUM_STACKS];   
typedef  char  _GLOBAL_47_T; extern  _GLOBAL_47_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_10_A[NUM_STACKS];  
typedef  char  _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_11_A[NUM_STACKS];  

typedef  char  _GLOBAL_50_T; extern  _GLOBAL_50_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_51_T; extern  _GLOBAL_51_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_12_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_52_T; extern  _GLOBAL_52_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_52_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_13_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_14_A[NUM_STACKS];   
typedef  char const   _GLOBAL_54_T; extern  _GLOBAL_54_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_15_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_wdog_tickler[NUM_STACKS];   





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
# 38 "freebsd5/kern/tty_subr.c" 2
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
typedef  struct malloc_type   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_57_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_17_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_18_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_19_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_20_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_21_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_malloc_mtx[NUM_STACKS];    


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
# 39 "freebsd5/kern/tty_subr.c" 2
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

# 1 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h"
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





typedef  struct malloc_type   _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_22_A[NUM_STACKS];   
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
# 37 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 2





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
# 52 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2







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
typedef  struct malloc_type   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_1_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_2_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_3_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_4_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_5_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_6_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_7_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_8_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_9_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_10_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_11_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_12_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_13_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_14_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_15_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_16_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_17_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_18_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_19_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_20_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_21_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_22_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_23_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_24_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_25_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_26_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_27_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_28_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_29_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_30_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_31_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_32_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_33_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_34_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_35_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_36_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_37_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_38_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_39_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_40_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_41_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_42_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_43_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_44_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_45_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_46_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_47_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_48_M_TTYS_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_49_M_TTYS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TTYS_I) *_GLOBAL_M_TTYS_23_A[NUM_STACKS] = { &_GLOBAL_0_M_TTYS_I, &_GLOBAL_1_M_TTYS_I, &_GLOBAL_2_M_TTYS_I, &_GLOBAL_3_M_TTYS_I, &_GLOBAL_4_M_TTYS_I, &_GLOBAL_5_M_TTYS_I, &_GLOBAL_6_M_TTYS_I, &_GLOBAL_7_M_TTYS_I, &_GLOBAL_8_M_TTYS_I, &_GLOBAL_9_M_TTYS_I, &_GLOBAL_10_M_TTYS_I, &_GLOBAL_11_M_TTYS_I, &_GLOBAL_12_M_TTYS_I, &_GLOBAL_13_M_TTYS_I, &_GLOBAL_14_M_TTYS_I, &_GLOBAL_15_M_TTYS_I, &_GLOBAL_16_M_TTYS_I, &_GLOBAL_17_M_TTYS_I, &_GLOBAL_18_M_TTYS_I, &_GLOBAL_19_M_TTYS_I, &_GLOBAL_20_M_TTYS_I, &_GLOBAL_21_M_TTYS_I, &_GLOBAL_22_M_TTYS_I, &_GLOBAL_23_M_TTYS_I, &_GLOBAL_24_M_TTYS_I, &_GLOBAL_25_M_TTYS_I, &_GLOBAL_26_M_TTYS_I, &_GLOBAL_27_M_TTYS_I, &_GLOBAL_28_M_TTYS_I, &_GLOBAL_29_M_TTYS_I, &_GLOBAL_30_M_TTYS_I, &_GLOBAL_31_M_TTYS_I, &_GLOBAL_32_M_TTYS_I, &_GLOBAL_33_M_TTYS_I, &_GLOBAL_34_M_TTYS_I, &_GLOBAL_35_M_TTYS_I, &_GLOBAL_36_M_TTYS_I, &_GLOBAL_37_M_TTYS_I, &_GLOBAL_38_M_TTYS_I, &_GLOBAL_39_M_TTYS_I, &_GLOBAL_40_M_TTYS_I, &_GLOBAL_41_M_TTYS_I, &_GLOBAL_42_M_TTYS_I, &_GLOBAL_43_M_TTYS_I, &_GLOBAL_44_M_TTYS_I, &_GLOBAL_45_M_TTYS_I, &_GLOBAL_46_M_TTYS_I, &_GLOBAL_47_M_TTYS_I, &_GLOBAL_48_M_TTYS_I, &_GLOBAL_49_M_TTYS_I, };   

typedef  struct msgbuf   _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_1_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_2_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_3_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_4_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_5_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_6_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_7_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_8_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_9_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_10_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_11_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_12_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_13_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_14_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_15_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_16_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_17_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_18_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_19_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_20_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_21_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_22_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_23_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_24_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_25_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_26_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_27_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_28_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_29_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_30_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_31_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_32_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_33_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_34_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_35_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_36_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_37_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_38_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_39_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_40_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_41_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_42_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_43_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_44_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_45_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_46_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_47_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_48_consmsgbuf_I; extern  _GLOBAL_65_T  _GLOBAL_49_consmsgbuf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_consmsgbuf_I) *_GLOBAL_consmsgbuf_24_A[NUM_STACKS];   
typedef  struct tty   _GLOBAL_66_T; extern  _GLOBAL_66_T  * global_constty[NUM_STACKS];    
typedef  long  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_tk_cancc[NUM_STACKS];   
typedef  long  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tk_nin[NUM_STACKS];   
typedef  long  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_tk_nout[NUM_STACKS];   
typedef  long  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tk_rawcc[NUM_STACKS];   

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

typedef  struct linesw   _GLOBAL_71_T; extern  _GLOBAL_71_T  * _GLOBAL_0_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_1_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_2_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_3_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_4_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_5_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_6_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_7_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_8_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_9_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_10_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_11_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_12_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_13_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_14_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_15_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_16_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_17_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_18_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_19_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_20_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_21_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_22_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_23_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_24_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_25_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_26_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_27_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_28_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_29_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_30_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_31_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_32_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_33_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_34_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_35_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_36_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_37_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_38_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_39_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_40_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_41_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_42_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_43_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_44_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_45_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_46_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_47_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_48_linesw_I [ ]  ; extern  _GLOBAL_71_T  * _GLOBAL_49_linesw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_25_A[NUM_STACKS] = { &_GLOBAL_0_linesw_I, &_GLOBAL_1_linesw_I, &_GLOBAL_2_linesw_I, &_GLOBAL_3_linesw_I, &_GLOBAL_4_linesw_I, &_GLOBAL_5_linesw_I, &_GLOBAL_6_linesw_I, &_GLOBAL_7_linesw_I, &_GLOBAL_8_linesw_I, &_GLOBAL_9_linesw_I, &_GLOBAL_10_linesw_I, &_GLOBAL_11_linesw_I, &_GLOBAL_12_linesw_I, &_GLOBAL_13_linesw_I, &_GLOBAL_14_linesw_I, &_GLOBAL_15_linesw_I, &_GLOBAL_16_linesw_I, &_GLOBAL_17_linesw_I, &_GLOBAL_18_linesw_I, &_GLOBAL_19_linesw_I, &_GLOBAL_20_linesw_I, &_GLOBAL_21_linesw_I, &_GLOBAL_22_linesw_I, &_GLOBAL_23_linesw_I, &_GLOBAL_24_linesw_I, &_GLOBAL_25_linesw_I, &_GLOBAL_26_linesw_I, &_GLOBAL_27_linesw_I, &_GLOBAL_28_linesw_I, &_GLOBAL_29_linesw_I, &_GLOBAL_30_linesw_I, &_GLOBAL_31_linesw_I, &_GLOBAL_32_linesw_I, &_GLOBAL_33_linesw_I, &_GLOBAL_34_linesw_I, &_GLOBAL_35_linesw_I, &_GLOBAL_36_linesw_I, &_GLOBAL_37_linesw_I, &_GLOBAL_38_linesw_I, &_GLOBAL_39_linesw_I, &_GLOBAL_40_linesw_I, &_GLOBAL_41_linesw_I, &_GLOBAL_42_linesw_I, &_GLOBAL_43_linesw_I, &_GLOBAL_44_linesw_I, &_GLOBAL_45_linesw_I, &_GLOBAL_46_linesw_I, &_GLOBAL_47_linesw_I, &_GLOBAL_48_linesw_I, &_GLOBAL_49_linesw_I, };   
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_nlinesw[NUM_STACKS];   

int ldisc_register(int , struct linesw *);
void ldisc_deregister(int);


typedef  l_read_t _GLOBAL_73_T;  _GLOBAL_73_T  l_noread;  
typedef  l_write_t _GLOBAL_74_T;  _GLOBAL_74_T  l_nowrite;  
typedef  l_ioctl_t _GLOBAL_75_T;  _GLOBAL_75_T  l_nullioctl;  

static __inline int
ttyld_open(struct tty *tp, struct cdev *dev)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_open)(dev, tp));
}

static __inline int
ttyld_close(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_close)(tp, flag));
}

static __inline int
ttyld_read(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_read)(tp, uio, flag));
}

static __inline int
ttyld_write(struct tty *tp, struct uio *uio, int flag)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_write)(tp, uio, flag));
}

static __inline int
ttyld_ioctl(struct tty *tp, u_long cmd, caddr_t data, int flag,
    struct thread *td)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_ioctl)(tp, cmd, data, flag, td));
}

static __inline int
ttyld_rint(struct tty *tp, int c)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_rint)(c, tp));
}

static __inline int
ttyld_start(struct tty *tp)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_start)(tp));
}

static __inline int
ttyld_modem(struct tty *tp, int flag)
{

 return ((*(*_GLOBAL_linesw_25_A[get_stack_id()])[tp->t_line]->l_modem)(tp, flag));
}
# 336 "freebsd5/freebsd/usr/src/sys/sys/tty.h" 2
# 40 "freebsd5/kern/tty_subr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/clist.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/clist.h"
struct cblock {
 struct cblock *c_next;
 unsigned char c_quote[(128/8)];
 unsigned char c_info[(128 - sizeof(struct cblock *) - (128/8))];
};


typedef  struct cblock   _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_cfree[NUM_STACKS];    
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_cfreecount[NUM_STACKS];   
# 41 "freebsd5/kern/tty_subr.c" 2

static void clist_init(void *);
typedef  struct sysinit   _GLOBAL_78_T; static  _GLOBAL_78_T  global_clist_sys_init[NUM_STACKS] = {  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_CLIST , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) clist_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_79_T; static  _GLOBAL_79_T  * const  _global_section_0___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_clist_sys_init[0] ;static  _GLOBAL_79_T  * const  _global_section_1___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_clist_sys_init[1] ;static  _GLOBAL_79_T  * const  _global_section_2___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_clist_sys_init[2] ;static  _GLOBAL_79_T  * const  _global_section_3___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_clist_sys_init[3] ;static  _GLOBAL_79_T  * const  _global_section_4___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_clist_sys_init[4] ;static  _GLOBAL_79_T  * const  _global_section_5___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_clist_sys_init[5] ;static  _GLOBAL_79_T  * const  _global_section_6___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_clist_sys_init[6] ;static  _GLOBAL_79_T  * const  _global_section_7___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_clist_sys_init[7] ;static  _GLOBAL_79_T  * const  _global_section_8___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_clist_sys_init[8] ;static  _GLOBAL_79_T  * const  _global_section_9___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_clist_sys_init[9] ;static  _GLOBAL_79_T  * const  _global_section_10___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_clist_sys_init[10] ;static  _GLOBAL_79_T  * const  _global_section_11___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_clist_sys_init[11] ;static  _GLOBAL_79_T  * const  _global_section_12___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_clist_sys_init[12] ;static  _GLOBAL_79_T  * const  _global_section_13___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_clist_sys_init[13] ;static  _GLOBAL_79_T  * const  _global_section_14___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_clist_sys_init[14] ;static  _GLOBAL_79_T  * const  _global_section_15___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_clist_sys_init[15] ;static  _GLOBAL_79_T  * const  _global_section_16___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_clist_sys_init[16] ;static  _GLOBAL_79_T  * const  _global_section_17___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_clist_sys_init[17] ;static  _GLOBAL_79_T  * const  _global_section_18___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_clist_sys_init[18] ;static  _GLOBAL_79_T  * const  _global_section_19___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_clist_sys_init[19] ;static  _GLOBAL_79_T  * const  _global_section_20___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_clist_sys_init[20] ;static  _GLOBAL_79_T  * const  _global_section_21___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_clist_sys_init[21] ;static  _GLOBAL_79_T  * const  _global_section_22___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_clist_sys_init[22] ;static  _GLOBAL_79_T  * const  _global_section_23___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_clist_sys_init[23] ;static  _GLOBAL_79_T  * const  _global_section_24___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_clist_sys_init[24] ;static  _GLOBAL_79_T  * const  _global_section_25___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_clist_sys_init[25] ;static  _GLOBAL_79_T  * const  _global_section_26___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_clist_sys_init[26] ;static  _GLOBAL_79_T  * const  _global_section_27___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_clist_sys_init[27] ;static  _GLOBAL_79_T  * const  _global_section_28___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_clist_sys_init[28] ;static  _GLOBAL_79_T  * const  _global_section_29___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_clist_sys_init[29] ;static  _GLOBAL_79_T  * const  _global_section_30___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_clist_sys_init[30] ;static  _GLOBAL_79_T  * const  _global_section_31___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_clist_sys_init[31] ;static  _GLOBAL_79_T  * const  _global_section_32___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_clist_sys_init[32] ;static  _GLOBAL_79_T  * const  _global_section_33___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_clist_sys_init[33] ;static  _GLOBAL_79_T  * const  _global_section_34___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_clist_sys_init[34] ;static  _GLOBAL_79_T  * const  _global_section_35___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_clist_sys_init[35] ;static  _GLOBAL_79_T  * const  _global_section_36___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_clist_sys_init[36] ;static  _GLOBAL_79_T  * const  _global_section_37___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_clist_sys_init[37] ;static  _GLOBAL_79_T  * const  _global_section_38___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_clist_sys_init[38] ;static  _GLOBAL_79_T  * const  _global_section_39___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_clist_sys_init[39] ;static  _GLOBAL_79_T  * const  _global_section_40___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_clist_sys_init[40] ;static  _GLOBAL_79_T  * const  _global_section_41___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_clist_sys_init[41] ;static  _GLOBAL_79_T  * const  _global_section_42___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_clist_sys_init[42] ;static  _GLOBAL_79_T  * const  _global_section_43___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_clist_sys_init[43] ;static  _GLOBAL_79_T  * const  _global_section_44___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_clist_sys_init[44] ;static  _GLOBAL_79_T  * const  _global_section_45___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_clist_sys_init[45] ;static  _GLOBAL_79_T  * const  _global_section_46___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_clist_sys_init[46] ;static  _GLOBAL_79_T  * const  _global_section_47___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_clist_sys_init[47] ;static  _GLOBAL_79_T  * const  _global_section_48___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_clist_sys_init[48] ;static  _GLOBAL_79_T  * const  _global_section_49___set_sysinit_set_sym_clist_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_clist_sys_init[49] ;         

typedef  struct cblock   _GLOBAL_80_T; static  _GLOBAL_80_T  * global_cfreelist[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };      
typedef  int _GLOBAL_81_T;  _GLOBAL_81_T  global_cfreecount[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  int  _GLOBAL_82_T; static  _GLOBAL_82_T  global_cslushcount[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; static  _GLOBAL_83_T  global_ctotcount[NUM_STACKS];   





static struct cblock *cblock_alloc(void);
static void cblock_alloc_cblocks(int number);
static void cblock_free(struct cblock *cblockp);
static void cblock_free_cblocks(int number);

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ddb.h" 1
# 60 "freebsd5/kern/tty_subr.c" 2
# 78 "freebsd5/kern/tty_subr.c"
static void
clist_init(dummy)
 void *dummy;
{
# 90 "freebsd5/kern/tty_subr.c"
 cblock_alloc_cblocks(global_cslushcount[get_stack_id()] = 50);
}





static __inline struct cblock *
cblock_alloc()
{
 struct cblock *cblockp;

 cblockp = global_cfreelist[get_stack_id()];
 if (cblockp == ((void *)0))
  panic("clist reservation botch");
 global_cfreelist[get_stack_id()] = cblockp->c_next;
 cblockp->c_next = ((void *)0);
 global_cfreecount[get_stack_id()] -= (128 - sizeof(struct cblock *) - (128/8));
 return (cblockp);
}




static __inline void
cblock_free(cblockp)
 struct cblock *cblockp;
{
 if (((cblockp->c_quote)[((128/8) * 8 - 1)/8] & (1<<(((128/8) * 8 - 1)%8))))
  bzero(cblockp->c_quote, sizeof cblockp->c_quote);
 cblockp->c_next = global_cfreelist[get_stack_id()];
 global_cfreelist[get_stack_id()] = cblockp;
 global_cfreecount[get_stack_id()] += (128 - sizeof(struct cblock *) - (128/8));
}




static void
cblock_alloc_cblocks(number)
 int number;
{
 int i;
 struct cblock *cbp;

 for (i = 0; i < number; ++i) {
  cbp = nsc_malloc(sizeof *cbp, (*_GLOBAL_M_TTYS_23_A[get_stack_id()]), 0x0001);
  if (cbp == ((void *)0)) {
   nsc_printf(
"cblock_alloc_cblocks: M_NOWAIT malloc failed, trying M_WAITOK\n");
   cbp = nsc_malloc(sizeof *cbp, (*_GLOBAL_M_TTYS_23_A[get_stack_id()]), 0x0002);
  }




  ((cbp->c_quote)[((128/8) * 8 - 1)/8] |= 1<<(((128/8) * 8 - 1)%8));
  cblock_free(cbp);
 }
 global_ctotcount[get_stack_id()] += number;
}





void
clist_alloc_cblocks(clistp, ccmax, ccreserved)
 struct clist *clistp;
 int ccmax;
 int ccreserved;
{
 int dcbr;




 if (ccmax != 0)
  ccmax += (128 - sizeof(struct cblock *) - (128/8)) - 1;
 if (ccreserved != 0)
  ccreserved += (128 - sizeof(struct cblock *) - (128/8)) - 1;

 clistp->c_cbmax = ((((ccmax)+(((128 - sizeof(struct cblock *) - (128/8)))-1))/((128 - sizeof(struct cblock *) - (128/8))))*((128 - sizeof(struct cblock *) - (128/8)))) / (128 - sizeof(struct cblock *) - (128/8));
 dcbr = ((((ccreserved)+(((128 - sizeof(struct cblock *) - (128/8)))-1))/((128 - sizeof(struct cblock *) - (128/8))))*((128 - sizeof(struct cblock *) - (128/8)))) / (128 - sizeof(struct cblock *) - (128/8)) - clistp->c_cbreserved;
 if (dcbr >= 0)
  cblock_alloc_cblocks(dcbr);
 else {
  if (clistp->c_cbreserved + dcbr < clistp->c_cbcount)
   dcbr = clistp->c_cbcount - clistp->c_cbreserved;
  cblock_free_cblocks(-dcbr);
 }
 clistp->c_cbreserved += dcbr;
}





static void
cblock_free_cblocks(number)
 int number;
{
 int i;

 for (i = 0; i < number; ++i)
  nsc_free(cblock_alloc(), (*_GLOBAL_M_TTYS_23_A[get_stack_id()]));
 global_ctotcount[get_stack_id()] -= number;
}





void
clist_free_cblocks(clistp)
 struct clist *clistp;
{
 if (clistp->c_cbcount != 0)
  panic("freeing active clist cblocks");
 cblock_free_cblocks(clistp->c_cbreserved);
 clistp->c_cbmax = 0;
 clistp->c_cbreserved = 0;
}




int
getc(clistp)
 struct clist *clistp;
{
 int chr = -1;
 int s;
 struct cblock *cblockp;

 s = spltty();


 if (clistp->c_cc) {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cf & ~(128 - 1));
  chr = (u_char)*clistp->c_cf;




  if (((cblockp->c_quote)[(clistp->c_cf - (char *)cblockp->c_info)/8] & (1<<((clistp->c_cf - (char *)cblockp->c_info)%8))))
   chr |= 0x00000100;




  clistp->c_cf++;
  clistp->c_cc--;







  if ((clistp->c_cf >= (char *)(cblockp+1)) || (clistp->c_cc == 0)) {
   if (clistp->c_cc > 0) {
    clistp->c_cf = cblockp->c_next->c_info;
   } else {
    clistp->c_cf = clistp->c_cl = ((void *)0);
   }
   cblock_free(cblockp);
   if (--clistp->c_cbcount >= clistp->c_cbreserved)
    ++global_cslushcount[get_stack_id()];
  }
 }

 splx(s);
 return (chr);
}






int
q_to_b(clistp, dest, amount)
 struct clist *clistp;
 char *dest;
 int amount;
{
 struct cblock *cblockp;
 struct cblock *cblockn;
 char *dest_orig = dest;
 int numc;
 int s;

 s = spltty();

 while (clistp && amount && (clistp->c_cc > 0)) {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cf & ~(128 - 1));
  cblockn = cblockp + 1;
  numc = min(amount, (char *)cblockn - clistp->c_cf);
  numc = min(numc, clistp->c_cc);
  bcopy(clistp->c_cf, dest, numc);
  amount -= numc;
  clistp->c_cf += numc;
  clistp->c_cc -= numc;
  dest += numc;






  if ((clistp->c_cf >= (char *)cblockn) || (clistp->c_cc == 0)) {
   if (clistp->c_cc > 0) {
    clistp->c_cf = cblockp->c_next->c_info;
   } else {
    clistp->c_cf = clistp->c_cl = ((void *)0);
   }
   cblock_free(cblockp);
   if (--clistp->c_cbcount >= clistp->c_cbreserved)
    ++global_cslushcount[get_stack_id()];
  }
 }

 splx(s);
 return (dest - dest_orig);
}




void
ndflush(clistp, amount)
 struct clist *clistp;
 int amount;
{
 struct cblock *cblockp;
 struct cblock *cblockn;
 int numc;
 int s;

 s = spltty();

 while (amount && (clistp->c_cc > 0)) {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cf & ~(128 - 1));
  cblockn = cblockp + 1;
  numc = min(amount, (char *)cblockn - clistp->c_cf);
  numc = min(numc, clistp->c_cc);
  amount -= numc;
  clistp->c_cf += numc;
  clistp->c_cc -= numc;






  if ((clistp->c_cf >= (char *)cblockn) || (clistp->c_cc == 0)) {
   if (clistp->c_cc > 0) {
    clistp->c_cf = cblockp->c_next->c_info;
   } else {
    clistp->c_cf = clistp->c_cl = ((void *)0);
   }
   cblock_free(cblockp);
   if (--clistp->c_cbcount >= clistp->c_cbreserved)
    ++global_cslushcount[get_stack_id()];
  }
 }

 splx(s);
}





int
putc(chr, clistp)
 int chr;
 struct clist *clistp;
{
 struct cblock *cblockp;
 int s;

 s = spltty();

 if (clistp->c_cl == ((void *)0)) {
  if (clistp->c_cbreserved < 1) {
   splx(s);
   nsc_printf("putc to a clist with no reserved cblocks\n");
   return (-1);
  }
  cblockp = cblock_alloc();
  clistp->c_cbcount = 1;
  clistp->c_cf = clistp->c_cl = cblockp->c_info;
  clistp->c_cc = 0;
 } else {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cl & ~(128 - 1));
  if (((intptr_t)clistp->c_cl & (128 - 1)) == 0) {
   struct cblock *prev = (cblockp - 1);

   if (clistp->c_cbcount >= clistp->c_cbreserved) {
    if (clistp->c_cbcount >= clistp->c_cbmax
        || global_cslushcount[get_stack_id()] <= 0) {
     splx(s);
     return (-1);
    }
    --global_cslushcount[get_stack_id()];
   }
   cblockp = cblock_alloc();
   clistp->c_cbcount++;
   prev->c_next = cblockp;
   clistp->c_cl = cblockp->c_info;
  }
 }




 if (chr & 0x00000100) {
  ((cblockp->c_quote)[(clistp->c_cl - (char *)cblockp->c_info)/8] |= 1<<((clistp->c_cl - (char *)cblockp->c_info)%8));




  ((cblockp->c_quote)[((128/8) * 8 - 1)/8] |= 1<<(((128/8) * 8 - 1)%8));
 } else
  ((cblockp->c_quote)[(clistp->c_cl - (char *)cblockp->c_info)/8] &= ~(1<<((clistp->c_cl - (char *)cblockp->c_info)%8)));

 *clistp->c_cl++ = chr;
 clistp->c_cc++;

 splx(s);
 return (0);
}





int
b_to_q(src, amount, clistp)
 char *src;
 int amount;
 struct clist *clistp;
{
 struct cblock *cblockp;
 char *firstbyte, *lastbyte;
 u_char startmask, endmask;
 int startbit, endbit, num_between, numc;
 int s;





 if (amount <= 0)
  return (amount);

 s = spltty();





 if (clistp->c_cl == ((void *)0)) {
  if (clistp->c_cbreserved < 1) {
   splx(s);
   nsc_printf("b_to_q to a clist with no reserved cblocks.\n");
   return (amount);
  }
  cblockp = cblock_alloc();
  clistp->c_cbcount = 1;
  clistp->c_cf = clistp->c_cl = cblockp->c_info;
  clistp->c_cc = 0;
 } else {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cl & ~(128 - 1));
 }

 while (amount) {



  if (((intptr_t)clistp->c_cl & (128 - 1)) == 0) {
   struct cblock *prev = cblockp - 1;

   if (clistp->c_cbcount >= clistp->c_cbreserved) {
    if (clistp->c_cbcount >= clistp->c_cbmax
        || global_cslushcount[get_stack_id()] <= 0) {
     splx(s);
     return (amount);
    }
    --global_cslushcount[get_stack_id()];
   }
   cblockp = cblock_alloc();
   clistp->c_cbcount++;
   prev->c_next = cblockp;
   clistp->c_cl = cblockp->c_info;
  }





  numc = min(amount, (char *)(cblockp + 1) - clistp->c_cl);
  bcopy(src, clistp->c_cl, numc);






  if (((cblockp->c_quote)[((128/8) * 8 - 1)/8] & (1<<(((128/8) * 8 - 1)%8)))) {
   startbit = clistp->c_cl - (char *)cblockp->c_info;
   endbit = startbit + numc - 1;

   firstbyte = (u_char *)cblockp->c_quote + (startbit / 8);
   lastbyte = (u_char *)cblockp->c_quote + (endbit / 8);





   startmask = 8 - (startbit % 8);
   startmask = 0xff >> startmask;
   endmask = (endbit % 8);
   endmask = 0xff << (endmask + 1);

   if (firstbyte != lastbyte) {
    *firstbyte &= startmask;
    *lastbyte &= endmask;

    num_between = lastbyte - firstbyte - 1;
    if (num_between)
     bzero(firstbyte + 1, num_between);
   } else {
    *firstbyte &= (startmask | endmask);
   }
  }




  src += numc;
  clistp->c_cl += numc;
  clistp->c_cc += numc;
  amount -= numc;







  cblockp += 1;

 }

 splx(s);
 return (amount);
}






char *
nextc(clistp, cp, dst)
 struct clist *clistp;
 char *cp;
 int *dst;
{
 struct cblock *cblockp;

 ++cp;




 if (clistp->c_cc && (cp != clistp->c_cl)) {




  if (((intptr_t)cp & (128 - 1)) == 0)
   cp = ((struct cblock *)cp - 1)->c_next->c_info;
  cblockp = (struct cblock *)((intptr_t)cp & ~(128 - 1));





  *dst = (u_char)*cp | (((cblockp->c_quote)[(cp - (char *)cblockp->c_info)/8] & (1<<((cp - (char *)cblockp->c_info)%8))) ? 0x00000100 : 0);

  return (cp);
 }

 return (((void *)0));
}




int
unputc(clistp)
 struct clist *clistp;
{
 struct cblock *cblockp = 0, *cbp = 0;
 int s;
 int chr = -1;


 s = spltty();

 if (clistp->c_cc) {
  --clistp->c_cc;
  --clistp->c_cl;

  chr = (u_char)*clistp->c_cl;

  cblockp = (struct cblock *)((intptr_t)clistp->c_cl & ~(128 - 1));




  if (((cblockp->c_quote)[((u_char *)clistp->c_cl - cblockp->c_info)/8] & (1<<(((u_char *)clistp->c_cl - cblockp->c_info)%8))))
   chr |= 0x00000100;






  if (clistp->c_cc && (clistp->c_cl <= (char *)cblockp->c_info)) {
   cbp = (struct cblock *)((intptr_t)clistp->c_cf & ~(128 - 1));

   while (cbp->c_next != cblockp)
    cbp = cbp->c_next;





   clistp->c_cl = (char *)(cbp+1);
   cblock_free(cblockp);
   if (--clistp->c_cbcount >= clistp->c_cbreserved)
    ++global_cslushcount[get_stack_id()];
   cbp->c_next = ((void *)0);
  }
 }





 if ((clistp->c_cc == 0) && clistp->c_cl) {
  cblockp = (struct cblock *)((intptr_t)clistp->c_cl & ~(128 - 1));
  cblock_free(cblockp);
  if (--clistp->c_cbcount >= clistp->c_cbreserved)
   ++global_cslushcount[get_stack_id()];
  clistp->c_cf = clistp->c_cl = ((void *)0);
 }

 splx(s);
 return (chr);
}





void
catq(src_clistp, dest_clistp)
 struct clist *src_clistp, *dest_clistp;
{
 int chr, s;

 s = spltty();





 if (!dest_clistp->c_cf
     && src_clistp->c_cbcount <= src_clistp->c_cbmax
     && src_clistp->c_cbcount <= dest_clistp->c_cbmax) {
  dest_clistp->c_cf = src_clistp->c_cf;
  dest_clistp->c_cl = src_clistp->c_cl;
  src_clistp->c_cf = src_clistp->c_cl = ((void *)0);

  dest_clistp->c_cc = src_clistp->c_cc;
  src_clistp->c_cc = 0;
  dest_clistp->c_cbcount = src_clistp->c_cbcount;
  src_clistp->c_cbcount = 0;

  splx(s);
  return;
 }

 splx(s);





 while ((chr = getc(src_clistp)) != -1)
  putc(chr, dest_clistp);
}

