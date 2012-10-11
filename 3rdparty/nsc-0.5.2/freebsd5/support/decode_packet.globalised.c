# 1 "freebsd5/support/decode_packet.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/support/decode_packet.c"
# 22 "freebsd5/support/decode_packet.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 23 "freebsd5/support/decode_packet.c" 2

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
# 25 "freebsd5/support/decode_packet.c" 2
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
# 26 "freebsd5/support/decode_packet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
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

# 27 "freebsd5/support/decode_packet.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
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
# 42 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
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


typedef  struct vmmeter   _GLOBAL_9_T; extern  _GLOBAL_9_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_1_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_12_T; extern  _GLOBAL_12_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_2_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_13_T; extern  _GLOBAL_13_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_15_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_17_T; extern  _GLOBAL_17_T  global___pcpu[NUM_STACKS];    
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
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_18_T; extern  _GLOBAL_18_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_20_T; extern  _GLOBAL_20_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_22_T; extern  _GLOBAL_22_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_4_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_23_T; extern  _GLOBAL_23_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_5_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_26_T; extern  _GLOBAL_26_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_6_A[NUM_STACKS];   
typedef  int  _GLOBAL_30_T; extern  _GLOBAL_30_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_31_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_35_T; extern  _GLOBAL_35_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_37_T; extern  _GLOBAL_37_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_37_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_38_T; extern  _GLOBAL_38_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_39_T; extern  _GLOBAL_39_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_42_T  )  ( void  ) ; extern  _GLOBAL_42_T global_cpu_idle_hook[NUM_STACKS];   
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
# 28 "freebsd5/support/decode_packet.c" 2

# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 30 "freebsd5/support/decode_packet.c" 2
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
typedef  const struct sockaddr_in6    _GLOBAL_43_T; extern  _GLOBAL_43_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_44_T; extern  _GLOBAL_44_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_45_T; extern  _GLOBAL_45_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_46_T; extern  _GLOBAL_46_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_47_T; extern  _GLOBAL_47_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_48_T; extern  _GLOBAL_48_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_49_T; extern  _GLOBAL_49_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_50_T; extern  _GLOBAL_50_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_51_T; extern  _GLOBAL_51_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_52_T; extern  _GLOBAL_52_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_53_T; extern  _GLOBAL_53_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_54_T; extern  _GLOBAL_54_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_7_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_56_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_56_T global_faithprefix_p[NUM_STACKS];     
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
# 31 "freebsd5/support/decode_packet.c" 2
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
# 32 "freebsd5/support/decode_packet.c" 2
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
# 33 "freebsd5/support/decode_packet.c" 2

# 1 "freebsd5/support/support.h" 1
# 22 "freebsd5/support/support.h"
extern int debugf(const char * fmt, ...);
extern int get_thread_id();
# 35 "freebsd5/support/decode_packet.c" 2
# 1 "sim/num_stacks.h" 1
# 30 "sim/num_stacks.h"
int get_stack_id(void);
# 36 "freebsd5/support/decode_packet.c" 2
# 52 "freebsd5/support/decode_packet.c"
extern int get_stack_id();

char *tos2str(unsigned char ip_tos)
{
 typedef  char  _GLOBAL_57_T; static  _GLOBAL_57_T  _GLOBAL_0_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_1_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_2_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_3_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_4_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_5_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_6_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_7_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_8_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_9_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_10_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_11_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_12_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_13_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_14_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_15_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_16_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_17_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_18_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_19_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_20_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_21_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_22_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_23_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_24_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_25_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_26_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_27_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_28_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_29_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_30_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_31_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_32_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_33_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_34_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_35_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_36_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_37_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_38_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_39_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_40_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_41_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_42_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_43_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_44_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_45_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_46_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_47_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_48_tosp_I [ ]  = "00000000" ; static  _GLOBAL_57_T  _GLOBAL_49_tosp_I [ ]  = "00000000" ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tosp_I) *_GLOBAL_tosp_8_A[NUM_STACKS] = { &_GLOBAL_0_tosp_I, &_GLOBAL_1_tosp_I, &_GLOBAL_2_tosp_I, &_GLOBAL_3_tosp_I, &_GLOBAL_4_tosp_I, &_GLOBAL_5_tosp_I, &_GLOBAL_6_tosp_I, &_GLOBAL_7_tosp_I, &_GLOBAL_8_tosp_I, &_GLOBAL_9_tosp_I, &_GLOBAL_10_tosp_I, &_GLOBAL_11_tosp_I, &_GLOBAL_12_tosp_I, &_GLOBAL_13_tosp_I, &_GLOBAL_14_tosp_I, &_GLOBAL_15_tosp_I, &_GLOBAL_16_tosp_I, &_GLOBAL_17_tosp_I, &_GLOBAL_18_tosp_I, &_GLOBAL_19_tosp_I, &_GLOBAL_20_tosp_I, &_GLOBAL_21_tosp_I, &_GLOBAL_22_tosp_I, &_GLOBAL_23_tosp_I, &_GLOBAL_24_tosp_I, &_GLOBAL_25_tosp_I, &_GLOBAL_26_tosp_I, &_GLOBAL_27_tosp_I, &_GLOBAL_28_tosp_I, &_GLOBAL_29_tosp_I, &_GLOBAL_30_tosp_I, &_GLOBAL_31_tosp_I, &_GLOBAL_32_tosp_I, &_GLOBAL_33_tosp_I, &_GLOBAL_34_tosp_I, &_GLOBAL_35_tosp_I, &_GLOBAL_36_tosp_I, &_GLOBAL_37_tosp_I, &_GLOBAL_38_tosp_I, &_GLOBAL_39_tosp_I, &_GLOBAL_40_tosp_I, &_GLOBAL_41_tosp_I, &_GLOBAL_42_tosp_I, &_GLOBAL_43_tosp_I, &_GLOBAL_44_tosp_I, &_GLOBAL_45_tosp_I, &_GLOBAL_46_tosp_I, &_GLOBAL_47_tosp_I, &_GLOBAL_48_tosp_I, &_GLOBAL_49_tosp_I, };    
 int i;

 for(i = 0; i < 8; i++)
  if(ip_tos & (1 << i))
   (*_GLOBAL_tosp_8_A[get_stack_id()])[i] = '1';
  else
   (*_GLOBAL_tosp_8_A[get_stack_id()])[i] = '0';

 return (*_GLOBAL_tosp_8_A[get_stack_id()]);
}

char *protocol2str(unsigned char ip_p)
{
 switch(ip_p) {
 case 1: return "ICMP";
 case 2: return "IGMP";
 case 6: return "TCP";
 case 9: return "IGRP";
 case 17: return "UDP";
 case 47: return "GRE";
 case 50: return "ESP";
 case 51: return "AH";
 case 88: return "EIGRP";
 case 89: return "OSPF";
 case 115: return "L2TP";
 };
 return "(Unknown Protocol)";
}

void decode_tcp(void *packet_data, int hdr_len);

void decode_packet(void *packet_data)
{
 struct ip *ip_hdr = (struct ip *)packet_data;



 nsc_printf("%d] "
  "IPv%hd HL:%hhd TOS:%s TL:%hu ID:%hu Off:%hu TTL:%hhu %s\n"
  "Sum:%hu ",
  get_stack_id(),
  (short)ip_hdr->ip_v, (short)ip_hdr->ip_hl, tos2str(ip_hdr->ip_tos),
  __bswap16(ip_hdr->ip_len), __bswap16(ip_hdr->ip_id), __bswap16(ip_hdr->ip_off),
  ip_hdr->ip_ttl, protocol2str(ip_hdr->ip_p), __bswap16(ip_hdr->ip_sum)
  );
 nsc_printf("%s -> ", inet_ntoa(ip_hdr->ip_src));
 nsc_printf("%s\n", inet_ntoa(ip_hdr->ip_dst));

 if(ip_hdr->ip_p == 6)
  decode_tcp((unsigned char *)packet_data + (ip_hdr->ip_hl * 4),
    __bswap16(ip_hdr->ip_len) - (ip_hdr->ip_hl * 4));
}

void short_decode(void *p)
{
 struct ip *ip_hdr = (struct ip *)p;

    nsc_printf(" id:%4d %s -> ",
            __bswap16(ip_hdr->ip_id),
            inet_ntoa(ip_hdr->ip_src));
    nsc_printf("%s\n", inet_ntoa(ip_hdr->ip_dst));
}
# 150 "freebsd5/support/decode_packet.c"
char *flags2str(unsigned char flags)
{
 typedef  char  _GLOBAL_58_T; static  _GLOBAL_58_T  _GLOBAL_0_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_1_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_2_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_3_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_4_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_5_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_6_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_7_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_8_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_9_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_10_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_11_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_12_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_13_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_14_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_15_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_16_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_17_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_18_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_19_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_20_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_21_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_22_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_23_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_24_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_25_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_26_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_27_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_28_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_29_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_30_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_31_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_32_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_33_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_34_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_35_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_36_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_37_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_38_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_39_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_40_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_41_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_42_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_43_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_44_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_45_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_46_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_47_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_48_buf_I [ 512 ] ; static  _GLOBAL_58_T  _GLOBAL_49_buf_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_9_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 (*_GLOBAL_buf_9_A[get_stack_id()])[0]='\0';
 if(flags & 0x01) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " FIN");
 if(flags & 0x02) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " SYN");
 if(flags & 0x04) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " RST");
 if(flags & 0x08) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " PUSH");
 if(flags & 0x10) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " ACK");
 if(flags & 0x20) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " URG");
 if(flags & 0x40) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " ECE");
 if(flags & 0x80) strcat((*_GLOBAL_buf_9_A[get_stack_id()]), " CWR");

 return (*_GLOBAL_buf_9_A[get_stack_id()]);
}

void decode_tcp(void *packet_data, int hdr_len)
{
 struct tcphdr *tcp = (struct tcphdr *)packet_data;

 nsc_printf("Src port:%hu Dst port:%hu Seq:%u Ack:%u Off:%hhu %s\n",
  __bswap16(tcp->th_sport), __bswap16(tcp->th_dport), __bswap32(tcp->th_seq),
  __bswap32(tcp->th_ack), (unsigned char)tcp->th_off,
  flags2str(tcp->th_flags)
  );
 nsc_printf("Win:%hu Sum:%hu Urg:%hu\n",
  __bswap16(tcp->th_win), __bswap16(tcp->th_sum), __bswap16(tcp->th_urp));

 if(hdr_len > 20) {
  unsigned char *opt = (unsigned char *)packet_data + 20;

  nsc_printf("Options: ");
  while(
    (*opt != 0) &&
    ((unsigned int)opt - (unsigned int)packet_data < tcp->th_off*4)
    ) {
   unsigned char len = opt[1];
   if(len == 0 && opt[0] != 1) {
    nsc_printf("0-length option(%u)\n", opt[0]);
    break;
   }

   len -= 2;

   switch(*opt) {
   case 1: nsc_printf("No-Op "); opt++; break;
   case 2: { unsigned short mss = 0;

      if(len == 2) {
       mss = (opt[2] << 8) + (opt[3]);
       nsc_printf("MSS(%u) ", mss);
      } else {
       nsc_printf("MSS:l:%u ", len);
      }
      opt += opt[1];
      break;
     }
   case 3: { unsigned char ws = 0;
      nsc_assert(len == 1);
      ws = opt[2];
      nsc_printf("WS(%u) ", ws);
      opt += opt[1];
      break;
     }
   case 4: { nsc_printf("SACK-Permitted ");
      opt += opt[1];
      break;
     }
   case 5: { nsc_printf("SACK ");
      opt += opt[1];
      break;
     }
   case 8: {
      int i;
      nsc_printf("Timestamp(");
      for(i = 0; i < len; i++)
       nsc_printf("%02x", opt[2+i]);
      nsc_printf(") ");
      opt += opt[1];
      break;
     }
   default:{ nsc_printf("%u:%u ", opt[0], opt[1]);
      opt += opt[1];
      break;
     }
   };

  }
  nsc_printf("\n");
 }

}

