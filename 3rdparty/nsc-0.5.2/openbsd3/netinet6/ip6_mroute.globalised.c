# 1 "openbsd3/netinet6/ip6_mroute.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netinet6/ip6_mroute.c"
# 89 "openbsd3/netinet6/ip6_mroute.c"
# 1 "openbsd3/sys/param.h" 1
# 56 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/types.h" 1
# 44 "openbsd3/sys/types.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h"
# 1 "openbsd3/sys/cdefs.h" 1
# 41 "openbsd3/sys/cdefs.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cdefs.h" 1
# 42 "openbsd3/sys/cdefs.h" 2
# 39 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 2


#include "num_stacks.h"
typedef struct label_t {
 int val[6];
} label_t;


typedef unsigned long vaddr_t;
typedef unsigned long paddr_t;
typedef unsigned long vsize_t;
typedef unsigned long psize_t;






typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
typedef unsigned int uint32_t;

typedef long long int64_t;

typedef unsigned long long u_int64_t;

typedef unsigned long long uint64_t;

typedef int32_t register_t;
# 45 "openbsd3/sys/types.h" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/ansi.h" 1
# 47 "openbsd3/sys/types.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 1
# 68 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h"
# 1 "openbsd3/sys/endian.h" 1
# 152 "openbsd3/sys/endian.h"

u_int64_t htobe64(u_int64_t);
u_int32_t htobe32(u_int32_t);
u_int16_t htobe16(u_int16_t);
u_int64_t betoh64(u_int64_t);
u_int32_t betoh32(u_int32_t);
u_int16_t betoh16(u_int16_t);

u_int64_t htole64(u_int64_t);
u_int32_t htole32(u_int32_t);
u_int16_t htole16(u_int16_t);
u_int64_t letoh64(u_int64_t);
u_int32_t letoh32(u_int32_t);
u_int16_t letoh16(u_int16_t);

# 69 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 2
# 48 "openbsd3/sys/types.h" 2


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t id_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef int32_t pid_t;
typedef u_quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
typedef u_int32_t useconds_t;
typedef int32_t suseconds_t;
# 90 "openbsd3/sys/types.h"
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int8_t sa_family_t;
typedef u_int32_t socklen_t;


typedef unsigned long clock_t;




typedef unsigned int size_t;




typedef int ssize_t;




typedef int time_t;




typedef int clockid_t;




typedef int timer_t;




typedef long long off_t;
# 166 "openbsd3/sys/types.h"
typedef int32_t fd_mask;






typedef struct fd_set {
 fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 194 "openbsd3/sys/types.h"
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
# 57 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/simplelock.h" 1
# 14 "openbsd3/sys/simplelock.h"
struct simplelock {
 int lock_data;
};
# 45 "openbsd3/sys/simplelock.h"
static __inline void simple_lock_init(struct simplelock *);

static __inline void
simple_lock_init(lkp)
 struct simplelock *lkp;
{

 lkp->lock_data = 0;
}
# 58 "openbsd3/sys/param.h" 2
# 67 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/syslimits.h" 1
# 68 "openbsd3/sys/param.h" 2
# 83 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/errno.h" 1
# 84 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/time.h" 1
# 44 "openbsd3/sys/time.h"
struct timeval {
 long tv_sec;
 long tv_usec;
};




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 66 "openbsd3/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 138 "openbsd3/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
# 172 "openbsd3/sys/time.h"
int itimerfix(struct timeval *tv);
int itimerdecr(struct itimerval *itp, int usec);
void microtime(struct timeval *tv);
int settime(struct timeval *tv);
int ratecheck(struct timeval *, const struct timeval *);
int ppsratecheck(struct timeval *, int *, int);
# 85 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/resource.h" 1
# 55 "openbsd3/sys/resource.h"
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
# 95 "openbsd3/sys/resource.h"
struct orlimit {
 int32_t rlim_cur;
 int32_t rlim_max;
};

struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};


struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};


typedef  struct loadavg   _GLOBAL_0_T; extern  _GLOBAL_0_T  global_averunnable[NUM_STACKS];    
int dosetrlimit(struct proc *, u_int, struct rlimit *);
int donice(struct proc *, struct proc *, int);
# 86 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/ucred.h" 1
# 41 "openbsd3/sys/ucred.h"
struct ucred {
 u_int cr_ref;
 uid_t cr_uid;
 gid_t cr_gid;
 short cr_ngroups;
 gid_t cr_groups[16];
};
# 56 "openbsd3/sys/ucred.h"
struct ucred *crcopy(struct ucred *cr);
struct ucred *crdup(struct ucred *cr);
void crfree(struct ucred *cr);
struct ucred *crget(void);
int suser(struct proc *p, u_int flags);
int suser_ucred(struct ucred *cred);
# 87 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/uio.h" 1
# 38 "openbsd3/sys/uio.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};

enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE
};


struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 size_t uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct proc *uio_procp;
};
# 82 "openbsd3/sys/uio.h"
int ureadc(int c, struct uio *);

int dofilereadv(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
int dofilewritev(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
# 88 "openbsd3/sys/param.h" 2



# 1 "openbsd3/sys/signal.h" 1
# 44 "openbsd3/sys/signal.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
typedef int sig_atomic_t;





# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/trap.h" 1
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 2
# 53 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
struct sigcontext {
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;

 int sc_eip;
 int sc_cs;
 int sc_eflags;
 int sc_esp;
 int sc_ss;

 int sc_onstack;
 int sc_mask;

 int sc_trapno;
 int sc_err;
};
# 45 "openbsd3/sys/signal.h" 2
# 106 "openbsd3/sys/signal.h"
typedef unsigned int sigset_t;

# 1 "openbsd3/sys/siginfo.h" 1
# 31 "openbsd3/sys/siginfo.h"
union sigval {
 int sival_int;
 void *sival_ptr;
};
# 130 "openbsd3/sys/siginfo.h"
typedef struct {
 int si_signo;
 int si_code;
 int si_errno;
 union {
  int _pad[((128 / sizeof (int)) - 3)];
  struct {
   pid_t _pid;
   union {
    struct {
     uid_t _uid;
     union sigval _value;
    } _kill;
    struct {
     clock_t _utime;
     int _status;
     clock_t _stime;
    } _cld;
   } _pdata;
  } _proc;
  struct {
   caddr_t _addr;
   int _trapno;
  } _fault;
# 170 "openbsd3/sys/siginfo.h"
 } _data;
} siginfo_t;
# 194 "openbsd3/sys/siginfo.h"
void initsiginfo(siginfo_t *, int, u_long, int, union sigval);
# 109 "openbsd3/sys/signal.h" 2




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, siginfo_t *, void *);
 } __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 147 "openbsd3/sys/signal.h"
typedef void (*sig_t)(int);




typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;






struct osigaltstack {
 void *ss_sp;
 int ss_size;
 int ss_flags;
};






struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 187 "openbsd3/sys/signal.h"
struct sigstack {
 void *ss_sp;
 int ss_onstack;
};

typedef struct sigcontext ucontext_t;
# 209 "openbsd3/sys/signal.h"

void (*signal(int, void (*)(int)))(int);

# 92 "openbsd3/sys/param.h" 2


# 1 "openbsd3/sys/limits.h" 1
# 42 "openbsd3/sys/limits.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/internal_types.h" 1
# 43 "openbsd3/sys/limits.h" 2


# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/limits.h" 1
# 46 "openbsd3/sys/limits.h" 2
# 95 "openbsd3/sys/param.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 1
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 1
# 74 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h" 1
# 100 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
typedef  int  _GLOBAL_1_T; volatile  _GLOBAL_1_T  global_cpl[NUM_STACKS];   
typedef  int  _GLOBAL_2_T; volatile  _GLOBAL_2_T  global_ipending[NUM_STACKS];   
typedef  int  _GLOBAL_3_T; volatile  _GLOBAL_3_T  global_astpending[NUM_STACKS];   
typedef  int _GLOBAL_4_T;  _GLOBAL_4_T  _GLOBAL_0_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_1_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_2_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_3_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_4_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_5_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_6_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_7_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_8_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_9_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_10_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_11_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_12_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_13_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_14_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_15_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_16_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_17_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_18_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_19_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_20_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_21_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_22_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_23_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_24_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_25_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_26_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_27_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_28_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_29_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_30_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_31_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_32_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_33_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_34_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_35_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_36_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_37_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_38_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_39_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_40_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_41_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_42_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_43_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_44_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_45_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_46_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_47_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_48_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_49_imask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_imask_I) *_GLOBAL_imask_0_A[NUM_STACKS] = { &_GLOBAL_0_imask_I, &_GLOBAL_1_imask_I, &_GLOBAL_2_imask_I, &_GLOBAL_3_imask_I, &_GLOBAL_4_imask_I, &_GLOBAL_5_imask_I, &_GLOBAL_6_imask_I, &_GLOBAL_7_imask_I, &_GLOBAL_8_imask_I, &_GLOBAL_9_imask_I, &_GLOBAL_10_imask_I, &_GLOBAL_11_imask_I, &_GLOBAL_12_imask_I, &_GLOBAL_13_imask_I, &_GLOBAL_14_imask_I, &_GLOBAL_15_imask_I, &_GLOBAL_16_imask_I, &_GLOBAL_17_imask_I, &_GLOBAL_18_imask_I, &_GLOBAL_19_imask_I, &_GLOBAL_20_imask_I, &_GLOBAL_21_imask_I, &_GLOBAL_22_imask_I, &_GLOBAL_23_imask_I, &_GLOBAL_24_imask_I, &_GLOBAL_25_imask_I, &_GLOBAL_26_imask_I, &_GLOBAL_27_imask_I, &_GLOBAL_28_imask_I, &_GLOBAL_29_imask_I, &_GLOBAL_30_imask_I, &_GLOBAL_31_imask_I, &_GLOBAL_32_imask_I, &_GLOBAL_33_imask_I, &_GLOBAL_34_imask_I, &_GLOBAL_35_imask_I, &_GLOBAL_36_imask_I, &_GLOBAL_37_imask_I, &_GLOBAL_38_imask_I, &_GLOBAL_39_imask_I, &_GLOBAL_40_imask_I, &_GLOBAL_41_imask_I, &_GLOBAL_42_imask_I, &_GLOBAL_43_imask_I, &_GLOBAL_44_imask_I, &_GLOBAL_45_imask_I, &_GLOBAL_46_imask_I, &_GLOBAL_47_imask_I, &_GLOBAL_48_imask_I, &_GLOBAL_49_imask_I, }; 
typedef  int _GLOBAL_5_T;  _GLOBAL_5_T  _GLOBAL_0_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_1_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_2_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_3_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_4_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_5_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_6_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_7_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_8_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_9_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_10_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_11_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_12_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_13_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_14_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_15_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_16_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_17_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_18_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_19_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_20_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_21_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_22_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_23_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_24_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_25_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_26_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_27_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_28_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_29_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_30_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_31_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_32_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_33_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_34_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_35_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_36_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_37_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_38_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_39_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_40_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_41_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_42_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_43_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_44_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_45_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_46_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_47_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_48_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_49_iunmask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iunmask_I) *_GLOBAL_iunmask_1_A[NUM_STACKS] = { &_GLOBAL_0_iunmask_I, &_GLOBAL_1_iunmask_I, &_GLOBAL_2_iunmask_I, &_GLOBAL_3_iunmask_I, &_GLOBAL_4_iunmask_I, &_GLOBAL_5_iunmask_I, &_GLOBAL_6_iunmask_I, &_GLOBAL_7_iunmask_I, &_GLOBAL_8_iunmask_I, &_GLOBAL_9_iunmask_I, &_GLOBAL_10_iunmask_I, &_GLOBAL_11_iunmask_I, &_GLOBAL_12_iunmask_I, &_GLOBAL_13_iunmask_I, &_GLOBAL_14_iunmask_I, &_GLOBAL_15_iunmask_I, &_GLOBAL_16_iunmask_I, &_GLOBAL_17_iunmask_I, &_GLOBAL_18_iunmask_I, &_GLOBAL_19_iunmask_I, &_GLOBAL_20_iunmask_I, &_GLOBAL_21_iunmask_I, &_GLOBAL_22_iunmask_I, &_GLOBAL_23_iunmask_I, &_GLOBAL_24_iunmask_I, &_GLOBAL_25_iunmask_I, &_GLOBAL_26_iunmask_I, &_GLOBAL_27_iunmask_I, &_GLOBAL_28_iunmask_I, &_GLOBAL_29_iunmask_I, &_GLOBAL_30_iunmask_I, &_GLOBAL_31_iunmask_I, &_GLOBAL_32_iunmask_I, &_GLOBAL_33_iunmask_I, &_GLOBAL_34_iunmask_I, &_GLOBAL_35_iunmask_I, &_GLOBAL_36_iunmask_I, &_GLOBAL_37_iunmask_I, &_GLOBAL_38_iunmask_I, &_GLOBAL_39_iunmask_I, &_GLOBAL_40_iunmask_I, &_GLOBAL_41_iunmask_I, &_GLOBAL_42_iunmask_I, &_GLOBAL_43_iunmask_I, &_GLOBAL_44_iunmask_I, &_GLOBAL_45_iunmask_I, &_GLOBAL_46_iunmask_I, &_GLOBAL_47_iunmask_I, &_GLOBAL_48_iunmask_I, &_GLOBAL_49_iunmask_I, }; 




extern void Xspllower(void);

static __inline int splraise(int);
static __inline int spllower(int);

static __inline void softintr(int);







void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_6_T; extern  _GLOBAL_6_T  global_splassert_ctl[NUM_STACKS];   
void splassert_check(int, const char *);
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline int
splraise(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 if (ncpl > ocpl)
  global_cpl[get_stack_id()] = ncpl;
 __asm volatile("":::"memory");
 return (ocpl);
}
# 172 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void splx(int);


static __inline void splx(ncpl) int ncpl; { __asm volatile("":::"memory"); global_cpl[get_stack_id()] = ncpl; if (global_ipending[get_stack_id()] & (*_GLOBAL_iunmask_1_A[get_stack_id()])[((ncpl) >> 4)]) Xspllower(); }





static __inline int
spllower(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 splx(ncpl);
 return (ocpl);
}
# 225 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void
softintr(mask)
 int mask;
{
 __asm volatile("orl %1, %0" : "=m"(global_ipending[get_stack_id()]) : "ir" (mask));

}
# 75 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 2
# 83 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
struct intrhand {
 int (*ih_fun)(void *);
 void *ih_arg;
 u_long ih_count;
 struct intrhand *ih_next;
 int ih_level;
 int ih_irq;
 char *ih_what;
};
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h" 1
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h"
struct trapframe {
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
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
 int if_ppl;
 int if_es;
 int if_ds;
 int if_edi;
 int if_esi;
 int if_ebp;
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




struct switchframe {
 int sf_ppl;
 int sf_edi;
 int sf_esi;
 int sf_ebx;
 int sf_eip;
};




struct sigframe {
 int sf_signum;
 siginfo_t *sf_sip;
 struct sigcontext *sf_scp;
 sig_t sf_handler;
 struct sigcontext sf_sc;
 siginfo_t sf_si;
};
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h" 1
# 79 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16;
 unsigned sd_lobase:24;
 unsigned sd_type:5;
 unsigned sd_dpl:2;
 unsigned sd_p:1;
 unsigned sd_hilimit:4;
 unsigned sd_xx:2;
 unsigned sd_def32:1;
 unsigned sd_gran:1;
 unsigned sd_hibase:8;
} __attribute__((__packed__)) ;




struct gate_descriptor {
 unsigned gd_looffset:16;
 unsigned gd_selector:16;
 unsigned gd_stkcpy:5;
 unsigned gd_xx:3;
 unsigned gd_type:5;
 unsigned gd_dpl:2;
 unsigned gd_p:1;
 unsigned gd_hioffset:16;
} __attribute__((__packed__)) ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
} __attribute__((__packed__)) ;




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32;
} __attribute__((__packed__)) ;






typedef  union descriptor   _GLOBAL_7_T; extern  _GLOBAL_7_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_2_A[NUM_STACKS];extern  _GLOBAL_7_T  _GLOBAL_0_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_ldt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];    
typedef  struct gate_descriptor   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_idt_region_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_idt_region_I) *_GLOBAL_idt_region_4_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_9_T; extern  _GLOBAL_9_T  * global_idt[NUM_STACKS];    

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void setregion(struct region_descriptor *, void *, size_t);
void setsegment(struct segment_descriptor *, void *, size_t, int, int,
    int, int);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 71 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int _GLOBAL_10_T;  _GLOBAL_10_T  global_want_resched[NUM_STACKS];  
# 91 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
void delay(int);





void calibrate_cyclecounter(void);

typedef  u_quad_t  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_pentium_base_tsc[NUM_STACKS];   
# 116 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cputypes.h" 1
# 117 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2

struct cpu_nocpuid_nameclass {
 int cpu_vendor;
 const char *cpu_vendorname;
 const char *cpu_name;
 int cpu_class;
 void (*cpu_setup)(const char *, int, int);
};

struct cpu_cpuid_nameclass {
 const char *cpu_id;
 int cpu_vendor;
 const char *cpu_vendorname;
 struct cpu_cpuid_family {
  int cpu_class;
  const char *cpu_models[15 +2];
  void (*cpu_setup)(const char *, int, int);
 } cpu_family[0xf - 4 + 1];
};

struct cpu_cpuid_feature {
 int feature_bit;
 const char *feature_name;
};


typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_cpu[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_cpu_class[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_cpu_feature[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_ecxfeature[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_apmwarn[NUM_STACKS];   
typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_apmhalt[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpuid_level[NUM_STACKS];   
typedef  const struct cpu_nocpuid_nameclass    _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_1_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_2_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_3_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_4_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_5_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_6_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_7_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_8_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_9_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_10_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_11_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_12_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_13_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_14_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_15_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_16_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_17_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_18_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_19_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_20_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_21_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_22_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_23_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_24_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_25_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_26_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_27_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_28_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_29_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_30_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_31_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_32_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_33_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_34_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_35_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_36_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_37_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_38_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_39_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_40_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_41_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_42_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_43_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_44_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_45_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_46_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_47_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_48_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_49_i386_nocpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_nocpuid_cpus_I) *_GLOBAL_i386_nocpuid_cpus_5_A[NUM_STACKS];    
typedef  const struct cpu_cpuid_nameclass    _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_1_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_2_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_3_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_4_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_5_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_6_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_7_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_8_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_9_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_10_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_11_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_12_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_13_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_14_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_15_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_16_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_17_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_18_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_19_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_20_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_21_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_22_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_23_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_24_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_25_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_26_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_27_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_28_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_29_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_30_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_31_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_32_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_33_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_34_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_35_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_36_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_37_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_38_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_39_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_40_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_41_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_42_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_43_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_44_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_45_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_46_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_47_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_48_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_49_i386_cpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_cpuid_cpus_I) *_GLOBAL_i386_cpuid_cpus_6_A[NUM_STACKS];    


typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_pentium_mhz[NUM_STACKS];   




typedef  int  _GLOBAL_22_T; extern  _GLOBAL_22_T  global_cpu_f00f_bug[NUM_STACKS];   
void fix_f00f(void);



void dkcsumattach(void);

typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_i386_use_fxsave[NUM_STACKS];   
typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_i386_has_sse[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_i386_has_sse2[NUM_STACKS];   


void dumpconf(void);
void cpu_reset(void);
void i386_proc0_tss_ldt_init(void);
void cpuid(u_int32_t, u_int32_t *);


struct region_descriptor;
void lgdt(struct region_descriptor *);
void fillw(short, void *, size_t);

struct pcb;
void savectx(struct pcb *);
void switch_exit(struct proc *);
void proc_trampoline(void);


void initrtclock(void);
void startrtclock(void);
void rtcdrain(void *);



void est_init(const char *);
int est_cpuspeed(int *);
int est_setperf(int);




void longrun_init(void);
int longrun_cpuspeed(int *);
int longrun_setperf(int);




void p4tcc_init(int, int);
int p4tcc_setperf(int);



void npxdrop(void);
void npxsave(void);
# 222 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_user_ldt_enable[NUM_STACKS];   
int i386_get_ldt(struct proc *, void *, register_t *);
int i386_set_ldt(struct proc *, void *, register_t *);



void isa_defaultirq(void);
int isa_nmi(void);


void pmap_bootstrap(vaddr_t);


int kvtop(caddr_t);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 2
# 96 "openbsd3/sys/param.h" 2
# 90 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/queue.h" 1
# 44 "openbsd3/sys/systm.h" 2
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_7_A[NUM_STACKS];   
typedef  const char   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_8_A[NUM_STACKS];   
typedef  const char   _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_9_A[NUM_STACKS];   
typedef  const char   _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_10_A[NUM_STACKS];   
typedef  const char   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_11_A[NUM_STACKS];   
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_44_T; extern  _GLOBAL_44_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_46_T; extern  _GLOBAL_46_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_12_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_50_T  )  ( int  ) ; extern  _GLOBAL_50_T global_v_putc[NUM_STACKS];   

extern void _insque(void *, void *);
extern void _remque(void *);
# 137 "openbsd3/sys/systm.h"
int nullop(void *);
int enodev(void);
int enosys(void);
int enoioctl(void);
int enxio(void);
int eopnotsupp(void *);

int lkmenodev(void);

struct vnodeopv_desc;
void vfs_opv_init(void);
void vfs_opv_init_explicit(struct vnodeopv_desc *);
void vfs_opv_init_default(struct vnodeopv_desc *);
void vfs_op_init(void);

int seltrue(dev_t dev, int which, struct proc *);
void *hashinit(int, int, int, u_long *);
int sys_nosys(struct proc *, void *, register_t *);

void panic(const char *, ...)
    __attribute__((__noreturn__,__format__(__printf__,1,2))) ;
void __assert(const char *, const char *, int, const char *)
    __attribute__((__noreturn__)) ;
int printf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void uprintf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
int vprintf(const char *, va_list);
int vsprintf(char *, const char *, va_list);
int sprintf(char *buf, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int vsnprintf(char *, size_t, const char *, va_list);
int snprintf(char *buf, size_t, const char *, ...)
    __attribute__((__format__(__printf__,3,4))) ;
struct tty;
void ttyprintf(struct tty *, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;

void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_splassert_ctl[NUM_STACKS];   

void tablefull(const char *);

int kcopy(const void *, void *, size_t);

void bcopy(const void *, void *, size_t);
void ovbcopy(const void *, void *, size_t);
void bzero(void *, size_t);
int bcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);

int copystr(const void *, void *, size_t, size_t *);
int copyinstr(const void *, void *, size_t, size_t *);
int copyoutstr(const void *, void *, size_t, size_t *);
int copyin(const void *, void *, size_t);
int copyout(const void *, void *, size_t);

struct timeval;
int hzto(struct timeval *);
int tvtohz(struct timeval *);
void realitexpire(void *);

struct intrframe;
void hardclock(struct intrframe *);
void softclock(void);
void statclock(struct intrframe *);

void initclocks(void);
void inittodr(time_t);
void resettodr(void);
void cpu_initclocks(void);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void setstatclockrate(int);

void wdog_register(void *, int (*)(void *, int));
# 225 "openbsd3/sys/systm.h"
struct hook_desc {
 struct { struct hook_desc *tqe_next; struct hook_desc **tqe_prev; } hd_list;
 void (*hd_fn)(void *);
 void *hd_arg;
};
struct hook_desc_head { struct hook_desc *tqh_first; struct hook_desc **tqh_last; };

typedef  struct hook_desc_head   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_52_T  global_startuphook_list[NUM_STACKS];     

void *hook_establish(struct hook_desc_head *, int, void (*)(void *), void *);
void hook_disestablish(struct hook_desc_head *, void *);
void dohooks(struct hook_desc_head *, int);
# 256 "openbsd3/sys/systm.h"
void *powerhook_establish(void (*)(int, void *), void *);
void powerhook_disestablish(void *);
void dopowerhooks(int);




struct uio;
int uiomove(void *, int, struct uio *);

int setjmp(label_t *);
void longjmp(label_t *);

void consinit(void);

void cpu_startup(void);
void cpu_configure(void);
typedef  void   ( *_GLOBAL_54_T  )  ( void  ) ; extern  _GLOBAL_54_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_56_T  )  ( void  ) ; extern  _GLOBAL_56_T global_mountroot[NUM_STACKS];   

# 1 "openbsd3/lib/libkern/libkern.h" 1
# 46 "openbsd3/lib/libkern/libkern.h"
static __inline int imax(int, int);
static __inline int imin(int, int);
static __inline u_int max(u_int, u_int);
static __inline u_int min(u_int, u_int);
static __inline long lmax(long, long);
static __inline long lmin(long, long);
static __inline u_long ulmax(u_long, u_long);
static __inline u_long ulmin(u_long, u_long);
static __inline int abs(int);


static __inline int
imax(a, b)
 int a, b;
{
 return (a > b ? a : b);
}
static __inline int
imin(a, b)
 int a, b;
{
 return (a < b ? a : b);
}
static __inline long
lmax(a, b)
 long a, b;
{
 return (a > b ? a : b);
}
static __inline long
lmin(a, b)
 long a, b;
{
 return (a < b ? a : b);
}
static __inline u_int
max(a, b)
 u_int a, b;
{
 return (a > b ? a : b);
}
static __inline u_int
min(a, b)
 u_int a, b;
{
 return (a < b ? a : b);
}
static __inline u_long
ulmax(a, b)
 u_long a, b;
{
 return (a > b ? a : b);
}
static __inline u_long
ulmin(a, b)
 u_long a, b;
{
 return (a < b ? a : b);
}

static __inline int
abs(j)
 int j;
{
 return(j < 0 ? -j : j);
}
# 151 "openbsd3/lib/libkern/libkern.h"
void __assert(const char *, const char *, int, const char *)
     __attribute__ ((__noreturn__)) ;
int bcmp(const void *, const void *, size_t);
int ffs(int);
int locc(int, char *, u_int);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
u_long random(void);
void srandom(u_long);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, size_t, u_char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int strncasecmp(const char *, const char *, size_t);
int getsn(char *, int);

typedef  u_int8_t const   _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_13_A[NUM_STACKS];extern  _GLOBAL_57_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_14_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 91 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/timeout.h" 1
# 54 "openbsd3/sys/timeout.h"
struct circq {
 struct circq *next;
 struct circq *prev;
};

struct timeout {
 struct circq to_list;
 void (*to_func)(void *);
 void *to_arg;
 int to_time;
 int to_flags;
};
# 84 "openbsd3/sys/timeout.h"
void timeout_set(struct timeout *, void (*)(void *), void *);
void timeout_add(struct timeout *, int);
void timeout_del(struct timeout *);

void timeout_startup(void);





int timeout_hardclock_update(void);
# 92 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 36 "openbsd3/sys/mbuf.h"
# 1 "openbsd3/sys/malloc.h" 1
# 303 "openbsd3/sys/malloc.h"
struct kmemstats {
 long ks_inuse;
 long ks_calls;
 long ks_memuse;
 u_short ks_limblocks;
 u_short ks_mapblocks;
 long ks_maxused;
 long ks_limit;
 long ks_size;
 long ks_spare;
};




struct kmemusage {
 short ku_indx;
 union {
  u_short freecnt;
  u_short pagecnt;
 } ku_un;
};






struct kmembuckets {
 caddr_t kb_next;
 caddr_t kb_last;
 u_int64_t kb_calls;
 u_int64_t kb_total;
 u_int64_t kb_totalfree;
 u_int64_t kb_elmpercl;
 u_int64_t kb_highwat;
 u_int64_t kb_couldfree;
};
# 424 "openbsd3/sys/malloc.h"
typedef  struct kmemstats   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_15_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_60_T; extern  _GLOBAL_60_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_16_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 37 "openbsd3/sys/mbuf.h" 2

# 1 "openbsd3/sys/pool.h" 1
# 54 "openbsd3/sys/pool.h"
# 1 "openbsd3/sys/lock.h" 1
# 43 "openbsd3/sys/lock.h"
typedef struct simplelock simple_lock_data_t;
typedef struct simplelock *simple_lock_t;
typedef struct lock lock_data_t;
typedef struct lock *lock_t;






struct lock {
 struct simplelock lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 char *lk_wmesg;
 int lk_timo;
 pid_t lk_lockholder;
};
# 161 "openbsd3/sys/lock.h"
struct proc;

void lockinit(struct lock *, int prio, char *wmesg, int timo,
   int flags);
int lockmgr(volatile struct lock *, u_int flags,
   struct simplelock *, struct proc *p);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *);
# 55 "openbsd3/sys/pool.h" 2


# 1 "openbsd3/sys/tree.h" 1
# 58 "openbsd3/sys/pool.h" 2

struct pool_cache {
 struct { struct pool_cache *tqe_next; struct pool_cache **tqe_prev; }
   pc_poollist;
 struct { struct pool_cache_group *tqh_first; struct pool_cache_group **tqh_last; }
   pc_grouplist;
 struct pool_cache_group
   *pc_allocfrom;
 struct pool_cache_group
   *pc_freeto;
 struct pool *pc_pool;
 struct simplelock pc_slock;

 int (*pc_ctor)(void *, void *, int);
 void (*pc_dtor)(void *, void *);
 void *pc_arg;


 unsigned long pc_hits;
 unsigned long pc_misses;

 unsigned long pc_ngroups;

 unsigned long pc_nitems;
};

struct pool_allocator {
 void *(*pa_alloc)(struct pool *, int);
 void (*pa_free)(struct pool *, void *);
 int pa_pagesz;


 struct simplelock pa_slock;
 struct { struct pool *tqh_first; struct pool **tqh_last; } pa_list;
 int pa_flags;


 int pa_pagemask;
 int pa_pageshift;
};

struct pool_pagelist { struct pool_item_header *lh_first; };

struct pool {
 struct { struct pool *tqe_next; struct pool **tqe_prev; }
   pr_poollist;
 struct pool_pagelist
   pr_emptypages;
 struct pool_pagelist
   pr_fullpages;
 struct pool_pagelist
   pr_partpages;
 struct pool_item_header *pr_curpage;
 struct { struct pool_cache *tqh_first; struct pool_cache **tqh_last; }
   pr_cachelist;
 unsigned int pr_size;
 unsigned int pr_align;
 unsigned int pr_itemoffset;
 unsigned int pr_minitems;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_npages;
 unsigned int pr_itemsperpage;
 unsigned int pr_slack;
 unsigned int pr_nitems;
 unsigned int pr_nout;
 unsigned int pr_hardlimit;

 unsigned int pr_serial;
 struct pool_allocator *pr_alloc;
 struct { struct pool *tqe_next; struct pool **tqe_prev; } pr_alloc_list;
 const char *pr_wchan;
 unsigned int pr_flags;
 unsigned int pr_roflags;
# 150 "openbsd3/sys/pool.h"
 struct simplelock pr_slock;

 struct phtree { struct pool_item_header *sph_root; } pr_phtree;

 int pr_maxcolor;
 int pr_curcolor;
 int pr_phoffset;





 const char *pr_hardlimit_warning;
 struct timeval pr_hardlimit_ratecap;
 struct timeval pr_hardlimit_warning_last;




 unsigned long pr_nget;
 unsigned long pr_nfail;
 unsigned long pr_nput;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;




 struct pool_log *pr_log;
 int pr_curlogentry;
 int pr_logsize;

 const char *pr_entered_file;
 long pr_entered_line;
 void (*pr_drain_hook)(void *, int);
 void *pr_drain_hook_arg;
};






typedef  struct pool_allocator   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_pool_allocator_kmem[NUM_STACKS];    

int pool_allocator_drain(struct pool_allocator *, struct pool *,
      int);

void pool_init(struct pool *, size_t, u_int, u_int, int,
      const char *, struct pool_allocator *);
void pool_destroy(struct pool *);

void pool_set_drain_hook(struct pool *, void (*)(void *, int),
      void *);

void *pool_get(struct pool *, int);
void pool_put(struct pool *, void *);
int pool_reclaim(struct pool *);
# 225 "openbsd3/sys/pool.h"
int pool_prime(struct pool *, int);
void pool_setlowat(struct pool *, int);
void pool_sethiwat(struct pool *, int);
int pool_sethardlimit(struct pool *, unsigned, const char *, int);
void pool_drain(void *);




void pool_print(struct pool *, const char *);
void pool_printit(struct pool *, const char *,
      int (*)(const char *, ...));
int pool_chk(struct pool *, const char *);




void pool_cache_init(struct pool_cache *, struct pool *,
      int (*ctor)(void *, void *, int),
      void (*dtor)(void *, void *),
      void *);
void pool_cache_destroy(struct pool_cache *);
void *pool_cache_get(struct pool_cache *, int);
void pool_cache_put(struct pool_cache *, void *);
void pool_cache_destruct_object(struct pool_cache *, void *);
void pool_cache_invalidate(struct pool_cache *);
# 39 "openbsd3/sys/mbuf.h" 2
# 56 "openbsd3/sys/mbuf.h"
struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
};
# 69 "openbsd3/sys/mbuf.h"
struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 u_int mh_len;
 short mh_type;
 short mh_flags;
};


struct pkthdr {
 struct ifnet *rcvif;
 struct packet_tags { struct m_tag *slh_first; } tags;
 int len;
 int csum;
};


struct m_ext {
 caddr_t ext_buf;

 void (*ext_free)(caddr_t, u_int, void *);
 void *ext_arg;
 u_int ext_size;
 int ext_type;
 struct mbuf *ext_nextref;
 struct mbuf *ext_prevref;






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
# 518 "openbsd3/sys/mbuf.h"
struct mbstat {
 u_long _m_spare;
 u_long _m_spare1;
 u_long _m_spare2;
 u_long _m_spare3;
 u_long m_drops;
 u_long m_wait;
 u_long m_drain;
 u_short m_mtypes[256];
};


typedef  struct mbstat   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_17_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_mclpool[NUM_STACKS];    

void mbinit(void);
struct mbuf *m_copym2(struct mbuf *, int, int, int);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_free(struct mbuf *);
struct mbuf *m_get(int, int);
struct mbuf *m_getclr(int, int);
struct mbuf *m_gethdr(int, int);
struct mbuf *m_prepend(struct mbuf *, int, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_pullup2(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_inject(struct mbuf *, int, int, int);
struct mbuf *m_getptr(struct mbuf *, int, int *);
void m_adj(struct mbuf *, int);
int m_clalloc(int, int);
void m_copyback(struct mbuf *, int, int, const void *);
void m_freem(struct mbuf *);
void m_reclaim(void *, int);
void m_copydata(struct mbuf *, int, int, caddr_t);
void m_cat(struct mbuf *, struct mbuf *);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
     void (*)(const void *, void *, size_t));
void m_zero(struct mbuf *);
int m_apply(struct mbuf *, int, int,
     int (*)(caddr_t, caddr_t, unsigned int), caddr_t);


struct m_tag *m_tag_get(int, int, int);
void m_tag_free(struct m_tag *);
void m_tag_prepend(struct mbuf *, struct m_tag *);
void m_tag_unlink(struct mbuf *, struct m_tag *);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_find(struct mbuf *, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *);
int m_tag_copy_chain(struct mbuf *, struct mbuf *);
void m_tag_init(struct mbuf *);
struct m_tag *m_tag_first(struct mbuf *);
struct m_tag *m_tag_next(struct mbuf *, struct m_tag *);
# 93 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/socket.h" 1
# 41 "openbsd3/sys/socket.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 42 "openbsd3/sys/socket.h" 2
# 86 "openbsd3/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};
# 141 "openbsd3/sys/socket.h"
struct sockaddr {
 u_int8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 159 "openbsd3/sys/socket.h"
struct sockaddr_storage {
 u_int8_t ss_len;
 sa_family_t ss_family;
 unsigned char __ss_pad1[6];
 u_int64_t __ss_pad2;
 unsigned char __ss_pad3[240];
};





struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 225 "openbsd3/sys/socket.h"
struct sockcred {
 uid_t sc_uid;
 uid_t sc_euid;
 gid_t sc_gid;
 gid_t sc_egid;
 int sc_ngroups;
 gid_t sc_groups[1];
};
# 328 "openbsd3/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 unsigned int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 355 "openbsd3/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 402 "openbsd3/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 caddr_t msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 caddr_t msg_accrights;
 int msg_accrightslen;
};
# 454 "openbsd3/sys/socket.h"
void pfctlinput(int, struct sockaddr *);
# 94 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/socketvar.h" 1
# 35 "openbsd3/sys/socketvar.h"
# 1 "openbsd3/sys/select.h" 1
# 38 "openbsd3/sys/select.h"
# 1 "openbsd3/sys/event.h" 1
# 52 "openbsd3/sys/event.h"
struct kevent {
 u_int ident;
 short filter;
 u_short flags;
 u_int fflags;
 int data;
 void *udata;
};
# 115 "openbsd3/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
# 128 "openbsd3/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};

struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
 int kn_sfflags;
 int kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 const struct filterops *kn_fop;
 void *kn_hook;
# 161 "openbsd3/sys/event.h"
};

struct proc;

extern void knote(struct klist *list, long hint);
extern void knote_remove(struct proc *p, struct klist *list);
extern void knote_fdclose(struct proc *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct proc *p);
extern int filt_seltrue(struct knote *kn, long hint);
extern void klist_invalidate(struct klist *);
# 39 "openbsd3/sys/select.h" 2





struct selinfo {
 pid_t si_selpid;
 struct klist si_note;
 short si_flags;
};



struct proc;

void selrecord(struct proc *selector, struct selinfo *);
void selwakeup(struct selinfo *);
# 36 "openbsd3/sys/socketvar.h" 2


struct soqhead { struct socket *tqh_first; struct socket **tqh_last; };







struct socket {
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 void *so_pcb;
 struct protosw *so_proto;
# 64 "openbsd3/sys/socketvar.h"
 struct socket *so_head;
 struct soqhead *so_onq;
 struct soqhead so_q0;
 struct soqhead so_q;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_qe;
 short so_q0len;
 short so_qlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 uid_t so_siguid;
 uid_t so_sigeuid;
 u_long so_oobmark;



 struct sockbuf {
  u_long sb_cc;
  u_long sb_hiwat;
  u_long sb_mbcnt;
  u_long sb_mbmax;
  long sb_lowat;
  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  struct selinfo sb_sel;
  short sb_flags;
  short sb_timeo;
 } so_rcv, so_snd;
# 104 "openbsd3/sys/socketvar.h"
 void *so_internal;
 void (*so_upcall)(struct socket *so, caddr_t arg, int waitf);
 caddr_t so_upcallarg;
 uid_t so_euid, so_ruid;
 gid_t so_egid, so_rgid;
};
# 216 "openbsd3/sys/socketvar.h"
typedef  u_long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_18_A[NUM_STACKS];extern  _GLOBAL_76_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_19_A[NUM_STACKS];extern  _GLOBAL_76_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_20_A[NUM_STACKS];     

typedef  struct pool   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_socket_pool[NUM_STACKS];    

struct mbuf;
struct sockaddr;
struct proc;
struct msghdr;
struct stat;
struct knote;




int soo_read(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_write(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_ioctl(struct file *fp, u_long cmd, caddr_t data,
     struct proc *p);
int soo_poll(struct file *fp, int events, struct proc *p);
int soo_kqfilter(struct file *fp, struct knote *kn);
int soo_close(struct file *fp, struct proc *p);
int soo_stat(struct file *, struct stat *, struct proc *);
int uipc_usrreq(struct socket *, int , struct mbuf *,
    struct mbuf *, struct mbuf *);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbcheck(struct sockbuf *sb);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb);
int sbreserve(struct sockbuf *sb, u_long cc);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
void soinit(void);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct mbuf *nam);
int sobind(struct socket *so, struct mbuf *nam);
void socantrcvmore(struct socket *so);
void socantsendmore(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct mbuf *nam);
int soconnect2(struct socket *so1, struct socket *so2);
int socreate(int dom, struct socket **aso, int type, int proto);
int sodisconnect(struct socket *so);
void sofree(struct socket *so);
int sogetopt(struct socket *so, int level, int optname,
     struct mbuf **mp);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog);
struct socket *sonewconn(struct socket *head, int connstatus);
void soqinsque(struct socket *head, struct socket *so, int q);
int soqremque(struct socket *so, int q);
int soreceive(struct socket *so, struct mbuf **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct mbuf *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags);
int sosetopt(struct socket *so, int level, int optname,
     struct mbuf *m0);
int soshutdown(struct socket *so, int how);
void sowakeup(struct socket *so, struct sockbuf *sb);
int sockargs(struct mbuf **, caddr_t, socklen_t, int);

int sendit(struct proc *, int, struct msghdr *, int, register_t *);
int recvit(struct proc *, int, struct msghdr *, caddr_t,
      register_t *);
# 95 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/sockio.h" 1
# 38 "openbsd3/sys/sockio.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 39 "openbsd3/sys/sockio.h" 2
# 96 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/protosw.h" 1
# 58 "openbsd3/sys/protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 void (*pr_input)(struct mbuf *, ...);

 int (*pr_output)(struct mbuf *, ...);

 void *(*pr_ctlinput)(int, struct sockaddr *, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);


 void (*pr_init)(void);
 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 228 "openbsd3/sys/protosw.h"
struct sockaddr;
struct protosw *pffindproto(int, int, int);
struct protosw *pffindtype(int, int);
void pfctlinput(int, struct sockaddr *);
# 97 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/errno.h" 1
# 98 "openbsd3/netinet6/ip6_mroute.c" 2

# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_21_A[NUM_STACKS];  
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_22_A[NUM_STACKS];  
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_83_T; extern volatile  _GLOBAL_83_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_timedelta[NUM_STACKS];   
# 100 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/ioctl.h" 1
# 43 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ttycom.h" 1
# 54 "openbsd3/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 44 "openbsd3/sys/ioctl.h" 2






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};





# 1 "openbsd3/sys/dkio.h" 1
# 62 "openbsd3/sys/ioctl.h" 2
# 1 "openbsd3/sys/filio.h" 1
# 63 "openbsd3/sys/ioctl.h" 2
# 85 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ioctl_compat.h" 1
# 43 "openbsd3/sys/ioctl_compat.h"
# 1 "openbsd3/sys/ttychars.h" 1
# 43 "openbsd3/sys/ttychars.h"
struct ttychars {
 char tc_erase;
 char tc_kill;
 char tc_intrc;
 char tc_quitc;
 char tc_startc;
 char tc_stopc;
 char tc_eofc;
 char tc_brkc;
 char tc_suspc;
 char tc_dsuspc;
 char tc_rprntc;
 char tc_flushc;
 char tc_werasc;
 char tc_lnextc;
};
# 44 "openbsd3/sys/ioctl_compat.h" 2
# 1 "openbsd3/sys/ttydev.h" 1
# 45 "openbsd3/sys/ioctl_compat.h" 2

struct tchars {
 char t_intrc;
 char t_quitc;
 char t_startc;
 char t_stopc;
 char t_eofc;
 char t_brkc;
};

struct ltchars {
 char t_suspc;
 char t_dsuspc;
 char t_rprntc;
 char t_flushc;
 char t_werasc;
 char t_lnextc;
};






struct sgttyb {
 char sg_ispeed;
 char sg_ospeed;
 char sg_erase;
 char sg_kill;
 short sg_flags;
};
# 178 "openbsd3/sys/ioctl_compat.h"
struct ioctl_pt {
 unsigned long com;
 void *data;
};
# 86 "openbsd3/sys/ioctl.h" 2
# 101 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/sys/syslog.h" 1
# 148 "openbsd3/sys/syslog.h"
struct syslog_data {
 int log_file;
 int connected;
 int opened;
 int log_stat;
 const char *log_tag;
 int log_fac;
 int log_mask;
};
# 213 "openbsd3/sys/syslog.h"
void logpri(int);
void log(int, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int addlog(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void logwakeup(void);
# 102 "openbsd3/netinet6/ip6_mroute.c" 2

# 1 "openbsd3/net/if.h" 1
# 46 "openbsd3/net/if.h"
# 1 "openbsd3/altq/if_altq.h" 1
# 38 "openbsd3/altq/if_altq.h"
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;


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
# 87 "openbsd3/altq/if_altq.h"
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
# 112 "openbsd3/altq/if_altq.h"
struct tb_regulator {
 int64_t tbr_rate;
 int64_t tbr_depth;

 int64_t tbr_token;
 int64_t tbr_filluptime;
 u_int64_t tbr_last;

 int tbr_lastop;

};
# 161 "openbsd3/altq/if_altq.h"
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
extern struct mbuf *tbr_dequeue(struct ifaltq *, int);
typedef  int   ( *_GLOBAL_98_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_98_T global_altq_input[NUM_STACKS];      
# 47 "openbsd3/net/if.h" 2
# 75 "openbsd3/net/if.h"
struct mbuf;
struct proc;
struct rtentry;
struct socket;
struct ether_header;
struct arpcom;
struct rt_addrinfo;




struct if_clone {
 struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
 const char *ifc_name;
 size_t ifc_namelen;

 int (*ifc_create)(struct if_clone *, int);
 int (*ifc_destroy)(struct ifnet *);
};







struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
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
 struct timeval ifi_lastchange;
};




struct ifqueue {
 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;
};
# 158 "openbsd3/net/if.h"
struct ifnet_head { struct ifnet *tqh_first; struct ifnet **tqh_last; };
# 167 "openbsd3/net/if.h"
struct ifnet {
 void *if_softc;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_list;
 struct { struct ifaddr *tqh_first; struct ifaddr **tqh_last; } if_addrlist;
 struct hook_desc_head *if_addrhooks;
 char if_xname[16];
 int if_pcount;
 caddr_t if_bpf;
 caddr_t if_bridge;
 caddr_t if_carp;
 u_short if_index;
 short if_timer;
 short if_flags;
 struct if_data if_data;
 int if_capabilities;



 int (*if_output)(struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);

 void (*if_start)(struct ifnet *);

 int (*if_ioctl)(struct ifnet *, u_long, caddr_t);

 int (*if_init)(struct ifnet *);

 int (*if_reset)(struct ifnet *);

 void (*if_watchdog)(struct ifnet *);
 struct ifaltq if_snd;
 struct sockaddr_dl *if_sadl;

 void *if_afdata[32];
};
# 317 "openbsd3/net/if.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_list;

 void (*ifa_rtrequest)(int, struct rtentry *, struct rt_addrinfo *);
 u_int ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
};






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





struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_index;
 char ifan_name[16];
 u_short ifan_what;
};
# 382 "openbsd3/net/if.h"
struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags;
  int ifru_metric;
  caddr_t ifru_data;
 } ifr_ifru;
# 400 "openbsd3/net/if.h"
};

struct ifaliasreq {
 char ifra_name[16];
 struct sockaddr ifra_addr;
 struct sockaddr ifra_dstaddr;

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







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};




struct if_laddrreq {
 char iflr_name[16];
 unsigned int flags;

 unsigned int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};

struct if_nameindex {
 unsigned int if_index;
 char *if_name;
};
# 463 "openbsd3/net/if.h"
# 1 "openbsd3/net/if_arp.h" 1
# 47 "openbsd3/net/if_arp.h"
struct arphdr {
 u_int16_t ar_hrd;




 u_int16_t ar_pro;
 u_int8_t ar_hln;
 u_int8_t ar_pln;
 u_int16_t ar_op;
# 73 "openbsd3/net/if_arp.h"
};




struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 464 "openbsd3/net/if.h" 2
# 570 "openbsd3/net/if.h"
typedef  struct ifnet_head   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_100_T; extern  _GLOBAL_100_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_if_indexlim[NUM_STACKS];   

void ether_ifattach(struct ifnet *);
void ether_ifdetach(struct ifnet *);
int ether_ioctl(struct ifnet *, struct arpcom *, u_long, caddr_t);
void ether_input_mbuf(struct ifnet *, struct mbuf *);
void ether_input(struct ifnet *, struct ether_header *, struct mbuf *);
int ether_output(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
char *ether_sprintf(u_char *);

void if_alloc_sadl(struct ifnet *);
void if_free_sadl(struct ifnet *);
void if_attach(struct ifnet *);
void if_attachdomain(void);
void if_attachtail(struct ifnet *);
void if_attachhead(struct ifnet *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_qflush(struct ifqueue *);
void if_slowtimo(void *);
void if_up(struct ifnet *);
int ifconf(u_long, caddr_t);
void ifinit(void);
int ifioctl(struct socket *, u_long, caddr_t, struct proc *);
int ifpromisc(struct ifnet *, int);
struct ifnet *ifunit(const char *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithaf(int);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithnet(struct sockaddr *);
struct ifaddr *ifa_ifwithroute(int, struct sockaddr *,
     struct sockaddr *);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);
void ifafree(struct ifaddr *);
void link_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

void if_clone_attach(struct if_clone *);
void if_clone_detach(struct if_clone *);

int if_clone_create(const char *);
int if_clone_destroy(const char *);

int loioctl(struct ifnet *, u_long, caddr_t);
void loopattach(int);
int looutput(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
void lortrequest(int, struct rtentry *, struct rt_addrinfo *);
# 104 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/net/route.h" 1
# 52 "openbsd3/net/route.h"
struct route {
 struct rtentry *ro_rt;
 struct sockaddr ro_dst;
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
};
# 91 "openbsd3/net/route.h"
# 1 "openbsd3/net/radix.h" 1
# 42 "openbsd3/net/radix.h"
struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_p;
 short rn_b;
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
# 81 "openbsd3/net/radix.h"
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_103_T; extern  _GLOBAL_103_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
# 105 "openbsd3/net/radix.h"
struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;

 struct radix_node *(*rnh_addaddr)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_addpkt)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_deladdr)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_delpkt)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchaddr)(void *v,
      struct radix_node_head *head);

 struct radix_node *(*rnh_lookup)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchpkt)(void *v,
      struct radix_node_head *head);

 int (*rnh_walktree)(struct radix_node_head *,
       int (*)(struct radix_node *, void *), void *);
 struct radix_node rnh_nodes[3];
};
# 152 "openbsd3/net/radix.h"
void rn_init(void);
int rn_inithead(void **, int);
int rn_refines(void *, void *);
int rn_walktree(struct radix_node_head *,
     int (*)(struct radix_node *, void *), void *);
struct radix_node
  *rn_addmask(void *, int, int),
  *rn_addroute(void *, void *, struct radix_node_head *,
   struct radix_node [2]),
  *rn_delete(void *, void *, struct radix_node_head *),
  *rn_insert(void *, struct radix_node_head *, int *,
   struct radix_node [2]),
  *rn_lookup(void *, void *, struct radix_node_head *),
  *rn_match(void *, struct radix_node_head *),
  *rn_newpair(void *, int, struct radix_node[2]),
  *rn_search(void *, struct radix_node *),
  *rn_search_m(void *, struct radix_node *, void *);
# 92 "openbsd3/net/route.h" 2

struct rtentry {
 struct radix_node rt_nodes[2];


 struct sockaddr *rt_gateway;
 u_int rt_flags;
 int rt_refcnt;
 u_long rt_use;
 struct ifnet *rt_ifp;
 struct ifaddr *rt_ifa;
 struct sockaddr *rt_genmask;
 caddr_t rt_llinfo;
 struct rt_metrics rt_rmx;
 struct rtentry *rt_gwroute;
 struct rtentry *rt_parent;
 struct { struct rttimer *lh_first; } rt_timer;
};






struct ortentry {
 u_int32_t rt_hash;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 int16_t rt_flags;
 int16_t rt_refcnt;
 u_int32_t rt_ouse;
 struct ifnet *rt_ifp;
};
# 152 "openbsd3/net/route.h"
struct rtstat {
 u_int32_t rts_badredirect;
 u_int32_t rts_dynamic;
 u_int32_t rts_newgateway;
 u_int32_t rts_unreach;
 u_int32_t rts_wildcard;
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
# 230 "openbsd3/net/route.h"
struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[8];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct ifnet *rti_ifp;
 struct rt_msghdr *rti_rtm;
};

struct route_cb {
 int ip_count;
 int ip6_count;
 int ns_count;
 int iso_count;
 int any_count;
};







struct rttimer {
 struct { struct rttimer *tqe_next; struct rttimer **tqe_prev; } rtt_next;
 struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link;
 struct rttimer_queue *rtt_queue;
 struct rtentry *rtt_rt;
 void (*rtt_func)(struct rtentry *,
       struct rttimer *);
 time_t rtt_time;
};

struct rttimer_queue {
 long rtq_timeout;
 unsigned long rtq_count;
 struct { struct rttimer *tqh_first; struct rttimer **tqh_last; } rtq_head;
 struct { struct rttimer_queue *le_next; struct rttimer_queue **le_prev; } rtq_link;
};
# 285 "openbsd3/net/route.h"
typedef  struct route_cb   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_106_T; extern  _GLOBAL_106_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_106_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_23_A[NUM_STACKS];   

struct socket;
void route_init(void);
int route_output(struct mbuf *, ...);
int route_usrreq(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);
void rt_ifmsg(struct ifnet *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_maskedcopy(struct sockaddr *,
     struct sockaddr *, struct sockaddr *);
void rt_missmsg(int, struct rt_addrinfo *, int, int);
void rt_newaddrmsg(int, struct ifaddr *, int, struct rtentry *);
int rt_setgate(struct rtentry *, struct sockaddr *,
    struct sockaddr *);
void rt_setmetrics(u_long, struct rt_metrics *, struct rt_metrics *);
int rt_timer_add(struct rtentry *,
             void(*)(struct rtentry *, struct rttimer *),
      struct rttimer_queue *);
void rt_timer_init(void);
struct rttimer_queue *
  rt_timer_queue_create(u_int);
void rt_timer_queue_change(struct rttimer_queue *, long);
void rt_timer_queue_destroy(struct rttimer_queue *, int);
void rt_timer_remove_all(struct rtentry *);
unsigned long rt_timer_count(struct rttimer_queue *);
void rt_timer_timer(void *);
void rtable_init(void **);
void rtalloc(struct route *);
struct rtentry *
  rtalloc1(struct sockaddr *, int);
void rtalloc_noclone(struct route *, int);
struct rtentry *
  rtalloc2(struct sockaddr *, int, int);
void rtfree(struct rtentry *);
int rt_getifa(struct rt_addrinfo *);
int rtinit(struct ifaddr *, int, int);
int rtioctl(u_long, caddr_t, struct proc *);
void rtredirect(struct sockaddr *, struct sockaddr *,
    struct sockaddr *, int, struct sockaddr *,
    struct rtentry **);
int rtrequest(int, struct sockaddr *,
   struct sockaddr *, struct sockaddr *, int,
   struct rtentry **);
int rtrequest1(int, struct rt_addrinfo *, struct rtentry **);
# 105 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/net/raw_cb.h" 1
# 42 "openbsd3/net/raw_cb.h"
struct rawcb {
 struct { struct rawcb *le_next; struct rawcb **le_prev; } rcb_list;
 struct socket *rcb_socket;
 struct sockaddr *rcb_faddr;
 struct sockaddr *rcb_laddr;
 struct sockproto rcb_proto;
};
# 59 "openbsd3/net/raw_cb.h"
typedef  struct rawcbhead { struct rawcb   * lh_first  ;  }   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_rawcb[NUM_STACKS];         

int raw_attach(struct socket *, int);
void *raw_ctlinput(int, struct sockaddr *, void *);
void raw_detach(struct rawcb *);
void raw_disconnect(struct rawcb *);
void raw_init(void);
void raw_input(struct mbuf *, ...);
int raw_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 106 "openbsd3/netinet6/ip6_mroute.c" 2

# 1 "openbsd3/netinet/in.h" 1
# 135 "openbsd3/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};
# 212 "openbsd3/netinet/in.h"
struct sockaddr_in {
 u_int8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 int8_t sin_zero[8];
};
# 227 "openbsd3/netinet/in.h"
struct ip_opts {
 struct in_addr ip_dst;



 int8_t ip_opts[40];

};
# 295 "openbsd3/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 542 "openbsd3/netinet/in.h"
# 1 "openbsd3/netinet6/in6.h" 1
# 116 "openbsd3/netinet6/in6.h"
struct in6_addr {
 union {
  u_int8_t __u6_addr8[16];
  u_int16_t __u6_addr16[8];
  u_int32_t __u6_addr32[4];
 } __u6_addr;
};
# 139 "openbsd3/netinet6/in6.h"
struct sockaddr_in6 {
 u_int8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 u_int32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 u_int32_t sin6_scope_id;
};
# 164 "openbsd3/netinet6/in6.h"
typedef  const struct sockaddr_in6    _GLOBAL_108_T; extern  _GLOBAL_108_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_109_T; extern  _GLOBAL_109_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_110_T; extern  _GLOBAL_110_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_111_T; extern  _GLOBAL_111_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_112_T; extern  _GLOBAL_112_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_113_T; extern  _GLOBAL_113_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_114_T; extern  _GLOBAL_114_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_115_T; extern  _GLOBAL_115_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_116_T; extern  _GLOBAL_116_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_117_T; extern  _GLOBAL_117_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_118_T; extern  _GLOBAL_118_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
# 370 "openbsd3/netinet6/in6.h"
struct route_in6 {
 struct rtentry *ro_rt;
 struct sockaddr_in6 ro_dst;
};
# 432 "openbsd3/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};
# 639 "openbsd3/netinet6/in6.h"
struct cmsghdr;

int in6_cksum(struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
int in6_localaddr(struct in6_addr *);
int in6_addrscope(struct in6_addr *);
struct in6_ifaddr *in6_ifawithscope(struct ifnet *, struct in6_addr *);
struct in6_ifaddr *in6_ifawithifp(struct ifnet *, struct in6_addr *);
extern void in6_if_up(struct ifnet *);







struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const u_int8_t *,
 int, int);
extern u_int8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, u_int8_t **);
extern int inet6_option_find(const struct cmsghdr *, u_int8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
  unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

# 543 "openbsd3/netinet/in.h" 2
# 568 "openbsd3/netinet/in.h"
static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_phdr(u_int32_t src, u_int32_t dst, u_int32_t lenproto)
{
 u_int32_t sum;

 sum = lenproto +
       (u_int16_t)(src >> 16) +
       (u_int16_t)(src ) +
       (u_int16_t)(dst >> 16) +
       (u_int16_t)(dst );

 sum = (u_int16_t)(sum >> 16) + (u_int16_t)(sum );

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}






static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_addword(u_int16_t a, u_int16_t b)
{
 u_int32_t sum = a + b;

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}

int in_broadcast(struct in_addr, struct ifnet *);
int in_canforward(struct in_addr);
int in_cksum(struct mbuf *, int);
int in4_cksum(struct mbuf *, u_int8_t, int, int);
void in_delayed_cksum(struct mbuf *);
int in_localaddr(struct in_addr);
void in_socktrim(struct sockaddr_in *);
char *inet_ntoa(struct in_addr);
# 108 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet/in_var.h" 1
# 46 "openbsd3/netinet/in_var.h"
struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_int32_t ia_net;
 u_int32_t ia_netmask;
 u_int32_t ia_subnet;
 u_int32_t ia_subnetmask;
 struct in_addr ia_netbroadcast;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_list;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
 struct { struct in_multi *lh_first; } ia_multiaddrs;
};

struct in_aliasreq {
 char ifra_name[16];
 struct sockaddr_in ifra_addr;
 struct sockaddr_in ifra_dstaddr;

 struct sockaddr_in ifra_mask;
};
# 79 "openbsd3/netinet/in_var.h"
struct in_ifaddrhead { struct in_ifaddr *tqh_first; struct in_ifaddr **tqh_last; };
typedef  struct in_ifaddrhead   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_24_A[NUM_STACKS];  
void in_socktrim(struct sockaddr_in *);
# 121 "openbsd3/netinet/in_var.h"
struct router_info {
 struct ifnet *rti_ifp;
 int rti_type;
 int rti_age;
 struct router_info *rti_next;
};







struct in_multi {
 struct in_addr inm_addr;
 struct ifnet *inm_ifp;
 struct in_ifaddr *inm_ia;
 u_int inm_refcount;
 u_int inm_timer;
 struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_list;
 u_int inm_state;
 struct router_info *inm_rti;
};






struct in_multistep {
 struct in_ifaddr *i_ia;
 struct in_multi *i_inm;
};
# 209 "openbsd3/netinet/in_var.h"
int in_ifinit(struct ifnet *,
     struct in_ifaddr *, struct sockaddr_in *, int);
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *);




# 1 "openbsd3/netinet6/in6_var.h" 1
# 82 "openbsd3/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};

struct nd_ifinfo;
struct in6_ifextra {
 struct in6_ifstat *in6_ifstat;
 struct icmp6_ifstat *icmp6_ifstat;
 struct nd_ifinfo *nd_ifinfo;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;


 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_net;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 u_int32_t ia_plen;
 struct in6_ifaddr *ia_next;
 struct in6_multihead { struct in6_multi *lh_first; } ia6_multiaddrs;

 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 time_t ia6_createtime;


 time_t ia6_updatetime;


 struct nd_prefix *ia6_ndpr;


 struct { struct in6_multi_mship *lh_first; } ia6_memberships;
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
  short ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 struct sockaddr_in6 ifra_addr;
 struct sockaddr_in6 ifra_dstaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 274 "openbsd3/netinet6/in6_var.h"
struct prf_ra {
 u_char onlink : 1;
 u_char autonomous : 1;
 u_char router : 1;
 u_char reserved : 5;
};

struct in6_prflags {
 struct prf_ra prf_ra;
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
# 318 "openbsd3/netinet6/in6_var.h"
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
# 449 "openbsd3/netinet6/in6_var.h"
typedef  struct in6_ifaddr   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_25_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_26_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_in6_maxmtu[NUM_STACKS];    
# 486 "openbsd3/netinet6/in6_var.h"
struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct { struct in6_multi *le_next; struct in6_multi **le_prev; } in6m_entry;
 struct in6_addr in6m_addr;
 struct ifnet *in6m_ifp;
 struct in6_ifaddr *in6m_ia;
 u_int in6m_refcount;
 u_int in6m_state;
 u_int in6m_timer;
};






struct in6_multistep {
 struct in6_ifaddr *i_ia;
 struct in6_multi *i_in6m;
};
# 568 "openbsd3/netinet6/in6_var.h"
struct in6_multi *in6_addmulti(struct in6_addr *, struct ifnet *, int *);
void in6_delmulti(struct in6_multi *);
struct in6_multi_mship *in6_joingroup(struct ifnet *, struct in6_addr *, int *);
int in6_leavegroup(struct in6_multi_mship *);
int in6_ifindex2scopeid(int);
int in6_mask2len(struct in6_addr *, u_char *);
int in6_control(struct socket *, u_long, caddr_t, struct ifnet *,
 struct proc *);
int in6_update_ifa(struct ifnet *, struct in6_aliasreq *,
 struct in6_ifaddr *);
void in6_purgeaddr(struct ifaddr *);
int in6if_do_dad(struct ifnet *);
void in6_purgeif(struct ifnet *);
void in6_savemkludge(struct in6_ifaddr *);
void in6_setmaxmtu(void);
void *in6_domifattach(struct ifnet *);
void in6_domifdetach(struct ifnet *, void *);
void in6_restoremkludge(struct in6_ifaddr *, struct ifnet *);
void in6_createmkludge(struct ifnet *);
void in6_purgemkludge(struct ifnet *);
struct in6_ifaddr *in6ifa_ifpforlinklocal(struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr(struct ifnet *, struct in6_addr *);
char *ip6_sprintf(struct in6_addr *);
int in6_addr2scopeid(struct ifnet *, struct in6_addr *);
int in6_matchlen(struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal(struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask(struct in6_addr *, int);
void in6_purgeprefix(struct ifnet *);
void in6_ifaddloop(struct ifaddr *);
void in6_ifremloop(struct ifaddr *);

int in6_is_addr_deprecated(struct sockaddr_in6 *);
struct inpcb;
int in6_embedscope(struct in6_addr *, const struct sockaddr_in6 *,
 struct inpcb *, struct ifnet **);
int in6_recoverscope(struct sockaddr_in6 *, const struct in6_addr *,
 struct ifnet *);
void in6_clearscope(struct in6_addr *);
# 220 "openbsd3/netinet/in_var.h" 2
# 109 "openbsd3/netinet6/ip6_mroute.c" 2




# 1 "openbsd3/netinet/ip6.h" 1
# 72 "openbsd3/netinet/ip6.h"
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
# 115 "openbsd3/netinet/ip6.h"
struct ip6_hdr_pseudo {
 struct in6_addr ip6ph_src;
 struct in6_addr ip6ph_dst;
 u_int32_t ip6ph_len;
 u_int8_t ip6ph_zero[3];
 u_int8_t ip6ph_nxt;
} __attribute__((__packed__)) ;




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
# 171 "openbsd3/netinet/ip6.h"
struct ip6_opt {
 u_int8_t ip6o_type;
 u_int8_t ip6o_len;
} __attribute__((__packed__)) ;


struct ip6_opt_jumbo {
 u_int8_t ip6oj_type;
 u_int8_t ip6oj_len;
 u_int8_t ip6oj_jumbo_len[4];
} __attribute__((__packed__)) ;



struct ip6_opt_nsap {
 u_int8_t ip6on_type;
 u_int8_t ip6on_len;
 u_int8_t ip6on_src_nsap_len;
 u_int8_t ip6on_dst_nsap_len;


} __attribute__((__packed__)) ;


struct ip6_opt_tunnel {
 u_int8_t ip6ot_type;
 u_int8_t ip6ot_len;
 u_int8_t ip6ot_encap_limit;
} __attribute__((__packed__)) ;


struct ip6_opt_router {
 u_int8_t ip6or_type;
 u_int8_t ip6or_len;
 u_int8_t ip6or_value[2];
} __attribute__((__packed__)) ;
# 221 "openbsd3/netinet/ip6.h"
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
# 114 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet6/ip6_var.h" 1
# 71 "openbsd3/netinet6/ip6_var.h"
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



struct ip6_pktopts {
 struct mbuf *ip6po_m;
 int ip6po_hlim;
 struct in6_pktinfo *ip6po_pktinfo;
 struct sockaddr *ip6po_nexthop;
 struct ip6_hbh *ip6po_hbh;
 struct ip6_dest *ip6po_dest1;
 struct ip6po_rhinfo ip6po_rhinfo;
 struct ip6_dest *ip6po_dest2;
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
};







typedef  struct ip6stat   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_ip6_sendredirect[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  const int   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ip6_v6only[NUM_STACKS];    

typedef  struct socket   _GLOBAL_137_T; extern  _GLOBAL_137_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ip6_dad_count[NUM_STACKS];   

typedef  u_int32_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ip6_flow_seq[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ip6_auto_linklocal[NUM_STACKS];   

struct in6pcb;
struct inpcb;

int icmp6_ctloutput(int, struct socket *, int, int, struct mbuf **);

void ip6_init(void);
void ip6intr(void);
void ip6_input(struct mbuf *);
void ip6_freemoptions(struct ip6_moptions *);
int ip6_unknown_opt(u_int8_t *, struct mbuf *, int);
u_int8_t *ip6_get_prevhdr(struct mbuf *, int);
int ip6_nexthdr(struct mbuf *, int, int, int *);
int ip6_lasthdr(struct mbuf *, int, int, int *);
int ip6_mforward(struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts(struct mbuf *, u_int8_t *, int, u_int32_t *,
     u_int32_t *);
void ip6_savecontrol(struct inpcb *, struct mbuf **, struct ip6_hdr *,
  struct mbuf *);
int ip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward(struct mbuf *, int);

void ip6_mloopback(struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output(struct mbuf *, struct ip6_pktopts *,
   struct route_in6 *, int,
   struct ip6_moptions *, struct ifnet **);
int ip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_raw_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_setpktoptions(struct mbuf *, struct ip6_pktopts *, int);
int ip6_optlen(struct inpcb *);

int route6_input(struct mbuf **, int *, int);

void frag6_init(void);
int frag6_input(struct mbuf **, int *, int);
void frag6_slowtimo(void);
void frag6_drain(void);

void rip6_init(void);
int rip6_input(struct mbuf **mp, int *offp, int proto);
void rip6_ctlinput(int, struct sockaddr *, void *);
int rip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int rip6_output(struct mbuf *, ...);
int rip6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);

int dest6_input(struct mbuf **, int *, int);
int none_input(struct mbuf **, int *, int);

struct in6_addr *in6_selectsrc(struct sockaddr_in6 *, struct ip6_pktopts *,
 struct ip6_moptions *, struct route_in6 *, struct in6_addr *, int *);

u_int32_t ip6_randomid(void);
u_int32_t ip6_randomflowlabel(void);
# 115 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet6/ip6_mroute.h" 1
# 75 "openbsd3/netinet6/ip6_mroute.h"
typedef u_short mifi_t;






typedef u_int32_t if_mask;






typedef struct if_set {
 if_mask ifs_bits[(((256) + (((sizeof(if_mask) * 8)) - 1)) / ((sizeof(if_mask) * 8)))];
} if_set;
# 102 "openbsd3/netinet6/ip6_mroute.h"
struct mif6ctl {
 mifi_t mif6c_mifi;
 u_char mif6c_flags;
 u_short mif6c_pifi;



};






struct mf6cctl {
 struct sockaddr_in6 mf6cc_origin;
 struct sockaddr_in6 mf6cc_mcastgrp;
 mifi_t mf6cc_parent;
 struct if_set mf6cc_ifset;
};




struct mrt6stat {
 u_quad_t mrt6s_mfc_lookups;
 u_quad_t mrt6s_mfc_misses;
 u_quad_t mrt6s_upcalls;
 u_quad_t mrt6s_no_route;
 u_quad_t mrt6s_bad_tunnel;
 u_quad_t mrt6s_cant_tunnel;
 u_quad_t mrt6s_wrong_if;
 u_quad_t mrt6s_upq_ovflw;
 u_quad_t mrt6s_cache_cleanups;
 u_quad_t mrt6s_drop_sel;
 u_quad_t mrt6s_q_overflow;
 u_quad_t mrt6s_pkt2large;
 u_quad_t mrt6s_upq_sockfull;
};







struct omrt6msg {
 u_long unused1;
 u_char im6_msgtype;





 u_char im6_mbz;
 u_char im6_mif;
 u_char unused2;
 struct in6_addr im6_src, im6_dst;
};
# 171 "openbsd3/netinet6/ip6_mroute.h"
struct mrt6msg {



 u_char im6_mbz;
 u_char im6_msgtype;
 u_int16_t im6_mif;
 u_int32_t im6_pad;
 struct in6_addr im6_src, im6_dst;
};





struct sioc_sg_req6 {
 struct sockaddr_in6 src;
 struct sockaddr_in6 grp;
 u_quad_t pktcnt;
 u_quad_t bytecnt;
 u_quad_t wrong_if;
};




struct sioc_mif_req6 {
 mifi_t mifi;
 u_quad_t icount;
 u_quad_t ocount;
 u_quad_t ibytes;
 u_quad_t obytes;
};





struct mif6 {
        u_char m6_flags;
 u_int m6_rate_limit;



 struct in6_addr m6_lcl_addr;
 struct ifnet *m6_ifp;
 u_quad_t m6_pkt_in;
 u_quad_t m6_pkt_out;
 u_quad_t m6_bytes_in;
 u_quad_t m6_bytes_out;
 struct route_in6 m6_route;




};




struct mf6c {
 struct sockaddr_in6 mf6c_origin;
 struct sockaddr_in6 mf6c_mcastgrp;
 mifi_t mf6c_parent;
 struct if_set mf6c_ifset;

 u_quad_t mf6c_pkt_cnt;
 u_quad_t mf6c_byte_cnt;
 u_quad_t mf6c_wrong_if;
 int mf6c_expire;
 struct timeval mf6c_last_assert;
 struct rtdetq *mf6c_stall;
 struct mf6c *mf6c_next;
};







struct rtdetq {
    struct mbuf *m;
    struct ifnet *ifp;



    struct rtdetq *next;
};
# 271 "openbsd3/netinet6/ip6_mroute.h"
int ip6_mrouter_set(int, struct socket *, struct mbuf *);
int ip6_mrouter_get(int, struct socket *, struct mbuf **);
int ip6_mrouter_done(void);
void ip6_mrouter_detach(struct ifnet *);
int mrt6_ioctl(int, caddr_t);
# 116 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet6/pim6.h" 1
# 44 "openbsd3/netinet6/pim6.h"
struct pim {

 u_char pim_type:4,




  pim_ver:4;




 u_char pim_rsv;
 u_short pim_cksum;
};
# 117 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet6/pim6_var.h" 1
# 44 "openbsd3/netinet6/pim6_var.h"
struct pim6stat {
 u_quad_t pim6s_rcv_total;
 u_quad_t pim6s_rcv_tooshort;
 u_quad_t pim6s_rcv_badsum;
 u_quad_t pim6s_rcv_badversion;
 u_quad_t pim6s_rcv_registers;
 u_quad_t pim6s_rcv_badregisters;
 u_quad_t pim6s_snd_registers;
};


int pim6_input(struct mbuf **, int *, int);
# 118 "openbsd3/netinet6/ip6_mroute.c" 2
# 1 "openbsd3/netinet6/nd6.h" 1
# 44 "openbsd3/netinet6/nd6.h"
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

 long ln_ntick;
 struct timeout ln_timer_ch;
};
# 77 "openbsd3/netinet6/nd6.h"
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
# 106 "openbsd3/netinet6/nd6.h"
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
# 235 "openbsd3/netinet6/nd6.h"
struct nd_drhead { struct nd_defrouter *tqh_first; struct nd_defrouter **tqh_last; };
struct nd_defrouter {
 struct { struct nd_defrouter *tqe_next; struct nd_defrouter **tqe_prev; } dr_entry;
 struct in6_addr rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 struct ifnet *ifp;
 int installed;
};

struct nd_prefix {
 struct ifnet *ndpr_ifp;
 struct { struct nd_prefix *le_next; struct nd_prefix **le_prev; } ndpr_entry;
 struct sockaddr_in6 ndpr_prefix;
 struct in6_addr ndpr_mask;

 u_int32_t ndpr_vltime;
 u_int32_t ndpr_pltime;

 time_t ndpr_expire;
 time_t ndpr_preferred;
 time_t ndpr_lastupdate;

 struct prf_ra ndpr_flags;
 u_int32_t ndpr_stateflags;

 struct pr_rtrhead { struct nd_pfxrouter *lh_first; } ndpr_advrtrs;
 u_char ndpr_plen;
 int ndpr_refcnt;
};
# 278 "openbsd3/netinet6/nd6.h"
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
# 300 "openbsd3/netinet6/nd6.h"
struct nd_pfxrouter {
 struct { struct nd_pfxrouter *le_next; struct nd_pfxrouter **le_prev; } pfr_entry;

 struct nd_defrouter *router;
};

struct nd_prhead { struct nd_prefix *lh_first; };


typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_nd6_debug[NUM_STACKS];   



typedef  struct timeout   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_nd6_defifindex[NUM_STACKS];   

union nd_opts {
 struct nd_opt_hdr *nd_opt_array[9];
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
# 355 "openbsd3/netinet6/nd6.h"
void nd6_init(void);
struct nd_ifinfo *nd6_ifattach(struct ifnet *);
void nd6_ifdetach(struct nd_ifinfo *);
int nd6_is_addr_neighbor(struct sockaddr_in6 *, struct ifnet *);
void nd6_option_init(void *, int, union nd_opts *);
struct nd_opt_hdr *nd6_option(union nd_opts *);
int nd6_options(union nd_opts *);
struct rtentry *nd6_lookup(struct in6_addr *, int, struct ifnet *);
void nd6_setmtu(struct ifnet *);
void nd6_llinfo_settimer(struct llinfo_nd6 *, long);
void nd6_timer(void *);
void nd6_purge(struct ifnet *);
void nd6_nud_hint(struct rtentry *, struct in6_addr *, int);
int nd6_resolve(struct ifnet *, struct rtentry *,
 struct mbuf *, struct sockaddr *, u_char *);
void nd6_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
int nd6_ioctl(u_long, caddr_t, struct ifnet *);
struct rtentry *nd6_cache_lladdr(struct ifnet *, struct in6_addr *,
 char *, int, int, int);
int nd6_output(struct ifnet *, struct ifnet *, struct mbuf *,
 struct sockaddr_in6 *, struct rtentry *);
int nd6_storelladdr(struct ifnet *, struct rtentry *, struct mbuf *,
  struct sockaddr *, u_char *);
int nd6_sysctl(int, void *, size_t *, void *, size_t);
int nd6_need_cache(struct ifnet *);


void nd6_na_input(struct mbuf *, int, int);
void nd6_na_output(struct ifnet *, struct in6_addr *,
 struct in6_addr *, u_long, int, struct sockaddr *);
void nd6_ns_input(struct mbuf *, int, int);
void nd6_ns_output(struct ifnet *, struct in6_addr *,
 struct in6_addr *, struct llinfo_nd6 *, int);
caddr_t nd6_ifptomac(struct ifnet *);
void nd6_dad_start(struct ifaddr *, int *);
void nd6_dad_stop(struct ifaddr *);
void nd6_dad_duplicated(struct ifaddr *);


void nd6_rs_input(struct mbuf *, int, int);
void nd6_ra_input(struct mbuf *, int, int);
void prelist_del(struct nd_prefix *);
void defrouter_addreq(struct nd_defrouter *);
void defrouter_reset(void);
void defrouter_select(void);
void defrtrlist_del(struct nd_defrouter *);
void prelist_remove(struct nd_prefix *);
int prelist_update(struct nd_prefix *, struct nd_defrouter *, struct mbuf *);
int nd6_prelist_add(struct nd_prefix *, struct nd_defrouter *,
 struct nd_prefix **);
int nd6_prefix_onlink(struct nd_prefix *);
int nd6_prefix_offlink(struct nd_prefix *);
void pfxlist_onlink_check(void);
struct nd_defrouter *defrouter_lookup(struct in6_addr *, struct ifnet *);
struct nd_prefix *nd6_prefix_lookup(struct nd_prefix *);
int in6_ifdel(struct ifnet *, struct in6_addr *);
int in6_init_prefix_ltimes(struct nd_prefix *ndpr);
void rt6_flush(struct in6_addr *, struct ifnet *);
int nd6_setdefaultiface(int);
# 119 "openbsd3/netinet6/ip6_mroute.c" 2

static int ip6_mdq(struct mbuf *, struct ifnet *, struct mf6c *);
static void phyint_send(struct ip6_hdr *, struct mif6 *, struct mbuf *);

static int set_pim6(int *);
static int get_pim6(struct mbuf *);
static int socket_send(struct socket *, struct mbuf *,
       struct sockaddr_in6 *);
static int register_send(struct ip6_hdr *, struct mif6 *,
         struct mbuf *);





typedef  struct socket  _GLOBAL_165_T;  _GLOBAL_165_T  * global_ip6_mrouter[NUM_STACKS] = {  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  };     
typedef  int _GLOBAL_166_T;  _GLOBAL_166_T  global_ip6_mrouter_ver[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  int _GLOBAL_167_T;  _GLOBAL_167_T  global_ip6_mrtproto[NUM_STACKS] = {  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,  };    
typedef  struct mrt6stat  _GLOBAL_168_T;  _GLOBAL_168_T  global_mrt6stat[NUM_STACKS];   




typedef  struct mf6c  _GLOBAL_169_T;  _GLOBAL_169_T  * _GLOBAL_0_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_1_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_2_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_3_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_4_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_5_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_6_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_7_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_8_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_9_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_10_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_11_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_12_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_13_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_14_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_15_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_16_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_17_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_18_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_19_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_20_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_21_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_22_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_23_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_24_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_25_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_26_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_27_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_28_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_29_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_30_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_31_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_32_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_33_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_34_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_35_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_36_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_37_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_38_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_39_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_40_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_41_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_42_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_43_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_44_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_45_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_46_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_47_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_48_mf6ctable_I [ 256 ]  ;  _GLOBAL_169_T  * _GLOBAL_49_mf6ctable_I [ 256 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mf6ctable_I) *_GLOBAL_mf6ctable_27_A[NUM_STACKS] = { &_GLOBAL_0_mf6ctable_I, &_GLOBAL_1_mf6ctable_I, &_GLOBAL_2_mf6ctable_I, &_GLOBAL_3_mf6ctable_I, &_GLOBAL_4_mf6ctable_I, &_GLOBAL_5_mf6ctable_I, &_GLOBAL_6_mf6ctable_I, &_GLOBAL_7_mf6ctable_I, &_GLOBAL_8_mf6ctable_I, &_GLOBAL_9_mf6ctable_I, &_GLOBAL_10_mf6ctable_I, &_GLOBAL_11_mf6ctable_I, &_GLOBAL_12_mf6ctable_I, &_GLOBAL_13_mf6ctable_I, &_GLOBAL_14_mf6ctable_I, &_GLOBAL_15_mf6ctable_I, &_GLOBAL_16_mf6ctable_I, &_GLOBAL_17_mf6ctable_I, &_GLOBAL_18_mf6ctable_I, &_GLOBAL_19_mf6ctable_I, &_GLOBAL_20_mf6ctable_I, &_GLOBAL_21_mf6ctable_I, &_GLOBAL_22_mf6ctable_I, &_GLOBAL_23_mf6ctable_I, &_GLOBAL_24_mf6ctable_I, &_GLOBAL_25_mf6ctable_I, &_GLOBAL_26_mf6ctable_I, &_GLOBAL_27_mf6ctable_I, &_GLOBAL_28_mf6ctable_I, &_GLOBAL_29_mf6ctable_I, &_GLOBAL_30_mf6ctable_I, &_GLOBAL_31_mf6ctable_I, &_GLOBAL_32_mf6ctable_I, &_GLOBAL_33_mf6ctable_I, &_GLOBAL_34_mf6ctable_I, &_GLOBAL_35_mf6ctable_I, &_GLOBAL_36_mf6ctable_I, &_GLOBAL_37_mf6ctable_I, &_GLOBAL_38_mf6ctable_I, &_GLOBAL_39_mf6ctable_I, &_GLOBAL_40_mf6ctable_I, &_GLOBAL_41_mf6ctable_I, &_GLOBAL_42_mf6ctable_I, &_GLOBAL_43_mf6ctable_I, &_GLOBAL_44_mf6ctable_I, &_GLOBAL_45_mf6ctable_I, &_GLOBAL_46_mf6ctable_I, &_GLOBAL_47_mf6ctable_I, &_GLOBAL_48_mf6ctable_I, &_GLOBAL_49_mf6ctable_I, };  
typedef  u_char _GLOBAL_170_T;  _GLOBAL_170_T  _GLOBAL_0_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_1_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_2_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_3_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_4_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_5_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_6_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_7_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_8_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_9_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_10_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_11_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_12_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_13_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_14_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_15_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_16_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_17_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_18_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_19_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_20_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_21_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_22_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_23_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_24_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_25_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_26_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_27_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_28_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_29_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_30_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_31_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_32_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_33_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_34_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_35_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_36_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_37_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_38_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_39_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_40_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_41_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_42_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_43_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_44_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_45_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_46_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_47_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_48_n6expire_I [ 256 ] ;  _GLOBAL_170_T  _GLOBAL_49_n6expire_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_n6expire_I) *_GLOBAL_n6expire_28_A[NUM_STACKS] = { &_GLOBAL_0_n6expire_I, &_GLOBAL_1_n6expire_I, &_GLOBAL_2_n6expire_I, &_GLOBAL_3_n6expire_I, &_GLOBAL_4_n6expire_I, &_GLOBAL_5_n6expire_I, &_GLOBAL_6_n6expire_I, &_GLOBAL_7_n6expire_I, &_GLOBAL_8_n6expire_I, &_GLOBAL_9_n6expire_I, &_GLOBAL_10_n6expire_I, &_GLOBAL_11_n6expire_I, &_GLOBAL_12_n6expire_I, &_GLOBAL_13_n6expire_I, &_GLOBAL_14_n6expire_I, &_GLOBAL_15_n6expire_I, &_GLOBAL_16_n6expire_I, &_GLOBAL_17_n6expire_I, &_GLOBAL_18_n6expire_I, &_GLOBAL_19_n6expire_I, &_GLOBAL_20_n6expire_I, &_GLOBAL_21_n6expire_I, &_GLOBAL_22_n6expire_I, &_GLOBAL_23_n6expire_I, &_GLOBAL_24_n6expire_I, &_GLOBAL_25_n6expire_I, &_GLOBAL_26_n6expire_I, &_GLOBAL_27_n6expire_I, &_GLOBAL_28_n6expire_I, &_GLOBAL_29_n6expire_I, &_GLOBAL_30_n6expire_I, &_GLOBAL_31_n6expire_I, &_GLOBAL_32_n6expire_I, &_GLOBAL_33_n6expire_I, &_GLOBAL_34_n6expire_I, &_GLOBAL_35_n6expire_I, &_GLOBAL_36_n6expire_I, &_GLOBAL_37_n6expire_I, &_GLOBAL_38_n6expire_I, &_GLOBAL_39_n6expire_I, &_GLOBAL_40_n6expire_I, &_GLOBAL_41_n6expire_I, &_GLOBAL_42_n6expire_I, &_GLOBAL_43_n6expire_I, &_GLOBAL_44_n6expire_I, &_GLOBAL_45_n6expire_I, &_GLOBAL_46_n6expire_I, &_GLOBAL_47_n6expire_I, &_GLOBAL_48_n6expire_I, &_GLOBAL_49_n6expire_I, }; 
typedef  struct mif6  _GLOBAL_171_T;  _GLOBAL_171_T  _GLOBAL_0_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_1_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_2_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_3_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_4_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_5_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_6_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_7_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_8_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_9_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_10_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_11_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_12_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_13_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_14_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_15_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_16_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_17_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_18_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_19_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_20_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_21_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_22_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_23_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_24_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_25_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_26_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_27_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_28_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_29_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_30_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_31_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_32_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_33_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_34_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_35_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_36_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_37_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_38_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_39_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_40_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_41_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_42_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_43_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_44_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_45_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_46_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_47_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_48_mif6table_I [ 64 ] ;  _GLOBAL_171_T  _GLOBAL_49_mif6table_I [ 64 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mif6table_I) *_GLOBAL_mif6table_29_A[NUM_STACKS] = { &_GLOBAL_0_mif6table_I, &_GLOBAL_1_mif6table_I, &_GLOBAL_2_mif6table_I, &_GLOBAL_3_mif6table_I, &_GLOBAL_4_mif6table_I, &_GLOBAL_5_mif6table_I, &_GLOBAL_6_mif6table_I, &_GLOBAL_7_mif6table_I, &_GLOBAL_8_mif6table_I, &_GLOBAL_9_mif6table_I, &_GLOBAL_10_mif6table_I, &_GLOBAL_11_mif6table_I, &_GLOBAL_12_mif6table_I, &_GLOBAL_13_mif6table_I, &_GLOBAL_14_mif6table_I, &_GLOBAL_15_mif6table_I, &_GLOBAL_16_mif6table_I, &_GLOBAL_17_mif6table_I, &_GLOBAL_18_mif6table_I, &_GLOBAL_19_mif6table_I, &_GLOBAL_20_mif6table_I, &_GLOBAL_21_mif6table_I, &_GLOBAL_22_mif6table_I, &_GLOBAL_23_mif6table_I, &_GLOBAL_24_mif6table_I, &_GLOBAL_25_mif6table_I, &_GLOBAL_26_mif6table_I, &_GLOBAL_27_mif6table_I, &_GLOBAL_28_mif6table_I, &_GLOBAL_29_mif6table_I, &_GLOBAL_30_mif6table_I, &_GLOBAL_31_mif6table_I, &_GLOBAL_32_mif6table_I, &_GLOBAL_33_mif6table_I, &_GLOBAL_34_mif6table_I, &_GLOBAL_35_mif6table_I, &_GLOBAL_36_mif6table_I, &_GLOBAL_37_mif6table_I, &_GLOBAL_38_mif6table_I, &_GLOBAL_39_mif6table_I, &_GLOBAL_40_mif6table_I, &_GLOBAL_41_mif6table_I, &_GLOBAL_42_mif6table_I, &_GLOBAL_43_mif6table_I, &_GLOBAL_44_mif6table_I, &_GLOBAL_45_mif6table_I, &_GLOBAL_46_mif6table_I, &_GLOBAL_47_mif6table_I, &_GLOBAL_48_mif6table_I, &_GLOBAL_49_mif6table_I, };  
# 155 "openbsd3/netinet6/ip6_mroute.c"
static void expire_upcalls(void *);
# 173 "openbsd3/netinet6/ip6_mroute.c"
typedef  struct ifnet  _GLOBAL_172_T;  _GLOBAL_172_T  global_multicast_register_if[NUM_STACKS];   






typedef  mifi_t  _GLOBAL_173_T; static  _GLOBAL_173_T  global_nummifs[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  mifi_t  _GLOBAL_174_T; static  _GLOBAL_174_T  global_reg_mif_num[NUM_STACKS] = {  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  ( mifi_t ) - 1  ,  };     

typedef  struct pim6stat   _GLOBAL_175_T; static  _GLOBAL_175_T  global_pim6stat[NUM_STACKS];    
typedef  int  _GLOBAL_176_T; static  _GLOBAL_176_T  global_pim6[NUM_STACKS];   
# 248 "openbsd3/netinet6/ip6_mroute.c"
static int get_sg_cnt(struct sioc_sg_req6 *);
static int get_mif6_cnt(struct sioc_mif_req6 *);
static int ip6_mrouter_init(struct socket *, int, int);
static int add_m6if(struct mif6ctl *);
static int del_m6if(mifi_t *);
static int add_m6fc(struct mf6cctl *);
static int del_m6fc(struct mf6cctl *);

typedef  struct timeout   _GLOBAL_177_T; static  _GLOBAL_177_T  global_expire_upcalls_ch[NUM_STACKS];    




int
ip6_mrouter_set(cmd, so, m)
 int cmd;
 struct socket *so;
 struct mbuf *m;
{
 if (cmd != 108 && so != global_ip6_mrouter[get_stack_id()])
  return (13);

 switch (cmd) {

 case 100:

 case 108:
  if (m == 0L || m->m_hdr.mh_len < sizeof(int))
   return (22);
  return (ip6_mrouter_init(so, *((int *)((m)->m_hdr.mh_data)), cmd));
 case 101:
  return (ip6_mrouter_done());
 case 102:
  if (m == 0L || m->m_hdr.mh_len < sizeof(struct mif6ctl))
   return (22);
  return (add_m6if(((struct mif6ctl *)((m)->m_hdr.mh_data))));
 case 103:
  if (m == 0L || m->m_hdr.mh_len < sizeof(mifi_t))
   return (22);
  return (del_m6if(((mifi_t *)((m)->m_hdr.mh_data))));
 case 104:
  if (m == 0L || m->m_hdr.mh_len < sizeof(struct mf6cctl))
   return (22);
  return (add_m6fc(((struct mf6cctl *)((m)->m_hdr.mh_data))));
 case 105:
  if (m == 0L || m->m_hdr.mh_len < sizeof(struct mf6cctl))
   return (22);
  return (del_m6fc(((struct mf6cctl *)((m)->m_hdr.mh_data))));
 case 107:
  if (m == 0L || m->m_hdr.mh_len < sizeof(int))
   return (22);
  return (set_pim6(((int *)((m)->m_hdr.mh_data))));
 default:
  return (45);
 }
}




int
ip6_mrouter_get(cmd, so, m)
 int cmd;
 struct socket *so;
 struct mbuf **m;
{
 struct mbuf *mb;

 if (so != global_ip6_mrouter[get_stack_id()]) return 13;

 *m = mb = m_get(0x0000, 4);

 switch (cmd) {
 case 107:
  return get_pim6(mb);
 default:
  m_free(mb);
  return 45;
 }
}




int
mrt6_ioctl(cmd, data)
 int cmd;
 caddr_t data;
{

 switch (cmd) {
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct sioc_sg_req6) & 0x1fff) << 16) | ((('u')) << 8) | ((106))):
  return (get_sg_cnt((struct sioc_sg_req6 *)data));
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct sioc_mif_req6) & 0x1fff) << 16) | ((('u')) << 8) | ((107))):
  return (get_mif6_cnt((struct sioc_mif_req6 *)data));
 default:
  return (22);
 }
}




static int
get_sg_cnt(req)
 struct sioc_sg_req6 *req;
{
 struct mf6c *rt;
 int s;

 s = splraise((0x20 + ((1) << 4)));

 do { struct mf6c *_rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[(((req->src.sin6_addr).__u6_addr.__u6_addr32[0] ^ (req->src.sin6_addr).__u6_addr.__u6_addr32[1] ^ (req->src.sin6_addr).__u6_addr.__u6_addr32[2] ^ (req->src.sin6_addr).__u6_addr.__u6_addr32[3] ^ (req->grp.sin6_addr).__u6_addr.__u6_addr32[0] ^ (req->grp.sin6_addr).__u6_addr.__u6_addr32[1] ^ (req->grp.sin6_addr).__u6_addr.__u6_addr32[2] ^ (req->grp.sin6_addr).__u6_addr.__u6_addr32[3]) & (256 - 1))]; rt = 0L; global_mrt6stat[get_stack_id()].mrt6s_mfc_lookups++; while (_rt) { if ((bcmp(&(&_rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(req->src.sin6_addr))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (bcmp(&(&_rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(req->grp.sin6_addr))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (_rt->mf6c_stall == 0L)) { rt = _rt; break; } _rt = _rt->mf6c_next; } if (rt == 0L) { global_mrt6stat[get_stack_id()].mrt6s_mfc_misses++; } } while (0);
 splx(s);
 if (rt != 0L) {
  req->pktcnt = rt->mf6c_pkt_cnt;
  req->bytecnt = rt->mf6c_byte_cnt;
  req->wrong_if = rt->mf6c_wrong_if;
 } else
  return (3);




 return 0;
}




static int
get_mif6_cnt(req)
 struct sioc_mif_req6 *req;
{
 mifi_t mifi = req->mifi;

 if (mifi >= global_nummifs[get_stack_id()])
  return 22;

 req->icount = (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_pkt_in;
 req->ocount = (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_pkt_out;
 req->ibytes = (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_bytes_in;
 req->obytes = (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_bytes_out;

 return 0;
}




static int
get_pim6(m)
 struct mbuf *m;
{
 int *i;

 i = ((int *)((m)->m_hdr.mh_data));

 *i = global_pim6[get_stack_id()];

 return 0;
}

static int
set_pim6(i)
 int *i;
{
 if ((*i != 1) && (*i != 0))
  return 22;

 global_pim6[get_stack_id()] = *i;

 return 0;
}




static int
ip6_mrouter_init(so, v, cmd)
 struct socket *so;
 int v;
 int cmd;
{







 if (so->so_type != 3 ||
     so->so_proto->pr_protocol != 58)
  return (45);

 if (v != 1)
  return (42);

 if (global_ip6_mrouter[get_stack_id()] != 0L)
  return (48);

 global_ip6_mrouter[get_stack_id()] = so;
 global_ip6_mrouter_ver[get_stack_id()] = cmd;

 bzero((caddr_t)(*_GLOBAL_mf6ctable_27_A[get_stack_id()]), sizeof((*_GLOBAL_mf6ctable_27_A[get_stack_id()])));
 bzero((caddr_t)(*_GLOBAL_n6expire_28_A[get_stack_id()]), sizeof((*_GLOBAL_n6expire_28_A[get_stack_id()])));

 global_pim6[get_stack_id()] = 0;

 timeout_set(&global_expire_upcalls_ch[get_stack_id()], expire_upcalls, 0L);
 timeout_add(&global_expire_upcalls_ch[get_stack_id()], (global_hz[get_stack_id()] / 4));






 return 0;
}




int
ip6_mrouter_done()
{
 mifi_t mifi;
 int i;
 struct ifnet *ifp;
 struct in6_ifreq ifr;
 struct mf6c *rt;
 struct rtdetq *rte;
 int s;

 s = splraise((0x20 + ((1) << 4)));
# 499 "openbsd3/netinet6/ip6_mroute.c"
 {
  for (mifi = 0; mifi < global_nummifs[get_stack_id()]; mifi++) {
   if ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp &&
       !((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_flags & 0x1)) {
    ifr.ifr_ifru.ifru_addr.sin6_family = 24;
    ifr.ifr_ifru.ifru_addr.sin6_addr= global_in6addr_any[get_stack_id()];
    ifp = (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp;
    (*ifp->if_ioctl)(ifp, ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50))),
       (caddr_t)&ifr);
   }
  }
 }




 bzero((caddr_t)(*_GLOBAL_mif6table_29_A[get_stack_id()]), sizeof((*_GLOBAL_mif6table_29_A[get_stack_id()])));
 global_nummifs[get_stack_id()] = 0;

 global_pim6[get_stack_id()] = 0;

 timeout_del(&global_expire_upcalls_ch[get_stack_id()]);




 for (i = 0; i < 256; i++) {
  rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[i];
  while (rt) {
   struct mf6c *frt;

   for (rte = rt->mf6c_stall; rte != 0L; ) {
    struct rtdetq *n = rte->next;

    m_free(rte->m);
    free(rte, 56);
    rte = n;
   }
   frt = rt;
   rt = rt->mf6c_next;
   free(frt, 56);
  }
 }

 bzero((caddr_t)(*_GLOBAL_mf6ctable_27_A[get_stack_id()]), sizeof((*_GLOBAL_mf6ctable_27_A[get_stack_id()])));




 global_reg_mif_num[get_stack_id()] = -1;

 global_ip6_mrouter[get_stack_id()] = 0L;
 global_ip6_mrouter_ver[get_stack_id()] = 0;

 splx(s);






 return 0;
}

void
ip6_mrouter_detach(ifp)
 struct ifnet *ifp;
{
 struct rtdetq *rte;
 struct mf6c *mfc;
 mifi_t mifi;
 int i;




 for (mifi = 0; mifi < global_nummifs[get_stack_id()]; mifi++)
  if ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp == ifp)
   del_m6if(&mifi);




 for (i = 0; i < 256; i++) {
  if ((*_GLOBAL_n6expire_28_A[get_stack_id()])[i] == 0)
   continue;

  for (mfc = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[i]; mfc != 0L; mfc = mfc->mf6c_next) {
   for (rte = mfc->mf6c_stall; rte != 0L; rte = rte->next) {
    if (rte->ifp == ifp)
     rte->ifp = 0L;
   }
  }
 }
}

typedef  struct sockaddr_in6   _GLOBAL_178_T; static  _GLOBAL_178_T  global_sin6[NUM_STACKS] = {  { sizeof ( global_sin6[0] )   , 24  } ,  { sizeof ( global_sin6[1] )   , 24  } ,  { sizeof ( global_sin6[2] )   , 24  } ,  { sizeof ( global_sin6[3] )   , 24  } ,  { sizeof ( global_sin6[4] )   , 24  } ,  { sizeof ( global_sin6[5] )   , 24  } ,  { sizeof ( global_sin6[6] )   , 24  } ,  { sizeof ( global_sin6[7] )   , 24  } ,  { sizeof ( global_sin6[8] )   , 24  } ,  { sizeof ( global_sin6[9] )   , 24  } ,  { sizeof ( global_sin6[10] )   , 24  } ,  { sizeof ( global_sin6[11] )   , 24  } ,  { sizeof ( global_sin6[12] )   , 24  } ,  { sizeof ( global_sin6[13] )   , 24  } ,  { sizeof ( global_sin6[14] )   , 24  } ,  { sizeof ( global_sin6[15] )   , 24  } ,  { sizeof ( global_sin6[16] )   , 24  } ,  { sizeof ( global_sin6[17] )   , 24  } ,  { sizeof ( global_sin6[18] )   , 24  } ,  { sizeof ( global_sin6[19] )   , 24  } ,  { sizeof ( global_sin6[20] )   , 24  } ,  { sizeof ( global_sin6[21] )   , 24  } ,  { sizeof ( global_sin6[22] )   , 24  } ,  { sizeof ( global_sin6[23] )   , 24  } ,  { sizeof ( global_sin6[24] )   , 24  } ,  { sizeof ( global_sin6[25] )   , 24  } ,  { sizeof ( global_sin6[26] )   , 24  } ,  { sizeof ( global_sin6[27] )   , 24  } ,  { sizeof ( global_sin6[28] )   , 24  } ,  { sizeof ( global_sin6[29] )   , 24  } ,  { sizeof ( global_sin6[30] )   , 24  } ,  { sizeof ( global_sin6[31] )   , 24  } ,  { sizeof ( global_sin6[32] )   , 24  } ,  { sizeof ( global_sin6[33] )   , 24  } ,  { sizeof ( global_sin6[34] )   , 24  } ,  { sizeof ( global_sin6[35] )   , 24  } ,  { sizeof ( global_sin6[36] )   , 24  } ,  { sizeof ( global_sin6[37] )   , 24  } ,  { sizeof ( global_sin6[38] )   , 24  } ,  { sizeof ( global_sin6[39] )   , 24  } ,  { sizeof ( global_sin6[40] )   , 24  } ,  { sizeof ( global_sin6[41] )   , 24  } ,  { sizeof ( global_sin6[42] )   , 24  } ,  { sizeof ( global_sin6[43] )   , 24  } ,  { sizeof ( global_sin6[44] )   , 24  } ,  { sizeof ( global_sin6[45] )   , 24  } ,  { sizeof ( global_sin6[46] )   , 24  } ,  { sizeof ( global_sin6[47] )   , 24  } ,  { sizeof ( global_sin6[48] )   , 24  } ,  { sizeof ( global_sin6[49] )   , 24  } ,  };         




static int
add_m6if(mifcp)
 struct mif6ctl *mifcp;
{
 struct mif6 *mifp;
 struct ifnet *ifp;
 struct in6_ifreq ifr;
 int error, s;




 if (mifcp->mif6c_mifi >= 64)
  return 22;
 mifp = (*_GLOBAL_mif6table_29_A[get_stack_id()]) + mifcp->mif6c_mifi;
 if (mifp->m6_ifp)
  return 48;
 if (mifcp->mif6c_pifi == 0 || mifcp->mif6c_pifi >= global_if_indexlim[get_stack_id()])
  return 6;
 ifp = global_ifindex2ifnet[get_stack_id()][mifcp->mif6c_pifi];
 if (!ifp)
  return 6;

 if (mifcp->mif6c_flags & 0x1) {
  if (global_reg_mif_num[get_stack_id()] == (mifi_t)-1) {
   strlcpy(global_multicast_register_if[get_stack_id()].if_xname,
       "register_mif",
       sizeof global_multicast_register_if[get_stack_id()].if_xname);
   global_multicast_register_if[get_stack_id()].if_flags |= 0x8;
   global_multicast_register_if[get_stack_id()].if_index = mifcp->mif6c_mifi;
   global_reg_mif_num[get_stack_id()] = mifcp->mif6c_mifi;
  }

  ifp = &global_multicast_register_if[get_stack_id()];

 }
 else {

  if ((ifp->if_flags & 0x8000) == 0)
   return 45;

  s = splraise((0x20 + ((1) << 4)));





  ifr.ifr_ifru.ifru_addr.sin6_family = 24;
  ifr.ifr_ifru.ifru_addr.sin6_addr = global_in6addr_any[get_stack_id()];
  error = (*ifp->if_ioctl)(ifp, ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49))), (caddr_t)&ifr);

  splx(s);
  if (error)
   return error;
 }

 s = splraise((0x20 + ((1) << 4)));

 mifp->m6_flags = mifcp->mif6c_flags;
 mifp->m6_ifp = ifp;





 mifp->m6_pkt_in = 0;
 mifp->m6_pkt_out = 0;
 mifp->m6_bytes_in = 0;
 mifp->m6_bytes_out = 0;
 splx(s);


 if (global_nummifs[get_stack_id()] <= mifcp->mif6c_mifi)
  global_nummifs[get_stack_id()] = mifcp->mif6c_mifi + 1;
# 683 "openbsd3/netinet6/ip6_mroute.c"
 return 0;
}




static int
del_m6if(mifip)
 mifi_t *mifip;
{
 struct mif6 *mifp = (*_GLOBAL_mif6table_29_A[get_stack_id()]) + *mifip;
 mifi_t mifi;
 struct ifnet *ifp;
 struct in6_ifreq ifr;
 int s;

 if (*mifip >= global_nummifs[get_stack_id()])
  return 22;
 if (mifp->m6_ifp == 0L)
  return 22;

 s = splraise((0x20 + ((1) << 4)));

 if (!(mifp->m6_flags & 0x1)) {




  ifp = mifp->m6_ifp;

  ifr.ifr_ifru.ifru_addr.sin6_family = 24;
  ifr.ifr_ifru.ifru_addr.sin6_addr = global_in6addr_any[get_stack_id()];
  (*ifp->if_ioctl)(ifp, ((unsigned long)0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50))), (caddr_t)&ifr);
 }





 bzero((caddr_t)mifp, sizeof (*mifp));


 for (mifi = global_nummifs[get_stack_id()]; mifi > 0; mifi--)
  if ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi - 1].m6_ifp)
   break;
 global_nummifs[get_stack_id()] = mifi;

 splx(s);






 return 0;
}




static int
add_m6fc(mfccp)
 struct mf6cctl *mfccp;
{
 struct mf6c *rt;
 u_long hash;
 struct rtdetq *rte;
 u_short nstl;
 int s;

 do { struct mf6c *_rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[(((mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[0] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[1] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[2] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[3] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[0] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[1] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[2] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[3]) & (256 - 1))]; rt = 0L; global_mrt6stat[get_stack_id()].mrt6s_mfc_lookups++; while (_rt) { if ((bcmp(&(&_rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(mfccp->mf6cc_origin.sin6_addr))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (bcmp(&(&_rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(mfccp->mf6cc_mcastgrp.sin6_addr))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (_rt->mf6c_stall == 0L)) { rt = _rt; break; } _rt = _rt->mf6c_next; } if (rt == 0L) { global_mrt6stat[get_stack_id()].mrt6s_mfc_misses++; } } while (0)
                                       ;


 if (rt) {
# 766 "openbsd3/netinet6/ip6_mroute.c"
  s = splraise((0x20 + ((1) << 4)));

  rt->mf6c_parent = mfccp->mf6cc_parent;
  rt->mf6c_ifset = mfccp->mf6cc_ifset;
  splx(s);
  return 0;
 }




 s = splraise((0x20 + ((1) << 4)));

 hash = (((mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[0] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[1] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[2] ^ (mfccp->mf6cc_origin.sin6_addr).__u6_addr.__u6_addr32[3] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[0] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[1] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[2] ^ (mfccp->mf6cc_mcastgrp.sin6_addr).__u6_addr.__u6_addr32[3]) & (256 - 1))
                                   ;
 for (rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash], nstl = 0; rt; rt = rt->mf6c_next) {
  if ((bcmp(&(&rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&mfccp->mf6cc_origin.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                           &&
      (bcmp(&(&rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&mfccp->mf6cc_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                             &&
      (rt->mf6c_stall != 0L)) {

   if (nstl++)
    log(3,
        "add_m6fc: %s o %s g %s p %x dbx %p\n",
        "multiple kernel entries",
        ip6_sprintf(&mfccp->mf6cc_origin.sin6_addr),
        ip6_sprintf(&mfccp->mf6cc_mcastgrp.sin6_addr),
        mfccp->mf6cc_parent, rt->mf6c_stall);
# 805 "openbsd3/netinet6/ip6_mroute.c"
   rt->mf6c_origin = mfccp->mf6cc_origin;
   rt->mf6c_mcastgrp = mfccp->mf6cc_mcastgrp;
   rt->mf6c_parent = mfccp->mf6cc_parent;
   rt->mf6c_ifset = mfccp->mf6cc_ifset;

   rt->mf6c_pkt_cnt = 0;
   rt->mf6c_byte_cnt = 0;
   rt->mf6c_wrong_if = 0;

   rt->mf6c_expire = 0;
   (*_GLOBAL_n6expire_28_A[get_stack_id()])[hash]--;


   for (rte = rt->mf6c_stall; rte != 0L; ) {
    struct rtdetq *n = rte->next;
    if (rte->ifp) {
     ip6_mdq(rte->m, rte->ifp, rt);
    }
    m_freem(rte->m);



    free(rte, 56);
    rte = n;
   }
   rt->mf6c_stall = 0L;
  }
 }




 if (nstl == 0) {
# 848 "openbsd3/netinet6/ip6_mroute.c"
  for (rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash]; rt; rt = rt->mf6c_next) {

   if ((bcmp(&(&rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&mfccp->mf6cc_origin.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                           &&
       (bcmp(&(&rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&mfccp->mf6cc_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                             ) {

    rt->mf6c_origin = mfccp->mf6cc_origin;
    rt->mf6c_mcastgrp = mfccp->mf6cc_mcastgrp;
    rt->mf6c_parent = mfccp->mf6cc_parent;
    rt->mf6c_ifset = mfccp->mf6cc_ifset;

    rt->mf6c_pkt_cnt = 0;
    rt->mf6c_byte_cnt = 0;
    rt->mf6c_wrong_if = 0;

    if (rt->mf6c_expire)
     (*_GLOBAL_n6expire_28_A[get_stack_id()])[hash]--;
    rt->mf6c_expire = 0;
   }
  }
  if (rt == 0L) {

   rt = (struct mf6c *)malloc(sizeof(*rt), 56,
        0x0001);
   if (rt == 0L) {
    splx(s);
    return 55;
   }


   rt->mf6c_origin = mfccp->mf6cc_origin;
   rt->mf6c_mcastgrp = mfccp->mf6cc_mcastgrp;
   rt->mf6c_parent = mfccp->mf6cc_parent;
   rt->mf6c_ifset = mfccp->mf6cc_ifset;

   rt->mf6c_pkt_cnt = 0;
   rt->mf6c_byte_cnt = 0;
   rt->mf6c_wrong_if = 0;
   rt->mf6c_expire = 0;
   rt->mf6c_stall = 0L;


   rt->mf6c_next = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash];
   (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash] = rt;
  }
 }
 splx(s);
 return 0;
}
# 929 "openbsd3/netinet6/ip6_mroute.c"
static int
del_m6fc(mfccp)
 struct mf6cctl *mfccp;
{
 struct sockaddr_in6 origin;
 struct sockaddr_in6 mcastgrp;
 struct mf6c *rt;
 struct mf6c **nptr;
 u_long hash;
 int s;

 origin = mfccp->mf6cc_origin;
 mcastgrp = mfccp->mf6cc_mcastgrp;
 hash = (((origin.sin6_addr).__u6_addr.__u6_addr32[0] ^ (origin.sin6_addr).__u6_addr.__u6_addr32[1] ^ (origin.sin6_addr).__u6_addr.__u6_addr32[2] ^ (origin.sin6_addr).__u6_addr.__u6_addr32[3] ^ (mcastgrp.sin6_addr).__u6_addr.__u6_addr32[0] ^ (mcastgrp.sin6_addr).__u6_addr.__u6_addr32[1] ^ (mcastgrp.sin6_addr).__u6_addr.__u6_addr32[2] ^ (mcastgrp.sin6_addr).__u6_addr.__u6_addr32[3]) & (256 - 1));
# 951 "openbsd3/netinet6/ip6_mroute.c"
 s = splraise((0x20 + ((1) << 4)));

 nptr = &(*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash];
 while ((rt = *nptr) != 0L) {
  if ((bcmp(&(&origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                       &&
      (bcmp(&(&mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                         &&
      rt->mf6c_stall == 0L)
   break;

  nptr = &rt->mf6c_next;
 }
 if (rt == 0L) {
  splx(s);
  return 49;
 }

 *nptr = rt->mf6c_next;
 free(rt, 56);

 splx(s);

 return 0;
}

static int
socket_send(s, mm, src)
 struct socket *s;
 struct mbuf *mm;
 struct sockaddr_in6 *src;
{
 if (s) {
  if (sbappendaddr(&s->so_rcv,
     (struct sockaddr *)src,
     mm, (struct mbuf *)0) != 0) {
   { sowakeup((s), &(s)->so_rcv); if ((s)->so_upcall) (*((s)->so_upcall))((s), (s)->so_upcallarg, 0x0001); };
   return 0;
  }
 }
 m_freem(mm);
 return -1;
}
# 1006 "openbsd3/netinet6/ip6_mroute.c"
int
ip6_mforward(ip6, ifp, m)
 struct ip6_hdr *ip6;
 struct ifnet *ifp;
 struct mbuf *m;
{
 struct mf6c *rt;
 struct mif6 *mifp;
 struct mbuf *mm;
 int s;
 mifi_t mifi;
# 1029 "openbsd3/netinet6/ip6_mroute.c"
 if (ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim <= 1 || (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x01)) ||
     (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))
  return 0;
 ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim--;
# 1041 "openbsd3/netinet6/ip6_mroute.c"
 if (((*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[12]) == 0))) {
  global_ip6stat[get_stack_id()].ip6s_cantforward++;
  if (global_ip6_log_time[get_stack_id()] + global_ip6_log_interval[get_stack_id()] < time.tv_sec) {
   global_ip6_log_time[get_stack_id()] = time.tv_sec;
   log(7,
       "cannot forward "
       "from %s to %s nxt %d received on %s\n",
       ip6_sprintf(&ip6->ip6_src),
       ip6_sprintf(&ip6->ip6_dst),
       ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt,
       m->M_dat.MH.MH_pkthdr.rcvif->if_xname);
  }
  return 0;
 }




 s = splraise((0x20 + ((1) << 4)));
 do { struct mf6c *_rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[(((ip6->ip6_src).__u6_addr.__u6_addr32[0] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[1] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[2] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[3] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[0] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[1] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[2] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[3]) & (256 - 1))]; rt = 0L; global_mrt6stat[get_stack_id()].mrt6s_mfc_lookups++; while (_rt) { if ((bcmp(&(&_rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(ip6->ip6_src))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (bcmp(&(&_rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], &(&(ip6->ip6_dst))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) && (_rt->mf6c_stall == 0L)) { rt = _rt; break; } _rt = _rt->mf6c_next; } if (rt == 0L) { global_mrt6stat[get_stack_id()].mrt6s_mfc_misses++; } } while (0);


 if (rt) {
  splx(s);
  return (ip6_mdq(m, ifp, rt));
 } else {






  struct mbuf *mb0;
  struct rtdetq *rte;
  u_long hash;







  global_mrt6stat[get_stack_id()].mrt6s_no_route++;
# 1095 "openbsd3/netinet6/ip6_mroute.c"
  rte = (struct rtdetq *)malloc(sizeof(*rte), 56,
           0x0001);
  if (rte == 0L) {
   splx(s);
   return 55;
  }
  mb0 = m_copym((m), (0), (1000000000), 0x0001);




  if (mb0 &&
      ((((mb0)->m_hdr.mh_flags & 0x0001) != 0 && (((mb0)->m_hdr.mh_flags & 0x0008) == 0 || ((mb0)->M_dat.MH.MH_dat.MH_ext.ext_nextref != (mb0)))) || mb0->m_hdr.mh_len < sizeof(struct ip6_hdr)))
   mb0 = m_pullup(mb0, sizeof(struct ip6_hdr));
  if (mb0 == 0L) {
   free(rte, 56);
   splx(s);
   return 55;
  }


  hash = (((ip6->ip6_src).__u6_addr.__u6_addr32[0] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[1] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[2] ^ (ip6->ip6_src).__u6_addr.__u6_addr32[3] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[0] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[1] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[2] ^ (ip6->ip6_dst).__u6_addr.__u6_addr32[3]) & (256 - 1));
  for (rt = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash]; rt; rt = rt->mf6c_next) {
   if ((bcmp(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[0], &(&rt->mf6c_origin.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                        &&
       (bcmp(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0], &(&rt->mf6c_mcastgrp.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                          &&
       (rt->mf6c_stall != 0L))
    break;
  }

  if (rt == 0L) {
   struct mrt6msg *im;

   struct omrt6msg *oim;



   rt = (struct mf6c *)malloc(sizeof(*rt), 56,
        0x0001);
   if (rt == 0L) {
    free(rte, 56);
    m_freem(mb0);
    splx(s);
    return 55;
   }




   mm = m_copym((mb0), (0), (sizeof(struct ip6_hdr)), 0x0001);

   if (mm == 0L) {
    free(rte, 56);
    m_freem(mb0);
    free(rt, 56);
    splx(s);
    return 55;
   }




   global_sin6[get_stack_id()].sin6_addr = ip6->ip6_src;

   im = 0L;

   oim = 0L;

   switch (global_ip6_mrouter_ver[get_stack_id()]) {

   case 100:
    oim = ((struct omrt6msg *)((mm)->m_hdr.mh_data));
    oim->im6_msgtype = 1;
    oim->im6_mbz = 0;
    break;

   case 108:
    im = ((struct mrt6msg *)((mm)->m_hdr.mh_data));
    im->im6_msgtype = 1;
    im->im6_mbz = 0;
    break;
   default:
    free(rte, 56);
    m_freem(mb0);
    free(rt, 56);
    splx(s);
    return 22;
   }







   for (mifp = (*_GLOBAL_mif6table_29_A[get_stack_id()]), mifi = 0;
        mifi < global_nummifs[get_stack_id()] && mifp->m6_ifp != ifp;
        mifp++, mifi++)
    ;

   switch (global_ip6_mrouter_ver[get_stack_id()]) {

   case 100:
    oim->im6_mif = mifi;
    break;

   case 108:
    im->im6_mif = mifi;
    break;
   }

   if (socket_send(global_ip6_mrouter[get_stack_id()], mm, &global_sin6[get_stack_id()]) < 0) {
    log(4, "ip6_mforward: ip6_mrouter "
        "socket queue full\n");
    global_mrt6stat[get_stack_id()].mrt6s_upq_sockfull++;
    free(rte, 56);
    m_freem(mb0);
    free(rt, 56);
    splx(s);
    return 55;
   }

   global_mrt6stat[get_stack_id()].mrt6s_upcalls++;


   bzero(rt, sizeof(*rt));
   rt->mf6c_origin.sin6_family = 24;
   rt->mf6c_origin.sin6_len = sizeof(struct sockaddr_in6);
   rt->mf6c_origin.sin6_addr = ip6->ip6_src;
   rt->mf6c_mcastgrp.sin6_family = 24;
   rt->mf6c_mcastgrp.sin6_len = sizeof(struct sockaddr_in6);
   rt->mf6c_mcastgrp.sin6_addr = ip6->ip6_dst;
   rt->mf6c_expire = 6;
   (*_GLOBAL_n6expire_28_A[get_stack_id()])[hash]++;
   rt->mf6c_parent = ((mifi_t)-1);


   rt->mf6c_next = (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash];
   (*_GLOBAL_mf6ctable_27_A[get_stack_id()])[hash] = rt;

   rt->mf6c_stall = rte;
  } else {

   struct rtdetq **p;
   int npkts = 0;

   for (p = &rt->mf6c_stall; *p != 0L; p = &(*p)->next)
    if (++npkts > 4) {
     global_mrt6stat[get_stack_id()].mrt6s_upq_ovflw++;
     free(rte, 56);
     m_freem(mb0);
     splx(s);
     return 0;
    }


   *p = rte;
  }

  rte->next = 0L;
  rte->m = mb0;
  rte->ifp = ifp;




  splx(s);

  return 0;
 }
}





static void
expire_upcalls(unused)
 void *unused;
{
 struct rtdetq *rte;
 struct mf6c *mfc, **nptr;
 int i;
 int s;

 s = splraise((0x20 + ((1) << 4)));

 for (i = 0; i < 256; i++) {
  if ((*_GLOBAL_n6expire_28_A[get_stack_id()])[i] == 0)
   continue;
  nptr = &(*_GLOBAL_mf6ctable_27_A[get_stack_id()])[i];
  while ((mfc = *nptr) != 0L) {
   rte = mfc->mf6c_stall;





   if (rte != 0L &&
       mfc->mf6c_expire != 0 &&
       --mfc->mf6c_expire == 0) {
# 1307 "openbsd3/netinet6/ip6_mroute.c"
    do {
     struct rtdetq *n = rte->next;
     m_freem(rte->m);
     free(rte, 56);
     rte = n;
    } while (rte != 0L);
    global_mrt6stat[get_stack_id()].mrt6s_cache_cleanups++;
    (*_GLOBAL_n6expire_28_A[get_stack_id()])[i]--;

    *nptr = mfc->mf6c_next;
    free(mfc, 56);
   } else {
    nptr = &mfc->mf6c_next;
   }
  }
 }
 splx(s);
 timeout_set(&global_expire_upcalls_ch[get_stack_id()], expire_upcalls, 0L);
 timeout_add(&global_expire_upcalls_ch[get_stack_id()], (global_hz[get_stack_id()] / 4));
}




static int
ip6_mdq(m, ifp, rt)
 struct mbuf *m;
 struct ifnet *ifp;
 struct mf6c *rt;
{
 struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 mifi_t mifi, iif;
 struct mif6 *mifp;
 int plen = m->M_dat.MH.MH_pkthdr.len;
# 1359 "openbsd3/netinet6/ip6_mroute.c"
 mifi = rt->mf6c_parent;
 if ((mifi >= global_nummifs[get_stack_id()]) || ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp != ifp)) {
# 1370 "openbsd3/netinet6/ip6_mroute.c"
  global_mrt6stat[get_stack_id()].mrt6s_wrong_if++;
  rt->mf6c_wrong_if++;






  if (mifi < global_nummifs[get_stack_id()] && (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp)
   if (global_pim6[get_stack_id()] && (m->m_hdr.mh_flags & 0x0040) == 0) {





    typedef  struct sockaddr_in6   _GLOBAL_179_T; static  _GLOBAL_179_T  global_sin6[NUM_STACKS] = {  { sizeof ( global_sin6[0] )   , 24  } ,  { sizeof ( global_sin6[1] )   , 24  } ,  { sizeof ( global_sin6[2] )   , 24  } ,  { sizeof ( global_sin6[3] )   , 24  } ,  { sizeof ( global_sin6[4] )   , 24  } ,  { sizeof ( global_sin6[5] )   , 24  } ,  { sizeof ( global_sin6[6] )   , 24  } ,  { sizeof ( global_sin6[7] )   , 24  } ,  { sizeof ( global_sin6[8] )   , 24  } ,  { sizeof ( global_sin6[9] )   , 24  } ,  { sizeof ( global_sin6[10] )   , 24  } ,  { sizeof ( global_sin6[11] )   , 24  } ,  { sizeof ( global_sin6[12] )   , 24  } ,  { sizeof ( global_sin6[13] )   , 24  } ,  { sizeof ( global_sin6[14] )   , 24  } ,  { sizeof ( global_sin6[15] )   , 24  } ,  { sizeof ( global_sin6[16] )   , 24  } ,  { sizeof ( global_sin6[17] )   , 24  } ,  { sizeof ( global_sin6[18] )   , 24  } ,  { sizeof ( global_sin6[19] )   , 24  } ,  { sizeof ( global_sin6[20] )   , 24  } ,  { sizeof ( global_sin6[21] )   , 24  } ,  { sizeof ( global_sin6[22] )   , 24  } ,  { sizeof ( global_sin6[23] )   , 24  } ,  { sizeof ( global_sin6[24] )   , 24  } ,  { sizeof ( global_sin6[25] )   , 24  } ,  { sizeof ( global_sin6[26] )   , 24  } ,  { sizeof ( global_sin6[27] )   , 24  } ,  { sizeof ( global_sin6[28] )   , 24  } ,  { sizeof ( global_sin6[29] )   , 24  } ,  { sizeof ( global_sin6[30] )   , 24  } ,  { sizeof ( global_sin6[31] )   , 24  } ,  { sizeof ( global_sin6[32] )   , 24  } ,  { sizeof ( global_sin6[33] )   , 24  } ,  { sizeof ( global_sin6[34] )   , 24  } ,  { sizeof ( global_sin6[35] )   , 24  } ,  { sizeof ( global_sin6[36] )   , 24  } ,  { sizeof ( global_sin6[37] )   , 24  } ,  { sizeof ( global_sin6[38] )   , 24  } ,  { sizeof ( global_sin6[39] )   , 24  } ,  { sizeof ( global_sin6[40] )   , 24  } ,  { sizeof ( global_sin6[41] )   , 24  } ,  { sizeof ( global_sin6[42] )   , 24  } ,  { sizeof ( global_sin6[43] )   , 24  } ,  { sizeof ( global_sin6[44] )   , 24  } ,  { sizeof ( global_sin6[45] )   , 24  } ,  { sizeof ( global_sin6[46] )   , 24  } ,  { sizeof ( global_sin6[47] )   , 24  } ,  { sizeof ( global_sin6[48] )   , 24  } ,  { sizeof ( global_sin6[49] )   , 24  } ,  };     
       

    struct mbuf *mm;
    struct mrt6msg *im;

    struct omrt6msg *oim;


    mm = m_copym((m), (0), (sizeof(struct ip6_hdr)), 0x0001);
    if (mm &&
        ((((mm)->m_hdr.mh_flags & 0x0001) != 0 && (((mm)->m_hdr.mh_flags & 0x0008) == 0 || ((mm)->M_dat.MH.MH_dat.MH_ext.ext_nextref != (mm)))) ||
         mm->m_hdr.mh_len < sizeof(struct ip6_hdr)))
     mm = m_pullup(mm, sizeof(struct ip6_hdr));
    if (mm == 0L)
     return 55;


    oim = 0L;

    im = 0L;
    switch (global_ip6_mrouter_ver[get_stack_id()]) {

    case 100:
     oim = ((struct omrt6msg *)((mm)->m_hdr.mh_data));
     oim->im6_msgtype = 2;
     oim->im6_mbz = 0;
     break;

    case 108:
     im = ((struct mrt6msg *)((mm)->m_hdr.mh_data));
     im->im6_msgtype = 2;
     im->im6_mbz = 0;
     break;
    default:
     m_freem(mm);
     return 22;
    }

    for (mifp = (*_GLOBAL_mif6table_29_A[get_stack_id()]), iif = 0;
         iif < global_nummifs[get_stack_id()] && mifp &&
          mifp->m6_ifp != ifp;
         mifp++, iif++)
     ;

    switch (global_ip6_mrouter_ver[get_stack_id()]) {

    case 100:
     oim->im6_mif = iif;
     global_sin6[get_stack_id()].sin6_addr = oim->im6_src;
     break;

    case 108:
     im->im6_mif = iif;
     global_sin6[get_stack_id()].sin6_addr = im->im6_src;
     break;
    }

    global_mrt6stat[get_stack_id()].mrt6s_upcalls++;

    if (socket_send(global_ip6_mrouter[get_stack_id()], mm, &global_sin6[get_stack_id()]) < 0) {




     ++global_mrt6stat[get_stack_id()].mrt6s_upq_sockfull;
     return 55;
    }
   }
  return 0;
 }


 if (m->M_dat.MH.MH_pkthdr.rcvif == 0L) {

  (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_pkt_out++;
  (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_bytes_out += plen;
 } else {
  (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_pkt_in++;
  (*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_bytes_in += plen;
 }
 rt->mf6c_pkt_cnt++;
 rt->mf6c_byte_cnt += plen;





 for (mifp = (*_GLOBAL_mif6table_29_A[get_stack_id()]), mifi = 0; mifi < global_nummifs[get_stack_id()]; mifp++, mifi++)
  if (((&rt->mf6c_ifset)->ifs_bits[(mifi)/(sizeof(if_mask) * 8)] & (1 << ((mifi) % (sizeof(if_mask) * 8))))) {
   if ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp == 0L)
    continue;







   if (((*_GLOBAL_mif6table_29_A[get_stack_id()])[rt->mf6c_parent].m6_flags &
        0x1) == 0 &&
       ((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_flags & 0x1) == 0 &&
       (in6_addr2scopeid(ifp, &ip6->ip6_dst) !=
        in6_addr2scopeid((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp,
           &ip6->ip6_dst) ||
        in6_addr2scopeid(ifp, &ip6->ip6_src) !=
        in6_addr2scopeid((*_GLOBAL_mif6table_29_A[get_stack_id()])[mifi].m6_ifp,
           &ip6->ip6_src))) {
    global_ip6stat[get_stack_id()].ip6s_badscope++;
    continue;
   }

   mifp->m6_pkt_out++;
   mifp->m6_bytes_out += plen;
   do { if ((mifp)->m6_flags & 0x1) register_send((ip6), (mifp), (m)); else phyint_send((ip6), (mifp), (m)); } while (0);
  }
 return 0;
}

static void
phyint_send(ip6, mifp, m)
 struct ip6_hdr *ip6;
 struct mif6 *mifp;
 struct mbuf *m;
{
 struct mbuf *mb_copy;
 struct ifnet *ifp = mifp->m6_ifp;
 int error = 0;
 int s = splraise((0x20 + ((1) << 4)));
 typedef  struct route_in6   _GLOBAL_180_T; static  _GLOBAL_180_T  global_ro[NUM_STACKS];    
 struct in6_multi *in6m;
 struct sockaddr_in6 *dst6;
 u_long linkmtu;






 mb_copy = m_copym((m), (0), (1000000000), 0x0001);
 if (mb_copy &&
     ((((mb_copy)->m_hdr.mh_flags & 0x0001) != 0 && (((mb_copy)->m_hdr.mh_flags & 0x0008) == 0 || ((mb_copy)->M_dat.MH.MH_dat.MH_ext.ext_nextref != (mb_copy)))) || mb_copy->m_hdr.mh_len < sizeof(struct ip6_hdr)))
  mb_copy = m_pullup(mb_copy, sizeof(struct ip6_hdr));
 if (mb_copy == 0L) {
  splx(s);
  return;
 }

 mb_copy->m_hdr.mh_flags |= 0x0200;
# 1542 "openbsd3/netinet6/ip6_mroute.c"
 if (m->M_dat.MH.MH_pkthdr.rcvif == 0L) {
  struct ip6_moptions im6o;

  im6o.im6o_multicast_ifp = ifp;

  im6o.im6o_multicast_hlim = ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim;
  im6o.im6o_multicast_loop = 1;
  error = ip6_output(mb_copy, 0L, &global_ro[get_stack_id()],
       0x02, &im6o, 0L);






  splx(s);
  return;
 }





 dst6 = (struct sockaddr_in6 *)&global_ro[get_stack_id()].ro_dst;
 do { struct in6_ifaddr *ia; do { struct ifaddr *ifa; for (ifa = ((ifp))->if_addrlist.tqh_first; ifa; ifa = ifa->ifa_list.tqe_next) { if (!ifa->ifa_addr) continue; if (ifa->ifa_addr->sa_family == 24) break; } (ia) = (struct in6_ifaddr *)ifa; } while (0); if (ia == 0L) (in6m) = 0L; else for ((in6m) = ia->ia6_multiaddrs.lh_first; (in6m) != 0L && !(bcmp(&(&(in6m)->in6m_addr)->__u6_addr.__u6_addr8[0], &(&(ip6->ip6_dst))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0); (in6m) = in6m->in6m_entry.le_next) continue; } while (0);
 if (in6m != 0L) {
  dst6->sin6_len = sizeof(struct sockaddr_in6);
  dst6->sin6_family = 24;
  dst6->sin6_addr = ip6->ip6_dst;
  ip6_mloopback(ifp, m, (struct sockaddr_in6 *)&global_ro[get_stack_id()].ro_dst);
 }




 linkmtu = (((((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->linkmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->maxmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[24])->nd_ifinfo)->maxmtu : (ifp)->if_data.ifi_mtu));
 if (mb_copy->M_dat.MH.MH_pkthdr.len <= linkmtu || linkmtu < 1280) {
  dst6->sin6_len = sizeof(struct sockaddr_in6);
  dst6->sin6_family = 24;
  dst6->sin6_addr = ip6->ip6_dst;




  error = (*ifp->if_output)(ifp, mb_copy,
      (struct sockaddr *)&global_ro[get_stack_id()].ro_dst, 0L);





 } else {
# 1607 "openbsd3/netinet6/ip6_mroute.c"
  m_freem(mb_copy);

 }

 splx(s);
}

static int
register_send(ip6, mif, m)
 struct ip6_hdr *ip6;
 struct mif6 *mif;
 struct mbuf *m;
{
 struct mbuf *mm;
 int i, len = m->M_dat.MH.MH_pkthdr.len;
 typedef  struct sockaddr_in6   _GLOBAL_181_T; static  _GLOBAL_181_T  global_sin6[NUM_STACKS] = {  { sizeof ( global_sin6[0] )   , 24  } ,  { sizeof ( global_sin6[1] )   , 24  } ,  { sizeof ( global_sin6[2] )   , 24  } ,  { sizeof ( global_sin6[3] )   , 24  } ,  { sizeof ( global_sin6[4] )   , 24  } ,  { sizeof ( global_sin6[5] )   , 24  } ,  { sizeof ( global_sin6[6] )   , 24  } ,  { sizeof ( global_sin6[7] )   , 24  } ,  { sizeof ( global_sin6[8] )   , 24  } ,  { sizeof ( global_sin6[9] )   , 24  } ,  { sizeof ( global_sin6[10] )   , 24  } ,  { sizeof ( global_sin6[11] )   , 24  } ,  { sizeof ( global_sin6[12] )   , 24  } ,  { sizeof ( global_sin6[13] )   , 24  } ,  { sizeof ( global_sin6[14] )   , 24  } ,  { sizeof ( global_sin6[15] )   , 24  } ,  { sizeof ( global_sin6[16] )   , 24  } ,  { sizeof ( global_sin6[17] )   , 24  } ,  { sizeof ( global_sin6[18] )   , 24  } ,  { sizeof ( global_sin6[19] )   , 24  } ,  { sizeof ( global_sin6[20] )   , 24  } ,  { sizeof ( global_sin6[21] )   , 24  } ,  { sizeof ( global_sin6[22] )   , 24  } ,  { sizeof ( global_sin6[23] )   , 24  } ,  { sizeof ( global_sin6[24] )   , 24  } ,  { sizeof ( global_sin6[25] )   , 24  } ,  { sizeof ( global_sin6[26] )   , 24  } ,  { sizeof ( global_sin6[27] )   , 24  } ,  { sizeof ( global_sin6[28] )   , 24  } ,  { sizeof ( global_sin6[29] )   , 24  } ,  { sizeof ( global_sin6[30] )   , 24  } ,  { sizeof ( global_sin6[31] )   , 24  } ,  { sizeof ( global_sin6[32] )   , 24  } ,  { sizeof ( global_sin6[33] )   , 24  } ,  { sizeof ( global_sin6[34] )   , 24  } ,  { sizeof ( global_sin6[35] )   , 24  } ,  { sizeof ( global_sin6[36] )   , 24  } ,  { sizeof ( global_sin6[37] )   , 24  } ,  { sizeof ( global_sin6[38] )   , 24  } ,  { sizeof ( global_sin6[39] )   , 24  } ,  { sizeof ( global_sin6[40] )   , 24  } ,  { sizeof ( global_sin6[41] )   , 24  } ,  { sizeof ( global_sin6[42] )   , 24  } ,  { sizeof ( global_sin6[43] )   , 24  } ,  { sizeof ( global_sin6[44] )   , 24  } ,  { sizeof ( global_sin6[45] )   , 24  } ,  { sizeof ( global_sin6[46] )   , 24  } ,  { sizeof ( global_sin6[47] )   , 24  } ,  { sizeof ( global_sin6[48] )   , 24  } ,  { sizeof ( global_sin6[49] )   , 24  } ,  };         
 struct mrt6msg *im6;






 ++global_pim6stat[get_stack_id()].pim6s_snd_registers;


 do { { int ms = splraise((0x20 + ((6) << 4))); { (mm) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (mm) { (mm)->m_hdr.mh_type = (2); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[2]++; } splx(ms); } (mm)->m_hdr.mh_next = (struct mbuf *)0L; (mm)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (mm)->m_hdr.mh_data = (mm)->M_dat.MH.MH_dat.MH_databuf; (mm)->m_hdr.mh_flags = 0x0002; { ((&(mm)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (mm)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (mm == 0L)
  return 55;
 mm->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];
 mm->m_hdr.mh_len = sizeof(struct ip6_hdr);

 if ((mm->m_hdr.mh_next = m_copym((m), (0), (1000000000), 0x0001)) == 0L) {
  m_freem(mm);
  return 55;
 }
 i = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (((((mm))->m_hdr.mh_flags & 0x0001) != 0 && ((((mm))->m_hdr.mh_flags & 0x0008) == 0 || (((mm))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((mm))))) ? 0 : (((mm))->m_hdr.mh_flags & 0x0001 ? ((mm))->m_hdr.mh_data - ((mm))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((mm))->m_hdr.mh_flags & 0x0002 ? ((mm))->m_hdr.mh_data - ((mm))->M_dat.MH.MH_dat.MH_databuf : ((mm))->m_hdr.mh_data - ((mm))->M_dat.M_databuf));
 if (i > len)
  i = len;
 mm = m_pullup(mm, i);
 if (mm == 0L)
  return 55;

 mm->M_dat.MH.MH_pkthdr.len = len + sizeof(struct ip6_hdr);




 global_sin6[get_stack_id()].sin6_addr = ip6->ip6_src;

 im6 = ((struct mrt6msg *)((mm)->m_hdr.mh_data));
 im6->im6_msgtype = 3;
 im6->im6_mbz = 0;

 im6->im6_mif = mif - (*_GLOBAL_mif6table_29_A[get_stack_id()]);


 global_mrt6stat[get_stack_id()].mrt6s_upcalls++;

 if (socket_send(global_ip6_mrouter[get_stack_id()], mm, &global_sin6[get_stack_id()]) < 0) {





  ++global_mrt6stat[get_stack_id()].mrt6s_upq_sockfull;
  return 55;
 }
 return 0;
}
# 1685 "openbsd3/netinet6/ip6_mroute.c"
int
pim6_input(mp, offp, proto)
 struct mbuf **mp;
 int *offp, proto;
{
 struct pim *pim;
 struct ip6_hdr *ip6;
 int pimlen;
 struct mbuf *m = *mp;
 int minlen;
 int off = *offp;

 ++global_pim6stat[get_stack_id()].pim6s_rcv_total;

 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 pimlen = m->M_dat.MH.MH_pkthdr.len - *offp;




 if (pimlen < 8) {
  ++global_pim6stat[get_stack_id()].pim6s_rcv_tooshort;




  m_freem(m);
  return (257);
 }
# 1723 "openbsd3/netinet6/ip6_mroute.c"
 minlen = (pimlen >= (8 +40)) ? (8 +40) : 8;





 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (minlen)) (pim) = (struct pim *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (minlen), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (minlen)) panic("m_pulldown malfunction"); (pim) = (struct pim *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (pim) = (struct pim *)0L; (m) = 0L; } } } while (0);
 if (pim == 0L) {
  global_pim6stat[get_stack_id()].pim6s_rcv_tooshort++;
  return 257;
 }


 if (pim->pim_ver != 2) {
  ++global_pim6stat[get_stack_id()].pim6s_rcv_badversion;





  m_freem(m);
  return (257);
 }



 {
  int cksumlen;





  if (pim->pim_type == 1)
   cksumlen = 8;
  else
   cksumlen = pimlen;

  if (in6_cksum(m, 103, off, cksumlen)) {
   ++global_pim6stat[get_stack_id()].pim6s_rcv_badsum;





   m_freem(m);
   return (257);
  }
 }


 if (pim->pim_type == 1) {





  typedef  struct sockaddr_in6   _GLOBAL_182_T; static  _GLOBAL_182_T  global_dst[NUM_STACKS] = {  { sizeof ( global_dst[0] )   , 24  } ,  { sizeof ( global_dst[1] )   , 24  } ,  { sizeof ( global_dst[2] )   , 24  } ,  { sizeof ( global_dst[3] )   , 24  } ,  { sizeof ( global_dst[4] )   , 24  } ,  { sizeof ( global_dst[5] )   , 24  } ,  { sizeof ( global_dst[6] )   , 24  } ,  { sizeof ( global_dst[7] )   , 24  } ,  { sizeof ( global_dst[8] )   , 24  } ,  { sizeof ( global_dst[9] )   , 24  } ,  { sizeof ( global_dst[10] )   , 24  } ,  { sizeof ( global_dst[11] )   , 24  } ,  { sizeof ( global_dst[12] )   , 24  } ,  { sizeof ( global_dst[13] )   , 24  } ,  { sizeof ( global_dst[14] )   , 24  } ,  { sizeof ( global_dst[15] )   , 24  } ,  { sizeof ( global_dst[16] )   , 24  } ,  { sizeof ( global_dst[17] )   , 24  } ,  { sizeof ( global_dst[18] )   , 24  } ,  { sizeof ( global_dst[19] )   , 24  } ,  { sizeof ( global_dst[20] )   , 24  } ,  { sizeof ( global_dst[21] )   , 24  } ,  { sizeof ( global_dst[22] )   , 24  } ,  { sizeof ( global_dst[23] )   , 24  } ,  { sizeof ( global_dst[24] )   , 24  } ,  { sizeof ( global_dst[25] )   , 24  } ,  { sizeof ( global_dst[26] )   , 24  } ,  { sizeof ( global_dst[27] )   , 24  } ,  { sizeof ( global_dst[28] )   , 24  } ,  { sizeof ( global_dst[29] )   , 24  } ,  { sizeof ( global_dst[30] )   , 24  } ,  { sizeof ( global_dst[31] )   , 24  } ,  { sizeof ( global_dst[32] )   , 24  } ,  { sizeof ( global_dst[33] )   , 24  } ,  { sizeof ( global_dst[34] )   , 24  } ,  { sizeof ( global_dst[35] )   , 24  } ,  { sizeof ( global_dst[36] )   , 24  } ,  { sizeof ( global_dst[37] )   , 24  } ,  { sizeof ( global_dst[38] )   , 24  } ,  { sizeof ( global_dst[39] )   , 24  } ,  { sizeof ( global_dst[40] )   , 24  } ,  { sizeof ( global_dst[41] )   , 24  } ,  { sizeof ( global_dst[42] )   , 24  } ,  { sizeof ( global_dst[43] )   , 24  } ,  { sizeof ( global_dst[44] )   , 24  } ,  { sizeof ( global_dst[45] )   , 24  } ,  { sizeof ( global_dst[46] )   , 24  } ,  { sizeof ( global_dst[47] )   , 24  } ,  { sizeof ( global_dst[48] )   , 24  } ,  { sizeof ( global_dst[49] )   , 24  } ,  };         

  struct mbuf *mcp;
  struct ip6_hdr *eip6;
  u_int32_t *reghdr;
  int rc;

  ++global_pim6stat[get_stack_id()].pim6s_rcv_registers;

  if ((global_reg_mif_num[get_stack_id()] >= global_nummifs[get_stack_id()]) || (global_reg_mif_num[get_stack_id()] == (mifi_t) -1)) {






   m_freem(m);
   return (257);
  }

  reghdr = (u_int32_t *)(pim + 1);

  if ((__extension__({ u_int32_t __swap32_x = (*reghdr); __builtin_constant_p(*reghdr) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) & 0x40000000))
   goto pim6_input_to_daemon;




  if (pimlen < (8 +40)) {
   ++global_pim6stat[get_stack_id()].pim6s_rcv_tooshort;
   ++global_pim6stat[get_stack_id()].pim6s_rcv_badregisters;






   m_freem(m);
   return (257);
  }

  eip6 = (struct ip6_hdr *) (reghdr + 1);
# 1833 "openbsd3/netinet6/ip6_mroute.c"
  if ((eip6->ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
   ++global_pim6stat[get_stack_id()].pim6s_rcv_badregisters;





   m_freem(m);
   return (59);
  }


  if (!((&eip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff)) {
   ++global_pim6stat[get_stack_id()].pim6s_rcv_badregisters;







   m_freem(m);
   return (257);
  }




  mcp = m_copym((m), (0), (off + (8 +40)), 0x0001);
  if (mcp == 0L) {





   m_freem(m);
   return (257);
  }




  m_adj(m, off + 8);
# 1887 "openbsd3/netinet6/ip6_mroute.c"
  rc = looutput((*_GLOBAL_mif6table_29_A[get_stack_id()])[global_reg_mif_num[get_stack_id()]].m6_ifp, m,
         (struct sockaddr *) &global_dst[get_stack_id()],
         (struct rtentry *) 0L);


  m = mcp;
 }







  pim6_input_to_daemon:
 rip6_input(&m, offp, proto);
 return (257);
}

