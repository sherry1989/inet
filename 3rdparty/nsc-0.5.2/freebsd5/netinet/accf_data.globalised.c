# 1 "freebsd5/netinet/accf_data.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet/accf_data.c"
# 31 "freebsd5/netinet/accf_data.c"
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

# 32 "freebsd5/netinet/accf_data.c" 2
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
# 33 "freebsd5/netinet/accf_data.c" 2
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
typedef  struct sx   _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_19_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_3_A[NUM_STACKS];   
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
# 34 "freebsd5/netinet/accf_data.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_26_T; extern  _GLOBAL_26_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_4_A[NUM_STACKS];  
typedef  char  _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_5_A[NUM_STACKS];  
typedef  char  _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_34_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_6_A[NUM_STACKS];  
typedef  char  _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_7_A[NUM_STACKS];  


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
# 35 "freebsd5/netinet/accf_data.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 2
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

# 40 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 2
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

typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_sugid_coredump[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_37_T; extern  _GLOBAL_37_T  global_sigio_lock[NUM_STACKS];    
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
# 36 "freebsd5/netinet/accf_data.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
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
typedef  struct mtx   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_accept_mtx[NUM_STACKS];    
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







typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_41_T; extern  _GLOBAL_41_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_so_gencnt[NUM_STACKS];   

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


typedef  struct sysctl_oid_list   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_sysctl__net_inet_accf_children[NUM_STACKS];    

int accept_filt_generic_mod_event(module_t mod, int event, void *data);
# 37 "freebsd5/netinet/accf_data.c" 2



static void sohasdata(struct socket *so, void *arg, int waitflag);

typedef  struct accept_filter   _GLOBAL_44_T; static  _GLOBAL_44_T  global_accf_data_filter[NUM_STACKS] = {  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  { "dataready" , sohasdata  , ( ( void *  ) 0  )   , ( ( void *  ) 0  )   } ,  };      
 
 
  
  


typedef  moduledata_t  _GLOBAL_45_T; static  _GLOBAL_45_T  global_accf_data_mod[NUM_STACKS] = {  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[0]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[1]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[2]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[3]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[4]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[5]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[6]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[7]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[8]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[9]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[10]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[11]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[12]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[13]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[14]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[15]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[16]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[17]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[18]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[19]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[20]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[21]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[22]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[23]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[24]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[25]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[26]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[27]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[28]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[29]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[30]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[31]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[32]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[33]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[34]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[35]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[36]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[37]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[38]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[39]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[40]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[41]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[42]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[43]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[44]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[45]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[46]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[47]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[48]   } ,  { "accf_data" , accept_filt_generic_mod_event  , & global_accf_data_filter[49]   } ,  };     
 
 
 


typedef  struct mod_metadata   _GLOBAL_46_T; static  _GLOBAL_46_T  global__mod_metadata_md_accf_data[NUM_STACKS] = {  { 1 , 2  , & global_accf_data_mod[0]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[1]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[2]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[3]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[4]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[5]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[6]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[7]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[8]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[9]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[10]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[11]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[12]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[13]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[14]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[15]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[16]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[17]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[18]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[19]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[20]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[21]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[22]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[23]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[24]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[25]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[26]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[27]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[28]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[29]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[30]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[31]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[32]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[33]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[34]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[35]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[36]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[37]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[38]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[39]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[40]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[41]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[42]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[43]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[44]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[45]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[46]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[47]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[48]   , "accf_data"  } ,  { 1 , 2  , & global_accf_data_mod[49]   , "accf_data"  } ,  };            typedef  void const   _GLOBAL_47_T; static  _GLOBAL_47_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[0] ;static  _GLOBAL_47_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[1] ;static  _GLOBAL_47_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[2] ;static  _GLOBAL_47_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[3] ;static  _GLOBAL_47_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[4] ;static  _GLOBAL_47_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[5] ;static  _GLOBAL_47_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[6] ;static  _GLOBAL_47_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[7] ;static  _GLOBAL_47_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[8] ;static  _GLOBAL_47_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[9] ;static  _GLOBAL_47_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[10] ;static  _GLOBAL_47_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[11] ;static  _GLOBAL_47_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[12] ;static  _GLOBAL_47_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[13] ;static  _GLOBAL_47_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[14] ;static  _GLOBAL_47_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[15] ;static  _GLOBAL_47_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[16] ;static  _GLOBAL_47_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[17] ;static  _GLOBAL_47_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[18] ;static  _GLOBAL_47_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[19] ;static  _GLOBAL_47_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[20] ;static  _GLOBAL_47_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[21] ;static  _GLOBAL_47_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[22] ;static  _GLOBAL_47_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[23] ;static  _GLOBAL_47_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[24] ;static  _GLOBAL_47_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[25] ;static  _GLOBAL_47_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[26] ;static  _GLOBAL_47_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[27] ;static  _GLOBAL_47_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[28] ;static  _GLOBAL_47_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[29] ;static  _GLOBAL_47_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[30] ;static  _GLOBAL_47_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[31] ;static  _GLOBAL_47_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[32] ;static  _GLOBAL_47_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[33] ;static  _GLOBAL_47_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[34] ;static  _GLOBAL_47_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[35] ;static  _GLOBAL_47_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[36] ;static  _GLOBAL_47_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[37] ;static  _GLOBAL_47_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[38] ;static  _GLOBAL_47_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[39] ;static  _GLOBAL_47_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[40] ;static  _GLOBAL_47_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[41] ;static  _GLOBAL_47_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[42] ;static  _GLOBAL_47_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[43] ;static  _GLOBAL_47_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[44] ;static  _GLOBAL_47_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[45] ;static  _GLOBAL_47_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[46] ;static  _GLOBAL_47_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[47] ;static  _GLOBAL_47_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[48] ;static  _GLOBAL_47_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_accf_data __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_accf_data[49] ;          typedef  struct sysinit   _GLOBAL_48_T; static  _GLOBAL_48_T  global_accf_datamodule_sys_init[NUM_STACKS] = {  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[0]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[1]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[2]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[3]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[4]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[5]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[6]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[7]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[8]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[9]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[10]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[11]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[12]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[13]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[14]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[15]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[16]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[17]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[18]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[19]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[20]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[21]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[22]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[23]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[24]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[25]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[26]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[27]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[28]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[29]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[30]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[31]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[32]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[33]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[34]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[35]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[36]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[37]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[38]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[39]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[40]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[41]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[42]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[43]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[44]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[45]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[46]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[47]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[48]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_accf_data_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_49_T; static  _GLOBAL_49_T  * const  _global_section_0___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[0] ;static  _GLOBAL_49_T  * const  _global_section_1___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[1] ;static  _GLOBAL_49_T  * const  _global_section_2___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[2] ;static  _GLOBAL_49_T  * const  _global_section_3___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[3] ;static  _GLOBAL_49_T  * const  _global_section_4___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[4] ;static  _GLOBAL_49_T  * const  _global_section_5___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[5] ;static  _GLOBAL_49_T  * const  _global_section_6___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[6] ;static  _GLOBAL_49_T  * const  _global_section_7___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[7] ;static  _GLOBAL_49_T  * const  _global_section_8___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[8] ;static  _GLOBAL_49_T  * const  _global_section_9___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[9] ;static  _GLOBAL_49_T  * const  _global_section_10___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[10] ;static  _GLOBAL_49_T  * const  _global_section_11___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[11] ;static  _GLOBAL_49_T  * const  _global_section_12___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[12] ;static  _GLOBAL_49_T  * const  _global_section_13___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[13] ;static  _GLOBAL_49_T  * const  _global_section_14___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[14] ;static  _GLOBAL_49_T  * const  _global_section_15___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[15] ;static  _GLOBAL_49_T  * const  _global_section_16___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[16] ;static  _GLOBAL_49_T  * const  _global_section_17___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[17] ;static  _GLOBAL_49_T  * const  _global_section_18___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[18] ;static  _GLOBAL_49_T  * const  _global_section_19___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[19] ;static  _GLOBAL_49_T  * const  _global_section_20___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[20] ;static  _GLOBAL_49_T  * const  _global_section_21___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[21] ;static  _GLOBAL_49_T  * const  _global_section_22___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[22] ;static  _GLOBAL_49_T  * const  _global_section_23___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[23] ;static  _GLOBAL_49_T  * const  _global_section_24___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[24] ;static  _GLOBAL_49_T  * const  _global_section_25___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[25] ;static  _GLOBAL_49_T  * const  _global_section_26___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[26] ;static  _GLOBAL_49_T  * const  _global_section_27___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[27] ;static  _GLOBAL_49_T  * const  _global_section_28___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[28] ;static  _GLOBAL_49_T  * const  _global_section_29___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[29] ;static  _GLOBAL_49_T  * const  _global_section_30___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[30] ;static  _GLOBAL_49_T  * const  _global_section_31___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[31] ;static  _GLOBAL_49_T  * const  _global_section_32___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[32] ;static  _GLOBAL_49_T  * const  _global_section_33___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[33] ;static  _GLOBAL_49_T  * const  _global_section_34___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[34] ;static  _GLOBAL_49_T  * const  _global_section_35___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[35] ;static  _GLOBAL_49_T  * const  _global_section_36___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[36] ;static  _GLOBAL_49_T  * const  _global_section_37___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[37] ;static  _GLOBAL_49_T  * const  _global_section_38___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[38] ;static  _GLOBAL_49_T  * const  _global_section_39___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[39] ;static  _GLOBAL_49_T  * const  _global_section_40___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[40] ;static  _GLOBAL_49_T  * const  _global_section_41___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[41] ;static  _GLOBAL_49_T  * const  _global_section_42___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[42] ;static  _GLOBAL_49_T  * const  _global_section_43___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[43] ;static  _GLOBAL_49_T  * const  _global_section_44___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[44] ;static  _GLOBAL_49_T  * const  _global_section_45___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[45] ;static  _GLOBAL_49_T  * const  _global_section_46___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[46] ;static  _GLOBAL_49_T  * const  _global_section_47___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[47] ;static  _GLOBAL_49_T  * const  _global_section_48___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[48] ;static  _GLOBAL_49_T  * const  _global_section_49___set_sysinit_set_sym_accf_datamodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_accf_datamodule_sys_init[49] ;          struct __hack;

static void
sohasdata(struct socket *so, void *arg, int waitflag)
{

 if (!((so)->so_rcv.sb_cc >= (so)->so_rcv.sb_lowat || ((so)->so_rcv.sb_state & 0x0020) || !((&(so)->so_comp)->tqh_first == ((void *)0)) || (so)->so_error))
  return;

 so->so_upcall = ((void *)0);
 so->so_rcv.sb_flags &= ~0x20;
 soisconnected(so);
 return;
}

